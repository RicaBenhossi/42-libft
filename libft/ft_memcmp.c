/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:07:45 by luricard          #+#    #+#             */
/*   Updated: 2021/08/19 19:03:27 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*aux_s1;
	char	*aux_s2;
	int		i;

	aux_s1 = (char *)s1;
	aux_s2 = (char *)s2;
	if (n <= 0)
		return (0);
	else
	{
		i = 0;
		while (--n)
		{
			if (aux_s1[i] != aux_s2[i])
				break ;
			i++;
		}
	}
	return ((unsigned char)aux_s1[i] - (unsigned char)aux_s2[i]);
}
