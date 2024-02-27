/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:09:21 by aausman           #+#    #+#             */
/*   Updated: 2023/11/21 10:15:10 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//erorr//S

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*dst1;
	const char		*src1;

	dst1 = (char *)dst;
	src1 = (const char *)src;
	if (len == 0 || dst1 == src1)
		return (dst1);
	i = 0;
	while (len > i)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
