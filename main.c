/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/06 16:43:18 by tmullan        #+#    #+#                */
/*   Updated: 2020/02/13 00:16:49 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define TEST38 "|38|(30.20d) \t\t'%30.20d'\n"
#define TEST39 "|39|(-0-000---30.20d) \t\t'%-0-000---30.20d'\n"
#include "ft_printf.h"

int		main(void)
{
	int num = -470;
	int num1 = 0;
	int num2 = 42;
	char c = 'K';
	/* int *p = &num; */
	/* int car= 'c'; */


	ft_printf("I fucking hate this program |%-8.1d|\n", num2);
	printf("I fucking hate this program |%-8.1d|\n", num2);
	printf(" (%d)\n", printf("08.*(-4): |%8.*i|", -4, 42));
	ft_printf(" (%d)\n", ft_printf("08.*(-4): |%8.*i|", -4, 42));
	printf(" (%d)\n", printf("08.*(-4): |%8.*i|", 4, 42));
	ft_printf(" (%d)\n", ft_printf("08.*(-4): |%8.*i|", 4, 42));

	/* ft_printf("I fucking hate this program |%2.2d|\n", num);
	printf("I fucking hate this program |%2.2d|\n", num);
	printf("\n");
	printf("\n");
	ft_printf("FT Xtreme madonna arg CAPS |%0.0d|\n", num1);
	printf("OG Xtreme madonna arg CAPS |%0.0d|\n", num1);
	printf("\n");
	printf("\n");
	ft_printf("Xtreme madonna arg CAPS |%-10X|\n", num1);
	printf("Xtreme madonna arg CAPS |%-10X|\n", num1);
	ft_printf("Xtreme madonna arg |%20d|\n", num1);
	printf("Xtreme madonna arg |%20d|\n", num1);
	printf("\n");
	printf("\n");
	ft_printf("Xtreme madonna arg CAPS |%020.0d|\n", num1);
	printf("Xtreme madonna arg CAPS |%020.0d|\n", num1);
	ft_printf("Xtreme madonna arg |%.20d|\n", num1);
	printf("Xtreme madonna arg |%.20d|\n", num1);
	printf(" OG C flag width |%5c|\n", 'c');
	ft_printf(" FT C flag width |%5c|\n", 'c');
	printf("\n");
	printf("OG C flag 0  |%01c|\n", 'c');
	ft_printf("FT C flag 0  |%01c|\n", 'c');
	printf("\n");
	printf("OG C flag -  |%-5c|\n", 'c');
	ft_printf("FT C flag -  |%-5c|\n", 'c');
	printf("\n");
	printf("OG C flag precision |%.5c|\n", 'c');
	ft_printf("FT C flag precision |%.5c|\n", 'c');
	printf("\n");
	printf("OG C flag precision |%5.1c|\n", 'c');
	ft_printf("FT C flag precision |%5.1c|\n", 'c');


	ft_printf("FT Width test:|%10d||%10d|\n", num, num1);
	printf("OG Width test:|%10d||%10d|\n", num, num1);
	printf("\n");
	ft_printf("FT 0 flag test:|%010d||%010d|\n", num, num1);
	printf("OG 0 flag test:|%010d||%010d|\n", num, num1);
	printf("\n");
	ft_printf("FT -Width test:|%-10d||%-10d|\n", num, num1);
	printf("OG -Width test:|%-10d||%-10d|\n", num, num1);
	printf("\n");
	ft_printf("FT Width * test neg num:|%*d||%*d|\n", -10, num, -10, num1);
	printf("OG Width * test neg num:|%*d||%*d|\n", -10, num, -10, num1);
	printf("\n");
	ft_printf("FT Width test:|%4d||%4d|\n", num, num1);
	printf("OG Width test:|%4d||%4d|\n", num, num1);
	printf("\n");
	ft_printf("FT 0 flag test:|%04d||%04d|\n", num, num1);
	printf("OG 0 flag test:|%04d||%04d|\n", num, num1);
	printf("\n");
	ft_printf("FT -Width test:|%-4d||%-4d|\n", num, num1);
	printf("OG -Width test:|%-4d||%-4d|\n", num, num1);
	printf("\n");
	ft_printf("FT Precision test:|%.10d||%.10d|\n", num, num1);
	printf("OG Precision test:|%.10d||%.10d|\n", num, num1);
	printf("\n");
	printf("\n");
	ft_printf("FT Fuckin width and precision |%-10.5d||%010.5d|\n", num, num1);
	printf("OG Fuckin width and precision |%-10.5d||%010.5d|\n", num, num1);
	printf("\n");
	ft_printf("FT Fuckin width and precision |%.10d||%10.2d|\n", num, num1);
	printf("OG Fuckin width and precision |%.10d||%10.2d|\n", num, num1);
	printf("\n");
	ft_printf("FT Precision & width test:|%4.4d||%4.4d|\n", num, num1);
	printf("OG Precision * width test:|%4.4d||%4.4d|\n", num, num1);
	printf("\n");
	ft_printf("FT Precision & width test:|%.4d||%.4d|\n", num, num1);
	printf("OG Precision * width test:|%.4d||%.4d|\n", num, num1);
	printf("\n");
	ft_printf("FT Precision & width test:|%-4.4d||%-4.4d|\n", num, num1);
	printf("OG Precision * width test:|%-4.4d||%-4.4d|\n", num, num1);
	printf("\n");
	ft_printf("FT Precision * test neg num:|%.*d||%*.1d|\n", -10, num, 10, num1);
	printf("OG Precision * test neg num:|%.*d||%*.1d|\n", -10, num, 10, num1);
	printf("\n");
	ft_printf("FT Fuckin width and precision |%010.1d||%010.1d|\n", num, num1);
	printf("OG Fuckin width and precision |%010.1d||%010.1d|\n", num, num1);
	printf("\n");
	ft_printf("FT Fuckin width and precision |%-10.1d||%-10.1d|\n", num, num1);
	printf("OG Fuckin width and precision |%-10.1d||%-10.1d|\n", num, num1);
	printf("\n");
	ft_printf("Testing with a precision of 0 |%.*d||%.*d|\n", 0, num, 0, num1);
	printf("Testing with a precision of 0 |%.*d||%.*d|\n", 0, num, 0, num1);
	printf("\n");
	printf(TEST38, -2147483648);
	ft_printf(TEST38, -2147483648);

	printf(TEST39, -2147483648);
	ft_printf(TEST39, -2147483648);
	ft_printf("Testing with a precision of 0 and 0 flag |%05.*d||%05.*d|\n", 0, num, 0, num1);
	printf("Testing with a precision of 0 and 0 flag |%05.*d||%05.*d|\n", 0, num, 0, num1);
	printf("\n");

	ft_printf("FT Width test:|%4d||%.4d|\n", num1, num);
	printf("OG Width test:|%4d||%.4d|\n", num1, num);
	printf("\n");
	ft_printf("FT Width * test:|%*d|\n", 10, num1);
	printf("OG Width * test:|%*d|\n", 10, num1);
	printf("\n");
	ft_printf("FT -0 Width test:|%-010d|\n", num);
	printf("OG -0 Width test:|%-010d|\n", num);
	printf("\n");
	ft_printf("FT -Width test:|%-10d|\n", num1);
	printf("OG -Width test:|%-10d|\n", num1);
	printf("\n");
	ft_printf("FT 0 flag test:|%010d|\n", num1);
	printf("OG 0 flag test:|%010d|\n", num1);
	printf("\n");
	ft_printf("FT -0 Width test:|%-010d|\n", num1);
	printf("OG -0 Width test:|%-010d|\n", num1);
	printf("\n");
	ft_printf("FT Precision test:|%.4d|\n", num1);
	printf("OG Precision test:|%.4d|\n", num1);
	printf("\n");
	ft_printf("FT Precision * test:|%.*d|\n", 10, num1);
	printf("OG Precision * test:|%.*d|\n", 10, num1);
	printf("\n");
	ft_printf("FT Fuckin width and precision |%-10.5d|\n", num);
	printf("OG Fuckin width and precision |%-10.5d|\n", num);
	printf("\n"); */
/* 	printf("\n");

	ft_printf("FT char test:|%.10c|\n", car);
	printf("OG char test:|%.10c|\n", car);
	printf("\n");
	ft_printf("FT %% test:|%%|\n");
	printf("OG %% test:|%%|\n"); */

	return (0);
}