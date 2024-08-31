#include <stdio.h>
#include <stdlib.h>
#include "appointment.h"
#include "utilities.h"

static unsigned int appointmentsCount = 0;
static struct appointment appointments[100];


void scheduleappointment(){

struct appointment app;
app.id = generateappointmentId();

printf("Enter Patient ID: \n");
scanf("%i", &app.patientId);

printf("Enter Doctor ID: \n");
scanf("%i", &app.doctorId);

printf("Enter Date (dd-mm-yyyy): \n");
scanf("%s", app.date);

printf("Enter Time (hh:mm): \n");
scanf("%s", app.time);

appointments[appointmentsCount++] = app;
printf("Appointment scheduled successfully with ID %i.\n", app.id);

}

void displayappointments(){
printf("Appointments List: \n");
for(int i = 0; i < appointmentsCount; i++){
     printf("Appointment ID: %i - Patient ID: %i - Doctor ID: %i - Appointment date: %s - Appointment time: %s\n",
            appointments[i].id,
            appointments[i].patientId,
            appointments[i].doctorId,
            appointments[i].date,
            appointments[i].time);
}
}

