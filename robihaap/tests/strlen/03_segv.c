/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   03_empty_string_test.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:10:02 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:45:54 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "strlen_tests.h"
#include <string.h>

int	test_segv(void)
{
	if (strlen("") == ft_strlen_segv(""))
		return (0);
	else
		return (-1);
}
