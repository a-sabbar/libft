/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:06:41 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 12:07:09 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)str1;
	ss2 = (unsigned char *)str2;
	while (ss1[i] == ss2[i] && i < n - 1)
		i++;
	if (ss1[i] != ss2[i] && i < n)
		return (ss1[i] - ss2[i]);
	else
		return (0);
}
/*
int main() {
    printf("%d\n", ft_memcmp("salut", "salut", 5));
    printf("%d", memcmp("salut", "salut", 5));
    return 0;
}
*/
