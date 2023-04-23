/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:52:10 by phchan            #+#    #+#             */
/*   Updated: 2023/03/23 20:41:25 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_increase(int index, int n, int *arr, int maxdigit)
{
	int	digit;

	index = n;
	while (index--)
	{
		digit = arr[index];
		if (digit < maxdigit--)
		{
			while (index < n)
			{
				arr[index++] = ++digit;
			}
			ft_putchar(',');
			ft_putchar(' ');
			break ;
		}
	}
	return (index);
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	index;
	int	maxdigit;

	if (n <= 0 || n >= 10)
		return ;
	index = 0;
	while (index < n)
	{
		arr[index] = index;
		index++;
	}
	while (index > 0)
	{
		maxdigit = 9;
		index = 0;
		while (index < n)
		{
			ft_putchar(arr[index] + '0');
			index++;
		}
		index = ft_increase(index, n, arr, maxdigit);
	}
}
