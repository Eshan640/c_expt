#include <stdio.h>
#include <string.h>

#define NUM_EMPLOYEES 5

// Define a structure for employee data
struct Employee {
    char name[50];
    float basicPay;
};

int main() {
    struct Employee employees[NUM_EMPLOYEES];
    int i;

    // Input employee data
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter basic pay of %s: ", employees[i].name);
        scanf("%f", &employees[i].basicPay);
    }

    // Compute and display gross salary
    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        float DA = 0.52 * employees[i].basicPay;
        float grossSalary = employees[i].basicPay + DA;
        printf("%s\t\t%.2f\n", employees[i].name, grossSalary);
    }

    return 0;
}