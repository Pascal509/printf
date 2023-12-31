#include "main.h"

/**
 * get_fmt_spec - Searches for the format specifier character
 * @format: The format string to Check
 * @current_index: the index where '%' is seen in the format string
 * Return: format specifier seen
 */
int get_fmt_spec(const char *format, int *current_index)
{
	int index;
	int fmt_spec_seen;

	/* Gets the index of the format specifier */
	index = *current_index + 1;

	/* Assigns the index to fmt_spec_seen */
	fmt_spec_seen = format[index];

	/* move to the next index*/
	*current_index += 1;
	return (fmt_spec_seen);
}
