/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:31:09 by aausman           #+#    #+#             */
/*   Updated: 2023/11/21 08:52:19 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	char	*ptr;

	if (size != 0 && count > UINT32_MAX / size)
		return (NULL);
	ptr = malloc (count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero (ptr, count * size);
	return (ptr);
}
