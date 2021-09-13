/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:36:53 by bagovic           #+#    #+#             */
/*   Updated: 2021/09/13 15:43:49 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long	ft_reverse_n(long n)
{
	long	n_reversed;
	short	is_neg;

	n_reversed = 0;
	is_neg = 0;
	if (n < 0)
	{
		n *= -1;
		is_neg = 1;
	}
	if (n == 0)
		return (0);
	while (n != 0)
	{
		n_reversed = n_reversed * 10 + n % 10;
		n /= 10;
	}
	if (is_neg == 1)
		n_reversed *= -1;
	return (n_reversed);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nlong;
	int		digit;

	nlong = n;
	digit = 0;
	if (nlong == 0)
		write(fd, "0", 1);
	if (nlong > __INT_MAX__ || nlong < -2147483648)
		nlong = 0;
	if (nlong < 0)
	{
		write(fd, "-", 1);
		nlong *= -1;
	}
	nlong = ft_reverse_n(nlong);
	while (nlong != 0)
	{
		digit = nlong % 10 + '0';
		write(fd, &digit, 1);
		nlong /= 10;
	}
}
