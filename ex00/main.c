/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:52:56 by phchan            #+#    #+#             */
/*   Updated: 2023/04/02 14:57:03 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_string(int ac, char *av[]);
void	ft_putstr(char *str);
int		*trans_int_arr(char *str);
int		solve_puzz(int board[4][4], int input_str[16], int pos);
void	print_board(int board[4][4]);

int	main(int ac, char *av[])
{
	int	board[4][4] = {
	{0, 0, 0, 0}, 
	{0, 0, 0, 0}, 
	{0, 0, 0, 0}, 
	{0, 0, 0, 0}
	};
	int	*input_str;

	if (check_string(ac, av) == 1)
	{
		ft_putstr("Error!!\n");
		return (0);
	}
	input_str = trans_int_arr(av[1]);
	if (solve_puzz(board, input_str, 0) == 1)
	{
		print_board(board);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
