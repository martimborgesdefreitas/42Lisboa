/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:50:17 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/28 15:05:11 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		i2 = 0;
		while (i2 < size - 1 - i)
		{
			if (tab[i2] > tab[i2 + 1])
			{
				temp = tab[i2];
				tab[i2] = tab[i2 + 1];
				tab[i2 + 1] = temp;
			}
			i2++;
		}
		i++;
	}
}

/*int main(void)
{
	int arr[3];

	arr[0] = 8;
	arr[1] = 7;
	arr[2] = 9;
	ft_sort_int_tab(arr, 3);
	return (0);
}*/

/*i = 0; // print array loop
while (i < size)
{
	printf("%d", tab[i]);
	if (i < size - 1)
		printf(", ");
	i++;	
}
printf("\n");*/