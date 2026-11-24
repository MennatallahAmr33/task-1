void setup() {
  // put your setup code here, to run once:
#include <stdio.h>

void validateScore(int score) {
    if (score < 0 || score > 100) {
        printf("Invalid score!\n");
    }
}

int main() {

    int scores[] = {95, 120, 52, -5, 79, 84};

    printf("Scores: ");

    for (int i = 0; i < 6; i++) {
        printf("%d ", scores[i]);
    }

    printf("\n");
    printf("--- Grade & Star Chart Report ---\n");

  
    for (int i = 0; i < 6; i++) {

        printf("Score %d: %d -> ", i + 1, scores[i]);

        if (scores[i] < 0 || scores[i] > 100) {
            validateScore(scores[i]);
        }
        else {

            if (scores[i] >= 90)
                printf("A");
            else if (scores[i] >= 80)
                printf("B");
            else if (scores[i] >= 70)
                printf("C");
            else if (scores[i] >= 60)
                printf("D");
            else
                printf("F");

            printf(" | ");

            for (int j = 0; j < scores[i] / 10; j++) {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
