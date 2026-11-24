void setup() {
  // put your setup code here, to run once:
#include <stdio.h>

int checkScore(int score)
{
    if (score >= 0 && score <= 100)
        return 1;
    else
        return 0;
}

int main()
{
    int score = 92;

    if (checkScore(score))
    {
        if (score >= 90)
            printf("%d -> Grade: A", score);
        else if (score >= 80)
            printf("%d -> Grade: B", score);
        else if (score >= 70)
            printf("%d -> Grade: C", score);
        else if (score >= 60)
            printf("%d -> Grade: D", score);
        else
            printf("%d -> Grade: F", score);
    }
    else
    {
        printf("%d -> Invalid score!", score);
    }

    return 0;
}
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
