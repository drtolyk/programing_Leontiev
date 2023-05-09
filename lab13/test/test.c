#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <check.h>
#include "lib.h"

#define SIZE 2

START_TEST(test_print_numbers)
{
    char input_data[SIZE][100] = {
        "1 23 456 78",
        "hello 123 world 4 5"
    };
    int expected_values[SIZE][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5}
    };
    int expected_counts[SIZE] = {8, 5};

    for (int i = 0; i < SIZE; i++) {
        int numbers[10];
        int count = 0;
        char *str = input_data[i];
        int len = strlen(str);

        for (int j = 0; j < len; j++) {
            char c = str[j];

            if (is_digit(c)) {
                int num = c - '0';
                numbers[count++] = num;
            }
        }

        print_numbers(numbers, count);
        ck_assert_int_eq(count, expected_counts[i]);

        for (int j = 0; j < count; j++) {
            ck_assert_int_eq(numbers[j], expected_values[i][j]);
        }
    }
}
END_TEST

int main(void)
{
    Suite *s = suite_create("Programing");
    TCase *tc_core = tcase_create("lab13");

    tcase_add_test(tc_core, test_print_numbers);
    suite_add_tcase(s, tc_core);

    SRunner *sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
