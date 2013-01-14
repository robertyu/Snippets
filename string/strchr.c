#include <stdio.h>

/* Locate the first occurence of c in string */
char *strchr( const char string[], int c);
char *strchr( const char string[], int c)
{
    /* c can be '\0', thus we should compare first */
    while ( *string != (char)c )
        if (!*string++)
            return NULL;
    return (char *)string;
}

int main( void )
{
    char    a[] = "Hello";

    printf( "%c\n", *strchr( a, 'l' ) );
    return 0;
}
