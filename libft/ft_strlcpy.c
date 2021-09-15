/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:09:22 by luricard          #+#    #+#             */
/*   Updated: 2021/09/13 21:13:49 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*aux_dest;
	size_t	i;

	aux_dest = dest;
	if (size == 0)
		aux_dest[ft_strlen(aux_dest)] = '\0';
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			aux_dest[i] = src[i];
			i++;
		}
		aux_dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
