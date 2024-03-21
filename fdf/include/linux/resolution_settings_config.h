/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution_settings_config.h                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:24:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/19 17:08:39 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLUTION_SETTINGS_CONFIG_H
# define RESOLUTION_SETTINGS_CONFIG_H

/** @def W_W
 *  @brief This is the width of the window in pixels.
 *  @details Change this value according to your resolution preferences.
 */
# define WIN_W 1920

/** @def W_H
 *  @brief This is the height of the window in pixels.
 *  @details Change this value according to your resolution preferences.
 */
# define WIN_H 1080

/* ------------  STRUCT TYPEDEFS  ------------------------------------------- */

typedef struct s_point		t_point;
typedef struct s_map		t_map;
typedef struct s_imagedata	t_imagedata;
typedef struct s_display	t_display;

#endif