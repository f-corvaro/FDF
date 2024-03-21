/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_management.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:49:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 16:08:47 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Closes the window, frees the associated resources, and 
 * prints an exit message.
 * 
 * This function frees the resources associated with the display variables, 
 * prints "FdF closed correctly" to the console, and then exits the program 
 * with a success status code. It is typically used as a callback function 
 * for the window close event.
 * 
 * @param vars A pointer to a t_display structure that contains the display 
 * variables.
 * @return Always returns 0. This is a requirement for MiniLibX event handler 
 * functions.
 */
int	close_and_free(t_display *vars)
{
	free_display_res(vars);
	ft_printf("FdF closed correctly\n");
	exit (EXIT_SUCCESS);
	return (0);
}
