/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:10:25 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 15:43:08 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Draws the map with transformations applied to each point.
 * 
 * This function first clears the image buffer. If the zoom factor is not zero, 
 * it iterates over each point in the map. 
 * For each point, it applies a series of transformations and then draws a line 
 * to the next point in the same row and the same column using the Bresenham's 
 * line algorithm. 
 * After all points have been processed, it puts the image to the window and 
 * draws the menu on top of it.
 * 
 * @param vars A pointer to a t_display structure that contains the display 
 * variables, the transformation parameters, and the map data.
 */
void	draw_map(t_display *vars)
{
	int	x;
	int	y;

	ft_bzero(vars->img->addr, WIN_H * WIN_W * (vars->img->bpp / 8));
	if (vars->zoom)
	{
		y = -1;
		while (++y < vars->map->height)
		{
			x = -1;
			while (++x < vars->map->width)
			{
				if (x < vars->map->width - 1)
					bresenham(vars,
						apply_changes(vars, create_new_point(x, y, vars)),
						apply_changes(vars, create_new_point(x + 1, y, vars)));
				if (y < vars->map->height - 1)
					bresenham(vars,
						apply_changes(vars, create_new_point(x, y, vars)),
						apply_changes(vars, create_new_point(x, y + 1, vars)));
			}
		}
	}
	mlx_put_image_to_window(vars->mlx, vars->window, vars->img->img, 0, 0);
	draw_control_info(vars);
}
