/**********************************************************************************************************************
 * Includes
 *********************************************************************************************************************/
#include "sms_api.h"
/**********************************************************************************************************************
 * Private definitions and macros
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Private typedef
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Private constants
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Private variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Exported variables and references
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Prototypes of private functions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Definitions of private functions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Definitions of exported functions
 *********************************************************************************************************************/
void SMS_API_Init (void) {
    Modem_API_Init();
}

bool SMS_API_SendSMS (char *string) {
    return true;
}

bool SMS_API_ReceiveSMS (char *data, uint16_t buffer_size, uint32_t timeout) {
    return true;
}