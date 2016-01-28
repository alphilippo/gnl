/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:30:50 by pmartine          #+#    #+#             */
/*   Updated: 2015/12/03 14:54:10 by pmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(str, s, len);
	str[len] = '\0';
	return (str);
}
