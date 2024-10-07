/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:13:12 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/07 20:35:44 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_length(char **strs, char *sep, int size)
{
	int	i;
	int	tlen;

	i = 0;
	tlen = 0;
	while (i < size)
	{
		tlen = tlen + ft_strlen(strs[i]);
		if (i < size - 1)
			tlen = tlen + ft_strlen(sep);
		i++;
	}
	return (tlen);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	if (size == 0)
	{
		dest = malloc (1 * sizeof(char));
		if (dest)
			dest[0] = '\0';
		return (dest);
	}
	dest = malloc ((ft_length(strs, sep, size) + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	i = 0;
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*sep;
	int	size;
	char	*dest;
	char	*strs[] = {"uno", "dos", "tres", "quatro"};
	sep = "9849871";
	size = 0;

	dest = ft_strjoin(size, strs, sep);
	printf("%s\n", dest);
	free (dest);
	return (0);
}*/