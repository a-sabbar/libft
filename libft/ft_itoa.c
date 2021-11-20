/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:39:40 by asabbar           #+#    #+#             */
/*   Updated: 2021/11/19 09:44:56 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_len(int n)
{
	int	a;
	int	len;

	a = n;
	len = 0;
	if (a <= 0)
		len++;
	while (a != 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

static char	*ft_p(int n)
{
	char	*p;
	int		a;
	int		len;

	a = n;
	len = ft_len(n);
	p = (char *) malloc (len + 1);
	if (p == NULL)
		return (NULL);
	while (n != 0)
	{
		len--;
		p[len] = (n % 10) + '0';
		n = n / 10;
	}
	p[ft_len(a)] = '\0';
	return (p);
}

static char	*ft_n(int n)
{
	char	*p;
	int		a;
	int		len;

	a = n;
	len = ft_len(n);
	p = (char *) malloc (len + 1);
	if (p == NULL)
		return (NULL);
	p[0] = '-';
	if (n == 0)
		p[0] = '0';
	while (n != 0)
	{
		len--;
		p[len] = -(n % 10) + '0';
		n = n / 10;
	}
	p[ft_len(a)] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	if (n <= 0)
		return (ft_n(n));
	else
		return (ft_p(n));
}
