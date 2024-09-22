/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:06:55 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/21 17:05:19 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	t;
	char	u;

	c = '0';
	while (c <= '7')
	{
		t = c + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				write(1, &c, 1);
				write(1, &t, 1);
				write(1, &u, 1);
				if (c != '7')
					write(1, ", ", 2);
				u++;
			}
			t++;
		}
		c++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
