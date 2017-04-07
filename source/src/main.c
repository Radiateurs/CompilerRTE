/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
*/

#include	"CRmain.h"
#include	"CRmain_init.h"
#include	"CRquit.h"

int		main(int argc, char *argv[], __attribute__((__unused_))char *env[])
{
  int		exit_status;

  init(argc, argv);
  quit();
  return (exit_status);
}
