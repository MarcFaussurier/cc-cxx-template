#include <ft.h>
#include <ft_string.h>

t_size_t ft_strlen(const char *s)
{
	t_size_t	i;

	i = 0;
	while (s[i])
		i += 1;
	return (i);
}

t_size_t ft_strnlen(const char *s, t_size_t maxlen)
{
	t_size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i += 1;
	return (i);
}

