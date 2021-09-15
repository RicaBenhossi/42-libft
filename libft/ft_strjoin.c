/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:51:35 by luricard          #+#    #+#             */
/*   Updated: 2021/09/13 21:20:28 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	result_size;
	size_t	s1_size;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	result_size = s1_size + ft_strlen(s2);
	result = malloc(sizeof(*result) * (result_size + 1));
	if (!result)
		return (NULL);
	if (*s1)
		ft_strlcpy(result, s1, (s1_size + 1));
	ft_strlcpy(&result[s1_size], s2, (result_size + 1));
	result[result_size] = '\0';
	return (result);
}
