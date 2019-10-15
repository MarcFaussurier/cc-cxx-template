#ifndef STRING_H
# define STRING_H
# ifdef __cplusplus
extern "C" {
# endif

# include <ft.h>
t_size_t ft_strlen(const char *s);
t_size_t ft_strnlen(const char *s, t_size_t maxlen);

# ifdef __cplusplus
}
# endif
#endif
