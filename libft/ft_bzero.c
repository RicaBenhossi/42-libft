/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:06:14 by luricard          #+#    #+#             */
/*   Updated: 2021/08/10 10:06:16 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*origin_str;

	origin_str = (char *) s;
	while (n)
	{
		*origin_str = '\0';
		origin_str++;
		n--;
	}
	return (*s);
}
