/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   04_complex_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:25:44 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:56:36 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libunit.h"
#include <string.h>

int	complex_test(void)
{
	if (strlen("    HELLO\n\t\r") == ft_strlen("    HELLO\n\t\r"))
		return (0);
	else
		return (-1);
}
