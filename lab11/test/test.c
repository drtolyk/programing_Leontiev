#include "lib.h"
#include <check.h>

#define N 3

START_TEST(test_get_diagonal)
{
    int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int diagonal[N];
    int expected_diagonal[N] = {1, 5, 9};
    get_diagonal(&matrix[0][0], N, diagonal);
    for (int i = 0; i < N; i++) {
        ck_assert_int_eq(expected_diagonal[i], diagonal[i]);
    }
}
END_TEST

START_TEST(test_sort_array)
{
    int array[N] = {3, 1, 2};
    int expected_array[N] = {1, 2, 3};
    sort_array(array, N);
    for (int i = 0; i < N; i++) {
        ck_assert_int_eq(expected_array[i], array[i]);
    }
}
END_TEST

int main(void)
{
    Suite *s = suite_create("programing_Leontiev");
    TCase *tc_core = tcase_create("lab11");

    tcase_add_test(tc_core, test_get_diagonal);
    tcase_add_test(tc_core, test_sort_array);
    suite_add_tcase(s, tc_core);

    SRunner *sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
