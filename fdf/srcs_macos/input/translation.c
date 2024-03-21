/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:52:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/19 18:52:20 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Adjusts the translation of the display based on the provided keycode.
 * 
 * If the keycode is KC_W, the y-axis shift is decreased.
 * If the keycode is KC_A, the x-axis shift is decreased.
 * If the keycode is KC_S, the y-axis shift is increased.
 * If the keycode is KC_D, the x-axis shift is increased.
 * 
 * @param keycode The keycode that determines how the translation is adjusted.
 * @param vars The display variables that include the shift to be adjusted.
 */
void	adjust_trans(int keycode, t_display *vars)
{
	if (keycode == KC_W)
		vars->shift_y -= TRANS;
	if (keycode == KC_A)
		vars->shift_x -= TRANS;
	if (keycode == KC_S)
		vars->shift_y += TRANS;
	if (keycode == KC_D)
		vars->shift_x += TRANS;
}
