#include "lib.h"

int main() {
    Watch* watches;
    int numWatches;

    readDataFromFile("/home/anatoly/programing_Leontiev/lab15/assets/input.txt", &watches, &numWatches);

    displayWatches(watches, numWatches);
    printf("\n");

    findWatchesByPrice(watches, numWatches, 400.0);
    printf("\n");

    findSkeletonWatches(watches, numWatches);
    printf("\n");

    findClassicStyleWatches(watches, numWatches);

    writeDataToFile("/home/anatoly/programing_Leontiev/lab15/assets/output.txt", watches, numWatches);

    free(watches);

    return 0;
}
