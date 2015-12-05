/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#ifndef _ASM_GENERIC_ERRNO_BASE_H
#define _ASM_GENERIC_ERRNO_BASE_H

	0	"Succes"
	1	"Operation not permitted"
	2	"No such file or directory"
	3	"No such process"
	4	Interrupted system call"
	5	I/O error"
	6	No such device or address
	7	Argument list too long
	8	Exec format error
	9	Bad file number
	10	No child processes
	11	Try again
	12	Out of memory
	13	Permission denied
	14	Bad address
	15	Block device required
	16	Device or resource busy
	17	File exists
	18	Cross-device link
	19	No such device
	20	Not a directory
	21	Is a directory
	22	Invalid argument
	23	File table overflow
	24	Too many open files
	25	Not a typewriter
	26	Text file busy
	27	File too large
	28	No space left on device
	29	Illegal seek
	30	Read-only file system
	31	Too many links
	32	Broken pipe
	33	Math argument out of domain of func
	34	Math result not representable

#endif
*/

#include <errno.h>
#include <stdio.h>

int main()
{
	int	i;

	i = 0;
	while (i < 100)
	{
		errno = i;
		perror("coucou");
	}
	return (0);
}
