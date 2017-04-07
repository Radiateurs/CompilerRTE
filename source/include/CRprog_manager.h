/*
** Created by Pierre-Marie Danieau for CASedi
**
** Header for every program output headers in CR
**
** Started the 06-04-2017
*/

#ifndef		__CRPROG_MANAGER_H__
# define	__CRPROG_MANAGER_H__

/*
** Every global name MUST contains "g_" at the begin of their names.
*/

char		*g_progname;
char		*g_extension;

char		**g_files_path;

bool		is_a_file(char *file_name);
/*
** Purpose :
** Verify if the given file has the good extension.
**
** Returns :
** true if the file has the good extension,
** false if not.
**
** Argument :
** file_name is the name (or path, doesn't care)
** of a file that's going to be compiled.
*/

void		add_to_files_path(char *file_path);
/*
** Purpose :
** Add to the g_files_path array the given file's path
**
** Returns :
** Nothing
**
** Argument :
** char *file_path is the path of a file that's going to be compiled.
*/

#endif		/* __CRPROG_MANAGER_H__ */
