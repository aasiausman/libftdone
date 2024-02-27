/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:11:32 by aausman           #+#    #+#             */
/*   Updated: 2023/11/23 13:52:20 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	a = 0;
	while (src[a] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[a];
		i++;
		a++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[a]));
}
