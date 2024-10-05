/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:26:22 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/05 16:52:19 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	i;
	char	*str;
	int		count;

	i = 10;
	count = 0;
	str = argv[0];
	while (str[count] != '\0')
		count++;
	if (argc == 1)
	{
		write (1, argv[0], count);
		write (1, &i, 1);
	}
	return (0);
}
