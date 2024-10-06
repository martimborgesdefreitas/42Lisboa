/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:35:43 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/06 18:48:09 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (a == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	words;
	int	is_word;

	i = 0;
	words = 0;
	is_word = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 0 && is_word == 0)
		{
			is_word = 1;
			words++;
		}
		else if (is_sep(str[i], charset) == 1 && is_word == 1)
			is_word = 0;
		i++;
	}
	return (words);
}

int	word_length(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && is_sep(str[len], charset) == 0)
		len++;
	return (len);
}

char	*skip_sep(char *str, char *charset)
{
	while (*str != '\0' && is_sep(*str, charset) == 1)
		str++;
	return (str);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*word;
	int		len;
	int		i;

	i = 0;
	arr = malloc((word_count(str, charset) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*str != '\0' && i < word_count(str, charset))
	{
		str = skip_sep(str, charset);
		len = word_length(str, charset);
		word = malloc((len + 1) * sizeof(char));
		if (word == NULL)
			return (NULL);
		ft_strncpy(word, str, len);
		word[len] = '\0';
		arr[i++] = word;
		str = str + len;
	}
	arr[i] = NULL;
	return (arr);
}

int	main(void)
{
	char	*str = "split-this-like-a-draft";
	char	*charset = "-";
	char	**arr;
	int		i;

	arr = ft_split(str, charset);
	i = 0;
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}