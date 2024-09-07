/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:07:48 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 18:07:50 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
/**
 * ft_strrev - Reverses a given string in place.
 *
 * @s: The string to be reversed.
 *
 * This function takes a string `s` and reverses it in place. The original string's
 * characters are swapped from the beginning and end, moving towards the center,
 * until the entire string is reversed. The string must be null-terminated, and the
 * function assumes the input is a valid string.
 *
 * If the input string `s` is NULL, the function returns NULL.
 *
 * Return: A pointer to the reversed string `s`, or NULL if `s` is NULL.
 */
{
	char	*start;
	char	*end;
	char	c;

	if (s)
	{
		start = s;
		end = s + (ft_strlen(s) - 1);
		while (start < end)
		{
			c = *start;
			*start++ = *end;
			*end-- = c;
		}
	}
	return (s);
}
