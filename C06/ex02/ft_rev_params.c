/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:31:06 by phchan            #+#    #+#             */
/*   Updated: 2023/04/05 18:31:27 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	count;
	int	i;

	count = ac - 1;
	if (ac > 1)
	{
		while (count > 0)
		{
			i = 0;
			while (av[count][i] != '\0')
			{
				write(1, &av[count][i], 1);
				i++;
			}
			write (1, "\n", 1);
			count--;
		}
	}
	return (0);
}
