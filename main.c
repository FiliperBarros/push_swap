/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:14:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/05/23 22:14:38 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
		argv = ft_split(argv[1], " ");
	stack_init(&a, argv + 1, argc == 2);

	if (!stack_sorted)
	{
		if(lst_size(&a) == 2)
			sa(&a);
		else if )ize(&a) == 3)
			tiny_sort(&a);
		else
			push_swap(&a);
	}
	/*nao pode repetir numeros, ou seja, 1 2 2 3*/
}