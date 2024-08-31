#include <stdio.h>
#include <stdlib.h>
#include "patient.h"
#include "utilities.h"

static unsigned int patientscount = 0;
static struct patient patients[100];


void addpatient(){
struct patient p;
p.patient_id = generatepatientId();

printf("Enter your name: \n");
scanf("%s", &p.patient_name);

printf("Enter your address: \n");
scanf("%s", &p.patient_address);

printf("Enter your age: \n");
scanf("%i", &p.patient_age);

printf("Enter your phone: \n");
scanf("%s", &p.patient_phone);

printf("Enter your gender (Male / Female): \n");
scanf("%s", &p.gender);

patients[patientscount++] = p;
printf("Patient added successfully with ID %i\n", p.patient_id);
}

void searchpatient(){
int id;
printf("Enter your ID: \n");
scanf("%i", &id);
for(int i = 0; i < patientscount; i++){
    if(patients[i].patient_id == id){
        printf("Patient found:\nName: %s - Address: %s - Phone: %s - Age: %d - Gender: %s\n",
               patients[i].patient_name ,
               patients[i].patient_address,
               patients[i].patient_phone,
               patients[i].patient_age,
               patients[i].gender);
               return ;
}
}
printf("Patient not found.\n");
}

void displaypatients(){
printf("Patient List:\n");
for(int i = 0; i < patientscount; i++){
    printf("ID: %i - Name: %s - Phone: %s - Gender: %s\n",
           patients[i].patient_id,
           patients[i].patient_name,
           patients[i].patient_phone,
           patients[i].gender);
}
}
