/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:24:00 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/08 16:00:36 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*str_dest_pointer;
	const char	*str_src_pointer;
	size_t		counter;

	str_dest_pointer = dest;
	str_src_pointer = src;
	counter = 0;
	while (counter < n)
	{
		str_dest_pointer[counter] = str_src_pointer[counter];
		counter++;
	}
}
