/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:46:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 13:34:59 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Initializes the display variables for a map.
 * 
 * This function allocates memory for the `img` field of the `vars` structure 
 * and sets the `map` field to `map`.
 * If memory allocation fails, the function returns 1. Otherwise, it resets 
 * the display variables and returns 0.
 * 
 * @param vars A pointer to the t_display structure to initialize.
 * @param map A pointer to the t_map structure to display.
 * @return 0 if initialization was successful, 1 otherwise.
 */
int	init_display_vars(t_display *vars, t_map *map)
{
	vars->map = map;
	vars->img = (t_imagedata *)ft_calloc(1, sizeof(t_imagedata));
	if (!vars->img)
		return (1);
	reset_display_vars(vars);
	return (0);
}

/**
 * @brief Resets the display variables for a map.
 * 
 * This function sets the `zoom`, `shift_x`, `shift_y`, `isometric`, 
 * `ff`, `rot_x`, `rot_y`, and `rot_z` fields
 * of the `vars` structure to their default values.
 * 
 * @param vars A pointer to the t_display structure to reset.
 */
void	reset_display_vars(t_display *vars)
{
	vars->zoom = get_max_v((WIN_W / vars->map->width / 2),
			(WIN_H / vars->map->height / 2));
	vars->shift_x = WIN_W / 2;
	vars->shift_y = (WIN_H - vars->map->height * vars->zoom) / 2;
	vars->isometric = 1;
	vars->ff = 1;
	vars->rot_x = 0;
	vars->rot_y = 0;
	vars->rot_z = 0;
}
