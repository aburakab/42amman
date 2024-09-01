/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:30:59 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 12:31:00 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
/**
 * @brief Outputs the integer `n` to the specified file descriptor `fd`.
 *
 * This function takes an integer `n` and prints it to the file descriptor `fd`
 * using the `write` system call. It handles the full range of `int` values,
 * including negative numbers. The function prints each digit individually by
 * recursively breaking down the integer into its component digits.
 *
 * @param n The integer to be printed.
 * @param fd The file descriptor on which to write. `fd` can refer to standard output (1),
 *           standard error (2), or any other file descriptor obtained via functions like `open`.
 */
{
	int	num;

	if (n < 0)
		ft_putchar_fd('-', fd);
	num = FT_ABS(n);
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + '0', fd);
}
