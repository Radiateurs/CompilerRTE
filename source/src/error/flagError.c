/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
**
** This file contains functions that handle the
** ErrorOutput for execution flags.
**
 */

#include	"fast_io/error.h"

void		err_unknown_flag(char c)
{
  err_fast_printf("ERROR : Unknown flag -%c.\n", c);
}
