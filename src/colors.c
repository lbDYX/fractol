/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:48:21 by dacortes          #+#    #+#             */
/*   Updated: 2023/02/09 17:11:35 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fractol.h"

static int	gc_az_azp(int i, t_color *c)
{
	if (i < 65)
	{
		c->t = 20;
		c->r = 50;
		c->g = 100;
		c->b = 255;
	}
	if (i < 45)
	{
		c->t = 0;
		c->r = 200;
		c->g = 0;
		c->b = 255;
	}
	return (create_trgb(c->t, c->r, c->g, c->b));
}

static int	gc_bla_fux(int i, t_color *c)
{
	if (i < 35)
	{
		c->t = 0;
		c->r = 0;
		c->g = 150;
		c->b = 255;
	}	
	if (i < 25)
	{
		c->t = 0;
		c->r = 0;
		c->g = 200;
		c->b = 255;
	}
	if (i < 5)
	{
		c->t = 0;
		c->r = 0;
		c->g = 246;
		c->b = 255;
	}
	return (create_trgb(c->t, c->r, c->g, c->b));
}

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

int	generete_c(t_win *win)
{
	gc_az_azp(win->f.i, &win->colors);
	gc_bla_fux(win->f.i, &win->colors);
	return (create_trgb(win->colors.t, win->colors.r, win->colors.g,
			win->colors.b));
}
