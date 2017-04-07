/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
*/

#include	<stdio.h>
#include	"CRmain.h"
#include	"error/flag_error.h"

void		handle_flag(char *argv[], int *cnt)
{
  int		i = *cnt;

  switch (argv[i][1])
    {
    case 'a':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'A':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'b':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'B':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'c':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'C':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'd':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'D':
      // Not implemented yet
      err_unknown_flag(argv[i][1]);
      break;
    case 'i':
      puts("Ask to print info");
      break;
    default:
      err_unknown_flag(argv[i][1]);
      break;
    }
  *cnt = i;
}

void		init_global_var()
{
  g_progname = NULL;
  g_extension = strdup(".rte");
  g_files_path = NULL;
}

void		init(int argc, char *argv[])
{
  init_global_var();
  for (int i = 1; i < argc; i++)
    {
      if (argv[i][0] == '-')
	handle_flag(argv, &i);
      else
	{
	  if (is_a_file(argv[i]))
	    add_to_files_path(argv[i]);
	}
    }
}
