#ifndef DOCTOR_H
#define DOCTOR_H

struct doctor {
int id;
char doctor_name[100];
char doctor_specialization[50];
};

void add_doctor();
void searchdoctor();
void displaydoctors();

#endif // DOCTOR_H
