/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:13:46 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:06:42 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		c;

	head = lst;
	c = 0;
	while (head)
	{
		c++;
		head = head->next;
	}
	return (c);
}
/*
int main()
{
  	t_list *node1;
  	t_list *node2;
  	t_list *node3;
    node1 = ft_lstnew("node1");
    node2 = ft_lstnew("node2");
    node3 = ft_lstnew("node3");
	node1->next = node2;
	node2->next = node3;
    printf("%d\n", ft_lstsize(node1));
}
*/