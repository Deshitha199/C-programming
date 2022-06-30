#include <stdio.h>

int main(void)
{    
    int examScore, homeworkScore;
    float score1, score2, overallScore;
    
    printf("Enter exam score : ");
    scanf("%d", &examScore);
    
    printf("Enter homework score : ");
    scanf("%d", &homeworkScore);

    score1 = examScore * 50 / 100.0;
    score2 = homeworkScore * 50 / 100.0;

    overallScore = score1+ score2;
    printf("Overall score %.1f", overallScore);
    
    return 0;
}