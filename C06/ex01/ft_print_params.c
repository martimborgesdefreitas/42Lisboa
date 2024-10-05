/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:52:23 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/29 01:51:12 by marbarre         ###   ########.fr       */
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
	char	lf;

	j = 1;
	lf = 10;
	while (j < argc)
	{
		write(1, argv[j], ft_strlen(argv[j]));
		write(1, &lf, 1);
		j++;
	}
	return (0);
}
