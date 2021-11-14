/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:31:50 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/07 19:25:53 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
// int main()
// {
//     const char src[] = "sabbr";
//     printf(".%s \n", ft_memcpy("", src, 0)); 
//     printf(".%s \n", memcpy("", src, 0)); 
// }
