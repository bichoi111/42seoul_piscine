/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bichoi <bichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:28:46 by bichoi            #+#    #+#             */
/*   Updated: 2020/12/02 21:14:41 by bichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long a;

	a = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (a * a < nb)
		a++;
	if (a * a == nb)
		return (a);
	return (0);
}
