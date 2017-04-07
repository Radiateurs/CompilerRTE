/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
*/

#include	"CRmain.h"

void		free_global_variable()
{
  free(g_progname);
  free(g_extension);
}

void	        quit()
{
  free_global_variable();
}
