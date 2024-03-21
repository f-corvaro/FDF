/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:50:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:30:21 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Handles key inputs and performs corresponding actions.
 * 
 * This function takes a keycode and a pointer to a display structure. Depending 
 * on the keycode, it performs different actions:
 * - KC_ESC: Closes the window.
 * - KC_R: Resets the display variables.
 * - KC_TAB: Toggles the isometric view and parallel view.
 * - KC_I or KC_O: Handles zooming in or out.
 * - KC_S, KC_W, KC_D, or KC_A: Handles moving the display.
 * - KC_1 to KC_6: Handles rotating the display.
 * - KC_7 or KC_8: Adjusts the flattening factor.
 * After performing the corresponding action, it redraws the display.
 * 
 * @param keycode The keycode that determines which action to perform.
 * @param vars The display variables that are used or modified by the actions.
 * @return Always returns 0.
 */
int	hdl_key_in(int keycode, t_display *vars)
{
	if (keycode == KC_ESC)
		close_and_free(vars);
	if (keycode == KC_R)
		reset_display_vars(vars);
	if (keycode == KC_TAB)
	{
		if (vars->isometric)
			vars->isometric = 0;
		else
			vars->isometric = 1;
	}
	if (keycode == KC_I || keycode == KC_O)
		adjust_zoom(keycode, vars);
	if (keycode == KC_S || keycode == KC_W
		|| keycode == KC_D || keycode == KC_A)
		adjust_trans(keycode, vars);
	if (keycode == KC_1 || keycode == KC_2 || keycode == KC_3
		|| keycode == KC_4 || keycode == KC_5 || keycode == KC_6)
		adjust_rot(keycode, vars);
	if (keycode == KC_7 || keycode == KC_8)
		adjust_ff(keycode, vars);
	draw_map(vars);
	return (0);
}
