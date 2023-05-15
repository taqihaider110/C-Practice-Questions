#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{

    char title[50];
    char author[50];
    int price;
};

int main(void)
{
    struct book *ptr;
    ptr = (struct book *)malloc(10 * sizeof(struct book));
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the title for book no.%d: ", i + 1);
        gets((ptr + i)->title);
        printf("\nEnter the author for book no.%d: ", i + 1);
        gets((ptr + i)->author);
        printf("\nEnter the price for book no.%d: ", i + 1);
        scanf("%d", &(ptr + i)->price);
        fflush(stdin);
    }
    printf("\n\nentries: \n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nThe title for book no.%d is: %s ", i + 1, (ptr + i)->title);
        printf("\nThe author for book no.%dis: %s ", i + 1, (ptr + i)->author);
        printf("\nThe price for book no.%d is: %d ", i + 1, (ptr + i)->price);
    }
    return 0;
}