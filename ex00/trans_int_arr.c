/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans_int_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npang-tz <npang-tz@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:12:22 by npang-tz          #+#    #+#             */
/*   Updated: 2023/04/02 13:16:59 by npang-tz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str);

//creating an array with the size of 16
//using while loop to convert char within string into an int

int	*trans_int_arr(char *str)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(int) * 16);
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			arr[j] = ft_atoi(str + i);
			j++;
		}
		i++;
	}
	return (arr);
}
