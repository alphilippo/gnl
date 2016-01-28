/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:42:24 by pmartine          #+#    #+#             */
/*   Updated: 2015/12/01 18:53:38 by pmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = NULL;
	str = malloc(sizeof(char) * size + 1);
	if (str)
	{
		i = 0;
		while (i <= size)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
