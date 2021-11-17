/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:58:56 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/16 13:17:41 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
	{
		i++;
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
// int main() {
//     printf("%d\n", ft_strncmp("salut", "salut", 5));
//     printf("%d", strncmp("salut", "salut", 5));
//     return 0;
// }
