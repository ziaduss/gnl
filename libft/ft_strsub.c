/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 12:37:37 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/13 15:28:48 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(tab = ft_strnew((len))))
		return (NULL);
	while (s[start] && i < len)
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	return (tab);
}
