/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:00:20 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:00:30 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
/**
 * ft_strcat - Concatenates two strings.
 *
 * @s1: The destination string to which `s2` will be appended.
 * @s2: The source string to be appended to `s1`.
 *
 * This function appends the string `s2` to the end of the string `s1`. The null terminator
 * of `s1` is overwritten, and a new null terminator is added at the end of the concatenated
 * string. The destination string `s1` must have enough space to hold both its original content
 * and the content of `s2`. The source string `s2` remains unchanged.
 *
 * Return: A pointer to the destination string `s1`, now containing the concatenated result.
 */

{
	size_t	i;

	i = ft_strlen(s1);
	while (*s2)
	{
		s1[i] = *s2;
		s2++;
		i++;
	}
	return (s1);
}
