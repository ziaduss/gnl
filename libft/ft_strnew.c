/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 10:41:39 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/13 15:27:12 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	if (!(tab = (char *)(malloc(sizeof(char) * size + 1))))
		return (NULL);
	ft_memset(tab, '\0', size + 1);
	return (tab);
}
