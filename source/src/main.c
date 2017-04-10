/*
** Created by Pierre-Marie Danieau for CASedi.
**
** Started the 06-04-2017
*/

#include	"CRmain.h"
#include	"CRmain_init.h"
#include	"CRquit.h"

int		main(int argc, char *argv[], char *env[])
{
  int		exit_status = 0;

  init(argc, argv);
  parser_main();
  quit();
  return (exit_status);
}
