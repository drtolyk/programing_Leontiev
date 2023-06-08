#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../src/lib.h"

START_TEST(test_stvoriti_trykutnyk_fn) {
    // Очікувані значення
    char* expected_result = "      *\n    * * *\n  * * * * *\n* * * * * * *\n";

    // Відкриття вхідного файлу
    FILE* input_file = fopen("input.txt", "r");
    ck_assert_ptr_nonnull_msg(input_file, "Помилка відкриття вхідного файлу.");

    // Зчитування вхідних даних
    int vysota, shyrina_osnovy;
    fscanf(input_file, "%d", &vysota);
    fscanf(input_file, "%d", &shyrina_osnovy);
    fclose(input_file);

    // Створення трикутника
    FILE* output_file = fopen("output.txt", "w");
    ck_assert_ptr_nonnull_msg(output_file, "Помилка відкриття вихідного файлу.");
    stvoriti_trykutnyk(vysota, shyrina_osnovy, output_file);
    fclose(output_file);

    // Перевірка результату
    FILE* expected_file = fopen("expected_output.txt", "r");
    FILE* actual_file = fopen("output.txt", "r");
    ck_assert_ptr_nonnull_msg(expected_file, "Помилка відкриття файлу з очікуваним результатом.");
    ck_assert_ptr_nonnull_msg(actual_file, "Помилка відкриття вихідного файлу.");

    char expected_line[100];
    char actual_line[100];
    while (fgets(expected_line, sizeof(expected_line), expected_file) != NULL &&
           fgets(actual_line, sizeof(actual_line), actual_file) != NULL) {
        ck_assert_str_eq(expected_line, actual_line);
    }

    fclose(expected_file);
    fclose(actual_file);
}

END_TEST

int main(void) {
    Suite* s = suite_create("Programing");
    TCase* tc_core = tcase_create("Lab14");

    tcase_add_test(tc_core, test_stvoriti_trykutnyk_fn);
    suite_add_tcase(s, tc_core);

    SRunner* sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
