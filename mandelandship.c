/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelandship.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 20:18:20 by jaustry           #+#    #+#             */
/*   Updated: 2016/04/08 20:18:25 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	dessine_mandelbrot(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	y = -1;
	while (++y < e->height)
	{
		x = -1;
		while (++x < e->width)
		{
			e->cre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->cim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			e->newre = 0;
			e->newim = 0;
			e->oldre = 0;
			e->oldim = 0;
			i = calcul_re_im(e);
			color = (t_color) {i % 256, 255, 255 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
		}
	}
}

void	dessine_mandelbar(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	y = -1;
	while (++y < e->height)
	{
		x = -1;
		while (++x < e->width)
		{
			e->cre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->cim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			e->newre = 0;
			e->newim = 0;
			e->oldre = 0;
			e->oldim = 0;
			i = dessine_mandelbar2(e);
			color = (t_color) {i % 256, 255, 255 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
		}
	}
}

int		dessine_mandelbar2(t_env *e)
{
	int i;

	i = 0;
	while (i < e->maxiterations)
	{
		e->newre = e->oldre;
		e->oldim *= -1;
		e->oldre = e->oldre * e->oldre - e->oldim * e->oldim + e->cre;
		e->oldim = 2 * e->oldre * e->oldim + e->cim;
		if ((e->newre * e->newre + e->newim * e->newim) > 4)
			return (i);
		i++;
	}
	return (i);
}

void	ship1(t_env *e)
{
	t_color color;
	int		y;
	int		x;
	int		i;

	y = -1;
	while (++y < e->height)
	{
		x = 0;
		while (x < e->width)
		{
			e->cre = 1.5 * (x - e->width / 2) / (0.5 * e->zoom * e->width) +
			e->pos_x;
			e->cim = (y - e->height / 2) / (0.5 * e->zoom * e->height) +
			e->pos_y;
			e->newre = 0;
			e->newim = 0;
			e->oldre = 0;
			e->oldim = 0;
			i = ship2(e);
			color = (t_color) {i % 152, 42, 42 * (i < e->maxiterations)};
			draw_in_image(e, x, y, color);
			x++;
		}
	}
}

int		ship2(t_env *e)
{
	int i;

	i = 0;
	while (i < e->maxiterations)
	{
		e->oldre = fabs(e->newre);
		e->oldim = fabs(e->newim);
		e->newre = e->oldre * e->oldre - e->oldim * e->oldim + e->cre;
		e->newim = 2 * e->oldre * e->oldim + e->cim;
		if ((e->newre * e->newre + e->newim * e->newim) > 4)
			return (i);
		i++;
	}
	return (i);
}
