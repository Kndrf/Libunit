/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   02_basic_test2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 19:46:18 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:55:23 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "itoa_tests.h"
#include <string.h>

int	itoa_basic_test2(void)
{
	if (!strcmp("1", ft_itoa(1)))
		return (0);
	else
		return (-1);
}
