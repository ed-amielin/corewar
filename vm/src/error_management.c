/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_managment.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykliek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:57:12 by ykliek            #+#    #+#             */
/*   Updated: 2019/10/17 10:57:13 by ykliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/virtual_machine.h"

void	err_massage(char *err)
{
	ft_putstr_fd(err, 2);
	ft_putstr_fd("\n", 2);
	exit(0);
}