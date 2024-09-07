/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:36:45 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:36:46 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
/**
 * ft_isdigit - Checks if a character is a digit (0-9).
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is a decimal digit, i.e., a character
 * between '0' and '9' in the ASCII table. If `c` is a digit, the function returns 1 (true).
 * If `c` is not a digit, the function returns 0 (false).
 *
 * Return: 1 if `c` is a digit, 0 otherwise.
 */
{
	return (c >= '0' && c <= '9');
}
