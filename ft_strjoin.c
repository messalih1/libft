/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:49:03 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:49:07 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	len;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memmove(ptr, s1, s1_len);
	ft_memmove(ptr + s1_len, s2, s2_len);
	ptr[len] = '\0';
	return (ptr);
}
