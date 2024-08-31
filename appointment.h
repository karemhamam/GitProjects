#ifndef APPOINTMENT_H
#define APPOINTMENT_H

struct appointment {
int id;
int patientId;
int doctorId;
char date[10];
char time[5];
};

void scheduleappointment();
void displayappointments();

#endif // APPOINTMENT_H
