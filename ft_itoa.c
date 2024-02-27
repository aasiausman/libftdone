/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:09:06 by aausman           #+#    #+#             */
/*   Updated: 2023/11/23 13:46:58 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != '\0')
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	bool	sign;

	sign = n < 0;
	count = digit_count(n) + sign;
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	if (sign == 1)
	{
		*str = '-';
		count--;
		str[count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (count > sign)
	{
		count--;
		str[count] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
