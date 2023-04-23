/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:14:28 by phchan            #+#    #+#             */
/*   Updated: 2023/03/25 22:14:30 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar( char c);

void	ft_cond(int x, int y, int r, int l)
{
	if ((x == 1 && y == 1) || (x == r && y == 1))
	{
		ft_putchar('A');
	}
	else if ((x == 1 && y == l) || ((x == r && y == l) && (x > 1) && (y > 1)))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush( int l, int r)
{
	int	x;
	int	y;

	if (r <= 0 || l <= 0)
		return ;
	x = 1;
	while (x <= r)
	{	
		y = 1;
		while (y <= l)
		{
			if (x == 1 || x == r || y == 1 || y == l)
			{
				ft_cond(x, y, r, l);
			}
			else
			{
				ft_putchar(' ');
			}
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
