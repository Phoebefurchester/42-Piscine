/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_adjacent_cell.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:00:09 by phchan            #+#    #+#             */
/*   Updated: 2023/04/02 15:00:30 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_adjacent_cell(int board[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (board[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (board[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}
