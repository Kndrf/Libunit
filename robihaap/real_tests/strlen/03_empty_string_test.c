/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   03_empty_string_test.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:10:02 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:56:31 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libunit.h"
#include <string.h>

int	empty_string_test(void)
{
	if (strlen("") == ft_strlen(""))
		return (0);
	else
		return (-1);
}
