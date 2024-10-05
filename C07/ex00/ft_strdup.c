/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:59:58 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/30 20:47:08 by marbarre         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*new_src;
	int		i;

	new_src = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (new_src == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new_src[i] = src[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}

/*int	main(void)
{
	char	*src = "I hope this works";
	char	*dupe;

	dupe = ft_strdup(src);
	if (dupe == NULL)
		return (1);
	printf("%s", dupe);
	free(dupe);
	return (0);
}*/
