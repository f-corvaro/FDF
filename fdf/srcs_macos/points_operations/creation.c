/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:33:15 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:22:02 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Creates a new point with the given x and y coordinates and 
 * the corresponding z coordinate and color from the map.
 * 
 * This function creates a new point with the given x and y coordinates. 
 * It sets the z coordinate of the point to the corresponding 
 * value from the map's z_ij array. If the map has color data, it sets the 
 * color of the point to the corresponding value from the 
 * map's colors array. Otherwise, it calculates the color based on the z 
 * coordinate.
 * 
 * @param x The x coordinate of the new point.
 * @param y The y coordinate of the new point.
 * @param vars A pointer to a t_display structure that contains the display 
 * variables and the map data.
 * @return The new point.
 */
t_point	create_new_point(int x, int y, t_display *vars)
{
	t_point	point;

	point.x = x;
	point.y = y;
	point.z = vars->map->z_ij[y][x];
	if (vars->map->iscolor)
		point.color = vars->map->colors[y][x];
	else
		point.color = calc_z_color(vars, point.z);
	return (point);
}
