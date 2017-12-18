/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   00_itoa_launcher.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 19:15:59 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:55:13 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "itoa_tests.h"

int	itoa_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_putstr("ITOA : ");
	testlist = load_test(testlist, "Basic test : ", &itoa_basic_test);
	testlist = load_test(testlist, "Basic test 2 : ", &itoa_basic_test2);
	testlist = load_test(testlist, "Negative test : ", &negative_test);
	testlist = load_test(testlist, "Zero test : ", &zero_test);
	testlist = load_test(testlist, "INT_MIN test : ", &int_min_test);
	testlist = load_test(testlist, "INT_MAX test : ", &int_max_test);
	return (launch_test(testlist));
}
