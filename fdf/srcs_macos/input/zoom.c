/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:52:22 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/19 18:53:02 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Adjusts the zoom level of the display based on the provided keycode.
 * 
 * If the keycode is KC_O, the zoom level is decreased, as long as it's greater 
 * than 0.
 * If the keycode is KC_I, the zoom level is increased, as long as it's less
 * than INT_MAX.
 * 
 * @param keycode The keycode that determines how the zoom level is adjusted.
 * @param vars The display variables that include the zoom level to be adjusted.
 */
void	adjust_zoom(int keycode, t_display *vars)
{
	if (keycode == KC_O)
	{
		if (vars->zoom > 0)
			vars->zoom -= ZOOM;
	}
	if (keycode == KC_I)
	{
		if (vars->zoom < INT_MAX)
			vars->zoom += ZOOM;
	}
}
