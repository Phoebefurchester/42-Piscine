/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npang-tz <npang-tz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:57:12 by npang-tz          #+#    #+#             */
/*   Updated: 2023/04/02 15:20:39 by npang-tz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	tside_cond(int board[4] [4], int pos, int input_str[16])
{
	int	x;
	int	max;
	int	count;

	x = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (x < 4)
		{
			if (board[x][pos % 4] > max)
			{
				max = board[x][pos % 4];
				count++;
			}
			x++;
		}
		if (input_str[pos % 4] != count)
			return (1);
	}
	return (0);
}

//vt = visible towers
int	rside_cond(int board[4] [4], int pos, int input_str[16])
{
	int	x;
	int	max_s;
	int	vt;

	vt = 0;
	x = 4;
	max_s = 0;
	if (pos % 4 == 3)
	{
		while (--x >= 0)
		{
			if (board[pos / 4][x] > max_s)
			{
				max_s = board[pos / 4][x];
				vt++;
			}
		}
		if (input_str[12 + pos / 4] != vt)
		{
			return (1);
		}
	}
	return (0);
}

int	bside_cond(int board[4][4], int pos, int input_str[16])
{
	int	x;
	int	max;
	int	count;

	x = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (x >= 0)
		{
			if (board[x][pos % 4] > max)
			{
				max = board[x][pos % 4];
				count++;
			}
			x--;
		}
		if (input_str[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	lside_cond(int board[4][4], int pos, int input_str[16])
{
	int	x;
	int	max;
	int	count;

	x = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (x < 4)
		{
			if (board[pos / 4][x] > max)
			{
				max = board[pos / 4][x];
				count++;
			}
			x++;
		}
		if (input_str[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}
