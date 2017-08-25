/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia1-5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 20:10:21 by jaustry           #+#    #+#             */
/*   Updated: 2016/04/08 20:10:26 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	dessine_julia1(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	y = 0;
	while (y < e->height)
	{
		x = 0;
		while (x < e->width)
		{
			e->newre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->newim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			i = calcul_re_im(e);
			color = (t_color) {i % 256, 5, 40 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
			x++;
		}
		y++;
	}
}

void	dessine_julia2(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	e->cre = -0.123;
	e->cim = -0.745;
	y = 0;
	while (y < e->height)
	{
		x = 0;
		while (x < e->width)
		{
			e->newre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->newim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			i = calcul_re_im(e);
			color = (t_color) {i % 5, 89, 100 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
			x++;
		}
		y++;
	}
}

void	dessine_julia3(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	e->cre = -0.77;
	e->cim = -0.08;
	y = 0;
	while (y < e->height)
	{
		x = 0;
		while (x < e->width)
		{
			e->newre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->newim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			i = calcul_re_im(e);
			color = (t_color) {i % 256, 255, 255 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
			x++;
		}
		y++;
	}
}

void	dessine_julia4(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	e->cre = -0.65;
	e->cim = -0.44;
	y = 0;
	while (y < e->height)
	{
		x = 0;
		while (x < e->width)
		{
			e->newre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->newim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			i = calcul_re_im(e);
			color = (t_color) {i % 256, 255, 255 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
			x++;
		}
		y++;
	}
}

void	dessine_julia5(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	e->cre = 0.285;
	e->cim = 0.01;
	y = 0;
	while (y < e->height)
	{
		x = 0;
		while (x < e->width)
		{
			e->newre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->newim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			i = calcul_re_im(e);
			color = (t_color) {i % 256, 255, 255 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
			x++;
		}
		y++;
	}
}
