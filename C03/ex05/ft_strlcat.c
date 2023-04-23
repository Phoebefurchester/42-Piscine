/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:50:54 by phchan            #+#    #+#             */
/*   Updated: 2023/04/05 13:20:53 by phchan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_cat(char *dest, char *src, unsigned int i, unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (src[j] != '\0' && (i + 1 < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srccount;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	srccount = j;
	if (size <= i)
	{
		srccount += size;
	}
	else
	{
		srccount += i;
	}
	ft_cat(dest, src, i, size);
	return (srccount);
}
