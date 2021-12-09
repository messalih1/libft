/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:45:10 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:46:20 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**ft_free(char **str, int index)
{
	while (index--)
	{
		free(str[index]);
	}
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**str;

	i = 0;
	if (s == 0)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (str == 0)
		return (0);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		len = 0;
		while (s[len] != '\0' && s[len] != c)
			len++;
		if (len != 0)
			str[i++] = ft_substr(s, 0, len);
		if (len != 0 && str[i - 1] == NULL)
			return (ft_free(str, i - 1));
		s += len;
	}
	str[i] = NULL;
	return (str);
}
