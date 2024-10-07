/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:40:03 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/07 19:33:24 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc ((max - min) * sizeof(int *));
	if (*range == NULL)
	{
		*range = NULL;
		return (-1);
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

	min = 0;
	max = 3;
	size = ft_ultimate_range(&arr, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	printf("size of the array is: %d", size);
	free(arr);
	return (0);
}*/