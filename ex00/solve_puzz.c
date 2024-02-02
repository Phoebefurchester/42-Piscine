/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_puzz.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:57:29 by phchan            #+#    #+#             */
/*   Updated: 2023/04/02 14:59:04 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_adjacent_cell(int board[4][4], int pos, int num);
int	cond(int board[4][4], int pos, int input_str[16]);

int	solve_puzz(int board[4][4], int input_str[16], int pos)
{
	int	num;

	if (pos == 16)
	{
		return (1);
	}
	num = 1;
	while (num <= 4)
	{
		if (check_adjacent_cell(board, pos, num) == 0)
		{
			board[pos / 4][pos % 4] = num;
			if (cond(board, pos, input_str) == 0)
			{
				if (solve_puzz(board, input_str, pos + 1) == 1)
					return (1);
			}
			else
			{
				board[pos / 4][pos % 4] = 0;
			}
		}
		num++;
	}
	return (0);
}
