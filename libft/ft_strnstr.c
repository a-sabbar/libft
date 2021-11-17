/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:18:21 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/16 13:17:59 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return (((char *)str));
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && i + j < n)
		{
			if (to_find[j + 1] == '\0')
			{
				return (&((char *)str)[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
// #include<string.h>
// int main ()
// { 
//     char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
//     printf("%s\n", ft_strnstr(haystack, needle, -1));
//     printf("%s\n", strnstr(haystack, needle, -1));
//     //printf("%s", strnstr(s , f, 9));
// }
// int main()
// {
//     char *s1 = "MZIRIBMZIRIBMZE123";
//     char *s2 = "MZIRIBMZE";
//     int max = strlen(s2);
//     char *i1 = strnstr(s1, s2, max);
//     char *i2 = ft_strnstr(s1, s2, max);
//     printf("%s \n", i1);
//     printf("%s \n", i2);
// }