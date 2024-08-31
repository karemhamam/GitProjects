#include <stdio.h>
#include <stdlib.h>
#include "doctor.h"
#include "utilities.h"

static unsigned int doctorscount = 0;
static struct doctor doctors[100];

void add_doctor(){

struct doctor d;
d.id = generatedoctorId();

printf("Enter Name: \n");
scanf("%s", &d.doctor_name);

printf("Enter Specialization: \n");
scanf("%s", &d.doctor_specialization);

doctors[doctorscount++] = d;
printf("Doctor added successfully with ID %d.\n", d.id);
}

void searchdoctor(){
int id;
printf("Enter ID: \n");
scanf("%i", &id);
for(int i = 0; i < doctorscount; i++){
    if(doctors[i].id == id){
        printf("Doctor found:\nName: %s - Specialization: %s\n",
               doctors[i].doctor_name,
               doctors[i].doctor_specialization);
        return ;
}
}
printf("Doctor not found.\n");
}

void displaydoctors(){
printf("Doctors List: \n");
for(int i = 0; i < doctorscount; i++){
     printf("Doctor ID: %i - Doctor Name: %s - Doctor Specialization: %s\n",
            doctors[i].id,
            doctors[i].doctor_name,
            doctors[i].doctor_specialization);
}
}
