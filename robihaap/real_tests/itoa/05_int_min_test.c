/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   05_int_min_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 19:52:37 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:55:53 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "itoa_tests.h"
#include <string.h>

int	int_min_test(void)
{
	if (!strcmp("-2147483648", ft_itoa(-2147483648)))
		return (0);
	else
		return (-1);
}