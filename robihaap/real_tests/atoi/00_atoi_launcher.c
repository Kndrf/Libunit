/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   00_atoi_launcher.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:45:16 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:58:52 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "atoi_tests.h"

int	atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_putstr("ATOI : ");
	testlist = load_test(testlist, "Basic test : ", &atoi_basic_test);
	testlist = load_test(testlist, "Letter test before : ", &letter_test_bef);
	testlist = load_test(testlist, "Letter test after : ", &letter_test_aft);
	testlist = load_test(testlist, "Spaces test - : ", &spaces_test_m);
	testlist = load_test(testlist, "Spaces test + : ", &spaces_test_p);
	testlist = load_test(testlist, "Spaces test n : ", &spaces_test_n);
	testlist = load_test(testlist, "Empty test : ", &empty_test);
	return (launch_test(testlist));
}
