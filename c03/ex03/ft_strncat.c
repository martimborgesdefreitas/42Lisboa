/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:52:05 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/26 21:23:41 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (src[j] != '\0' && j < nb)
		{
			dest[i + j] = src[j];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest[20];
	char	src[3];

	dest[0] = 'H';
	dest[1] = 'e';
	dest[2] = '\0';
	src[0] = 'y';
	src[1] = 'o';
	src[2] = '\0';
	//ft_strcat (dest, src);
	printf("%s", ft_strncat(dest, src, 1));
	return(0);
}*/
