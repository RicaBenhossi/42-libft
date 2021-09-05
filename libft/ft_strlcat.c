/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:09:16 by luricard          #+#    #+#             */
/*   Updated: 2021/08/20 23:34:02 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_result;

	len_dst = ft_strlen(dst);
	if (len_dst > size)
		len_dst = size;
	len_result = (len_dst - 1);
	while (src[++len_result - len_dst] && (len_result + 1) < size)
		dst[len_result] = src[len_result - len_dst];
	if (len_dst < size)
		dst[len_result] = '\0';
	return (len_dst + ft_strlen(src));
}
