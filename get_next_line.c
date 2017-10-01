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

/*
**	What size should your buffer be? How many times do you need to read the FD to get all data ?
**	Stack/heap memory
**	Life cycle of buffer
**
**	All heap allocated memory space must be properly freed when necessary.
**
**	Write a function that returns a line read from a file descriptor.
**
**	A line ends at a \n or EOF
**
**	Return 1 for read, 0 for EOF, -1 for error
**
**	Save result without \n
**
**	Read from file, stdoutput, redirection, etc.
**/



int		fresh(int fd, char **line, char *my_line)
{
	
}

int		old(int fd, char **line, char *my_line)
{

}

/*
**	When our program runs and opens files, there will be less open than FD_MAX.
**
**	By using a static variable that will last until our program ends, we can see
**	which files have been read before, allowing us to continue reading after
**	having switched to a new file.
**
*/

int		get_next_line(const int fd, char **line)
{
	static char	*my_line[FD_MAX];

	if (!(line) || fd < 0 || fd > FD_MAX)
		return (-1);
	return ((my_line[fd]) ? old(fd, line, &my_line) : fresh(fd, line, &my_line))
}