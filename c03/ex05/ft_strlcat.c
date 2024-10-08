/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:01:30 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/05 15:24:46 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		return (size + j);
	if (size > i)
	{
		k = 0;
		while (src[k] != '\0' && i + k + 1 < size)
		{
			dest[i + k] = src[k];
			k++;
		}
		dest[i + k] = '\0';
	}
	return (i + j);
}

/*int	main(void)
{
	char	dest[20];
	char	src[3];
	unsigned int	result;

	dest[0] = 'H';
	dest[1] = 'e';
	dest[2] = '\0';
	src[0] = 'y';
	src[1] = 'o';
	src[2] = '\0';
	result = ft_strlcat (dest, src, 20);
	printf("%u\n", result);
	printf("%s", dest);
	return(0);
}*/