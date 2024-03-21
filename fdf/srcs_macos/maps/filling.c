/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:15:13 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:05:55 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Reads and fills the map from the file descriptor.
 * 
 * This function reads lines from the file descriptor `fd`, splits each line 
 * into an array of strings, and then fills the `z_ij` and `colors` fields of 
 * the `map` structure. Each string in the split array
 * is converted to an integer with `ft_atoi` for `z_ij` and to a color with 
 * `parse_hex_color` for `colors`.
 * 
 * If `ft_split` fails to split a line into an array of strings, the function 
 * frees the `map` and exits
 * the program with an error message.
 * 
 * @param map A pointer to the map structure to fill.
 * @param fd The file descriptor to read from.
 */
void	read_fill_map(t_map *map, int fd)
{
	char	**split;
	char	*line;
	int		i;
	int		j;

	i = -1;
	while (++i < map->height)
	{
		line = get_next_line(fd);
		split = ft_split(line, ' ');
		if (!split)
		{
			free_map_mem(map);
			exit_with_err("Error:", SPLIT_ERR);
		}
		j = -1;
		while (++j < map->width)
		{
			map->z_ij[i][j] = ft_atoi(split[j]);
			map->colors[i][j] = parse_hex_color(map, split[j]);
		}
		free_matrix(split);
		free(line);
	}
}
