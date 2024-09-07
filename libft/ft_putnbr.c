/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:29:08 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:29:10 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
/**
 * @brief Outputs the integer `n` to the standard output.
 *
 * This function takes an integer `n` and prints it to the standard output (usually
 * the terminal) using the `write` system call. It handles the full range of `int`
 * values, including negative numbers. The function prints each digit individually
 * by recursively breaking down the integer into its component digits.
 *
 * @param n The integer to be printed.
 */
{
	int	num;

	if (n < 0)
	{
		ft_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}
