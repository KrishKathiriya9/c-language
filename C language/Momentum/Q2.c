#include <stdio.h>

main() {
    int unit;
    float bill = 0.0;

    printf("Enter electricity units: ");
    scanf("%d",&unit);

    if (unit <= 50) {
        bill = unit * 0.50;
    } else if (unit <= 150) {
        bill = 50 * 0.50 + (unit - 50) * 0.75;
    } else if (unit <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

    bill = bill * 1.20; 

    printf("Electricity Bill = Rs.%f", bill);

    
}