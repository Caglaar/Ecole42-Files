/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhammedemincaglar <muhammedemincaglar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:20:03 by mcaglar           #+#    #+#             */
/*   Updated: 2023/02/08 14:51:20 by muhammedemi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a,int *b)
{
    int temp_div;
    int temp_mod;
    
    temp_div = (*a) / (*b);
    temp_mod = (*a) % (*b);
    *a = temp_div;
    *b = temp_mod;
}
