#include "morse.h"

_Bool 	init_alpha(t_alpha *t)
{
	t->a = ft_strdup(".-");
	t->b = ft_strdup("-...");
	t->c = ft_strdup("-.-.");
	t->d = ft_strdup("-..");
	t->e = ft_strdup(".");
	t->f = ft_strdup("..-.");
	t->g = ft_strdup("--.");
	t->h = ft_strdup("....");
	t->i = ft_strdup("..");
	t->j = ft_strdup(".---");
	t->k = ft_strdup("-.-");
	t->l = ft_strdup(".-..");
	t->m = ft_strdup("--");
	t->n = ft_strdup("-.");
	t->o = ft_strdup("---");
	t->p = ft_strdup(".--.");
	t->q = ft_strdup("--.-");
	t->r = ft_strdup(".-.");
	t->s = ft_strdup("...");
	t->t = ft_strdup("-");
	t->u = ft_strdup("..-");
	t->v = ft_strdup("...-");
	t->w = ft_strdup(".--");
	t->x = ft_strdup("-..-");
	t->y = ft_strdup("-.--");
	t->z = ft_strdup("--..");
	return (1);
}
