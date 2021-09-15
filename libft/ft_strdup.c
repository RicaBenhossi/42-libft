/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:09:11 by luricard          #+#    #+#             */
/*   Updated: 2021/09/13 21:16:06 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*aux_s;
	char	*aux_return;
	int		size;

	aux_s = (char *)s;
	size = ft_strlen(aux_s);
	aux_return = ft_calloc((size + 1), sizeof(char));
	if (!aux_return)
		return (NULL);
	ft_strlcpy(aux_return, aux_s, size + 1);
	aux_return[size] = '\0';
	return (aux_return);
}
