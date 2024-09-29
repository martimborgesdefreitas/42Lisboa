/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:53:58 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/29 22:00:11 by marbarre         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	print_argv(int argc, char *argv[])
{
	int		j;
	char	lf;

	j = 0;
	lf = 10;
	while (j < argc)
	{
		write(1, argv[j], ft_strlen(argv[j]));
		write(1, &lf, 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		i2;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		i2 = 0;
		while (i2 < argc - 1 - i)
		{
			if (ft_strcmp(argv[i2], argv[i2 + 1]) > 0)
			{
				temp = argv[i2];
				argv[i2] = argv[i2 + 1];
				argv[i2 + 1] = temp;
			}
			i2++;
		}
		i++;
	}
	print_argv(argc, argv);
	return (0);
}
