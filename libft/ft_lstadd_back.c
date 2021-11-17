/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:41:43 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:05:14 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (*lst)
	{
		head = *lst;
		head = ft_lstlast(head);
		head -> next = new;
	}
	else
		*lst = new;
}
/*
int main()
{
  	t_list *n1;
  	t_list *n2;
  	t_list *n3;
  	t_list *head;
    n1 = ft_lstnew("node1");
    n2 = ft_lstnew("node2");
    n3 = ft_lstnew("node3");
	n1->next = n2;
	head = n1;
	ft_lstadd_back(&n1, n3);
   	printf("%s\n", head->next->next->content);
}
*/