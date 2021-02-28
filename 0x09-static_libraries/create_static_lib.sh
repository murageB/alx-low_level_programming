#ifndef CREATE_STATIC_LIB_SH
#define CREATE_STATIC_LIB_SH

gcc -c -Wall -Werror -Wextra *.c

ar -rc liball.a *o

ranlib liball.a

#endif
