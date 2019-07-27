#ifndef vdf
#define vdf
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
/**
 * struct print1 - struct of printers operators
 * @t: First member
 * @f: Second member
 *
 * Description: struct to manage diferent types of print
 */
typedef struct print1
{
	char *t;
	void (*f)(va_list);
} prt_o;
#endif
