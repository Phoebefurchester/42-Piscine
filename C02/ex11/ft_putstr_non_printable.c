/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:34:59 by phchan            #+#    #+#             */
/*   Updated: 2023/03/29 15:55:24 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	hex_convert(int nbr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr > 16)
	{
		hex_convert(nbr / 16);
		hex_convert(nbr % 16);
	}
	else
	{
		write (1, &hex[nbr], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 0 && *str <= 31) || *str == 127)
		{
			write (1, "\\", 1);
			if (*str < 16)
			{
				write(1, "0", 1);
			}
			hex_convert(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
