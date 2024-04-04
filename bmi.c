#include <stdio.h>

// Function to calculate BMI
float calculateBMI(float weight_kg, float height_m) {
    return weight_kg / (height_m * height_m);
}

// Function to interpret BMI
void interpretBMI(float bmi) {
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("You are in the healthy weight range.\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }
}

int main() {
    float weight_kg, height_m;

    // Prompting the user to enter weight in kilograms and height in meters
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight_kg);

    printf("Enter your height in meters: ");
    scanf("%f", &height_m);

    // Calculating BMI
    float bmi = calculateBMI(weight_kg, height_m);

    // Displaying BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Interpreting BMI
    interpretBMI(bmi);

    return 0;
}
