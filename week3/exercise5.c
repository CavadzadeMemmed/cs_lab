#include <stdio.h>

int main() {
    int runner1Coord, runner1Step, runner2Coord, runner2Step;
    scanf("%d %d %d %d", &runner1Coord, &runner1Step, &runner2Coord, &runner2Step);

    if ((runner1Step > 0 && runner2Step > 0 && runner1Step <= runner2Step && runner1Coord < runner2Coord) ||
        (runner1Step < 0 && runner2Step < 0 && runner1Step >= runner2Step && runner1Coord > runner2Coord) ||
        (runner1Step > 0 && runner2Step < 0 && runner1Coord > runner2Coord) ||
        (runner1Step < 0 && runner2Step > 0 && runner1Coord < runner2Coord)) {
        printf("NEVER\n");
        return 0;
    }

    for (int time = 0; time < 1000000; time++) {  
        if (runner1Coord == runner2Coord) {
            printf("%d %d\n", runner1Coord, time);

        }
        runner1Coord += runner1Step;
        runner2Coord += runner2Step;
    }

    return 0;
}

