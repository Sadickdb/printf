#include "main.h"
/**
 * get_print_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"S", print_usr},
		{"p", print_add}, {"li", print_long_int},
		{"ld", print_long_int}, {"lu", print_long_unt},
		{"lo", print_long_oct}, {"lx", print_long_hex},
		{"lX", print_long_upx}, {"hi", print_short_int},
		{"hd", print_short_int}, {"hu", print_short_unt},
		{"ho", print_short_oct}, {"hx", print_short_hex},
		{"hX", print_short_upx}, {"#o", print_num_oct},
		{"#x", print_num_hex}, {"#X", print_num_upx},
		{"#i", print_int}, {"#d", print_int},
		{"#u", print_unt}, {"+i", print_plus_int},
		{"+d", print_plus_int}, {"+u", print_unt},
		{"+o", print_oct}, {"+x", print_hex},
		{"+X", print_upx}, {" i", print_space_int},
		{" d", print_space_int}, {" u", print_unt},
		{" o", print_oct}, {" x", print_hex},
		{" X", print_upx}, {"R", print_rot},
		{"r", print_rev}, {"%", print_prg},
		{"l", print_prg}, {"h", print_prg},
		{" +i", print_plus_int}, {" +d", print_plus_int},
		{"+ i", print_plus_int}, {"+ d", print_plus_int},
		{" %", print_prg}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
