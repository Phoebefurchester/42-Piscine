/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npang-tz <npang-tz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:31:06 by npang-tz          #+#    #+#             */
/*   Updated: 2023/04/02 14:34:02 by npang-tz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	cond(int board[4] [4], int pos, int input_str[16]);

int	tside_cond(int board[4] [4], int pos, int input_str[16]);

int	bside_cond(int board[4] [4], int pos, int input_str[16]);

int	rside_cond(int board[4] [4], int pos, int input_str[16]);

int	lside_cond(int board[4] [4], int pos, int input_str[16]);

int	cond(int board[4] [4], int pos, int input_str[16])
{
	if (tside_cond(board, pos, input_str) == 1)
		return (1);
	else if (bside_cond(board, pos, input_str) == 1)
		return (1);
	else if (rside_cond(board, pos, input_str) == 1)
		return (1);
	else if (lside_cond(board, pos, input_str) == 1)
		return (1);
	else
	{
		return (0);
	}
}
