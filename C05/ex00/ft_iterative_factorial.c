/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:05:39 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/05 16:43:23 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	calc;

	if (nb < 0)
		return (0);
	calc = 1;
	while (nb > 1)
	{
		calc = calc * nb;
		nb = nb - 1;
	}
	return (calc);
}

/*int	main(void)
{
	int n;

	n = 8;
	ft_iterative_factorial(n);
	printf("%d", ft_iterative_factorial(n));
	return (0);
}*/