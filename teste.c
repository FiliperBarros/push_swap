/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:59:34 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/12 16:54:14 by frocha-b         ###   ########.fr       */
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
int	main(int ac, char **argv)
{
	t_stack *head;
	t_stack	*one;
	t_stack *two;
	t_stack	*three;
	t_stack	*b;

	head = NULL;
	b = NULL;
	
	//t_stack *a;

	
	if (ac != 5)
		return (-1);
	//allocate memory for nodes; 
	head = malloc(sizeof(t_stack));
	one = malloc(sizeof(t_stack));
	two = malloc(sizeof(t_stack));
	three = malloc(sizeof(t_stack));
	
	// attribute value to respective node;
	head->value = ft_atoi(argv[1]);
	one->value = ft_atoi(argv[2]);
	two->value = ft_atoi(argv[3]);
	three->value = ft_atoi(argv[4]);
	
	// link the list
	head->next = one;
	head->next->next = two;
	head->next->next->next = three;
	head->next->next->next->next = NULL;

	ft_printf("STACK A\n");
	print_stack(head);
	ft_printf("\n");
	ft_printf("STACK B\n");
	print_stack(b);
	ft_printf("\n");
	
	push(&b, &head);
	
	ft_printf("\n----------------------------------------------------\n\n");
	ft_printf("STACK A\n");
	print_stack(head);
	ft_printf("\n");
	ft_printf("STACK B\n");
	print_stack(b);
}