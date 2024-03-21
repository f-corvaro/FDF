/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:12:24 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:04:50 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Allocates memory for the map's height, width, and color data.
 * 
 * This function allocates memory for the map's height and width data (z_ij) 
 * and color data (colors). 
 * If memory allocation fails at any point, it frees any previously allocated 
 * memory and exits the program with an error message.
 * 
 * @param map A pointer to a t_map structure that contains the map data.
 */
void	allocate_map_mem(t_map *map)
{
	int	i;

	map->z_ij = (int **)malloc(sizeof(int *) * map->height);
	map->colors = (int **)malloc(sizeof(int *) * map->height);
	if (!map->z_ij || !map->colors)
	{
		free_map_mem(map);
		exit_with_err("Error:", MAP_ALL_ERROR);
	}
	i = -1;
	while (++i < map->height)
	{
		map->z_ij[i] = (int *)malloc(sizeof(int) * map->width);
		map->colors[i] = (int *)malloc(sizeof(int) * map->width);
		if (!map->z_ij[i] || !map->colors[i])
		{
			free_map_mem(map);
			exit_with_err("Error:", MAP_ALL_ERROR);
		}
	}
}

/**
 * @brief Frees the memory allocated for the map's height, width, and 
 * color data.
 * 
 * This function frees the memory allocated for the map's height and width data 
 * (z_ij) and color data (colors). 
 * It also frees the memory allocated for the t_map structure itself.
 * 
 * @param map A pointer to a t_map structure that contains the map data.
 */
void	free_map_mem(t_map *map)
{
	int	i;

	if (!map)
		return ;
	if (map->z_ij)
	{
		i = -1;
		while (++i < map->height)
		{
			if (map->z_ij[i])
				free(map->z_ij[i]);
		}
		free(map->z_ij);
	}
	if (map->colors)
	{
		i = -1;
		while (++i < map->height)
		{
			if (map->colors[i])
				free(map->colors[i]);
		}
		free(map->colors);
	}
	free(map);
}
