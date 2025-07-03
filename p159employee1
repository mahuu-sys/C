#include <stdio.h>
#include <string.h>

struct employee {
    int eno;
    char ename[50];
    int esalary;
};

int main() {
    struct employee e1, e2, e3;

    printf("\nEnter e1 eno => ");
    scanf("%d", &e1.eno);
    getchar(); // Clear newline
    printf("Enter e1 ename => ");
    fgets(e1.ename, sizeof(e1.ename), stdin);
    e1.ename[strcspn(e1.ename, "\n")] = '\0';
    printf("Enter e1 esalary => ");
    scanf("%d", &e1.esalary);

    printf("\nEnter e2 eno => ");
    scanf("%d", &e2.eno);
    getchar();
    printf("Enter e2 ename => ");
    fgets(e2.ename, sizeof(e2.ename), stdin);
    e2.ename[strcspn(e2.ename, "\n")] = '\0';
    printf("Enter e2 esalary => ");
    scanf("%d", &e2.esalary);

    printf("\nEnter e3 eno => ");
    scanf("%d", &e3.eno);
    getchar();
    printf("Enter e3 ename => ");
    fgets(e3.ename, sizeof(e3.ename), stdin);
    e3.ename[strcspn(e3.ename, "\n")] = '\0';
    printf("Enter e3 esalary => ");
    scanf("%d", &e3.esalary);

    printf("\nEmployee 1: eno = %d, ename = %s, esalary = %d", e1.eno, e1.ename, e1.esalary);
    printf("\nEmployee 2: eno = %d, ename = %s, esalary = %d", e2.eno, e2.ename, e2.esalary);
    printf("\nEmployee 3: eno = %d, ename = %s, esalary = %d\n", e3.eno, e3.ename, e3.esalary);

    return 0;
}

