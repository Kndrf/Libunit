/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   01_basic_test.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:57:23 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 16:00:13 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "atoi_tests.h"
#include <stdlib.h>

int	atoi_basic_test(void)
{
	if (atoi("2209") == ft_atoi("2209"))
		return (0);
	else
		return (-1);
}
