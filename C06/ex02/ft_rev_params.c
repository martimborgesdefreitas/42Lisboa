/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:52:21 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/29 18:16:19 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int		j;
	int		wback;
	char	lf;

	j = 0;
	lf = 10;
	while (j < argc - 1)
	{
		wback = argc - 1 - j;
		write(1, argv[wback], ft_strlen(argv[wback]));
		write(1, &lf, 1);
		j++;
	}
	return (0);
}
