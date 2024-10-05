/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:03:25 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/05 16:39:07 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1)
{
	int	i;
	int	j;
	int	result;

	result = 1;
	i = -1;
	while (s1[++i] != '\0')
	{
		j = i + 1;
		while (s1[j] != '\0')
		{
			if (s1[i] == s1[j])
				result = 0;
			j++;
		}
	}
	return (result);
}

int	minusplus(char *base)
{
	int	i;
	int	result;

	i = -1;
	result = 1;
	while (base[++i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			result = 0;
	}
	return (result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = ft_strlen(base);
	if (i >= 2 && base != NULL && ft_strcmp(base) == 1 && minusplus(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(-nbr, base);
		}
		else if (nbr >= i)
		{
			ft_putnbr_base(nbr / i, base);
			ft_putnbr_base(nbr % i, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

/*int main(void)
{
	int     nbr = 42;
	char    *base = "123456789abcdef";
	ft_putnbr_base(nbr, base);
}*/