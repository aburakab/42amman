/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:35:52 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:35:53 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
/**
 * ft_isalnum - Checks if a character is alphanumeric.
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is an alphanumeric character,
 * which includes all alphabetic letters ('A'-'Z', 'a'-'z') and digits ('0'-'9')
 * in the ASCII table.
 *
 * If `c` is an alphanumeric character, the function returns 1 (true). If `c` is not
 * a letter or a digit, the function returns 0 (false).
 *
 * Return: 1 if `c` is alphanumeric (letter or digit), 0 otherwise.
 */
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
