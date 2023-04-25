#include <check.h>
#include "lib.h"

START_TEST(test_find_nsd)
{
#define DATA_SIZE_NSD 3
    int input_data_a[] = { 15, 36, 20 };
    int input_data_b[] = { 25, 60, 30 };
    int expected_values[] = { 5, 12, 10 };

    for (int i = 0; i < DATA_SIZE_NSD; i++) {
        int actual_value = find_nsd(input_data_a[i], input_data_b[i]);
        ck_assert_int_eq(expected_values[i], actual_value);
    }
}
END_TEST

int main(void)
{
    Suite *s = suite_create("Programing");
    TCase *tc_core = tcase_create("lab09");

    tcase_add_test(tc_core, test_find_nsd);
    suite_add_tcase(s, tc_core);

    SRunner *sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
