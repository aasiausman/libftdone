/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:09:25 by aausman           #+#    #+#             */
/*   Updated: 2023/11/23 13:47:32 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	unsigned char		*src1;

	if ((dst == NULL && src == NULL ))
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst < src)
	{
		while (len--)
		{
			*dst1++ = *src1++;
		}
	}
	else
	{
		dst1 = ((unsigned char *)dst + len - 1);
		src1 = ((unsigned char *)src + len - 1);
		while (len--)
		{
			*dst1-- = *src1--;
		}
	}
	return (dst);
}
