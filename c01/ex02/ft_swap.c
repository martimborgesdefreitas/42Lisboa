/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:29:23 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/21 19:52:39 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	store;

	store = *a;
	*a = *b;
	*b = store;
}

/*int main(void)
{
	int aa;
	int bb;

	aa = 45;
	bb = 98;
	ft_swap(&aa, &bb);
	printf("%d", aa);
	printf("%d", bb);
	return(0);
}*/