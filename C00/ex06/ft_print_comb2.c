/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:12:53 by phchan            #+#    #+#             */
/*   Updated: 2023/04/10 18:25:07 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	two_digit(int x)
{
	char	c;

	if (x < 10)
	{
		c = x + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = x / 10 + 48;
		write(1, &c, 1);
		c = x % 10 + 48;
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	num[1] = 0;
	while (num[0] <= 97)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			two_digit(num[0]);
			write(1, " ", 1);
			two_digit(num[1]);
			write(1, ", ", 2);
			num[1]++;
		}
		num[0]++;
	}
	write(1, "98 99", 5);
}
