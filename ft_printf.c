/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 09:23:29 by cglavieu          #+#    #+#             */
/*   Updated: 2024/12/23 11:33:58 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

// cs p diuxX %

void	print_text(char *str)
{
	write (1, str, ft_strlen(str));
}
void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_int(int i)
{

}
void	print_size_t(size_t zu)
{

}


void	numberroute(t_St token)
{
	switch (token.ntype)
	{
		case	DEC:
			print_int(token.i);
		case	INT:
			;
		case	UNSIGNED:
			;
		case	HEX:
			;
		case	CAPHEX:
			;
	}
}

void	textroute(t_St token)
{
	switch (token.ptype)
	{
		case	CHAR:
			;
		case	STRING:
			;
	}
}

void	typeroute(t_St token)
{
	switch (token.dtype)
	{
		case	NUMBER:
			numberroute(token);
		case	TEXT:
			textroute(token);
	}
}

t_St	getflag(char *str)
{

}

int		printf(const char *format, ...)
{
	
}