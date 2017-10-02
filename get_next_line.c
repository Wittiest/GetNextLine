/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 14:40:22 by dpearson          #+#    #+#             */
/*   Updated: 2017/09/30 14:40:23 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		old(int fd, char **line, char *my_line)
{
/*
**  FUNCTION THAT RETURNS LINE FOR FD THE FIRST TIME
**  1. declare int r, char *buf, char *tmp.
**  2. Make a new string buf, at BUFF_SIZE (MALLOC CHECK) (return -1 if fail).
**  5. LOOP
**    A. While the my_line has no newline
**       c. read BUFF_SIZE into buf (READ CHECK)
**       c1. if (r ==0 ) BREAK 
**       a. Set tmp to ft_strnew of *myline length + r (MALLOC CHECK)
**       b. ft_strcpy *text into tmp.
**       d. ft_strncat r bits into tmp from buf.
**       f. ft_strdup tmp into *text (MALLOC CHECK)
**       g. free tmp
**  6. Set line, the given line from the initial program call, to change_line(my_line).
**  7. free(buf)
**  8. Return 0 if r is 0 or if **line is NULL, otherwise Return 1
*/
}

static	char	*change_line(char **str)
{
/*
**  FUNCTION THAT COPIES OUR STRING UP TO ITS NEW LINE:
**  1. We copy our string up to its newline in line.
**  2. If there is more in our string after that point, we find the length 
**  3. We make tmp the rest of the string after what has been copied in line.
**     If we are already at the end, tmp = ft_strnew(1)
**  4. We free str and set it to a dup of tmp.
**  5. We free tmp.
**  6. Return the initial "line" we made in 1
**
*/
}

int		new(int fd, char **line, char *my_line)
{
/*
**  FUNCTION THAT RETURNS LINE FOR FD THE FIRST TIME
**  1. declare int r, char *buf, char *tmp.
**  2. Make a new string buf, at BUFF_SIZE (MALLOC CHECK) (return -1 if fail).
**  3. Read the fd into this buf up to BUFF_SIZE (READ CHECK) (free buf return -1 if fail).
**  4. ft_strdup buf into *my_line. (MALLOC CHECK)
**  5. LOOP
**    A. While the my_line has no newline and r is positive
**       a. Set tmp to ft_strnew of *myline length + r (MALLOC CHECK)
**       b. ft_strcpy *text into tmp.
**       c. read BUFF_SIZE into buf (READ CHECK)
**       d. ft_strncat r bits into tmp from buf.
**       e. free(*text)
**       f. ft_strdup tmp into *text (MALLOC CHECK)
**       g. free tmp
**  6. Set line, the given line from the initial program call, to change_line(my_line).
**  7. free(buf)
**  8. Return 0 if r is 0 or if **line is NULL, otherwise Return 1
*/
}
/*
**	When our program runs and opens files, there will be less open than 4864.
**
**	By using a static variable that will last until our program ends, we can see
**	which files have been read before, allowing us to continue reading after
**	having switched to a new file.
**
*/

int		get_next_line(const int fd, char **line)
{
	static char	*my_line[4864];

	if (!(line) || fd < 0 || fd > 4864)
		return (-1);
	return ((my_line[fd]) ? old(fd, line, &my_line) : fresh(fd, line, &my_line))
}