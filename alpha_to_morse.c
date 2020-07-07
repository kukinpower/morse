#include "morse.h"

static char 	*alpha_morse(char c, t_alpha *tab)
{
	if (c == 'A' || c == 'a')
		return (tab->a);
	else if (c == 'B' || c == 'b')
		return (tab->b);
	else if (c == 'C' || c == 'c')
		return (tab->c);
	else if (c == 'D' || c == 'd')
		return (tab->d);
	else if (c == 'E' || c == 'e')
		return (tab->e);
	else if (c == 'F' || c == 'f')
		return (tab->f);
	else if (c == 'G' || c == 'g')
		return (tab->g);
	else if (c == 'H' || c == 'h')
		return (tab->h);
	else if (c == 'I' || c == 'i')
		return (tab->i);
	else if (c == 'J' || c == 'j')
		return (tab->j);
	else if (c == 'K' || c == 'k')
		return (tab->k);
	else if (c == 'L' || c == 'l')
		return (tab->l);
	else if (c == 'M' || c == 'm')
		return (tab->m);
	else if (c == 'N' || c == 'n')
		return (tab->n);
	else if (c == 'O' || c == 'o')
		return (tab->o);
	else if (c == 'P' || c == 'p')
		return (tab->p);
	else if (c == 'Q' || c == 'q')
		return (tab->q);
	else if (c == 'R' || c == 'r')
		return (tab->r);
	else if (c == 'S' || c == 's')
		return (tab->s);
	else if (c == 'T' || c == 't')
		return (tab->t);
	else if (c == 'U' || c == 'u')
		return (tab->u);
	else if (c == 'V' || c == 'v')
		return (tab->v);
	else if (c == 'W' || c == 'w')
		return (tab->w);
	else if (c == 'X' || c == 'x')
		return (tab->x);
	else if (c == 'Y' || c == 'y')
		return (tab->y);
	else if (c == 'Z' || c == 'z')
		return (tab->z);
	return (NULL);
}

static char 	*digit_morse(char c, t_alpha *tab)
{
	if (c == '0')
		return (tab->zero);
	else if (c == '1')
		return (tab->one);
	else if (c == '2')
		return (tab->two);
	else if (c == '3')
		return (tab->three);
	else if (c == '4')
		return (tab->four);
	else if (c == '5')
		return (tab->five);
	else if (c == '6')
		return (tab->six);
	else if (c == '7')
		return (tab->seven);
	else if (c == '8')
		return (tab->eight);
	else if (c == '9')
		return (tab->nine);
	return (NULL);
}

char 			*alpha_to_morse(char c, t_alpha *tab)
{
	if (c == ' ')
		return (tab->slash);
	else if ((ft_isalpha(c)))
		return(alpha_morse(c, tab));
	else if ((ft_isdigit(c)))
		return(digit_morse(c, tab));
//	else if (c == '!')
//		return (tab->?);
	return (NULL);
}