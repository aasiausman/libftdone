/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:11:51 by aausman           #+#    #+#             */
/*   Updated: 2023/11/21 16:07:14 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	while (s2[i] != '\0')
		i++;
	if (*s2 == '\0')
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	while (*s1 != '\0' && *s2 != '\0' && len >= i)
	{
		a = 0;
		while (s1[a] == s2[a] && s2[a] != '\0')
		{
			a++;
		}
		if (s2[a] == '\0')
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
