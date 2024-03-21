/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_bindings_config.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:28:08 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 16:22:18 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEY_BINDINGS_CONFIG_H
# define KEY_BINDINGS_CONFIG_H

/* ------------  KEY BINDINGS CONFIGURATION  -------------------------------- */
/* The key codes are used in X11 windowing system. So this is valid in Ubuntu
 * and other Linux distributions. 
*/

/** 
 * @brief Key code for the Escape key. 
*/
# define KC_ESC	65307

/**
 * @brief Key code for the 'S' key.
 */
# define KC_S		115

/**
 * @brief Key code for the 'W' key.
 */
# define KC_W		119

/**
 * @brief Key code for the 'D' key.
 */
# define KC_D		100

/**
 * @brief Key code for the 'A' key.
 */
# define KC_A		97

/*
 * @brief Key code for 'R' key.
 */
# define KC_R		114

/*
 * @brief Key code for '1'.
 */
# define KC_1		49

/* 
 * @brief Key code for '2'. 
 * 
*/
# define KC_2		50

/*
 * @brief Key code for '3'. 
*/
# define KC_3		51

/*
 * @brief Key code for '4'. 
 * 
*/
# define KC_4		52

/* 
 * @brief Key code for '5'. 
 */
# define KC_5		53

/*
 * @brief Key code for '6'. 
 */
# define KC_6		54

/*
 * @brief Key code for '7'. 
 */
# define KC_7 		55	

/*
 * @brief Key code for '8'. 
 */
# define KC_8 		56

/*
 * @brief Key code for 'TAB'. 
 */
# define KC_TAB		65289

/*
 * @brief Key code for 'I'. 
 */
# define KC_I		105

/*
 * @brief Key code for 'O'. 
 */
# define KC_O		111

/**
 * @brief The event code for a key press event in the MiniLibX library.
 */
# define KPE			2

/**
 * @brief The event mask for a key press event in the MiniLibX library.
 
# define KPM			(1L << 0)
*/

/**
 * @brief The event code for a window close event (also known as
 *  the destroy notify event) in the MiniLibX library.
 */
# define CE			17

/**
 * @brief The event mask for a window close event in the MiniLibX library.

# define CM			(1L << 17)
*/

/* ------------  STRUCT TYPEDEFS  ------------------------------------------- */

typedef struct s_point		t_point;
typedef struct s_map		t_map;
typedef struct s_imagedata	t_imagedata;
typedef struct s_display	t_display;

#endif
