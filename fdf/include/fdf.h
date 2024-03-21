/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:57:32 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 16:30:19 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

/* ------------  APPLE SPECIFIC DEFINITIONS  -------------------------------- */
# ifdef __APPLE__
#  include "../lib/mlx_macos/mlx.h"
#  include "../lib/mlx_macos/mlx_int.h"
#  include "../lib/mlx_macos/mlx_new_window.h"
#  include "./macOS/color_config.h"
#  include "./macOS/error_msg.h"
#  include "./macOS/functions.h"
#  include "./macOS/key_bindings_config.h"
#  include "./macOS/movements_config.h"
#  include "./macOS/resolution_settings_config.h"
#  include "./macOS/structure.h"

/* ------------  NON-APPLE SPECIFIC DEFINITIONS  ---------------------------- */
# else
#  include "./linux/structure.h"
#  include "./linux/functions.h"
#  include "../lib/mlx_linux/mlx.h"
#  include "../lib/mlx_linux/mlx_int.h"
#  include "./linux/color_config.h"
#  include "./linux/error_msg.h"
#  include "./linux/key_bindings_config.h"
#  include "./linux/movements_config.h"
#  include "./linux/resolution_settings_config.h"
# endif

/* ------------  LIBRARIES INCLUDED  ---------------------------------------- */
# include <errno.h>
# include <math.h>
# include "../lib/fcorvaro_lib/include/ft_printf.h"

/* ------------  STRUCT TYPEDEFS  ------------------------------------------- */

typedef struct s_point		t_point;
typedef struct s_map		t_map;
typedef struct s_imagedata	t_imagedata;
typedef struct s_display	t_display;

#endif
