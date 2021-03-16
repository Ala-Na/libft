/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:59:44 by anadege           #+#    #+#             */
/*   Updated: 2021/03/10 11:54:24 by elanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	if (start > size || !(str = malloc(sizeof(*s) * (len + 1))))
		return (0);
	i = 0;
	while (s[start])
	{
		if (i < len)
		{
			str[i] = s[start];
			i++;
		}
		start++;
	}
	str[i] = 0;
	return (str);
}
