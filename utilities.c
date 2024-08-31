#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"

int generateId(){
static int id  = 0;
return (++id);
}

int generatepatientId(){
static int id  = 0;
return (++id);
}

int generatedoctorId(){
static int id  = 0;
return (++id);
}

int generateappointmentId(){
static int id  = 0;
return (++id);
}

int generatebillId(){
static int id  = 0;
return (++id);
}
