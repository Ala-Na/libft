/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 16:18:16 by anadege           #+#    #+#             */
/*   Updated: 2021/03/17 11:18:09 by elanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;
	size_t	l_ind;

	i = 0;
	l_len = 0;
	if (big == NULL)
		return (NULL);
	if (little == NULL || little[0] == 0)
		return ((char *)big);
	while (little[l_len])
		l_len++;
	while (big[i] && i <= len)
	{
		l_ind = 0;
		while ((i + l_ind) < len && big[i + l_ind] == little[l_ind] &&
			big[i + l_ind] != 0)
		{
			if (little[l_ind + 1] == '\0')
				return ((char *)&(big[i]));
			l_ind++;
		}
		i++;
	}
	return (NULL);
}
