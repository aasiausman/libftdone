/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:30:41 by aausman           #+#    #+#             */
/*   Updated: 2023/11/21 10:14:11 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	r;
	unsigned long long	max;
	int					sign;
	int					i;

	i = 0;
	sign = 1;
	r = 0;
	max = 9223372036854775807;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		r = (r * 10) + str[i++] - '0';
	if (r > max && sign == 1)
		return (-1);
	if (r > max && sign == -1)
		return (0);
	return ((int)r * sign);
}
