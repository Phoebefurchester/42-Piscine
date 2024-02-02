/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npang-tz <npang-tz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:35:52 by npang-tz          #+#    #+#             */
/*   Updated: 2023/04/02 12:57:46 by npang-tz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	ft_atoi(char *str);

/* argument count is not 2, return 1
 * int +space, each row has 8 except the last minus off the spacing
 * !! str = av[1] = start of user input string
 * first if statement of while loop is tasking if 1 to 4 is found 
 * then transformation of string to int will happen*/
int	check_string(int ac, char *av[])
{
	int		i;
	int		num;
	char	*str;

	i = 0;
	num = 0;
	if (ac != 2 && ft_strlen(av[1]) != 31)
	{
		return (1);
	}
	str = av[1];
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			num = ft_atoi(str + i);
			if (num == 0)
			{
				return (0);
			}
		}
		i++;
	}
	return (0);
}
