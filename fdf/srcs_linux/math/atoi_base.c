/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-corvaro <f-corvaro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:49:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/03/20 13:17:10 by f-corvaro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/**
 * @brief Gets the index of a character in a base.
 * 
 * This function iterates over the `base` string until it finds the 
 * `c` character or reaches the end of the string.
 * It returns the index of the `c` character in the `base` string.
 * 
 * @param c The character to find the index of.
 * @param base The base string to search in.
 * @return The index of the `c` character in the `base` string.
 */
static int	get_base_index(char c, const char *base)
{
	int	idx;

	idx = 0;
	while (*base && *base != c && ++idx)
		base++;
	return (idx);
}

/**
 * @brief Gets the length of a base string.
 * 
 * This function iterates over the `base` string, counting the number 
 * of unique characters. If it finds a duplicate
 * character, it returns 0. Otherwise, it returns the number of unique 
 * characters.
 * 
 * @param base The base string to get the length of.
 * @return The number of unique characters in the `base` string, or 0 
 * if there are duplicate characters.
 */
static int	get_base_len(const char *base)
{
	int	base_l;

	base_l = 0;
	while (base[base_l])
	{
		if (ft_strchr(&base[base_l + 1], base[base_l]))
			return (0);
		base_l++;
	}
	return (base_l);
}

/**
 * @brief Converts a string to an integer.
 * 
 * This function iterates over the `ns` string, 
 * converting each character to an integer using the `get_base_index`
 * function and the `base` string. It multiplies each integer by `pow` 
 * and adds the result to `res`. It then divides
 * `pow` by `base_l` and moves on to the next character.
 * 
 * @param ns The string to convert to an integer.
 * @param base The base string to use for conversion.
 * @param pow The initial power to multiply each integer by.
 * @param base_l The length of the base string.
 * @return The integer representation of the `ns` string.
 */
static int	str_to_int(const char *ns, const char *base, long int pow,
	int base_l)
{
	int	res;

	res = 0;
	while (*ns)
	{
		res += get_base_index(*ns, base) * pow;
		pow /= base_l;
		ns++;
	}
	return (res);
}

/**
 * @brief Checks if a character is a whitespace character.
 * 
 * This function checks if the `c` character is a tab, newline, 
 * vertical tab, form feed, carriage return, or space
 * character. It returns 1 if `c` is a whitespace character, and 0 otherwise.
 * 
 * @param c The character to check.
 * @return 1 if `c` is a whitespace character, 0 otherwise.
 */
static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

/**
 * @brief Converts a string to an integer using a base.
 * 
 * This function converts the `str` string to an integer using the `base` 
 * string. It first checks if the `base` string is valid
 * using the `get_base_len` function. It then skips any whitespace 
 * characters at the beginning of the `str` string. It
 * checks if the first character is a minus sign and multiplies the 
 * `multiplier` variable by -1 if it is. It then checks if the
 * first character is a plus sign and skips it. It then saves the 
 * current position of the `str` string and iterates over the
 * `str` string, multiplying the `multiplier` variable by the length of 
 * the `base` string and moving on to the next character
 * until it reaches the end of the string or a character that is not in 
 * the `base` string. It then divides the `multiplier` variable
 * by the length of the `base` string and calls the `str_to_int` function 
 * to convert the `str` string to an integer.
 * 
 * @param str The string to convert to an integer.
 * @param base The base string to use for conversion.
 * @return The integer representation of the `str` string.
 */
int	ft_atoi_base(const char *str, const char *base)
{
	long int		multiplier;
	int				base_l;
	char			*save;

	multiplier = 1;
	base_l = get_base_len(base);
	if (base_l < 2)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-' && str++)
		multiplier = -1;
	else if (*str == '+')
		str++;
	save = (char *)str;
	while (*str && ft_strchr(base, *str))
	{
		multiplier *= base_l;
		str++;
	}
	multiplier /= base_l;
	return (str_to_int(save, base, multiplier, base_l));
}
