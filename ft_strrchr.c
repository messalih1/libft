/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:51:21 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:51:27 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char	*str, int c)
{
	const char	*p;
	int			i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			p = &str[i];
			return ((char *)p);
		}
		i--;
	}
	return (0);
}
