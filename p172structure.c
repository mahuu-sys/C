#include <stdio.h>
#include <string.h>

struct book {
    int bno;
    char bname[50];
    int bprice;
};

int main() {
    struct book b1, b2, b3;

    printf("\nEnter b1 bno => ");
    scanf("%d", &b1.bno);
    getchar();
    printf("Enter b1 bname => ");
    fgets(b1.bname, sizeof(b1.bname), stdin);
    b1.bname[strcspn(b1.bname, "\n")] = '\0';
    printf("Enter b1 bprice => ");
    scanf("%d", &b1.bprice);

    printf("\nEnter b2 bno => ");
    scanf("%d", &b2.bno);
    getchar();
    printf("Enter b2 bname => ");
    fgets(b2.bname, sizeof(b2.bname), stdin);
    b2.bname[strcspn(b2.bname, "\n")] = '\0';
    printf("Enter b2 bprice => ");
    scanf("%d", &b2.bprice);

    printf("\nEnter b3 bno => ");
    scanf("%d", &b3.bno);
    getchar();
    printf("Enter b3 bname => ");
    fgets(b3.bname, sizeof(b3.bname), stdin);
    b3.bname[strcspn(b3.bname, "\n")] = '\0';
    printf("Enter b3 bprice => ");
    scanf("%d", &b3.bprice);

    printf("\nBook 1: bno = %d, bname = %s, bprice = %d", b1.bno, b1.bname, b1.bprice);
    printf("\nBook 2: bno = %d, bname = %s, bprice = %d", b2.bno, b2.bname, b2.bprice);
    printf("\nBook 3: bno = %d, bname = %s, bprice = %d\n", b3.bno, b3.bname, b3.bprice);

    return 0;
}

