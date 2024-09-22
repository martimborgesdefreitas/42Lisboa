/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:50:17 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/22 02:34:34 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void    ft_sort_int_tab(int *tab, int size)
{
	int i;
    int i2;
	int temp_arr[size];

	i = 0;
    i2 = 0;
	while (i < size) // populate temp_array with the highest value
    {
        temp_arr[i] = tab[i];
        if (tab[i] < temp_arr[i])
            tab[i] = INT_MAX;
            i++;
    }
    while (i2 < size)
    {
        tab[i2] = temp_arr[size - 1 - i2]; // repopulate tab
        i2++;
    }
}

int main(void)
{
    int arr[3];

    arr[0] = 8;
	arr[1] = 7;
	arr[2] = 9;
    ft_sort_int_tab(arr, 3);
    return (0);
}