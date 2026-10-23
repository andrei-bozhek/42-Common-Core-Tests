#include "../ft_printf.h"

static void show_count(int original, int custom)
{
	printf("return: printf = %d, ft_printf = %d\n", original, custom);
	if (original == custom)
		printf("count: OK\n");
	else
		printf("count: ERROR\n");
}

static void test_text(void)
{
	int original;
	int custom;
	char *null_string = NULL;

	printf("\n--- Plain text ---\n");
	printf("printf:    ");
	original = printf("Hello, 42!\n");
	printf("ft_printf: ");
	custom = ft_printf("Hello, 42!\n");
	show_count(original, custom);

	printf("\n--- Empty output ---\n");
	printf("printf:    ");
	original = printf("%s", "");
	printf("ft_printf: ");
	custom = ft_printf("%s", "");
	show_count(original, custom);

	printf("\n--- Single character ---\n");
	printf("printf:    ");
	original = printf("[%c]\n", 'A');
	printf("ft_printf: ");
	custom = ft_printf("[%c]\n", 'A');
	show_count(original, custom);

	printf("\n--- Several characters ---\n");
	printf("printf:    ");
	original = printf("%c%c%c\n", '4', '2', '!');
	printf("ft_printf: ");
	custom = ft_printf("%c%c%c\n", '4', '2', '!');
	show_count(original, custom);

	printf("\n--- NUL character between A and B ---\n");
	printf("printf:    ");
	original = printf("A%cB\n", 0);
	printf("ft_printf: ");
	custom = ft_printf("A%cB\n", 0);
	show_count(original, custom);

	printf("\n--- Empty string ---\n");
	printf("printf:    ");
	original = printf("A%sB\n", "");
	printf("ft_printf: ");
	custom = ft_printf("A%sB\n", "");
	show_count(original, custom);

	printf("\n--- String ---\n");
	printf("printf:    ");
	original = printf("Hello %s!\n", "world");
	printf("ft_printf: ");
	custom = ft_printf("Hello %s!\n", "world");
	show_count(original, custom);

	printf("\n--- NULL string ---\n");
	printf("printf:    ");
	original = printf("[%s]\n", null_string);
	printf("ft_printf: ");
	custom = ft_printf("[%s]\n", null_string);
	show_count(original, custom);

	printf("\n--- Several strings ---\n");
	printf("printf:    ");
	original = printf("%s%s%s\n", "hello", "", "world");
	printf("ft_printf: ");
	custom = ft_printf("%s%s%s\n", "hello", "", "world");
	show_count(original, custom);

	printf("\n--- Percent signs inside a string ---\n");
	printf("printf:    ");
	original = printf("%s\n", "%d %% %s");
	printf("ft_printf: ");
	custom = ft_printf("%s\n", "%d %% %s");
	show_count(original, custom);

	printf("\n--- String with spaces ---\n");
	printf("printf:    ");
	original = printf("%s\n", "English text");
	printf("ft_printf: ");
	custom = ft_printf("%s\n", "English text");
	show_count(original, custom);

	printf("\n--- One percent sign ---\n");
	printf("printf:    ");
	original = printf("%%\n");
	printf("ft_printf: ");
	custom = ft_printf("%%\n");
	show_count(original, custom);

	printf("\n--- Three percent signs ---\n");
	printf("printf:    ");
	original = printf("%%%%%%\n");
	printf("ft_printf: ");
	custom = ft_printf("%%%%%%\n");
	show_count(original, custom);

	printf("\n--- Percent signs around a number ---\n");
	printf("printf:    ");
	original = printf("%%%d%%\n", 42);
	printf("ft_printf: ");
	custom = ft_printf("%%%d%%\n", 42);
	show_count(original, custom);
}

