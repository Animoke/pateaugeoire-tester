/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpatingr <gpatingr@sudent.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:57:27 by gpatingr          #+#    #+#             */
/*   Updated: 2021/02/23 15:19:20 by gpatingr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/user_functions.h"

int		main(void)
{
	char	u_dest[27];
//	char	t_dest[27];
	char	*src = "marvin the bot";
	ft_strlcpy(u_dest, src, 7);
//	strlcpy(t_dest, src, 13);
	
	printf("%s", u_dest);
	return (0);
}
