/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:36:21 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:36:22 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
/**
 * ft_isascii - Checks if a character is an ASCII character.
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` falls within the standard ASCII
 * character set, which includes values from 0 to 127. ASCII characters include
 * control characters, printable characters, digits, punctuation, and letters.
 *
 * If `c` is an ASCII character, the function returns 1 (true). If `c` falls outside
 * the ASCII range, the function returns 0 (false).
 *
 * Return: 1 if `c` is a valid ASCII character (0-127), 0 otherwise.
 */
{
	return (c >= 0 && c <= 127);
}
