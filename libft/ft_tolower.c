/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:37:55 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:37:57 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
/**
 * ft_tolower - Converts an uppercase character to lowercase.
 *
 * @c: The character to be converted.
 *
 * This function converts the uppercase letter `c` to its corresponding lowercase letter
 * if `c` is in the range 'A' to 'Z' (i.e., if `c` is an uppercase letter in ASCII).
 * If `c` is not an uppercase letter, the function returns `c` unchanged.
 *
 * This function works only with ASCII characters and may not provide the desired results
 * for non-ASCII or locale-specific characters.
 *
 * Return: The lowercase equivalent of `c` if it's an uppercase letter, or `c` unchanged
 * if `c` is not an uppercase letter.
 */

{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
