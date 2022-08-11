/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <hrolle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:16:37 by hrolle            #+#    #+#             */
/*   Updated: 2022/06/16 11:16:17 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/ft_printfd.h"

int	len_atoi(const char *str, int *i)
{
	unsigned int	nbr;

	nbr = 0;
	if (str[*i] == '.')
		*i += 1;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		nbr = (nbr * 10) + (str[*i] - '0');
		*i += 1;
	}
	*i -= 1;
	return (nbr);
}