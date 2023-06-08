#include "lib.h"

void stvoriti_trykutnyk(int vysota, int shyrina_osnovy, FILE* output_file) {
    for (int i = 0; i < vysota; i++) {
        for (int j = 0; j < vysota - i - 1; j++) {
            fprintf(output_file, " ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            fprintf(output_file, "*");
        }
        fprintf(output_file, "\n");
    }
}
