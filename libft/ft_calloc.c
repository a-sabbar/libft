/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:33:09 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/12 19:18:11 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		*s;

	s = (int *)malloc(size * count);
	if (s == NULL)
		return (NULL);
	s = ft_memset(s, 0, count * size);
	return (s);
}
