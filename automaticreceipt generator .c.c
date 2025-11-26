#include <stdio.h>

struct Item {
    char name[50];
    float price;
    int qty;
};

int main() {
    int n, i;
    float subtotal = 0, gstRate = 0.18, gstAmount, finalAmount;

    printf("===== AUTOMATIC RECEIPT GENERATOR =====\n");

    // Customer details
    char customerName[50];
    printf("Enter customer name: ");
    scanf("%s", customerName);

    // Number of items
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    // Input item details
    for(i = 0; i < n; i++) {
        printf("\nEnter name of item %d: ", i+1);
        scanf("%s", items[i].name);

        printf("Enter quantity: ");
        scanf("%d", &items[i].qty);

        printf("Enter price per unit: ");
        scanf("%f", &items[i].price);

        subtotal += items[i].qty * items[i].price;
    }

    // Calculations
    gstAmount = subtotal * gstRate;
    finalAmount = subtotal + gstAmount;

    // Printing receipt
    printf("\n========================================\n");
    printf("              RECEIPT\n");
    printf("========================================\n");
    printf("Customer: %s\n", customerName);
    printf("----------------------------------------\n");
    printf("Item\tQty\tPrice\tTotal\n");
    printf("----------------------------------------\n");

    for(i = 0; i < n; i++) {
        float total = items[i].qty * items[i].price;
        printf("%s\t%d\t%.2f\t%.2f\n", items[i].name, items[i].qty, items[i].price, total);
    }

    printf("----------------------------------------\n");
    printf("Subtotal:\t\t\t%.2f\n", subtotal);
    printf("GST (18%%):\t\t\t%.2f\n", gstAmount);
    printf("Final Amount:\t\t\t%.2f\n", finalAmount);
    printf("========================================\n");
    printf("        THANK YOU FOR SHOPPING!\n");
    printf("========================================\n");

    return 0;
}
