/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   02_basic_test2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:23:58 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:56:26 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libunit.h"
#include <string.h>

int	strlen_basic_test2(void)
{
	if (strlen("0123456789") == ft_strlen("0123456789"))
		return (0);
	else
		return (-1);
}
