#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\n----- Employee Record -----\n");
    printf("Employee ID : %d\n", e.empId);
    printf("Name        : %s\n", e.name);
    printf("Salary      : %.2f\n", e.salary);

    return 0;
}