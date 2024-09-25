/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:31:42 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/25 23:58:01 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
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
	char	src[2];

	dest[0] = 'H';
	dest[1] = 'e';
	dest[2] = '\0';
	src[0] = 'y';
	src[1] = '\0';
	//ft_strcat (dest, src);
	printf("%s", ft_strcat(dest, src));
	return(0);
}*/