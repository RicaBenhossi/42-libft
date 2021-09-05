/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:50:11 by luricard          #+#    #+#             */
/*   Updated: 2021/09/05 14:18:48 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	unsigned int	number;
	size_t			size;

	size = 0;
	number = n;
	if (number)
	{
		while (number > 0)
		{
			size++;
			number = number / 10;
		}
	}
	else
		size++;
	return (size);
}

static unsigned long	get_unsigned(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return ((unsigned int)n);
		else
			return (n * -1);
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		is_negative;
	size_t	size;
	size_t	number;

	is_negative = n < 0;
	number = get_unsigned(n);
	size = get_size(number) + is_negative;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size--] = '\0';
	if (number == 0)
		result[size] = '0';
	else
	{
		while (number > 0)
		{
			result[size--] = (number % 10) + '0';
			number = number / 10;
		}
	}
	if (is_negative)
		result[size] = '-';
	return (result);
}
