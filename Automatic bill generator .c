#include <stdio.h>

int main() {
    int n, i;
    char itemName[50];
    float price, qty, total = 0, itemTotal;
    float gstRate = 0.18; // 18% GST

    printf("===== AUTOMATIC BILL GENERATOR =====\n");
    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("\n------------------------------------\n");
    printf("Item\tQty\tPrice\tTotal\n");
    printf("------------------------------------\n");

    for(i = 1; i <= n; i++) {
        printf("\nEnter item %d name: ", i);
        scanf("%s", itemName);

        printf("Enter quantity: ");
        scanf("%f", &qty);

        printf("Enter price per item: ");
        scanf("%f", &price);

        itemTotal = qty * price;
        total += itemTotal;

        printf("%s\t%.2f\t%.2f\t%.2f\n", itemName, qty, price, itemTotal);
    }

    float gstAmount = total * gstRate;
    float finalAmount = total + gstAmount;

    printf("------------------------------------\n");
    printf("Subtotal\t\t\t%.2f\n", total);
    printf("GST (18%%)\t\t\t%.2f\n", gstAmount);
    printf("Final Amount\t\t\t%.2f\n", finalAmount);
    printf("------------------------------------\n");

    printf("\nThank you for shopping!\n");

    return 0;
}
