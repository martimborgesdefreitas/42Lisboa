/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:46:54 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/24 22:54:24 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[4];
	int	result;

	str[0] = '\0';
	str[1] = 'A';
	str[2] = 'A';
	str[3] = '\0';
	
	result = ft_str_is_printable(str);
	printf("%d", result);
	return(0);
}*/