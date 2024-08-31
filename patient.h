#ifndef PATIENT_H
#define PATIENT_H

struct patient {
int patient_id;
char patient_name[100];
char patient_address[150];
char patient_phone[15];
int patient_age;
char gender[7];
};

void addpatient();
void searchpatient();
void displaypatients();

#endif // PATIENT_H
