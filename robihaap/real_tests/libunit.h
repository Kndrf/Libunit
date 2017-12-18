/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libunit.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:42:02 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 16:32:52 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <sys/wait.h>
# include <stdio.h>
# include <signal.h>
# include <stdlib.h>
# include "libft.h"

# define RED	"\033[31m"
# define NC		"\033[0m"
# define YELLOW	"\033[33m"
# define GREEN	"\033[32m"
# define BLUE	"\033[36m"

typedef struct		s_unit_test
{
	char					*funct;
	int						(*test_funct)(void);
	struct s_unit_test		*next;
}					t_unit_test;

t_unit_test			*load_test(t_unit_test *testlist, char *s, int (*f)(void));
int					launch_test(t_unit_test *testlist);
int			g_res;
int					g_tot;
void				ft_unicorn(void);
#endif
