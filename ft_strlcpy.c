/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:49:40 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:49:47 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(source);
	j = 0;
	if (dest == 0 || source == 0)
		return (0);
	if (destsize != 0)
	{
		while (source[j] != '\0' && j < destsize - 1)
		{
			dest[j] = source[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
