/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:46:29 by bagovic           #+#    #+#             */
/*   Updated: 2021/09/13 12:34:01 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next;

	while (lst != NULL)
	{
		new_list = malloc(sizeof (t_list));
		if (new_list == NULL)
			return (NULL);
		new_list->next = NULL;
		new_list = f(lst->content);
		next = lst->next;
		del(lst->content);
		free(lst);
		lst = next;
		new_list = new_list->next;
	}
	return (new_list);
}
