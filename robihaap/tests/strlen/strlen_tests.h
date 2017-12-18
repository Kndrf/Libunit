/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strlen_tests.h                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:52:39 by dguelpa      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 15:46:14 by dguelpa     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef STRLEN_TESTS_H
# define STRLEN_TESTS_H

# include "../libunit.h"

int		strlen_test_launcher();
int		basic_test_ok();
int		basic_test_ko();
int		test_segv();
int		test_buse();
size_t	ft_strlen_ko(char *s);
size_t	ft_strlen_segv(char *s);
size_t	ft_strlen_buse(char *s);

#endif
