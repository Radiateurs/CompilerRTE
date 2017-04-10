/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 10-04-2017
*/

#include	"CRmain.h"
#include	"parser/getnextline.h"
#include	"parser/CRparser.h"
#include	"fast_io/std.h"

void		parser_main()
{
  int		fd;
  int		files;
  char		*line;

  files = 0;
  while (g_files_path[files] != NULL)
    {
      fd = open(g_files_path[files], O_RDONLY);
      while ((line = get_next_line(fd)) != NULL)
	{
	  std_fast_printf("%s\n", line);
	  free(line);
	}
      close(fd);
      files++;
    }
  return ;
}
