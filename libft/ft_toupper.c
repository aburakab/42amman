/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:37:44 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:37:45 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
/**
 * ft_toupper - Converts a lowercase character to uppercase.
 *
 * @c: The character to be converted.
 *
 * This function converts the lowercase letter `c` to its corresponding uppercase letter
 * if `c` is between 'a' and 'z' (i.e., if `c` is a lowercase letter in the ASCII table).
 * If `c` is not a lowercase letter, the function returns `c` unchanged.
 *
 * This function works with standard ASCII characters. It may not behave as expected for
 * non-ASCII or locale-specific characters.
 *
 * Return: The uppercase equivalent of `c` if it's a lowercase letter, or `c` unchanged
 * if `c` is not a lowercase letter.
 */

{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
