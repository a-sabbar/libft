/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:04:21 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/08 08:40:38 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (dest > src)
	{
		while (n)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
