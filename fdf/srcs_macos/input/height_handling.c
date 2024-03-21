/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:54:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/19 18:59:39 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Adjusts the flattening factor based on the provided keycode.
 * 
 * If the keycode is KC_8, the flattening factor is increased by 0.01, 
 * up to a maximum of 10.
 * If the keycode is KC_7, the flattening factor is decreased by 0.01, d
 * own to a minimum of 0.
 * 
 * @param keycode The keycode that determines how the flattening factor is 
 * adjusted.
 * @param vars The display variables that include the flattening factor to be 
 * adjusted.
 */
void	adjust_ff(int keycode, t_display *vars)
{
	if (keycode == KC_8)
	{
		if (vars->ff < 10)
			vars->ff += FF;
	}
	if (keycode == KC_7)
	{
		if (vars->ff > 0)
			vars->ff -= FF;
	}
}
