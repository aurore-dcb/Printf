/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:08:08 by aducobu           #+#    #+#             */
/*   Updated: 2023/05/04 10:39:48 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main()
{
	char *s = NULL;
	
	printf("--------- %%c ---------\n");
	printf("A : %c\n B : %c\n", 'A', 66);
	ft_printf("A : %c\n B : %c\n\n", 'A', 66);
	
	printf("--------- %%s ---------\n");
	printf("%s\n", "ceci est un test");
	ft_printf("%s\n", "ceci est un test\n");

	printf("test chaine nulle : %s\n", s);
	ft_printf("test chaine nulle : %s\n\n", s);
	
	printf("--------- %%p ---------\n");
	printf("test pointeur : %p\n", &s);
	ft_printf("test pointeur : %p\n\n", &s);
	
	printf("test pointeur 2: %p\n", s);
	ft_printf("test pointeur 2: %p\n\n", s);
	
	printf("--------- %%d ---------\n");
	printf("test numero %d\n", 5);
	ft_printf("test numero %d\n\n", 5);

	printf("test min %d\n", INT_MIN);
	ft_printf("test min %d\n\n", INT_MIN);
	
	printf("test max %d\n", INT_MAX);
	ft_printf("test max %d\n\n", INT_MAX);
	
	printf("--------- %%i ---------\n");
	printf("test numero %i\n", 6);
	ft_printf("test numero %i\n\n", 6);

	printf("test min %i\n", INT_MIN);
	ft_printf("test min %i\n\n", INT_MIN);
	
	printf("test max %i\n", INT_MAX);
	ft_printf("test max %i\n\n", INT_MAX);
	
	printf("--------- %%u ---------\n");
	ft_printf("test 1 %u\n", -47);
	printf("test 1 %u\n\n", -47);

	printf("test 2 %u\n", INT_MIN);
	ft_printf("test 2 %u\n\n", INT_MIN);
	
	printf("test 3 %u\n", INT_MAX);
	ft_printf("test 3 %u\n\n", INT_MAX);

	printf("--------- %%xX ---------\n");
	printf("int %d -> hexa %x\n", 842726, 842726);
	ft_printf("int %d -> hexa %x\n\n", 842726, 842726);
	
	printf("int %d -> hexa %X\n", 842726, 842726);
	ft_printf("int %d -> hexa %X\n\n", 842726, 842726);

	// printf("--------- %%mix ---------\n");
	// int a = 5;
	// int *p = &a;
        // printf("%d, %u, %p\n", p, p, p);
	// ft_printf("%d, %u, %p\n\n", p, p, p);
	
	printf("--------- %% ---------\n");
	printf("dernier test 100%% reussi ?\n");
	ft_printf("dernier test 100%% reussi ?\n");
}

