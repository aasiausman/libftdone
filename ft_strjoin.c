/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:11:28 by aausman           #+#    #+#             */
/*   Updated: 2023/11/23 13:51:40 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	newstr = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		newstr[i] = s2[a];
		i++;
		a++;
	}
	newstr[i] = '\0';
	return (newstr);
}
