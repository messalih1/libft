/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:50:54 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:51:01 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t		i;
	size_t		j;

	if (find[0] == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		if (s[i] == find[j])
		{
			while (i + j < len && s[i + j] == find[j])
			{
				j++;
				if (find[j] == '\0')
					return ((char *)&s[i]);
			}
		}
		i++;
	}
	return (0);
}
