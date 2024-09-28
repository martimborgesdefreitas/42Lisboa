/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:59:34 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/29 00:07:21 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[4];

	str[0] = 'H';
	str[1] = 'A';
	str[2] = '3';
	str[3] = '\0';
	
	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
	return(0);
}*/