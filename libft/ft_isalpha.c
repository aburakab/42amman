/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:36:09 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/29 15:36:10 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
/**
 * ft_isalpha - Checks if a character is an alphabetic letter.
 *
 * @c: The character to be checked.
 *
 * This function checks whether the character `c` is an alphabetic letter. It returns 1 (true)
 * if `c` is a letter, which includes both uppercase letters ('A'-'Z') and lowercase letters
 * ('a'-'z') in the ASCII table.
 *
 * If `c` is not an alphabetic letter, the function returns 0 (false).
 *
 * Return: 1 if `c` is an alphabetic letter, 0 otherwise.
 */
{
	return (ft_islower(c) || ft_isupper(c));
}
