/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 07:08:47 by jaustry           #+#    #+#             */
/*   Updated: 2016/04/19 07:08:56 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include "mlx.h"
# include "libft/libft.h"
# include "libft/get_next_line.h"
# include <stdlib.h>
# include <math.h>
# include <pthread.h>

typedef	struct		s_point
{
	double			cre;
	double			cim;

	int				y;
	int				x;

	double			pr;
	double			pi;
	double			newre;
	double			newim;
	double			oldre;
	double			oldim;
}					t_point;

typedef struct		s_env
{
	void			*mlx;
	void			*win;

	void			*image;
	char			*ptimage;

	char			*type_of_fractol;

	int				bits_per_pixel;
	int				size_line;
	int				endian;

	double			cre;
	double			cim;

	double			newre;
	double			newim;
	double			oldre;
	double			oldim;
	double			zoom;
	double			pos_x;
	double			pos_y;
	int				height;
	int				width;
	int				maxiterations;

	int				color;

	t_point			*ca1;
	t_point			*ca2;
	t_point			*ca3;
	t_point			*ca4;
}					t_env;

typedef struct		s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}					t_color;

void				fractal_avaible(void);
int					calcul_re_im(t_env *e);
void				draw_in_image(t_env *e, int x, int y, t_color color);

int					get_expose(t_env *e);
void				init_e(t_env *e);

void				dessine_julia1(t_env *e);
void				dessine_julia2(t_env *e);
void				dessine_julia3(t_env *e);
void				dessine_julia4(t_env *e);
void				dessine_julia5(t_env *e);

void				dessine_mandelbrot(t_env *e);
void				dessine_mandelbar(t_env *e);
int					dessine_mandelbar2(t_env *e);
void				ship1(t_env *e);
int					ship2(t_env *e);

int					my_key_funct(int keycode, t_env *e);
int					get_expose(t_env *e);
void				draw_in_image(t_env *e, int x, int y, t_color color);

void				init_e(t_env *e);

int					mouse_motion(int x, int y, t_env *e);
void				help_me(t_env *e);
int					my_key_funct(int keycode, t_env *e);
int					my_mouse_funct(int mousecode, t_env *e);

void				*my_thread_process(t_env *e);
void				*thread4_process(void *list);
void				*thread3_process(void *list);
void				*thread2_process(void *list);
void				*thread1_process(void *list);

int					ca_re_im3(t_env *e);
int					ca_re_im3(t_env *e);
int					ca_re_im3(t_env *e);
int					ca_re_im3(t_env *e);

#endif
