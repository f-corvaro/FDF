/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:07:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 15:41:12 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Puts a pixel to the image.
 * 
 * This function puts a pixel at the specified (x, y) coordinates in the image.
 * The color of the pixel is specified by the 'color' parameter. The function
 * takes into account the endianness of the system to correctly store the color
 * value.
 *
 * @param vars Pointer to the t_display structure containing image information.
 * @param x The x-coordinate of the pixel.
 * @param y The y-coordinate of the pixel.
 * @param color The color of the pixel.
 */
void	put_pixel_to_img(t_display *vars, int x, int y, int color)
{
	int	pixel;

	if (x >= WIN_W || y >= WIN_H || x < 0 || y < 0)
		return ;
	pixel = (y * vars->img->ln_size) + (x * (vars->img->bpp / 8));
	if (vars->img->endianness == 1)
	{
		vars->img->addr[pixel + 0] = (color >> AS);
		vars->img->addr[pixel + 1] = (color >> RS) & BM;
		vars->img->addr[pixel + 2] = (color >> GS) & BM;
		vars->img->addr[pixel + 3] = (color) & BM;
	}
	else if (vars->img->endianness == 0)
	{
		vars->img->addr[pixel + 0] = (color) & BM;
		vars->img->addr[pixel + 1] = (color >> GS) & BM;
		vars->img->addr[pixel + 2] = (color >> RS) & BM;
		vars->img->addr[pixel + 3] = (color >> AS);
	}
}
