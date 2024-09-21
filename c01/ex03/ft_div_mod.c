/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:06:43 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/21 21:53:54 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

/*int main(void)
{
	int a1;
	int a2;
	int div1;
	int mod1;

	a1 = 23;
	a2 = 7;
	div1 = 99;
	mod1 = 98;
	ft_div_mod(a1, a2, &div1, &mod1);
	return(0);
}*/