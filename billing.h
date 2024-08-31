#ifndef BILLING_H
#define BILLING_H

struct bill {
int id;
int patientId;
double amount;
char date[10];
};

void generatebill();
void displaybills();

#endif // BILLING_H
