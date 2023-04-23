/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:47 by phchan            #+#    #+#             */
/*   Updated: 2023/03/23 20:33:18 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter >= 97 && letter <= 122)
	{
		write(1, &letter, 1);
		letter++;
	}
}
