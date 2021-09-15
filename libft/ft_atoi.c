/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:05:32 by luricard          #+#    #+#             */
/*   Updated: 2021/09/13 21:26:22 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	invalid_char(char chr)
{
	return (ft_isalpha(chr) || (!ft_isprint(chr) && !(chr <= 13 && chr >= 9)));
}

static int	is_signal(int *signal, char chr)
{
	if (chr == '-')
	{
		*signal *= -1;
		return (1);
	}
	else if (chr == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	char	*aux_nptr;
	int		number;
	int		sign;

	aux_nptr = (char *)nptr;
	number = 0;
	sign = 1;
	while (!ft_isdigit(*aux_nptr))
	{
		if (is_signal(&sign, *aux_nptr))
		{
			aux_nptr++;
			break ;
		}
		if (invalid_char(*aux_nptr))
			break ;
		aux_nptr++;
	}
	while (ft_isdigit(*aux_nptr))
		number = (number * 10) + ((*aux_nptr++) - '0');
	return (number * sign);
}
