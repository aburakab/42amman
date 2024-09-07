/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:37:01 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:37:02 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
/**
 * ft_islower - Checks if a character is a lowercase letter.
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is a lowercase letter
 * (between 'a' and 'z' in the ASCII table). If `c` is a lowercase letter,
 * the function returns 1 (true). If `c` is not a lowercase letter, the function
 * returns 0 (false).
 *
 * Return: 1 if `c` is a lowercase letter, 0 otherwise.
 */
{
	return (c >= 'a' && c <= 'z');
}
