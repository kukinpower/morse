
#ifndef MORSE_H
# define MORSE_H

#include "ft_printf/libft/libft/libft.h"
#include "get_next_line/get_next_line.h"
#include "ft_printf/libftprintf.h"

# include <fcntl.h>
# include <stdio.h>

typedef struct 	s_alpha
{
	char	a[4];
	char	b[6];
	char 	c[6];
	char	d[5];
	char	e[3];
	char	f[6];
	char	g[5];
	char	h[6];
	char	i[4];
	char	j[6];
	char	k[5];
	char	l[6];
	char	m[4];
	char	n[4];
	char	o[5];
	char	p[6];
	char	q[6];
	char	r[5];
	char	s[5];
	char	t[3];
	char	u[5];
	char	v[6];
	char	w[5];
	char	x[6];
	char	y[6];
	char	z[6];
	char 	slash[3];
	char 	zero[7];
	char 	one[7];
	char 	two[7];
	char 	three[7];
	char 	four[7];
	char 	five[7];
	char 	six[7];
	char 	seven[7];
	char 	eight[7];
	char 	nine[7];
}				t_alpha;

_Bool 	text_validity(char **line, char *what);
char	parse_morse_letter(char *code);
int 	parse_line(char **str);
char 	convert_to_alpha(char *str);
void 	init_alpha(t_alpha *t);
size_t 	two_d_counter(char ***s);
char 	*alpha_to_morse(char c, t_alpha *tab);
int		print_morse(char **line);
int 	morse(char **line);

#endif