#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    char input;
    double elapsed;

    printf("Press Enter to start the stopwatch...");
    getchar();
    time(&start);

    printf("Press Enter to stop the stopwatch...");
    getchar();
    time(&end);

    elapsed = difftime(end, start);
    printf("Elapsed time: %.2f seconds\n", elapsed);

    return 0;
}
