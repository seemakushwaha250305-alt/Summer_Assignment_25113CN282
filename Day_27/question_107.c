#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float basic, hra, da, grossSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    grossSalary = basic + hra + da;

    printf("\n----- Salary Slip -----\n");
    printf("Employee ID  : %d\n", empId);
    printf("Employee Name: %s\n", name);
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", grossSalary);

    return 0;
}