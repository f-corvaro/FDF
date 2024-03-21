/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:37:55 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 15:43:08 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

/* ---------------------------------------------> color/color_calculation.c */

double	calc_percentage(int start, int end, int cval);
int		calc_light(int start, int end, double percentage);
int		calc_color(t_point current, t_point start, t_point end, t_point delta);
int		calc_z_color(t_display *vars, int cz);

/* -----------------> color/color_parsing.c */

int		parse_hex_color(t_map *map, char *cs);

/* --------------------------------------------> errors/handling.c */

void	exit_with_err(const char *error_type, const char *error_msg);
void	exit_with_perr(const char *error_msg);

/* -----------------> input/height_handling.c */

void	adjust_ff(int keycode, t_display *vars);

/* ------------------------------> input/key.c */

int		hdl_key_in(int keycode, t_display *vars);

/* -------------------------> input/rotation.c */

void	adjust_rot(int keycode, t_display *vars);

/* ------------------------> input/translation.c */

void	adjust_trans(int keycode, t_display *vars);

/* ------------------------------> input/zoom.c */

void	adjust_zoom(int keycode, t_display *vars);

/* ---------------------> map/filling.c */

void	read_fill_map(t_map *map, int fd);

/* ----------> map/init.c */

t_map	*init_map(char *fn);

/* ---------------------> map/parse_file.c */

void	parse_map_file(t_map *map, char *fn);

/* --------------------------------> map/statistics.c */

void	z_values_calc(t_map *map);
int		nb_in_a_line(t_map *map, char *cline, char *fn);

/* --------------------------------> math/atoi_base.c */

int		ft_atoi_base(const char *str, const char *base);

/* -----------------------------> math/bresenham_algorithm.c */

void	init_bresenham_param(t_point *start, t_point *end,
			t_point *delta, t_point *sign);
void	bresenham(t_display *vars, t_point start, t_point end);

/* -----------------------> math/isometric_conversion.c */

void	isometric(t_display *vars, int *x, int *y, int z);

/* ------------------------> math/rotation.c */

void	rot_x(t_display *vars, int *y, int *z);
void	rot_y(t_display *vars, int *x, int *z);
void	rot_z(t_display *vars, int *x, int *y);

/* --------------> math/utils.c */

int		get_max_v(int v1, int v2);
int		get_abs_v(int value);

/* ------> memory_management/map.c */

void	allocate_map_mem(t_map *map);
void	free_map_mem(t_map *map);

/* -> memory_management/memory_management.c */

void	free_matrix(char **matrix);
void	free_display_res(t_display *vars);

/* -> memory_management/window_management.c */

int		close_and_free(t_display *vars);

/* --> mlx_handling/utils.c */

int		start_mlx(t_map *map);

/* --------------------> points_operations/creation.c */

t_point	create_new_point(int x, int y, t_display *vars);

/* -------------> points_operations/trasformation.c */

t_point	apply_changes(t_display *vars, t_point point);

/* ----------> rendering/draw.c */

void	draw_map(t_display *vars);

/* ------------> rendering/image_handling.c */

void	put_pixel_to_img(t_display *vars, int x, int y, int color);

/* ------------> rendering/menu.c */

void	draw_control_info(t_display *vars);

/* ------------------------> vars_management/utils.c */

int		init_display_vars(t_display *vars, t_map *map);
void	reset_display_vars(t_display *vars);

/* ------------  STRUCT TYPEDEFS  ------------------------------------------- */

typedef struct s_point		t_point;
typedef struct s_map		t_map;
typedef struct s_imagedata	t_imagedata;
typedef struct s_display	t_display;

#endif