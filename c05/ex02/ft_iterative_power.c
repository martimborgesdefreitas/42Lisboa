/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:02:50 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/28 21:15:10 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	i = 1;
	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*int	main(void)
{
	int nb;
	int power;

	nb = 2;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/