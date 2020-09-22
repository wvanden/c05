/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 22:38:39 by wvan-den          #+#    #+#             */
/*   Updated: 2020/09/22 23:26:36 by wvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int a;

	if (nb < 0)
		return (0);
	a = 1;
	while (a * a < (unsigned int)nb)
		a++;
	return ((a * a == (unsigned int)nb) ? a : 0);
}