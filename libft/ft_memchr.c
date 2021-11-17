/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:52 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:06:55 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str)[i] == (char)c)
			return (&((void *)str)[i]);
		i++;
	}
	return (0);
}
/*
int main ()
{
  char s[] = "league of legends";
  int c = 'a';
  printf("%s\n", (char*)ft_memchr(s, c, 2));
  printf("%s", memchr(s, c, 2));
}
*/
