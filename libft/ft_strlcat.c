/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:35:05 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:13:34 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;
	size_t	rtn;

	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	if (size < ld || size == 0)
		return (ls + size);
	else
		rtn = ls + ld;
	i = 0;
	while (src[i] && ld < size - 1)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (rtn);
}
/*
int main()
{
	char d[]= "acharf";
	char s[]= "sabbar";
	printf("%lu\n", ft_strlcat(d, d, 5));
	printf("%lu", strlcat(d, d, 5));
}
*/