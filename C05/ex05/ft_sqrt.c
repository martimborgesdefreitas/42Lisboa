/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:39:11 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/06 16:10:17 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = 0;
	while (nb > 0)
	{
		nb = nb - i;
		i = i + 2;
		num++;
	}
	if (nb == 0)
		return (num);
	else
		return (0);
}

/*int main(void)
{
	int	nb;

	nb = 121;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/