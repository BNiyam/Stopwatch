#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void stopwatch() {
    time_t start, end;
    char input;
    double elapsed;
    printf("Stopwatch started! Press 's' to stop.\n");
    time(&start);
    do {
        input = getchar();
    } while (input != 's');
    time(&end); 
    elapsed = difftime(end, start);
    printf("Elapsed time: %.2f seconds\n", elapsed);
}
int main() {
    char choice;
    printf("Welcome to the Stopwatch Program!\n");
    printf("Press 's' to start the stopwatch, or 'q' to quit: ");
    while (1) {
        choice = getchar();
        if (choice == 's') {
            stopwatch();
            printf("Press 's' to start again, or 'q' to quit: ");
        } else if (choice == 'q') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
    }
    printf("This program was made by Niyam");
    return 0;
}
