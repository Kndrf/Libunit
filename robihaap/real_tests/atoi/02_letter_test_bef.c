/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   02_letter_test_bef.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 19:02:18 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 16:00:21 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "atoi_tests.h"
#include <stdlib.h>

int	letter_test_bef(void)
{
	if (atoi("a2209") == ft_atoi("a2209"))
		return (0);
	else
		return (-1);
}
