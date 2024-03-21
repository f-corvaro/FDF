/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:55:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/19 18:50:06 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Adjusts the rotation of the display based on the provided keycode.
 * 
 * If the keycode is KC_1, the rotation around the x-axis is increased.
 * If the keycode is KC_2, the rotation around the x-axis is decreased.
 * If the keycode is KC_3, the rotation around the y-axis is increased.
 * If the keycode is KC_4, the rotation around the y-axis is decreased.
 * If the keycode is KC_5, the rotation around the z-axis is increased.
 * If the keycode is KC_6, the rotation around the z-axis is decreased.
 * 
 * @param keycode The keycode that determines how the rotation is adjusted.
 * @param vars The display variables that include the rotation to be adjusted.
 */
void	adjust_rot(int keycode, t_display *vars)
{
	if (keycode == KC_1)
		vars->rot_x += ROT;
	if (keycode == KC_2)
		vars->rot_x -= ROT;
	if (keycode == KC_3)
		vars->rot_y += ROT;
	if (keycode == KC_4)
		vars->rot_y -= ROT;
	if (keycode == KC_5)
		vars->rot_z += ROT;
	if (keycode == KC_6)
		vars->rot_z -= ROT;
}
