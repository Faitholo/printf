#ifndef _FUNCS_ARRAY_
#define _FUNCS_ARRAY_
print_t funcs[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{"u", print_unsigned},
	{"o", print_octal},
	{NULL, NULL}
};
#endif /* _FUNCS_ARRAY_ */
