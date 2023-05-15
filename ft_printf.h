#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

size_t check_conversions(va_list args, char const *str);
int ft_printf(char const *str, ...);

#endif