/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:07:52 by luricard          #+#    #+#             */
/*   Updated: 2021/09/13 20:28:25 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_aux;
	char	*src_aux;

	if ((!src && !dest) || !n)
		return (dest);
	dest_aux = (char *)dest;
	src_aux = (char *)src;
	while (n--)
		*dest_aux++ = *src_aux++;
	return (dest);
}
