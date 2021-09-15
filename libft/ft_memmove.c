/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:08:37 by luricard          #+#    #+#             */
/*   Updated: 2021/09/13 21:31:59 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	char	*aux_src;
	char	*aux_dest;

	aux_src = (char *)src;
	aux_dest = (char *)dst;
	if ((!dst && !src) || !size)
		return (dst);
	if (aux_dest < aux_src)
	{
		while (size--)
			*aux_dest++ = *aux_src++;
	}
	else
	{
		while (--size)
			aux_dest[size] = aux_src[size];
		aux_dest[size] = aux_src[size];
	}
	return (dst);
}
