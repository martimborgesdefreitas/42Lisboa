/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:23:17 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/05 16:04:38 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb < 10)
	{
		print = nb + 48;
		write(1, &print, 1);
		return ;
	}
	ft_putnbr(nb / 10);
	print = nb % 10;
	print = print + 48;
	write(1, &print, 1);
}

/*int main(void)
{
	int nb;

	nb = 123;
	ft_putnbr(nb);
	return (0);
}*/