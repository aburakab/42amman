/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:11:26 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:11:27 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
/**
 * ft_putchar - Outputs a character to the standard output.
 *
 * @c: The character to be written.
 *
 * This function writes the character `c` to the standard output (file descriptor 1).
 * It is typically used to print single characters to the terminal.
 *
 * Return: None (void).
 */
{
	write(1, &c, 1);
}
