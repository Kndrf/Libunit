/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   01_basic_test.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:26:39 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:56:22 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libunit.h"
#include <string.h>

int	strlen_basic_test(void)
{
	if (strlen("HELLO") == ft_strlen("HELLO"))
		return (0);
	else
		return (-1);
}
