/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:37:24 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:37:25 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
/**
 * ft_isspace - Checks if a character is a whitespace character.
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is a whitespace character.
 * In the standard C library, whitespace characters include:
 *  - space (' ')
 *  - horizontal tab ('\t')
 *  - vertical tab ('\v')
 *  - newline ('\n')
 *  - form feed ('\f')
 *  - carriage return ('\r')
 *
 * If `c` is any of these characters, the function returns 1 (true). Otherwise, it returns 0 (false).
 *
 * Return: 1 if `c` is a whitespace character, 0 otherwise.
 */
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}
