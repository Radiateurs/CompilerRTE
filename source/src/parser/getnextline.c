/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 10-04-2017
*/

#include	"getnextline.h"

char		*get_next_line(const int fd)
{
  char		buff[TO_READ + 1];
  static char	*to_ret = NULL;
  char		*tmp;
  int		inc;
  int		nb_read;

  while ((nb_read = read(fd, buff, TO_READ)) > 0)
    {
      buff[nb_read] = '\0';
      to_ret = pm_c1d_concat_nproof(to_ret, buff);
      if (pm_c1d_contains(to_ret, '\n') >= 0)
	{
	  tmp = pm_c1d_substr_copy(to_ret, '\n');
	  to_ret = pm_c1d_cut_at(to_ret, '\n');
	  return (tmp);
	}
    }
  if (to_ret)
    {
      tmp = pm_c1d_copy(to_ret);
      free(to_ret);
      to_ret = NULL;
      return (tmp);
    }
  return (NULL);
}
