/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:59:34 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/08 14:10:28 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "stdio.h"

void	print_stack(t_stack *a)
{
	if (!a)
		printf("EMPTY STACK");
	while (a)
	{
		printf("value:%d   |  index: %d\n", a->value, a->index);
		a = a->next;
	}
	printf("\n");
}

// void print_moves(t_stack *a, t_stack *b)
// {
// 	printf("\n----------------------------------------------------\n\n");
// 	printf("STACK A\n");
// 	print_stack(a);
// 	printf("\n");
// 	printf("STACK B\n");
// 	print_stack(b);
// 	printf("\n\n\n");
// }
// int	main(int ac, char **argv)
// {
// 	t_stack *a;
// 	t_stack	one, two, three, four;
// 	t_stack	*b;

// 	a = NULL;
// 	b = NULL;
	
// 	//t_stack *a;

	
// 	if (ac != 5)
// 		return (-1);
// 	//allocate memory for nodes; 
	
// 	// attribute value to respective node;
// 	one.value = ft_atoi(argv[1]);
// 	two.value = ft_atoi(argv[2]);
// 	three.value = ft_atoi(argv[3]);
// 	four.value = ft_atoi(argv[4]);	
// 	// link the list
	
// 	a= &one;
// 	one.next = &two;
// 	two.next = &three;
// 	three.next = &four;
// 	four.next = NULL;

	
	 	
// 	print_moves(a, b);
	
// 	sort_three_numbers(&a);

// 	print_moves(a, b);
// 	// print_moves(a, b);
	
// 	// // ra(&a);
// 	// print_moves(a, b);
	
// 	// // rb(&b);
// 	// print_moves(a, b);
// }	int highest_value;
