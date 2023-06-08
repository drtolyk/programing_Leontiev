#include "lib.h"

int main(int argc, char* argv[]) {
    FILE* vuhidnyi_fajl = fopen("/home/anatoly/programing_Leontiev/lab14/assets/output.txt", "w");
    if (vuhidnyi_fajl == NULL) {
        printf("Помилка відкриття файлу для запису.\n");
        return 1;
    }

    int vysota;
    int shyrina_osnovy;

    FILE* vhodovyi_fajl = fopen("/home/anatoly/programing_Leontiev/lab14/assets/input.txt", "r");
    if (vhodovyi_fajl == NULL) {
        printf("Помилка відкриття вхідного файлу.\n");
        return 1;
    }

    fscanf(vhodovyi_fajl, "%d", &vysota);
    fscanf(vhodovyi_fajl, "%d", &shyrina_osnovy);

    fclose(vhodovyi_fajl);

    stvoriti_trykutnyk(vysota, shyrina_osnovy, vuhidnyi_fajl);

    printf("Трикутник був успішно створений і записаний у файл.\n");

    fclose(vuhidnyi_fajl);

    return 0;
}
