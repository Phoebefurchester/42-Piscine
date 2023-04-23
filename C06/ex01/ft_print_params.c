/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:30:37 by phchan            #+#    #+#             */
/*   Updated: 2023/04/05 18:30:38 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	count;
	int	i;

	count = 1;
	if (ac > 1)
	{
		while (count < ac)
		{
			i = 0;
			while (av[count][i] != '\0')
			{
				write(1, &av[count][i], 1);
				i++;
			}
			write (1, "\n", 1);
			count++;
		}
	}
	return (0);
}
