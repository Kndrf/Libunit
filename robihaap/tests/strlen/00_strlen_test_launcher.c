/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   00_strlen_launcher.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:33:15 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:45:25 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "strlen_tests.h"

size_t	ft_strlen_ko(char *s)
{
	size_t	i;

	i = 42;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlen_segv(char *s)
{
	size_t	i;

	i = 0;
	s = NULL;
	s[0] = 'w';
	return (i);
}

size_t	ft_strlen_buse(char *s)
{
	size_t	i;
	char	*bus;

	s = NULL;
	i = 2;
	bus = "ET BOUM";
	bus[i] = 'K';
	return (i);
}

int		strlen_test_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ft_putstr("STRLEN : \n");
	testlist = load_test(testlist, "Test OK : ", &basic_test_ok);
	testlist = load_test(testlist, "Test KO : ", &basic_test_ko);
	testlist = load_test(testlist, "SEG FAULT : ", &test_segv);
	testlist = load_test(testlist, "BUS ERROR : ", &test_buse);
	return (launch_test(testlist));
}
