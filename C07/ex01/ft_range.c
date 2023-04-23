/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:59:52 by phchan            #+#    #+#             */
/*   Updated: 2023/04/11 16:48:47 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	arrsize;

	i = 0;
	arrsize = max - min;
	if (min >= max)
		return (0);
	ptr = malloc((arrsize) * sizeof(int));
	if (ptr == 0)
		return (0);
	while (i < arrsize)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
