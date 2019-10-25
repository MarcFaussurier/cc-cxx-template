/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <mfaussur@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 17:11:19 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 17:11:52 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

//#include <ft.h>
//#include <unistd.h>


unsigned int	ft_strlen2(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i += 1;
	return (i);
}

unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i += 1;
	return (i);
}
