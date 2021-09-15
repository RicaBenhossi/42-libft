/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:06:30 by luricard          #+#    #+#             */
/*   Updated: 2021/09/13 20:20:03 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t arr_len, size_t size)
{
	void	*mem_alloc;

	mem_alloc = malloc(size * arr_len);
	if (!mem_alloc)
		return (0);
	ft_bzero(mem_alloc, (arr_len * size));
	return (mem_alloc);
}
