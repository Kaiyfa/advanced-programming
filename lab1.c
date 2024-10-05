#include <stdio.h>

/* Function declarations */
float calculate_average(int score1, int score2, int score3, int score4, int score5);
const char* determine_classification(float average);
int check_award(float average);

int main() {
    int score1, score2, score3, score4, score5;
    float average;
    const char* classification;
    int award;

    /* Get the scores from the user */
    printf("Enter the score for Module 1: ");
    scanf("%d", &score1);

    printf("Enter the score for Module 2: ");
    scanf("%d", &score2);

    printf("Enter the score for Module 3: ");
    scanf("%d", &score3);

    printf("Enter the score for Module 4: ");
    scanf("%d", &score4);

    printf("Enter the score for Module 5: ");
    scanf("%d", &score5);

    /* Calculate the average score */
    average = calculate_average(score1, score2, score3, score4, score5);

    /* Determine the classification */
    classification = determine_classification(average);

    /* Check if the student qualifies for an award */
    award = check_award(average);

    /* Output the results */
    printf("\nAverage Score: %.2f\n", average);
    printf("Classification: %s\n", classification);

    if (award == 1) {
        printf("Congratulations! The student qualifies for an award.\n");
    } else {
        printf("The student does not qualify for an award.\n");
    }

    return 0;
}

/* Function to calculate the average score */
float calculate_average(int score1, int score2, int score3, int score4, int score5) {
    return (score1 + score2 + score3 + score4 + score5) / 5.0;
}

/* Function to determine the classification */
const char* determine_classification(float average) {
    if (average < 39.5) {
        return "FAIL";
    } else if (average < 49.5) {
        return "3rd";
    } else if (average < 59.5) {
        return "2.2 (Lower Second-Class)";
    } else if (average < 69.5) {
        return "2.1 (Upper Second-Class)";
    } else {
        return "1st (First-Class)";
    }
}

/* Function to check if the student qualifies for an award */
int check_award(float average) {
    if (average >= 69.5) {
        return 1;  
    } else {
        return 0;  
    }
}
