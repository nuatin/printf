#include "main.h"

/**
 * is_char_printable - Checks if a character is printable.
 * @c: The character to check.
 *
 * Return: 1 if the character is printable, 0 otherwise.
 */
int is_char_printable(char c)
{
    return (c >= 32 && c < 127);
}

/**
 * append_ascii_hex - Appends ASCII in hexadecimal code to buffer.
 * @buffer: The buffer to append to.
 * @index: The index in the buffer to start appending.
 * @ascii_code: The ASCII code to append.
 *
 * Return: Always 3.
 */
int append_ascii_hex(char buffer[], int index, char ascii_code)
{
    char hex_map[] = "0123456789ABCDEF";
    buffer[index++] = '\\';
    buffer[index++] = 'x';
    buffer[index++] = hex_map[ascii_code / 16];
    buffer[index] = hex_map[ascii_code % 16];
    return (3);
}

/**
 * is_char_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_char_digit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * cast_number_to_size - Casts a number to the specified size.
 * @num: The number to be casted.
 * @size: The size indicating the type to be casted.
 *
 * Return: The casted value of num.
 */
long int cast_number_to_size(long int num, int size)
{
    if (size == S_LONG)
        return (num);
    else if (size == S_SHORT)
        return ((short)num);

    return ((int)num);
}
