#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#define VALIDTYPESCONDITIONAL(i) (format[i] == 'c' || format[i] == 'i' \
		|| format[i] == 'f' || format[i] == 's')

/**
 * struct validTypes - structure
 * @valid: element
 * @f: function
 *
 * Description: types of arguments passed to function
 */
typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;

/* function prototypes */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* #ifndef VARIADIC_FUNCTIONS_H */
