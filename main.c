#include <stdio.h>

struct employee {
    int eno;
    char ename[50];
    int esalary;
};

int main() {
    struct employee e[15] = {
        {101, "Amit", 12000},
        {102, "Bhavna", 9500},
        {103, "Chirag", 10500},
        {104, "Divya", 8500},
        {105, "Ekta", 13000},
        {106, "Farhan", 9800},
        {107, "Gauri", 11500},
        {108, "Harsh", 8700},
        {109, "Isha", 10200},
        {110, "Jay", 9400},
        {111, "Kiran", 16000},
        {112, "Lata", 30000},
        {113, "Manish", 14500},
        {114, "Nikita", 8200},
        {115, "Omkar", 27000}
    };

    int i, option, range, max, min, count;

    do {
        printf("\n================= Employee Menu =================\n");
        printf("1. Display all records\n");
        printf("2. Display employees with good salary (>10000)\n");
        printf("3. Display employees with bad salary (<=10000)\n");
        printf("4. Count total number of employees\n");
        printf("5. Count employees with good salary (>10000)\n");
        printf("6. Display employees within a salary range\n");
        printf("7. Exit\n");
        printf("Enter option (1–7): ");
        scanf("%d", &option);
        printf("\n");

        switch(option) {
            case 1:
                printf("EmployeeNo\tEmployeeName\tSalary\n");
                printf("============================================\n");
                for(i = 0; i < 15; i++)
                    printf("%d\t\t%-12s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            case 2:
                printf("Employees with good salary (>10000):\n");
                printf("EmployeeNo\tEmployeeName\tSalary\n");
                printf("============================================\n");
                for(i = 0; i < 15; i++)
                    if(e[i].esalary > 10000)
                        printf("%d\t\t%-12s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            case 3:
                printf("Employees with bad salary (<=10000):\n");
                printf("EmployeeNo\tEmployeeName\tSalary\n");
                printf("============================================\n");
                for(i = 0; i < 15; i++)
                    if(e[i].esalary <= 10000)
                        printf("%d\t\t%-12s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            case 4:
                printf("Total number of employees: %d\n", 15);
                break;

            case 5:
                count = 0;
                for(i = 0; i < 15; i++)
                    if(e[i].esalary > 10000)
                        count++;
                printf("Number of employees with good salary: %d\n", count);
                break;

            case 6:
                printf("Enter the minimum salary: ");
                scanf("%d", &min);
                printf("Enter the maximum salary: ");
                scanf("%d", &max);
                printf("Employees with salary between %d and %d:\n", min, max);
                printf("EmployeeNo\tEmployeeName\tSalary\n");
                printf("============================================\n");
                for(i = 0; i < 15; i++)
                    if(e[i].esalary >= min && e[i].esalary <= max)
                        printf("%d\t\t%-12s\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid option selected. Please try again.\n");
        }

    } while(option != 7);

    return 0;
}

