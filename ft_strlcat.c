/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:49:19 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:49:29 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		len_src;
	size_t		len;
	size_t		i;
	size_t		len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	len = len_dst;
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (dstsize > len_dst)
	{
		while (len < dstsize - 1 && src[i] != '\0')
		{
			dst[len] = src[i];
			len++;
			i++;
		}
		dst[len] = '\0';
		return (len_dst + len_src);
	}
	else
		return (dstsize + len_src);
}
