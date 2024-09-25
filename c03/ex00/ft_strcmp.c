/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:28:49 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/25 23:29:30 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int main(void)
{
	int result;
	char s1[4];
	char s2[4];

	s1[0] = 'H';
	s1[1] = 'e';
	s1[2] = 'y';
	s2[0] = 'H';
	s2[1] = 'e';
	s2[2] = 'y';
	s1[3] = '\0';
	s2[3] = '\0';
	result = ft_strcmp(s1, s2);
	printf("%d", result);
	return (0);
}*/