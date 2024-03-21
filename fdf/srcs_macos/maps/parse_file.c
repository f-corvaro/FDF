/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:15:49 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:03:28 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Parses a map file into a t_map structure.
 * 
 * This function opens the file specified by `filename`, reads its contents, 
 * and fills the `map` structure with the data from the file. The file is read 
 * line by line, and each line is split into an array of strings
 * that are then converted to integers and stored in the `map` structure.
 * 
 * If the function fails to open the file, it frees the `map` structure and 
 * exits the program with an error message.
 * 
 * @param map A pointer to the t_map structure to fill.
 * @param filename The name of the file to read from.
 */
void	parse_map_file(t_map *map, char *fn)
{
	int		fd;

	fd = open(fn, O_RDONLY);
	if (fd < 0)
	{
		free_map_mem(map);
		exit_with_perr(fn);
	}
	read_fill_map(map, fd);
	close(fd);
}
