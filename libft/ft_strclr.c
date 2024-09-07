/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:20:44 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/30 15:20:46 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
/**
 * ft_strcmp - Compares two strings lexicographically.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * This function compares the two null-terminated strings `s1` and `s2` lexicographically.
 * The comparison is done character by character. If `s1` and `s2` are identical, the function
 * returns 0. If they differ, it returns a negative value if `s1` is lexicographically less than `s2`,
 * or a positive value if `s1` is greater than `s2`.
 *
 * The comparison stops as soon as a difference is found or when a null terminator is encountered.
 *
 * Return: 0 if the strings are equal, a negative value if `s1` is less than `s2`, or a positive
 * value if `s1` is greater than `s2`.
 */
{
	if (s)
		while (*s)
			*s++ = '\0';
}
