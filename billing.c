#include <stdio.h>
#include <stdlib.h>
#include "billing.h"
#include "utilities.h"


static unsigned int billsCount = 0;
static struct bill bills[100];


void generatebill(){

struct bill b;
b.id = generatebillId();

printf("Enter Patient ID: \n");
scanf("%i", &b.patientId);

printf("Enter Amount: \n");
scanf("%d", &b.amount);

printf("Enter Date (dd-mm-yyyy): \n");
scanf("%s", b.date);

bills[billsCount++] = b;
printf("Bill generated successfully with ID %i.\n", b.id);
}

void displaybills(){
printf("bills List: \n");
for(int i = 0; i < billsCount; i++){
     printf("Bill ID: %i - Patient ID: %i - Bill date: %s - Bill Amount: %0.2d\n",
            bills[i].id,
            bills[i].patientId,
            bills[i].date,
            bills[i].amount);
}
}
