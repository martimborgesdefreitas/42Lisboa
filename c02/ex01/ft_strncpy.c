/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:14:00 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/24 20:57:29 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char str[4];
	char dest[10];

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'y';
	str[3] = '\0';
	ft_strncpy(dest, str, 5);
	printf("%s\n", dest);
	return(0);
}*/