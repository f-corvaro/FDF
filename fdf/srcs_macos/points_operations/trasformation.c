/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trasformation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:33:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:27:09 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Applies a series of transformations to a point.
 * 
 * This function scales the x, y, and z coordinates of the point by the zoom 
 * factor, 
 * applies a series of rotations to the point, converts the point to 
 * isometric coordinates, 
 * and then shifts the point by the shift_x and shift_y values. 
 * The z coordinate is scaled by a smaller factor than the x and y coordinates 
 * to reduce its impact on the final position of the point.
 * 
 * @param vars A pointer to a t_display structure that contains the display 
 * variables and the transformation parameters.
 * @param point The point to which the transformations are applied.
 * @return The transformed point.
 */
t_point	apply_changes(t_display *vars, t_point point)
{
	point.x *= vars->zoom;
	point.y *= vars->zoom;
	point.z *= (vars->zoom / SF) * vars->ff;
	rot_x(vars, &point.y, &point.z);
	rot_y(vars, &point.x, &point.z);
	rot_z(vars, &point.x, &point.y);
	isometric(vars, &point.x, &point.y, point.z);
	point.x += vars->shift_x;
	point.y += vars->shift_y;
	return (point);
}
