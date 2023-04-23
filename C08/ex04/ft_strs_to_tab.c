/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:56:32 by phchan            #+#    #+#             */
/*   Updated: 2023/04/13 15:51:46 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		i;

	length = ft_strlen(src);
	dest = malloc(sizeof(*dest) * (length + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = malloc(sizeof(*arr) * (ac + 1));
	if (arr == 0)
		return (0);
	while (i < ac)
	{
		(arr + i)->size = ft_strlen(av[i]);
		(arr + i)->str = av[i];
		(arr + i)->copy = ft_strdup((arr + i)->str);
		i++;
	}
	((arr + i)->str) = 0;
	return (arr);
}
