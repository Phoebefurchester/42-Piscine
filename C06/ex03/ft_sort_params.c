/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:32:24 by phchan            #+#    #+#             */
/*   Updated: 2023/04/13 21:12:05 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **ptr1, char **ptr2)
{
	char	*temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	asc_sort(char **av, int ac)
{
	int	i;
	int	j;
	int	count;

	count = ac;
	while (count - 1)
	{
		i = 0;
		j = 1;
		while (j < count)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				ft_swap(&av[i], &av[j]);
			}
			i++;
			j++;
		}
		count--;
	}
}

int	main(int ac, char **av)
{
	char	**first_input;
	int		account;

	first_input = av + 1;
	account = ac - 1;
	asc_sort(first_input, account);
	while (*(++av))
	{
		ft_putstr(*av);
	}
}
