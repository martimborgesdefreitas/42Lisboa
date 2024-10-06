/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:13:12 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/06 19:13:31 by marbarre         ###   ########.fr       */
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
		tlen = tlen + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	tlen = tlen - ft_strlen (sep);
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
		return ((char *)malloc (sizeof(char)));
	dest = malloc ((ft_length(strs, sep, size) + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	i = 0;
	dest[0] = 0;
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
	sep = "/ ";
	size = 4;

	dest = ft_strjoin(size, strs, sep);
	printf("%s", dest);
	free (dest);
	return (0);
}*/