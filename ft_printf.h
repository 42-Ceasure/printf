/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:35:02 by cglavieu          #+#    #+#             */
/*   Updated: 2024/12/23 12:02:03 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <sys/types.h>

/*
	The  format string is composed of zero or more directives: ordinary characters (not %),
       which are copied unchanged to the output stream; and conversion specifications, each of  which
       results  in  fetching zero or more subsequent arguments.  Each conversion specification is in‐
       troduced by the character %, and ends with a conversion specifier.  In between  there  may  be
       (in this order) zero or more flags, an optional minimum field width, an optional precision and
       an optional length modifier.
*/

typedef enum	e_printf_flag
{
		// #
		// 0
		// -
		// ' '
		// +
}				t_Eflag;

typedef enum	e_printf_optional_minimum_field_width
{
	/*
	Field width
       An optional decimal digit string (with nonzero first digit) specifying a minimum field  width.
       If  the converted value has fewer characters than the field width, it will be padded with spa‐
       ces on the left (or right, if the left-adjustment flag has been given).  Instead of a  decimal
       digit string one may write "*" or "*m$" (for some decimal integer m) to specify that the field
       width is given in the next argument, or in the m-th argument, respectively, which must  be  of
       type  int.   A negative field width is taken as a '-' flag followed by a positive field width.
       In no case does a nonexistent or small field width cause truncation of a field; if the  result
       of a conversion is wider than the field width, the field is expanded to contain the conversion
       result.
	*/
}				t_Ewidth;

typedef enum	e_printf_optional_precision
{
	/*
	Precision
       An optional precision, in the form of a period ('.')  followed by an  optional  decimal  digit
       string.   Instead of a decimal digit string one may write "*" or "*m$" (for some decimal inte‐
       ger m) to specify that the precision is given in the next argument, or in the  m-th  argument,
       respectively, which must be of type int.  If the precision is given as just '.', the precision
       is taken to be zero.  A negative precision is taken as if the precision  were  omitted.   This
       gives  the minimum number of digits to appear for d, i, o, u, x, and X conversions, the number
       of digits to appear after the radix character for a, A, e, E, f, and F conversions, the  maxi‐
       mum  number of significant digits for g and G conversions, or the maximum number of characters
       to be printed from a string for s and S conversions.
	*/
}				t_Eprecision;

typedef enum	e_printf_optional_length_modifier
{
		// hh
		// h
		// l
		// ll
		// q
		// L
		// j
		// z
		// Z
		// t
}				t_Elength;

typedef enum	e_printf_conversion_specifier
{
		// d
		// i
		// o
		// u
		// x
		// X
		// e
		// E
		// f
		// F
		// g
		// G
		// a
		// A
		// c
		// s
		// C
		// S
		// p
		// n
		// m
		// %
}				t_Econversion;

#endif