/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:06:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 13:39:53 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Rotates a point around the x-axis.
 * 
 * This function rotates a point around the x-axis by an angle specified in 
 * the vars structure. The rotation is done in-place, 
 * meaning the original y and z coordinates are modified.
 * 
 * @param vars A pointer to a t_display structure that contains the 
 * rotation angle.
 * @param y A pointer to the y coordinate of the point.
 * @param z A pointer to the z coordinate of the point.
 */
void	rot_x(t_display *vars, int *y, int *z)
{
	float	prev_y;

	prev_y = *y;
	*y = (prev_y * cos(vars->rot_x)) + (*z * sin(vars->rot_x));
	*z = (-prev_y * sin(vars->rot_x)) + (*z * cos(vars->rot_x));
}

/**
 * @brief Rotates a point around the y-axis.
 * 
 * This function rotates a point around the y-axis by an angle
 *  specified in the vars structure. The rotation is done in-place, 
 * meaning the original x and z coordinates are modified.
 * 
 * @param vars A pointer to a t_display structure that contains the 
 * rotation angle.
 * @param x A pointer to the x coordinate of the point.
 * @param z A pointer to the z coordinate of the point.
 */
void	rot_y(t_display *vars, int *x, int *z)
{
	float	prev_x;

	prev_x = *x;
	*x = (*x * cos(vars->rot_y)) + (*z * sin(vars->rot_y));
	*z = (-prev_x * sin(vars->rot_y)) + (*z * cos(vars->rot_y));
}

/**
 * @brief Rotates a point around the z-axis.
 * 
 * This function rotates a point around the z-axis by an angle 
 * specified in the vars structure. The rotation is done in-place, 
 * meaning the original x and y coordinates are modified.
 * 
 * @param vars A pointer to a t_display structure that contains the rotation 
 * angle.
 * @param x A pointer to the x coordinate of the point.
 * @param y A pointer to the y coordinate of the point.
 */
void	rot_z(t_display *vars, int *x, int *y)
{
	float	prev_x;

	prev_x = *x;
	*x = (*x * cos(vars->rot_z)) - (*y * sin(vars->rot_z));
	*y = (prev_x * sin(vars->rot_z)) + (*y * cos(vars->rot_z));
}
