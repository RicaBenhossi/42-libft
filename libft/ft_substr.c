/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:28:06 by luricard          #+#    #+#             */
/*   Updated: 2021/09/05 19:36:50 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux_str;
	size_t	result_len;

	if (!s)
		return (NULL);
	result_len = ft_strlen(s);
	if (result_len > start)
		len = ft_strnlen(&s[start], len);
	else
		return (ft_strdup(""));
	aux_str = (char *)malloc(sizeof(char) * len + 1);
	if (!aux_str)
		return (NULL);
	ft_strlcpy(aux_str, &s[start], len + 1);
	return (aux_str);
}
