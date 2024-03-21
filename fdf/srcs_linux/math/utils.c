/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:42:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 13:37:33 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Returns the maximum of two integers.
 * 
 * This function compares two integers and returns the larger one.
 * 
 * @param v1 The first integer to compare.
 * @param v2 The second integer to compare.
 * @return The maximum of v1 and v2.
 */
int	get_max_v(int v1, int v2)
{
	if (v1 > v2)
		return (v1);
	return (v2);
}

/**
 * @brief Returns the absolute value of an integer.
 * 
 * This function calculates the absolute value of an integer. If the integer 
 * is negative, it returns its negation; 
 * otherwise, it returns the integer itself.
 * 
 * @param value The integer to calculate the absolute value of.
 * @return The absolute value of value.
 */
int	get_abs_v(int value)
{
	if (value < 0)
		return (-(value));
	return (value);
}
