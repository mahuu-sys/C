#include <stdio.h>
#include <string.h>

struct employee {
    int eno;
    char ename[50];
    int esalary;
};

int main() {
    struct employee e[100];
    int n, i;

    printf("Enter limit => ");
    scanf("%d", &n);
    getchar(); // consume newline after scanf

    for(i = 0; i < n; i++) {
        printf("\nEnter eno => ");
        scanf("%d", &e[i].eno);
        getchar(); // consume newline

        printf("Enter ename => ");
        fgets(e[i].ename, sizeof(e[i].ename), stdin);
        e[i].ename[strcspn(e[i].ename, "\n")] = '\0'; // remove newline

        printf("Enter esalary => ");
        scanf("%d", &e[i].esalary);
        getchar(); // consume newline
    }

    printf("\nEmployeeNo\tEmployeeName\tEmployeeSalary\n");
    printf("============================================\n");
    for(i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\n", e[i].eno, e[i].ename, e[i].esalary);
    }
    printf("============================================\n");

    return 0;
}
