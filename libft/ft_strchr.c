/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:08:59 by luricard          #+#    #+#             */
/*   Updated: 2021/08/19 19:30:21 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*found;

	found = (char *)s;
	while (*found)
	{
		if (*found == (char) c)
			return (found);
		found++;
	}
	if (*found == (char) c)
		return (found);
	return (0);
}
