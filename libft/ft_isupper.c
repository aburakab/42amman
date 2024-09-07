/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:37:33 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:37:34 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
/**
 * ft_isupper - Checks if a character is an uppercase letter.
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is an uppercase letter
 * (between 'A' and 'Z' in the ASCII table). If `c` is an uppercase letter,
 * the function returns 1 (true). If `c` is not an uppercase letter, the function
 * returns 0 (false).
 *
 * Return: 1 if `c` is an uppercase letter, 0 otherwise.
 */
{
	return (c >= 'A' && c <= 'Z');
}
