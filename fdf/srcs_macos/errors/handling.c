/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:11:01 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 15:12:08 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Prints a custom error message and exits the program.
 * @param error_type The type of error that occurred.
 * @param error_msg The specific error message to be printed.
 */
void	exit_with_err(const char *error_type, const char *error_msg)
{
	ft_printf("%s %s\n", error_type, error_msg);
	exit(EXIT_FAILURE);
}

/**
 * @brief Prints a system error message and exits the program.
 * @param error_msg The specific error message to be printed.
 */
void	exit_with_perr(const char *error_msg)
{
	perror(error_msg);
	exit(EXIT_FAILURE);
}
