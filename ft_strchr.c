/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:46:33 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:46:40 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*p;
	int			i;
	int			len;

	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		if (str[i] == (char)c)
		{
			p = &str[i];
			return ((char *)p);
		}
		i++;
	}
	return (0);
}
