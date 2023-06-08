#include "list.h"
#include <check.h>

START_TEST(testAddRemoveWatch)
{
    List watchList;
    initList(&watchList);

    Watch watch1, watch2;
    createWatch(&watch1, 1, "Model 1", 100.0, "Manufacturer 1", "Country 1", "Style 1");
    createWatch(&watch2, 0, "Model 2", 200.0, "Manufacturer 2", "Country 2", "Style 2");

    addToList(&watchList, &watch1);
    addToList(&watchList, &watch2);

    ck_assert_int_eq(watchList.size, 2);

    removeFromList(&watchList, 0);

    ck_assert_int_eq(watchList.size, 1);

    freeList(&watchList);
}
END_TEST

START_TEST(testDisplayWatchList)
{
    List watchList;
    initList(&watchList);

    Watch watch1, watch2;
    createWatch(&watch1, 1, "Model 1", 100.0, "Manufacturer 1", "Country 1", "Style 1");
    createWatch(&watch2, 0, "Model 2", 200.0, "Manufacturer 2", "Country 2", "Style 2");

    addToList(&watchList, &watch1);
    addToList(&watchList, &watch2);

    ck_assert_int_eq(watchList.size, 2);

    displayList(&watchList);

    freeList(&watchList);
}
END_TEST

Suite* watchSuite() {
    Suite* s = suite_create("Watch");

    TCase* tc_watch = tcase_create("WatchList");
    tcase_add_test(tc_watch, testAddRemoveWatch);
    tcase_add_test(tc_watch, testDisplayWatchList);
    suite_add_tcase(s, tc_watch);

    return s;
}

int main(void) {
    Suite* s = watchSuite();
    SRunner* sr = srunner_create(s);

    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
