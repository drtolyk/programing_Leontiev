#include "lib.h"
#include <check.h>

#define ROWS 2
#define COLS 2

START_TEST(test_add_matrices)
{
    double m1[ROWS][COLS] = {{1.0, 2.0}, {3.0, 4.0}};
    double m2[ROWS][COLS] = {{2.0, 0.0}, {1.0, 2.0}};
    double expected[ROWS][COLS] = {{3.0, 2.0}, {4.0, 6.0}};
    double actual[ROWS][COLS];

    add_matrices(ROWS, COLS, m1, m2, actual);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            ck_assert_double_eq(expected[i][j], actual[i][j]);
        }
    }
}
END_TEST

int main(void)
{
    Suite *s = suite_create("Programing");
    TCase *tc_core = tcase_create("lab12");

    tcase_add_test(tc_core, test_add_matrices);
    suite_add_tcase(s, tc_core);

    SRunner *sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
