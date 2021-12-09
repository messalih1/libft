/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:51:49 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:51:56 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	x;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	x = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
		i++;
	while (i < len && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	ptr = malloc(sizeof(char) * (len - i) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[x] = s1[i];
		x++;
		i++;
	}
	ptr[x] = '\0';
	return (ptr);
}
