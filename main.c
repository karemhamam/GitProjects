/*================================================================
*    @file             : main.c
*    @brief            : clinic management system high level code
*    @author           : Rewan Dabies
=================================================================*/

/* Linking Section starts */
#include <stdio.h>
#include <stdlib.h>
#include "patient.h"
#include "doctor.h"
#include "appointment.h"
#include "billing.h"
#include "records.h"
/* Linking Section ends */


/* Global declaration section starts */
void MainMenu();
/* Global declaration section ends */


/* Main Program Section */
int main()
{
    /* Calling our sub programs */
    MainMenu();
    return 0;
}


void MainMenu(){

int choice;

while(1){
        printf("\nClinic Management System\n");
        printf("1. Manage Patients\n");
        printf("2. Manage Doctors\n");
        printf("3. Schedule Appointment\n");
        printf("4. Generate Bill\n");
        printf("5. Manage Records\n");
        printf("6. Search Patient\n");
        printf("7. Search Doctor\n");
        printf("8. Exit\n");
        printf("Enter Your Choice: \n");
        scanf("%i", &choice);

        switch(choice){
        case 1:
            addpatient();
            break;

        case 2:
            add_doctor();
            break;

        case 3:
            scheduleappointment();
            break;

        case 4:
            generatebill();
            break;

        case 5:
            managerecords();
            break;

        case 6:
            searchpatient();
            break;
        case 7:
            searchdoctor();
            break;

        case 8:
            return ;

        default :
            printf("Invalid choice, please try again.\n");
}
}
}


/*==============================================================================

    Date                By                  Description
    ------------        ------------        ------------
    31August2024        Rewan Dabies        creating clinic management file
==============================================================================*/
