/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:12:07 by aausman           #+#    #+#             */
/*   Updated: 2023/11/23 13:54:43 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	msize;
	char	*str;
	char	*src;

	if (!s)
		return (NULL);
	src = (char *)s + start;
	if ((size_t) start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(src))
		msize = ft_strlen(src);
	else
		msize = len;
	str = malloc(sizeof(char) * (msize + 1));
	if (!str)
		return (NULL);
	a = 0;
	while (s[start + a] && a < len)
	{
		str[a] = s[a + start];
		a++;
	}
	str[a] = 0;
	return (str);
}
