/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:11:05 by aausman           #+#    #+#             */
/*   Updated: 2023/11/20 19:06:04 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	size_t	word_count;
	int		skip;

	word_count = 0;
	skip = 1;
	while (*s)
	{
		if (*s != c && skip == 1)
		{
			skip = 0;
			word_count++;
		}
		else if (*s == c)
			skip = 1;
		s++;
	}
	return (word_count);
}

static	char	*ft_word_dup(const char *s, char c)
{
	char	*word_c;
	int		i;
	int		size;

	size = 0;
	while (s[size] != '\0' && s[size] != c)
		size++;
	word_c = (char *)malloc(sizeof(char) * (size + 1));
	if (!word_c)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word_c[i] = s[i];
		i++;
	}
	word_c[i] = 0;
	return (word_c);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;

	i = 0;
	if (!s)
		return (NULL);
	word = word_count(s, c);
	strs = (char **)malloc(sizeof(char *) * (word + 1));
	if (!strs)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			strs[i] = ft_word_dup(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	strs[i] = 0;
	return (strs);
}

/*#include <stdlib.h>
 #include <stddef.h>
 int main() {
     const char *input = "i love my cat";
     char **result = ft_split(input, ' ');
     // Print the split strings
     for (size_t i = 0; result[i] != NULL; i++) {
         printf("%s\n", result[i]);
         free(result[i]); // Free each allocated string
     }
     free(result); // Free the array of pointers
     return 0;
 }*/