/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:46:52 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:46:58 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s) + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memmove(ptr, s, len);
	return (ptr);
}
