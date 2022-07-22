#ifndef FT_LIB_H
# define FT_LIB_H

unsigned int	ft_atoi(char *str);
void			set_memory(char **str_addr, int size);
void			free_memory(char **str);
char			*ft_strchr(char *s, char c);
char			*ft_strcpy(char *dest, char *src);

#endif
