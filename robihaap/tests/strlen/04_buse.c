/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   04_complex_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:25:44 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:46:00 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "strlen_tests.h"
#include <string.h>

int	test_buse(void)
{
	if (strlen("    HELLO\n\t\r") == ft_strlen_buse("    HELLO\n\t\r"))
		return (0);
	else
		return (-1);
}
