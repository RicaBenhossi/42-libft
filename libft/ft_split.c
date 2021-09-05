/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 06:13:15 by luricard          #+#    #+#             */
/*   Updated: 2021/09/05 13:51:05 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_elements(const char *s, char c)
{
	int	i;
	int	is_word;
	int	word_count;

	i = 0;
	is_word = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		if (s[i] == c && is_word == 1)
			is_word = 0;
		i++;
	}
	return (word_count);
}

static char	*get_word(const char *s, int start, int end)
{
	int		i;
	int		word_len;
	char	*word;

	word_len = end - start + 1;
	word = (char *)malloc((word_len * sizeof(char)));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word_start;
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_elements(s, c) + 1));
	if (!result)
		return (NULL);
	i = -1;
	j = 0;
	word_start = -1;
	while (++i <= (int) ft_strlen(s))
	{
		if (s[i] != c && word_start < 0)
			word_start = i;
		else if ((s[i] == c || i == (int) ft_strlen(s)) && word_start >= 0)
		{
			result[j++] = get_word(s, word_start, i);
			word_start = -1;
		}
	}
	result[j] = NULL;
	return (result);
}
