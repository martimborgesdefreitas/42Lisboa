/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:45:35 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/22 01:46:49 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev_i;
	int temp_arr[size];

	i = 0;
	rev_i = 0;
	while (i < size)
	{
		temp_arr[i] = tab[i];
		i++;
	}
	while (rev_i < size)
	{
		tab[rev_i] = temp_arr[size - 1 - rev_i];
		printf("%d", tab[rev_i]);
		if (rev_i < size -1)
			printf(", ");
		rev_i++;
	}
	printf("\n");
}

int main(void)
{
    int arr[3];

    arr[0] = 7;
	arr[1] = 8;
	arr[2] = 9;
    ft_rev_int_tab(arr, 3);
    return (0);
}