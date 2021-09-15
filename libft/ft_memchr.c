/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:07:32 by luricard          #+#    #+#             */
/*   Updated: 2021/09/04 14:26:05 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux_s;
	unsigned char	aux_c;

	aux_s = (unsigned char *)s;
	aux_c = (unsigned char)c;
	while (n--)
	{
		if (*aux_s == aux_c)
			return ((void *)aux_s);
		aux_s++;
	}
	return (NULL);
}
