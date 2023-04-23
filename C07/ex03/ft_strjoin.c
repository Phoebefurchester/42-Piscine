/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:56:05 by phchan            #+#    #+#             */
/*   Updated: 2023/04/11 16:53:30 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	sizeofwhole(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	j;

	j = 0;
	length = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			i++;
		length += i;
		j++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	length += (i * (size - 1));
	return (length);
}

int	ft_concat(char **dest, char *src, int x)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		(*dest)[x] = src[i];
		i++;
		x++;
	}
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;

	if (size == 0)
		return (malloc(1));
	str = malloc((sizeofwhole(size, strs, sep) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		j = ft_concat(&str, strs[i], j);
		if (i == size - 1)
			break ;
		j = ft_concat(&str, sep, j);
		i++;
	}
	str[j] = '\0';
	return (str);
}
