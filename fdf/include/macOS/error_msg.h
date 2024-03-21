/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:20:13 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 16:23:45 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_MSG_H
# define ERROR_MSG_H

/*
 *  @brief This macro holds an error message that is displayed when memory
 * allocation fails.
 */
# define MEM_ALL_ERR		"Unable to allocate memory."

/*
 *  @brief This macro holds an error message that is displayed when `ft_split`
 * fails to split a line into an array of strings.
 */
# define SPLIT_ERR			"Unable to split the line."

/**
 * @brief Error message for an empty map.
 */
# define EMPTY_MAP_ERROR	"The map is empty"

/**
 * @brief Error message for failed memory allocation in map.
 */
# define MAP_ALL_ERROR		"Failed to allocate memory for map"

/**
 * @brief Error message for failed memory allocation for display variables.
 */
# define DISPLAY_ALL_ERR	"Failed to allocate memory for display variables"

/**
 * @brief Error message for invalid syntax.
 */
# define ARGS_ERR			"Invalid arguments. Syntax is './fdf map.fdf'"

/* ------------  STRUCT TYPEDEFS  ------------------------------------------- */

typedef struct s_point		t_point;
typedef struct s_map		t_map;
typedef struct s_imagedata	t_imagedata;
typedef struct s_display	t_display;

#endif