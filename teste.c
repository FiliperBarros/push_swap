/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:59:34 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/28 19:09:34 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"


void	print_stack(t_stack *a)
{
	if (!a)
		ft_printf("EMPTY STACK");
	while (a)
	{
		ft_printf("value:%d   |  index: %d\n", a->value, a->index);
		a = a->next;
	}
}

void print_moves(t_stack *a, t_stack *b)
{
	ft_printf("\n----------------------------------------------------\n\n");
	ft_printf("STACK A\n");
	print_stack(a);
	ft_printf("\n");
	ft_printf("STACK B\n");
	print_stack(b);
	ft_printf("\n\n\n");
}
int	main(int ac, char **argv)
{
	t_stack *a;
	t_stack	one, two, three, four;
	t_stack	*b;

	a = NULL;
	b = NULL;
	
	//t_stack *a;

	
	if (ac != 5)
		return (-1);
	//allocate memory for nodes; 
	
	// attribute value to respective node;
	one.value = ft_atoi(argv[1]);
	two.value = ft_atoi(argv[2]);
	three.value = ft_atoi(argv[3]);
	four.value = ft_atoi(argv[4]);	
	// link the list
	
	a= &one;
	one.next = &two;
	two.next = &three;
	three.next = &four;
	four.next = NULL;

	
	 	
	print_moves(a, b);
	
	pb(&b, &a);
	print_moves(a, b);
	
	ra(&a);
	print_moves(a, b);
	
	rb(&b);
	print_moves(a, b);
}