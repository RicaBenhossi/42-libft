/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:09:45 by luricard          #+#    #+#             */
/*   Updated: 2021/09/05 17:02:12 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;
	int		i;

	found = (char *) s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (found[i] == (char) c)
			return (&found[i]);
		i--;
	}
	return (0);
}
