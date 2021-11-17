/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:35:47 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/17 11:47:17 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int	ft_words(char const *s, char c)
// {
// 	int	i;
// 	int	words;

// 	i = 0;
// 	words = 0;
// 	while (s[i] == c && s[i])
// 		i++;
// 	while (s[i])
// 	{
// 		if (i == 0 || s[i - 1] == c)
// 		{
// 			if (s[i] != c && s[i] != '\0')
// 				words++;
// 		}
// 		i++;
// 	}
// 	return (words);
// }

// int	ft_lenwords(char const *s, char c, int i)
// {
// 	int	len;

// 	len = 0;
// 	while (s[i] != c && s[i])
// 	{
// 		len++;
// 		i++;
// 	}
// 	return (len);
// }

// void	ft_move(char **p, char const *s, int words, char c)
// {
// 	int	i;
// 	int	j;
// 	int	len;

// 	i = 0;
// 	j = 0;
// 	while (words--)
// 	{
//         while (s[i] == c)
//             i++;
//         len = ft_lenwords(s, c, i);
//         if (len != 0)
//         {
//             p[j] = (char *)malloc(len + 1);
//             if (p[j] == NULL)
//             {
//                 while (j >= 0)
//                 {
//                     j--;
//                     free(p[j]);
//                 }
//                 free(p);
//             }
//             p[j++] = ft_substr(s, i, len);
//         }
// 		i = i + len;
// 	}
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		words;
// 	char	**p;

// 	if (!s)
// 		return (NULL);
// 	words = ft_words(s, c);
// 	p = (char **)malloc(sizeof(char *) * words + 1);
// 	if (!p)
// 		return (NULL);
// 	ft_move(p, s, words, c);
// 	p[words] = NULL;
// 	return (p);
// }

// int	main(void)
// {
// 	int	i;
// 	char c[] ="b gb ij   bf vs";

// 	i = 0;
// 	while (i <= 5)
// 	{
// 		printf("tab[%d] = %s \n", i, ft_split(c, ' ')[i]);
// 		i++;
// 	}
// 	// for(i = 0; i <= 4 ;i++)
// 	//         printf("tab[%d] = %s \n",i,ft_split(c,' ')[i]);
// }