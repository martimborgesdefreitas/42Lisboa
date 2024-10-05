/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:10:34 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/02 21:49:59 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

/*int main(void)
{
	int	result;
	char str[4];

	str[0] = 'S';
	str[1] = 'u';
	str[2] = 'p';
	str[3] = '\0';
	result = ft_strlen(str);
	printf("length = %d", result);
	return (0);
}*/