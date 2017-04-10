/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
*/

#include	"CRmain.h"
#include	"ptr_manip/c2d.h"

bool		is_a_file(char *file_name)
{
  if (strcmp(file_name + (strlen(file_name) - 4), g_extension) == 0)
    return (true);
  return (false);
}

void		add_to_files_path(char *path)
{
  g_files_path = pm_c2d_add_str_down(g_files_path, path);
}
