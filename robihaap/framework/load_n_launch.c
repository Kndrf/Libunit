/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   load_n_launch.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <robihaap@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 10:06:07 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 17:08:27 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*initialize(char *s, int (*f)(void))
{
	t_unit_test *new;

	if (!(new = (t_unit_test*)malloc(sizeof(t_unit_test))))
		return (NULL);
	new->funct = s;
	new->test_funct = f;
	new->next = NULL;
	return (new);
}

t_unit_test	*load_test(t_unit_test *testlist, char *s, int (*f)(void))
{
	t_unit_test	*tmp;

	if (testlist == NULL)
		testlist = initialize(s, f);
	else
	{
		tmp = testlist;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = initialize(s, f);
	}
	return (testlist);
}

void		ft_waiter(void)
{
	pid_t	w;
	int		status;

	w = wait(&status);
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ft_putstr(RED" [SEGV]\n"NC);
		else if (WTERMSIG(status) == SIGBUS)
			ft_putstr(BLUE" [BUSE]\n"NC);
		else if (WTERMSIG(status) == SIGABRT)
			ft_putstr(YELLOW" [SIGABRT]\n"NC);
	}
	if (WEXITSTATUS(status) == 42)
		g_res++;
}

void		viva_la_norma_mother_fucker(t_unit_test *tmp)
{
	int	status;

	ft_putstr(tmp->funct);
	if (tmp->test_funct() == 0)
	{
		ft_putstr(GREEN" [OK]\n"NC);
		status = 42;
	}
	else
	{
		status = -1;
		ft_putstr(RED" [KO]\n"NC);
	}
	exit(status);
}

int			launch_test(t_unit_test *testlist)
{
	t_unit_test	*tmp;
	pid_t		father;

	g_res = 0;
	g_tot = 0;
	tmp = testlist;
	while (tmp)
	{
		father = fork();
		if (father < 0)
			ft_putstr(RED"fork() failed\n"NC);
		else if (father > 0)
			ft_waiter();
		else if (father == 0)
			viva_la_norma_mother_fucker(tmp);
		g_tot++;
		tmp = tmp->next;
	}
	ft_unicorn();
	if (g_res != g_tot)
		return (-1);
	else
		return (0);
}
