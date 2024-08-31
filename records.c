#include <stdio.h>
#include <stdlib.h>
#include "records.h"
#include "patient.h"
#include "doctor.h"
#include "appointment.h"
#include "billing.h"


void managerecords(){
printf("Record Management System\n");
displaypatients();
displaydoctors();
displayappointments();
displaybills();
}
