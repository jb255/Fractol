/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 18:50:43 by jaustry           #+#    #+#             */
/*   Updated: 2016/04/08 18:50:47 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fractol.h"

void	draw_in_image(t_env *e, int x, int y, t_color color)
{
	e->ptimage = mlx_get_data_addr(e->image, &e->bits_per_pixel, &e->size_line,
	&e->endian);
	e->ptimage[x * e->bits_per_pixel / 8 + e->color +
	y * e->size_line] = (unsigned char)color.r;
	e->ptimage[x * e->bits_per_pixel / 8 + 1 + e->color +
	y * e->size_line] = (unsigned char)color.g;
	e->ptimage[x * e->bits_per_pixel / 8 + 2 + e->color +
	y * e->size_line] = (unsigned char)color.b;
}

int		calcul_re_im(t_env *e)
{
	int i;

	i = 0;
	while (i < e->maxiterations)
	{
		e->oldre = e->newre;
		e->oldim = e->newim;
		e->newre = e->oldre * e->oldre - e->oldim * e->oldim + e->cre;
		e->newim = 2 * e->oldre * e->oldim + e->cim;
		if ((e->newre * e->newre + e->newim * e->newim) > 4)
			return (i);
		i++;
	}
	return (i);
}

void	init_e(t_env *e)
{
	e->cre = -0.7;
	e->cim = 0.27015;
	e->zoom = 1;
	e->pos_x = 0;
	e->pos_y = 0;
	e->height = 1000;
	e->width = 1000;
	e->maxiterations = 150;
	e->newre = 0;
	e->newim = 0;
	e->oldre = 0;
	e->oldim = 0;
	e->color = 0;
	e->ca1 = (t_point *)malloc(sizeof(t_point));
	e->ca2 = (t_point *)malloc(sizeof(t_point));
	e->ca3 = (t_point *)malloc(sizeof(t_point));
	e->ca4 = (t_point *)malloc(sizeof(t_point));
	e->ca1->cre = -0.7;
	e->ca1->cim = 0.27015;
	e->ca2->cre = -0.7;
	e->ca2->cim = 0.27015;
	e->ca3->cre = -0.7;
	e->ca3->cim = 0.27015;
	e->ca4->cre = -0.7;
	e->ca4->cim = 0.27015;
}

int		get_expose(t_env *e)
{
	e->image = mlx_new_image(e->mlx, 1000, 1000);
	e->ptimage = mlx_get_data_addr(e->image, &e->bits_per_pixel,
	&e->size_line, &e->endian);
	if (ft_strcmp(e->type_of_fractol, "julia1") == 0)
		dessine_julia1(e);
	if (ft_strcmp(e->type_of_fractol, "julia2") == 0)
		dessine_julia2(e);
	if (ft_strcmp(e->type_of_fractol, "julia3") == 0)
		dessine_julia3(e);
	if (ft_strcmp(e->type_of_fractol, "julia4") == 0)
		dessine_julia4(e);
	if (ft_strcmp(e->type_of_fractol, "julia5") == 0)
		dessine_julia5(e);
	if (ft_strcmp(e->type_of_fractol, "ship") == 0)
		ship1(e);
	if (ft_strcmp(e->type_of_fractol, "mandelbrot") == 0)
		dessine_mandelbrot(e);
	if (ft_strcmp(e->type_of_fractol, "mandelbar") == 0)
		dessine_mandelbar(e);
	if (ft_strcmp(e->type_of_fractol, "multi") == 0)
		my_thread_process(e);
	mlx_put_image_to_window(e->mlx, e->win, e->image, 0, 0);
	mlx_destroy_image(e->mlx, e->image);
	help_me(e);
	return (0);
}
