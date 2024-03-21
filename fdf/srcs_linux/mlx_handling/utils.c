/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:44:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 16:21:40 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Initializes the MiniLibX library and creates a new window.
 * 
 * This function initializes the MiniLibX library, creates a new image, gets 
 * the address of the image data, 
 * and creates a new window.
 * 
 * @param vars A pointer to a t_display structure that will be used to store 
 * the MiniLibX variables.
 */
static void	init_mlx(t_display *vars)
{
	vars->mlx = mlx_init();
	vars->img->img = mlx_new_image(vars->mlx, WIN_W, WIN_H);
	vars->img->addr = mlx_get_data_addr(vars->img->img,
			&vars->img->bpp, &vars->img->ln_size, &vars->img->endianness);
	vars->window = mlx_new_window(vars->mlx, WIN_W, WIN_H, "fcorvaro's FdF");
}

/**
 * @brief Starts the MiniLibX library and enters the main event loop.
 * 
 * This function allocates memory for a t_display structure, initializes 
 * the display variables, initializes the MiniLibX library, 
 * sets up the key press and window close event handlers, draws the initial 
 * frame, and enters the main event loop. 
 * The memory for the t_display structure is freed before the function returns.
 * 
 * @param map A pointer to a t_map structure that contains the map to display.
 * @return EXIT_SUCCESS on successful execution, an error code otherwise.
 */
int	start_mlx(t_map *map)
{
	t_display	*vars;

	ft_printf("Initializing MiniLibX graphics library...\n");
	vars = (t_display *)ft_calloc(1, sizeof(t_display));
	if (!vars)
		exit_with_err("Error:", DISPLAY_ALL_ERR);
	if (init_display_vars(vars, map))
	{
		free_display_res(vars);
		exit_with_err("Error:", DISPLAY_ALL_ERR);
	}
	init_mlx(vars);
	mlx_hook(vars->window, KPE, (1L << 0), hdl_key_in, vars);
	mlx_hook(vars->window, CE, (1L << 17), close_and_free, vars);
	draw_map(vars);
	mlx_loop(vars->mlx);
	free_display_res(vars);
	return (EXIT_SUCCESS);
}
