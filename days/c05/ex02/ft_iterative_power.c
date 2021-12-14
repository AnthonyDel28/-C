/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthonyd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 08:25:43 by anthonyd          #+#    #+#             */
/*   Updated: 2019/07/08 07:01:52 by anthonyd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;

	if (power < 1)
		return (!power);
	n = nb;
	while (--power)
		n *= nb;
	return (n);
}
