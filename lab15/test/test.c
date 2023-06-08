#include "lib.h"
#include <check.h>
#include <stdbool.h>

struct WatchCollection {
    Watch* watches;
    int numWatches;
};

struct WatchCollection findWaterproofWatches(struct WatchCollection collection)
{
    struct WatchCollection result;
    result.numWatches = 0;
    result.watches = malloc(collection.numWatches * sizeof(Watch));

    for (int i = 0; i < collection.numWatches; i++) {
        if (collection.watches[i].isWaterproof) {
            result.watches[result.numWatches] = collection.watches[i];
            result.numWatches++;
        }
    }

    return result;
}

START_TEST(test_findWaterproofWatches)
{
    Watch watches[] = {
        { .isWaterproof = true, .model = "Watch 1" },
        { .isWaterproof = false, .model = "Watch 2" },
        { .isWaterproof = true, .model = "Watch 3" },
        { .isWaterproof = false, .model = "Watch 4" },
        { .isWaterproof = true, .model = "Watch 5" }
    };

    int numWatches = sizeof(watches) / sizeof(Watch);

    struct WatchCollection collection;
    collection.watches = watches;
    collection.numWatches = numWatches;

    struct WatchCollection result = findWaterproofWatches(collection);

    int expectedCount = 0;
    for (int i = 0; i < collection.numWatches; i++) {
        if (collection.watches[i].isWaterproof) {
            expectedCount++;
        }
    }

    ck_assert_int_eq(expectedCount, result.numWatches);

    for (int i = 0; i < result.numWatches; i++) {
        ck_assert(result.watches[i].isWaterproof);
    }

    free(result.watches);
}

int main(void)
{
    Suite *s = suite_create("Programming");
    TCase *tc_core = tcase_create("lab15");

    tcase_add_test(tc_core, test_findWaterproofWatches);

    suite_add_tcase(s, tc_core);

    SRunner *sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
