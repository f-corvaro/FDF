/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:00:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 15:20:30 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int ac, char **av)
{
	t_map	*map;
	char	*file;

	map = NULL;
	if (ac != 2)
		exit_with_err("Error:", ARGS_ERR);
	ft_printf("Initiating process to read map data...\n");
	file = av[1];
	map = init_map(file);
	allocate_map_mem(map);
	parse_map_file(map, file);
	z_values_calc(map);
	start_mlx(map);
	return (0);
}
