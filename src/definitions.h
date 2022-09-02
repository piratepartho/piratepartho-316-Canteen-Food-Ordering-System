#ifndef DEFINITIONS
#define DEFINITIONS

#define SERIALDEBUG 1
#define DEBUG 1
#define KEYPADDEBUG 1
#define SERIALDEBUG 1


#define TOTAL_ITEMS 6


#define SEND_ID_COMMAND "CID-"
#define SEND_PASS_COMMAND "CPS-"
#define SEND_MSG_COMMAND "CMS"

enum STATE{
  MENU,QUANTITY,PRESS_RFID, VERIFY_RFID, ENTER_PIN, WRONG_RFID, VERIFY_PIN, CONFIRM_TRANSACTION
};

STATE state=PRESS_RFID;


#endif