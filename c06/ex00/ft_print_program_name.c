/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:26:22 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/29 01:34:37 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	i;
	char	*str;
	char	count;

	i = 10;
	*str = argv[0];
	while (argv[count] != '\0')
		count++;
	if (argc == 1)
	{
		write (1, argv[0], count);
		write (1, &i, 1);
	}
	return (0);
}
