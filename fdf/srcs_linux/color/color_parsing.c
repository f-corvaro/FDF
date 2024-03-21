/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:14:47 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/19 17:47:13 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Converts a string to lowercase.
 *
 * This function iterates over a string, converting each character to 
 * lowercase.
 * It uses the ft_tolower function to perform the conversion.
 *
 * @param str The string to be converted to lowercase. If str is NULL, 
 * the function returns immediately.
 */
static void	ft_striter_tolower(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
}

/**
 * @brief Parses a hexadecimal color string and updates the map data.
 *
 * This function parses a string representing a color in hexadecimal format.
 * If the string starts with 'x', the function converts the rest of the string
 * to lowercase, sets the 'iscolor' flag in the map data to 1, and returns the 
 * color as an integer.
 * If the string does not start with 'x', the function returns the default 
 * color (WHITE).
 *
 * @param map A pointer to the map data structure.
 * @param cs A pointer to the color string to be parsed. This should be a string 
 * representing a color in hexadecimal format.
 * @return The parsed color as an integer. If the color string does not start 
 * with 'x', the function returns the default color (WHITE).
 */
int	parse_hex_color(t_map *map, char *cs)
{
	while (*cs && (ft_isdigit(*cs) || *cs == '-' || *cs == '+' || *cs == ','))
		cs++;
	if (*cs && *cs == 'x')
	{
		map->iscolor = 1;
		ft_striter_tolower(cs + 1);
		return (ft_atoi_base(cs + 1, HEXALOW));
	}
	else
		return (WHITE);
	return (0);
}
