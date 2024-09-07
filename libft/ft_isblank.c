/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:36:33 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:36:34 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isblank(int c)
/**
 * ft_isblank - Checks if a character is a blank character (space or tab).
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is a blank character, which includes
 * the space character (' ') and the horizontal tab character ('\t') in the ASCII table.
 *
 * If `c` is a blank character, the function returns 1 (true). If `c` is not a blank character,
 * the function returns 0 (false).
 *
 * Return: 1 if `c` is a blank character (space or tab), 0 otherwise.
 */
{
	return (c == '\t' || c == ' ');
}
