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

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# define GET_NEXT_LINE_H
# define BUFF_SIZE 5
# define READ(R, B, S, F) if ((R = read(F, B, S)) == -1){free(B); return (-1);}
# define SAFEMALLOC(X) if (!X) {return (-1);}
# define SAFE_FREE_MALLOC(X, B) if (!X) {free(B); return (-1);}

int				get_next_line(const int fd, char **line);

#endif
