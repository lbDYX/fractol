/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:38:45 by dacortes          #+#    #+#             */
/*   Updated: 2023/02/10 11:55:34 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fractol.h"
#include<stdio.h>

void setting_zoom(t_win *win)
{

}

int	move(int x, int y, t_win *win)
{
    win->mouse.m_x = x;
    win->mouse.m_y = y;
	julia_mouse(win, -1, -1);
	mlx_put_image_to_window(win->mlx, win->win, win->img, 0, 0);
	return (0);
}

int	zoom(int button, int x, int y, t_win *win)
{
	(void)(x);
	(void)(y);
	
	win->mouse.m_zoom = ZOOM;
	if (button == 4)
		win->mouse.m_zoom += 1.1;
	else if (button == 5)
		win->mouse.m_zoom -= 1.1;
	printf("Zoom: %f", win->mouse.m_zoom);
	return (0);
}