/*******************************************************************************
* File Name: main.h
*
*******************************************************************************/

#ifndef MAIN_H
    #define MAIN_H
    #include <stdlib.h>
    #include <project.h>
    #include "stdio.h"
    #include "stdbool.h"
    #include "appGlobalDefinition.h"

    #include "../System/OTAMandatory.h"
    #include "../Utilities/errorCodes.h"

    /***************************************
    *   Conditional compilation parameters
    ***************************************/      
    
    #define     LOW_POWER_MODE    
    #define     IMO_FREQUENCY_3MHZ			(3u)
    #define     IMO_FREQUENCY_12MHZ			(12u)
    #define     IMO_FREQUENCY_24MHZ			(24u)

    /***************************************
    *           API Constants
    ***************************************/
    
    /***************************************
    *       Function Prototypes
    ***************************************/
    void CustomBootloaderSwitch();

#endif

/* [] END OF FILE */
