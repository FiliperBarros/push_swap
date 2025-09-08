/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_max_bytes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:08:44 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/03 14:54:08 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_max_bytes(int	max_index)
{
	int	bytes;
	
	bytes = 0;
	while(max_index >> bytes != 0)
		bytes++;
	return (bytes);
}
