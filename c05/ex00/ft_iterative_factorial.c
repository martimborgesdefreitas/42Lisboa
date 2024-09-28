/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:05:39 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/28 21:43:11 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	calc;

	calc = nb;
	while (nb - 1 != 0)
	{
		calc = calc * (nb - 1);
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