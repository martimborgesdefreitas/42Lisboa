/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:06:55 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/20 23:11:37 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char	comb[3];
	char	c;
	char	t;
	char	u;

	c = '0';
	t = '0';
	u = '0';
	while (c <= '7')
	{
		t = c + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				if (c == '7' && t == '8' && u == '9')
				{
					comb[0] = c;
					comb[1] = t;
					comb[2] = u;
					write(1, comb, 3);
					write(1, ".\n", 2);
				}
				else
				{
					comb[0] = c;
					comb[1] = t;
					comb[2] = u;
					write(1, comb, 3);
					write(1, ", ", 2);
				}
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