/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:32:23 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/22 16:49:15 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*int main(void)
{
	char str[4];

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'y';
	str[3] = '\0';
	ft_putstr(str);
	return(0);
}*/