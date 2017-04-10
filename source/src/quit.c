/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
*/

#include	"CRmain.h"
#include	"ptr_manip/c2d.h"

void		free_global_variable()
{
  free(g_progname);
  free(g_extension);
  pm_c2d_free(g_files_path);
}

void	        quit()
{
  free_global_variable();
}
