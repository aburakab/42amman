/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:37:13 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:37:14 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
/**
 * ft_isprint - Checks if a character is printable.
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is a printable character,
 * which includes any character that occupies a visible space in the ASCII
 * table. Printable characters range from ASCII value 32 (' ') to 126 ('~').
 * This includes letters, digits, punctuation, and the space character.
 *
 * If `c` is a printable character, the function returns 1 (true). Otherwise,
 * it returns 0 (false).
 *
 * Return: 1 if `c` is a printable character, 0 otherwise.
 */
{
	return (c >= 32 && c <= 126);
}
