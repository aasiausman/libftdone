/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:11:25 by aausman           #+#    #+#             */
/*   Updated: 2023/11/21 10:16:10 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned	int, char*))
{
	unsigned int	i;
	unsigned int	len;

	if (s == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
