/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 14:40:29 by dpearson          #+#    #+#             */
/*   Updated: 2017/09/30 14:40:30 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Using ulimit -n, I reach the assumption that we will not go above 4864 fds.
*/

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define FD_MAX 4864
#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

int		get_next_line(const int fd, char **line);

#endif