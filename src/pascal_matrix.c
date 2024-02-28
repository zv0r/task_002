#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void achtung();

int main(void) {
    int size, counter = 0;
    if (scanf("%d", &size) == 1 && size > 0 && size <= 10) {
        for (int n = 0; counter < size * size; n++) {
            for (int k = 0; k <= n && counter < size * size; k++) {
                printf(counter > 0 && counter % size == 0 ? "\n" : "");
                printf(counter % size != 0 ? " " : "");
                printf("%.0lf", tgamma(n + 1) / (tgamma(k + 1) * tgamma(n - k + 1)));
                counter++;
            }
        }
    } else {
        achtung();
    }

    return 0;
}

void achtung() {
    fprintf(stderr, "Puck you, Verter!");
    exit(EXIT_FAILURE);
}