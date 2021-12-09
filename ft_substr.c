/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:52:05 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:52:11 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (start < ft_strlen(s) && len--)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
