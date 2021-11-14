/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:23 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/13 17:11:00 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*s;

	s = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		s = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!s)
			return (NULL);
		ft_strlcpy(s, &s1[start], end - start + 1);
	}
	return (s);
}
// int main()
// {
//   char  s[] = "dfshdfhhdffhfHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
//   char  set[] = " \n\t";
//   printf("%s|", ft_strtrim(s,set));
// }
