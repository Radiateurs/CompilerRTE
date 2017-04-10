/*
** Created by Pierre-Marie Danieau for libptr_manip
**
** This header prototypes the functions present in c2d.c
**
** Started the 07-04-2017
*/

#ifndef		__C2D_H__
# define	__C2D_H__

# include	<stdlib.h>
# include	<string.h>

typedef		char** c2d;

c2d		pm_c2d_creat(char *str);

int		pm_c2d_length(c2d origin);

c2d		pm_c2d_copy(c2d origin);

c2d		pm_c2d_copy_add_fields_top(c2d origin, int fields);
c2d		pm_c2d_copy_add_fields_down(c2d origin, int fields);

c2d		pm_c2d_copy_remove_fields_down(c2d origin, int fields);
c2d		pm_c2d_copy_remove_fields_top(c2d origin, int fields);

c2d		pm_c2d_add_field_top(c2d origin);
c2d		pm_c2d_add_fileds_top(c2d origin, int nb);
c2d		pm_c2d_add_field_down(c2d origin);
c2d		pm_c2d_add_fileds_down(c2d origin, int nb);

c2d		pm_c2d_remove_field_down(c2d origin);
c2d		pm_c2d_remove_fields_down(c2d origin, int nb);
c2d		pm_c2d_remove_field_top(c2d origin);
c2d		pm_c2d_remove_fields_top(c2d origin, int nb);

c2d		pm_c2d_append(c2d origin, c2d to_add);
c2d		pm_c2d_add_str_down(c2d origin, char *to_add);
c2d		pm_c2d_add_str_top(c2d origin, char *to_add);

void		pm_c2d_free(c2d origin);
c2d		pm_c2d_remove(c2d origin, c2d to_remove);
c2d		pm_c2d_remove_str(c2d origin, char *to_remove);

void		pm_c2d_dump(c2d origin);

#endif		/* __C2D_H__ */
