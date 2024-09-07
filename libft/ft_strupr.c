/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:40:44 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 17:40:45 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupr(char *str)
/**
 * ft_strupr - Converts a string to uppercase.
 *
 * @s: The input string to be converted to uppercase.
 *
 * This function takes a string `str` and converts all lowercase letters in the string
 * to their uppercase equivalents. The conversion is done in place, meaning the
 * original string is modified. Non-alphabetical characters and uppercase letters
 * remain unchanged. If the input string `str` is NULL, the function returns NULL.
 *
 * Return: A pointer to the modified string `str` (in uppercase), or NULL if the input
 * string `str` is NULL.
 */
{
	size_t	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	return (str);
}
