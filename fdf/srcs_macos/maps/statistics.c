/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   statistics.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:11:57 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:05:55 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Calculates the minimum and maximum z values in a map.
 * 
 * This function iterates over the `z_ij` field of the `map` structure, 
 * updating the `min_z` and `max_z` fields
 * whenever it finds a new minimum or maximum z value.
 * 
 * @param map A pointer to the t_map structure to calculate the z values for.
 */
void	z_values_calc(t_map *map)
{
	int	x;
	int	y;

	y = -1;
	while (++y < map->height)
	{
		x = -1;
		while (++x < map->width)
		{
			if (map->z_ij[y][x] < map->min_z)
				map->min_z = map->z_ij[y][x];
			else if (map->z_ij[y][x] > map->max_z)
				map->max_z = map->z_ij[y][x];
		}
	}
}

/**
 * @brief Counts the number of numbers in a line of a map file.
 * 
 * This function splits the `cline` string into an array of strings, c
 * ounts the number of strings in the array,
 * and then frees the array. If `cline` is NULL, the function frees 
 * the `map` structure and exits the program
 * with an error message. If splitting `cline` fails, the function 
 * also frees the `map` structure and exits
 * the program with an error message.
 * 
 * @param map A pointer to the t_map structure associated with the line.
 * @param cline The line to count the numbers in.
 * @param fn The name of the file that the line is from.
 * @return The number of numbers in the line.
 */
int	nb_in_a_line(t_map *map, char *cline, char *fn)
{
	char	**split;
	int		cnt;

	if (!cline)
	{
		free_map_mem(map);
		exit_with_err(fn, EMPTY_MAP_ERROR);
	}
	split = ft_split(cline, ' ');
	if (!split)
	{
		free_map_mem(map);
		exit_with_err("Error:", SPLIT_ERR);
	}
	cnt = 0;
	while (split[cnt])
		cnt++;
	free_matrix(split);
	return (cnt);
}
