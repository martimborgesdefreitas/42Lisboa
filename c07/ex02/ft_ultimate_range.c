/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:40:03 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/01 21:16:14 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	*range = malloc ((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;
	int	size;

	min = -68;
	max = 74;
	size = ft_ultimate_range(&arr, min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	printf("size of the array is: %d", size);
	free(arr);
	return (0);
}*/