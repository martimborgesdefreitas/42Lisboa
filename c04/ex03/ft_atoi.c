/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:50:41 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/05 16:01:08 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	checkspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	posneg;
	int	num;

	posneg = 0;
	num = 0;
	i = checkspace(str);
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			posneg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	if (posneg % 2 != 0)
		return (-num);
	else
		return (num);
}

/*int main(void)
{
	//char str[22] = "     ---+--+1234ab567";
	//char str[] = "-2147483648";
	char	str[] = "     -+-+-++--+-2077782356";
	printf("%d", ft_atoi(str));
	return (0);
}*/