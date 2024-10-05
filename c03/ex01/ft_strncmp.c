/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:00:03 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/05 15:05:15 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 == *s2 && *s1 != '\0' && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}

/*int main(void)
{
	int result;
	char s1[4];
	char s2[4];
	unsigned    int limit;

	s1[0] = 'H';
	s1[1] = 'e';
	s1[2] = 'y';
	s2[0] = '\0';
	s2[1] = 'e';
	s2[2] = 'y';
	s1[3] = '\0';
	s2[3] = '\0';
	limit = 2;
	result = ft_strncmp(s1, s2, limit);
	printf("%d", result);
	return (0);
}*/