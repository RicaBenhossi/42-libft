/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:06:45 by luricard          #+#    #+#             */
/*   Updated: 2021/08/10 10:06:48 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	letter;

	letter = c;
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	if (letter >= 'a' && letter <= 'z')
		return (1);
	return (0);
}
