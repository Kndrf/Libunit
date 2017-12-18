/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn_printing.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 16:08:09 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 16:25:52 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libunit.h"

void	ft_unicorn(void)
{
	if (g_res != g_tot)
	{
		ft_putstr(RED"Cmon bro ur bad ! U got only ");
		ft_putnbr(g_res);
		ft_putstr(" / ");
		ft_putnbr(g_tot);
		ft_putstr(". U suck.\n\n"NC);
	}
	else
	{
		ft_putstr(GREEN"Mother fucking nice bro ^__^ U got ");
		ft_putnbr(g_res);
		ft_putstr(" / ");
		ft_putnbr(g_tot);
		ft_putstr(". Well. GG.\n\n"NC);
	}
	ft_putstr("|&|&|&|&|&|&|&|&|&|&|&|&|&|&|&|&|&|&|&|&|&\n\n");
}
