/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:06:01 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/27 00:59:54 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] != '\0')
		{
			if (to_find[j] == str[i + j])
				j++;
			else
				break ;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char dest[3];
	char src[2];
	char *result;

	dest[0] = 'H';
	dest[1] = 'e';
	dest[2] = '\0';
	src[0] = 'e';
	src[1] = '\0';
	result = ft_strstr(dest, src);
	printf("%s\n", result);
	return (0);
}*/