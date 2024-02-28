#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void achtung();

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n > 0 && n <= 30) {
        for (int k = 0; k < n; k++) {
            printf(k > 0 ? " " : "");
            printf("%.0lf", tgamma(n) / (tgamma(k + 1) * tgamma(n - k)));
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