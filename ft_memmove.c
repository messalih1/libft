/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:42:05 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:42:12 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;

	destination = dest;
	source = src;
	if (dest != 0 || src != 0)
	{
		if (destination > source)
		{
			while (n--)
			{
				destination[n] = source[n];
			}
		}
		else
		{
			ft_memcpy(destination, source, n);
		}
	}
	return (dest);
}
