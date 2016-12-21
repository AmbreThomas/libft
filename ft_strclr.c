/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:42:27 by athomas           #+#    #+#             */
/*   Updated: 2016/12/21 10:40:52 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int i;

	if (s == 0)
		return ;
	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
