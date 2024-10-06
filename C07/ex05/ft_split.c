/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:35:43 by marbarre          #+#    #+#             */
/*   Updated: 2024/10/06 01:38:05 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	**ft_split(char *str, char *charset)
{
	char	*arr;
	int i;

	*arr = malloc((word_count(str, charset) + 1) * sizeof(char));
	if (*arr == NULL)
		return (NULL);
	i = 0;
	while (i <)
}