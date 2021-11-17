/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:24:22 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:07:55 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return ((void *)str);
}
/*
int main() {
	int s = 0;
	char	*c = malloc(0);
	c[0] = 'a';
	c[1] = 'c';
	c[2] = 'h';
	c[3] = 'r';
	c[4] = 'a';
	c[5] = 'f';
	printf("%s\n", (char *)ft_memset((void *)c, '5', 10));
	printf("%s", (char *)memset((void *)c, '5', 10));
}
*/
