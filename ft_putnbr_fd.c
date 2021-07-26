/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:36:53 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/26 19:05:16 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nstr;

	nstr = ft_itoa(n);
	if (nstr != NULL)
		write(fd, nstr, ft_strlen(nstr));
}
