/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 23:29:34 by wvan-den          #+#    #+#             */
/*   Updated: 2020/09/22 23:43:58 by wvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_pirme(int nb)
{
	unsigned int a;

	if ((nb < 3) || !(nb % 2))
		return (nb == 2);
	a = 3;
	while (a * a <= (unsigned int)nb)
	{
		if (!(nb % a))
			return (0);
		a += 2;
	}
	return (1);
}