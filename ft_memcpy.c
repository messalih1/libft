/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:41:38 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:41:55 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;

	destination = dest;
	source = src;
	if (dest != 0 || src != 0)
	{
		while (n--)
		{
			*destination = *source;
			destination++;
			source++;
		}
	}
	return (dest);
}
