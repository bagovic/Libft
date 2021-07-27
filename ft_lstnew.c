/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:28:38 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/27 14:16:37 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = NULL;
	lst = malloc(sizeof (struct s_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	return (lst);
}
