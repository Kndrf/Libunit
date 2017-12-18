/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 14:41:30 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:50:33 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "atoi/atoi_tests.h"
#include "itoa/itoa_tests.h"
#include "strlen/strlen_tests.h"

int	main(void)
{
	strlen_launcher();
	atoi_launcher();
	itoa_launcher();
	return (0);
}
