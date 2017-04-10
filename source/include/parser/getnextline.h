/*
** Created by Pierre-Marie Danieau for CASedi
**
** Header for get_next_line function
**
** Started the 10-04-2017
*/

#ifndef		__GETNEXTLINE_H__
# define	__GETNEXTLINE_H__

# include	<unistd.h>

# include	"ptr_manip/c1d.h"

# define	TO_READ	(4)

char	*get_next_line(const int fd);

#endif		/* __GETNEXTLINE_H__ */
