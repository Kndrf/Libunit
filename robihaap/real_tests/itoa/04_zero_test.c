/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   04_zero_test.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 19:50:55 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:55:42 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "itoa_tests.h"
#include <string.h>

int	zero_test(void)
{
	if (!strcmp("0", ft_itoa(0)))
		return (0);
	else
		return (-1);
}
