/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:49:28 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/01 21:11:14 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	min = -168;
	max = 574;
	arr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/