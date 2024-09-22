/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:55:40 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/21 22:38:34 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/* printf("a = %d and b = %d", *a, *b); */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}

/*int main(void)
{
	int a1;
	int a2;

	a1 = 24;
	a2 = 7;
	ft_ultimate_div_mod(&a1, &a2);
	return(0);
}*/