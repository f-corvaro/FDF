/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:13:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 16:35:59 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Initializes a map from a file.
 * 
 * This function allocates memory for a new `t_map` structure, opens the file 
 * specified by `fn` (filename) for reading, and initializes the `width` and 
 * `height` fields of the `t_map` structure based on the contents of the file.
 * 
 * The `width` field is initialized by calling `nb_in_a_line` on the first line 
 * of the file, and the `height` field is incremented for each line in the file.
 * 
 * If the function fails to open the file, it calls `exit_with_perr` with `fn` 
 * as the argument.
 * 
 * @param fn The name of the file to read from.
 * @return A pointer to the initialized `t_map` structure, or `NULL` if memory 
 * allocation failed.
 */
t_map	*init_map(char *fn)
{
	t_map	*map;
	char	*cline;
	int		fd;

	map = (t_map *)ft_calloc(1, sizeof(t_map));
	if (!map)
		return (NULL);
	fd = open(fn, O_RDONLY);
	if (fd < 0)
		exit_with_perr(fn);
	cline = get_next_line(fd);
	map->width = nb_in_a_line(map, cline, fn);
	while (cline)
	{
		map->height++;
		free(cline);
		cline = get_next_line(fd);
	}
	free(cline);
	close(fd);
	return (map);
}
