/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   00_strlen_launcher.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:33:15 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:56:57 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "strlen_tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ft_putstr("STRLEN : ");
	testlist = load_test(testlist, "Basic test : ", &strlen_basic_test);
	testlist = load_test(testlist, "Basic test 2 : ", &strlen_basic_test2);
	testlist = load_test(testlist, "Empty string test : ", &empty_string_test);
	testlist = load_test(testlist, "Complex test : ", &complex_test);
	return (launch_test(testlist));
}
