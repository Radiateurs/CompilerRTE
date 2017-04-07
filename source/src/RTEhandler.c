/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
*/

#include	"CRmain.h"
#include	"fast_io/fast_io.h"

bool		is_a_file(char *file_name)
{
  if (strcmp(file_name + (strlen(file_name) - 4), g_extension) == 0)
    return (true);
  return (false);
}

void		add_to_files_path(char *path)
{
  std_fast_printf("[%s] : Good extention (%s)\n", path, g_extension);
  /* TODO
  ** Add path to g_files_path container
  */
}
