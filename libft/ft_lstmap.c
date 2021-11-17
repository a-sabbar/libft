/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:12:09 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:12:47 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	if (!lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			break ;
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
/*
void 	*ft_f(void *x)
{
	return(x);
}
void 	ft_del(void *x)
{
	return;
}
int main()
{
  	t_list *n1;
  	t_list *n2;
  	t_list *n3;
  	t_list *head;
    n1 = ft_lstnew("node1");
    n2 = ft_lstnew("node2");
    n3 = ft_lstnew("node2");
	n1->next = n2;
	n2->next = n3;
   head = ft_lstmap(n1, ft_f, ft_del);
   printf("%s\n", head->content);
   printf("%s\n", head->next->content);
   printf("%s\n", head->next->next->content);
}
*/