/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messalih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:40:46 by messalih          #+#    #+#             */
/*   Updated: 2021/11/28 11:40:53 by messalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		n = n / 10 ;
		i++;
	}
	return (i);
}

static char	*is_negative(long n)
{
	int		len;
	char	*ptr;
	int		i;
	int		l;

	len = count_digits(n) + 1;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	n = n * -1;
	i = 0;
	l = len;
	len = len -1;
	while (len > i)
	{
		ptr[len--] = (n % 10) + 48;
		n = n / 10;
	}
	ptr[0] = '-';
	ptr[l] = '\0';
	return (ptr);
}

static char	*is_positive(long n)
{
	int		len;
	char	*ptr;

	len = count_digits(n);
	if (n == 0)
		return (ptr = ft_strdup("0"));
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	while (len--)
	{
		ptr[len] = (n % 10) + 48;
		n = n / 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	if (n < 0)
	{
		return (is_negative(n));
	}
	else
	{
		return (is_positive(n));
	}
}
