/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:53:08 by phchan            #+#    #+#             */
/*   Updated: 2023/03/23 20:38:42 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_num(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != 55 || y != 56 || z != 57)
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 48;
	while (x >= 48 && x <= 55)
	{
		y = x + 1;
		while (y >= 49 && y <= 56)
		{
			z = y + 1;
			while (z >= 50 && z <= 57)
			{
				ft_print_num(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
