/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_management.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:29:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 14:11:41 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Frees a dynamically allocated 2D array (matrix) of characters.
 * 
 * This function iterates over each row of the matrix and frees it. 
 * After all rows have been freed, it frees the memory allocated for the matrix 
 * itself.
 * 
 * @param matrix A pointer to the first element of the 2D array.
 */
void	free_matrix(char **matrix)
{
	int	i;

	i = -1;
	while (matrix[++i])
		free(matrix[i]);
	free(matrix);
}

/**
 * @brief Frees all resources associated with the display variables.
 * 
 * This function destroys the window and the image associated with 
 * the display variables, 
 * frees the memory allocated for the map's height, width, and 
 * color data, 
 * and frees the memory allocated for the display variables.
 * 
 * @param vars A pointer to a t_display structure that contains the 
 * display variables.
 */
void	free_display_res(t_display *vars)
{
	mlx_destroy_window(vars->mlx, vars->window);
	mlx_destroy_image(vars->mlx, vars->img->img);
	free_map_mem(vars->map);
	if (vars->img)
		free(vars->img);
	free(vars);
}