static void test_numbers(void)
{
	int original;
	int custom;

	printf("\n--- Zeros ---\n");
	printf("printf:    ");
	original = printf("%d %i %u %x %X\n", 0, 0, 0U, 0U, 0U);
	printf("ft_printf: ");
	custom = ft_printf("%d %i %u %x %X\n", 0, 0, 0U, 0U, 0U);
	show_count(original, custom);

	printf("\n--- Positive numbers ---\n");
	printf("printf:    ");
	original = printf("%d %i\n", 42, 123);
	printf("ft_printf: ");
	custom = ft_printf("%d %i\n", 42, 123);
	show_count(original, custom);

	printf("\n--- Negative numbers ---\n");
	printf("printf:    ");
	original = printf("%d %i\n", -42, -123);
	printf("ft_printf: ");
	custom = ft_printf("%d %i\n", -42, -123);
	show_count(original, custom);

	printf("\n--- Digit boundaries ---\n");
	printf("printf:    ");
	original = printf("%d %d %d %d %d\n", 1, 9, 10, 99, 100);
	printf("ft_printf: ");
	custom = ft_printf("%d %d %d %d %d\n", 1, 9, 10, 99, 100);
	show_count(original, custom);

	printf("\n--- INT_MIN and INT_MAX ---\n");
	printf("printf:    ");
	original = printf("%d %d\n", INT_MIN, INT_MAX);
	printf("ft_printf: ");
	custom = ft_printf("%d %d\n", INT_MIN, INT_MAX);
	show_count(original, custom);

	printf("\n--- INT_MIN and INT_MAX with %%i ---\n");
	printf("printf:    ");
	original = printf("%i %i\n", INT_MIN, INT_MAX);
	printf("ft_printf: ");
	custom = ft_printf("%i %i\n", INT_MIN, INT_MAX);
	show_count(original, custom);

	printf("\n--- Unsigned numbers ---\n");
	printf("printf:    ");
	original = printf("%u %u %u\n", 0U, (unsigned int)INT_MAX + 1U, UINT_MAX);
	printf("ft_printf: ");
	custom = ft_printf("%u %u %u\n", 0U, (unsigned int)INT_MAX + 1U, UINT_MAX);
	show_count(original, custom);

	printf("\n--- Small hexadecimal numbers ---\n");
	printf("printf:    ");
	original = printf("%x %x %x %x\n", 9U, 10U, 15U, 16U);
	printf("ft_printf: ");
	custom = ft_printf("%x %x %x %x\n", 9U, 10U, 15U, 16U);
	show_count(original, custom);

	printf("\n--- Hexadecimal digit boundary ---\n");
	printf("printf:    ");
	original = printf("%x %x %X %X\n", 255U, 256U, 255U, 256U);
	printf("ft_printf: ");
	custom = ft_printf("%x %x %X %X\n", 255U, 256U, 255U, 256U);
	show_count(original, custom);

	printf("\n--- UINT_MAX in hexadecimal ---\n");
	printf("printf:    ");
	original = printf("%x %X\n", UINT_MAX, UINT_MAX);
	printf("ft_printf: ");
	custom = ft_printf("%x %X\n", UINT_MAX, UINT_MAX);
	show_count(original, custom);

	printf("\n--- Numbers without separators ---\n");
	printf("printf:    ");
	original = printf("%d%i%u%x%X\n", -42, 0, 42U, 10U, 11U);
	printf("ft_printf: ");
	custom = ft_printf("%d%i%u%x%X\n", -42, 0, 42U, 10U, 11U);
	show_count(original, custom);
}

static void test_pointers(void)
{
	int original;
	int custom;
	int number = 42;
	char text[] = "42";

	printf("\n--- NULL pointer ---\n");
	printf("printf:    ");
	original = printf("[%p]\n", (void *)NULL);
	printf("ft_printf: ");
	custom = ft_printf("[%p]\n", (void *)NULL);
	show_count(original, custom);

	printf("\n--- Address of an integer ---\n");
	printf("printf:    ");
	original = printf("[%p]\n", (void *)&number);
	printf("ft_printf: ");
	custom = ft_printf("[%p]\n", (void *)&number);
	show_count(original, custom);

	printf("\n--- Same address twice ---\n");
	printf("printf:    ");
	original = printf("%p %p\n", (void *)&number, (void *)&number);
	printf("ft_printf: ");
	custom = ft_printf("%p %p\n", (void *)&number, (void *)&number);
	show_count(original, custom);

	printf("\n--- Address of a string ---\n");
	printf("printf:    ");
	original = printf("[%p]\n", (void *)text);
	printf("ft_printf: ");
	custom = ft_printf("[%p]\n", (void *)text);
	show_count(original, custom);

	printf("\n--- All mandatory conversions ---\n");
	printf("printf:    ");
	original = printf("%c %s %p %d %i %u %x %X %%\n", 'A', "hello", (void *)&number, INT_MIN, INT_MAX, UINT_MAX, 255U, 255U);
	printf("ft_printf: ");
	custom = ft_printf("%c %s %p %d %i %u %x %X %%\n", 'A', "hello", (void *)&number, INT_MIN, INT_MAX, UINT_MAX, 255U, 255U);
	show_count(original, custom);

	printf("\n--- Mixed argument types ---\n");
	printf("printf:    ");
	original = printf("%d%s%c%u%p%i%x%X%s\n", 1, "two", '3', 4U, (void *)NULL, -6, 7U, 8U, "nine");
	printf("ft_printf: ");
	custom = ft_printf("%d%s%c%u%p%i%x%X%s\n", 1, "two", '3', 4U, (void *)NULL, -6, 7U, 8U, "nine");
	show_count(original, custom);
}

int main(void)
{
	/* Keep printf and write output in call order. */
	setbuf(stdout, NULL);
	test_text();
	test_numbers();
	test_pointers();
	return (0);
}
