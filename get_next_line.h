/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:12:09 by pmartine          #+#    #+#             */
/*   Updated: 2016/01/28 19:18:45 by pmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# define BUFF_SIZE 32

typedef struct		s_fd
{
	int				fd;
	char			*text;
	struct s_fd		*next;
	struct s_fd		*begin_list;
}					t_fd;

int					get_next_line(int const fd, char **line);
#endif
