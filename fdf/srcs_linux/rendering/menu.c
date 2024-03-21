/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:08:47 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 16:42:19 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Draws the control information on the window.
 * 
 * This function uses the MiniLibX library's mlx_string_put function to draw 
 * the control information on the window. The control information includes 
 * the keys to press to perform various actions, such as resetting the view, 
 * moving the view, zooming in and out, changing the 
 * flattening factor, rotating the view, changing the perspective, and closing 
 * the application.
 * 
 * @param vars A pointer to a t_display structure that contains the display 
 * variables, including the MiniLibX connection and the window.
 */
void	draw_control_info(t_display *vars)
{
	void	*mlx;
	void	*win;
	int		vp;

	mlx = vars->mlx;
	win = vars->window;
	vp = 20;
	mlx_string_put(mlx, win, 25, vp += 30, WHITE, "Controls:");
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, RESET);
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, MOVE);
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, ZOOMIO);
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, FLAT);
	mlx_string_put(mlx, win, 25, vp += 30, WHITE, "Rotate View:");
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, ROTX);
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, ROTY);
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, ROTZ);
	mlx_string_put(mlx, win, 25, vp += 30, WHITE, "Change Perspective:");
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, PERSP);
	mlx_string_put(mlx, win, 25, vp += 30, WHITE, "Exit:");
	mlx_string_put(mlx, win, 40, vp += 20, B_YELLOW, CLOSE);
}
