/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_bindings_config.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:28:08 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/21 18:08:35 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEY_BINDINGS_CONFIG_H
# define KEY_BINDINGS_CONFIG_H

/* ------------  KEY BINDINGS CONFIGURATION  -------------------------------- */
/* The key codes wasn't tested on macOS, so they may not work. */ 

/** 
 * @brief Key code for the Escape key. 
*/
# define KC_ESC		53

/**
 * @brief Key code for the 'S' key.
 */
# define KC_S		1

/**
 * @brief Key code for the 'W' key.
 */
# define KC_W		13

/**
 * @brief Key code for the 'D' key.
 */
# define KC_D		2

/**
 * @brief Key code for the 'A' key.
 */
# define KC_A		0

/*
 * @brief Key code for 'R' key.
 */
# define KC_R		15

/*
 * @brief Key code for '1'.
 */
# define KC_1		18

/* 
 * @brief Key code for '2'. 
 * 
*/
# define KC_2		19

/*
 * @brief Key code for '3'. 
*/
# define KC_3		20

/*
 * @brief Key code for '4'. 
 * 
*/
# define KC_4		21

/* 
 * @brief Key code for '5'. 
 */
# define KC_5		23

/*
 * @brief Key code for '6'. 
 */
# define KC_6		22

/*
 * @brief Key code for '7'. 
 */
# define KC_7 		26

/*
 * @brief Key code for '8'. 
 */
# define KC_8 		28

/*
 * @brief Key code for 'TAB'. 
 */
# define KC_TAB		48

/*
 * @brief Key code for 'I'. 
 */
# define KC_I		34

/*
 * @brief Key code for 'O'. 
 */
# define KC_O		31

/**
 * @brief The event code for a key press event in the MiniLibX library.
 */
# define KPE		2

/**
 * @brief The event code for a window close event (also known as
 *  the destroy notify event) in the MiniLibX library.
 */
# define CE			17

/**
 * @brief The event mask for a key press event in the MiniLibX library.
 
# define KPM			(1L << 0)
*/

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
