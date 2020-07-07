
#ifndef MORSE_H
# define MORSE_H

#include "libft/libft/libft.h"

typedef struct 	s_alpha
{
	char	*a;
	char	*b;
	char 	*c;
	char	*d;
	char 	*e;
	char 	*f;
	char 	*g;
	char	*h;
	char	*i;
	char 	*j;
	char	*k;
	char 	*l;
	char 	*m;
	char 	*n;
	char	*o;
	char	*p;
	char 	*q;
	char	*r;
	char 	*s;
	char 	*t;
	char 	*u;
	char	*v;
	char	*w;
	char 	*x;
	char	*y;
	char 	*z;
}				t_alpha;

_Bool 	text_validity(char **line, char *what);
//_Bool	ismorse(char c);
//_Bool	isvalid(char c);
char	parse_morse_letter(char *code);
int 	parse_line(char *str);
char 	convert_to_alpha(char *str);
_Bool 	init_alpha(t_alpha *t);
size_t 	two_d_counter(char ***s);


#endif