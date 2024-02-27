/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:11:21 by aausman           #+#    #+#             */
/*   Updated: 2023/11/21 10:15:59 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(s1);
	i = 0;
	ptr = (char *) malloc(sizeof(*ptr) * len + 1);
	if (ptr != NULL)
	{
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
