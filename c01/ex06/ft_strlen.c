/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:12:56 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/28 15:00:46 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int main(void)
{
	char    str[4];
	int result;

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'y';
	str[3] = '\0';
	result = ft_strlen(str);
	printf("strlen = %d", result);
	return(0);
}*/