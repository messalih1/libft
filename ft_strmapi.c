/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:50:17 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:50:25 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	if (s == 0)
		return (0);
	else if (f == 0)
		return (ft_strdup(s));
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
