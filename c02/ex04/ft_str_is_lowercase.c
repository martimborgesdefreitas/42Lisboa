/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:22:23 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/24 22:35:40 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	char str[4];
	int result;

	str[0] = '\0';
	str[1] = 'a';
	str[2] = 'a';
	str[3] = '\0';
	result = ft_str_is_lowercase(str);
	printf("%d", result);
	return(0);
}*/