/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:08:37 by luricard          #+#    #+#             */
/*   Updated: 2021/08/10 10:14:05 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	char	*aux_src;
	char	*aux_dest;
	size_t	count;

	aux_src = (char *)src;
	aux_dest = (char *)dst;
	if (aux_dest < aux_src)
	{
		while (size--)
		{
			*aux_dest++ = *aux_src++;
		}
	}
	else
	{
		count = size - 1;
		while (count)
		{
			aux_dest[count] = aux_src[count];
			count--;
		}
		aux_dest[count] = aux_src[count];
	}
	return (dst);
}
