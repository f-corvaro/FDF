/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:23:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/19 16:21:48 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

/**
 * @struct s_point
 * @brief A structure representing a point in 3D space with color.
 *
 * @var s_point::x
 * Member 'x' represents the x-coordinate of the point.
 *
 * @var s_point::y
 * Member 'y' represents the y-coordinate of the point.
 *
 * @var s_point::z
 * Member 'z' represents the z-coordinate of the point.
 *
 * @var s_point::color
 * Member 'color' is an integer representing the color of the point.
 */
typedef struct s_point
{
	int	x;
	int	y;
	int	z;
	int	color;
}	t_point;

/**
 * @struct s_map
 * @brief A structure representing a 3D map.
 *
 * @var s_map::z_ij
 * Member 'z_ij' is a 2D array representing the z-coordinates of the points on 
 * the map.
 *
 * @var s_map::min_z
 * Member 'min_z' is the minimum z-coordinate in the map.
 *
 * @var s_map::max_z
 * Member 'max_z' is the maximum z-coordinate in the map.
 *
 * @var s_map::width
 * Member 'width' represents the width of the map.
 *
 * @var s_map::height
 * Member 'height' represents the height of the map.
 *
 * @var s_map::colors
 * Member 'colors' is a 2D array representing the colors of the points on 
 * the map.
 *
 * @var s_map::iscolor
 * Member 'iscolor' is a flag indicating whether color information is present 
 * in the map.
 */
typedef struct s_map
{
	int	**z_ij;
	int	min_z;
	int	max_z;
	int	width;
	int	height;
	int	**colors;
	int	iscolor;
}	t_map;

/**
 * @struct s_imagedata
 * @brief A structure representing image data.
 *
 * @var s_imagedata::addr
 * Member 'addr', address, is a pointer to the image data.
 *
 * @var s_imagedata::img
 * Member 'img' is a pointer to the image object.
 *
 * @var s_imagedata::bpp
 * Member 'bpp' stands for bits per pixel, indicating the color depth of 
 * the image.
 *
 * @var s_imagedata::ln_size
 * Member 'ln_size' represents the size of a line in the image data.
 *
 * @var s_imagedata::endianness
 * Member 'endianness' indicates the byte order of the pixel color data. 
 * It can be either 0 (big endian, where the most significant byte is stored 
 * first) or 1 (little endian, where the least significant byte is stored 
 * first).
 */
typedef struct s_imagedata
{
	char	*addr;
	void	*img;
	int		bpp;
	int		ln_size;
	int		endianness;
}	t_imagedata;

/**
 * @struct s_display
 * @brief A structure representing display parameters.
 *
 * @var s_display::mlx
 * Member 'mlx' is a pointer to the mlx instance.
 *
 * @var s_display::window
 * Member 'window' is a pointer to the window object.
 *
 * @var s_display::map
 * Member 'map' is a pointer to the map data.
 *
 * @var s_display::img
 * Member 'img' is a pointer to the image data.
 *
 * @var s_display::shift_x
 * Member 'shift_x' represents the horizontal shift of the display.
 *
 * @var s_display::shift_y
 * Member 'shift_y' represents the vertical shift of the display.
 *
 * @var s_display::rot_x
 * Member 'rot_x' represents the rotation around the x-axis.
 *
 * @var s_display::rot_y
 * Member 'rot_y' represents the rotation around the y-axis.
 *
 * @var s_display::rot_z
 * Member 'rot_z' represents the rotation around the z-axis.
 *
 * @var s_display::zoom
 * Member 'zoom' represents the zoom level of the display.
 *
 * @var s_display::isometric
 * Member 'isometric' is a flag indicating whether the display is in 
 * isometric view.
 *
 * @var s_display::ff
 * Member 'ff' stands for flattening factor, controlling the flattening 
 * of the display.
 */
typedef struct s_display
{
	void		*mlx;
	void		*window;
	t_map		*map;
	t_imagedata	*img;
	int			shift_x;
	int			shift_y;
	float		rot_x;
	float		rot_y;
	float		rot_z;
	float		zoom;
	int			isometric;
	float		ff;
}	t_display;

#endif