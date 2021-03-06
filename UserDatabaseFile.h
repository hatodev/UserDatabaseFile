#ifndef USERDATABASEFILE_H
#define USERDATABASEFILE_H
#include <FS.h>
/*****************************************************************************************************
******************************************************************************************************
THIS IS A PROJECT ABOUT A SIMPLE DATABASE SAVED AS .TXT FILE IN THE FLASH MEMORY 
THIS DATABASE HAS JUST ONE TABLE 
--------------------------------------------------------
ID | USERNAME | PASSWORD
--------------------------------------------------------
00 | admin    | d033e22ae348aeb5660fc2140aec35850c4da997 
   |          |
   |          |
   |          |
   |          |
WITH EACH RECORD HAS FORMAT BELOW : 
[XX][40_CHARACTERS_OF_USERNAME][40_CHARACTERS_OF_USERPASSWORD][RECORD_SEPARATOR_CHARACTER_(ASCII=30)]
IT TAKES 83 BYTES PER RECORD : 82 BYTES OF DATA AND 1 BYTES FOR [RECORD_SEPARATOR_CHARACTER]
IN THIS PROJECT YOU CAN MANAGE UP TO 100 USERS 
DEV BY : HATO 
******************************************************************************************************
*****************************************************************************************************/
class UserDatabaseFile{
    public:
        UserDatabaseFile();
        int openDatabaseReadMode();
        int openDatabaseWriteMode();
        int openDatabaseInitMode();
        void closeDatabase();
        
        void initDatabase();        
        int sizeOfDatabase();
        int numberOfRecords();
        
        void setDatabaseCursor(int index);
        String readRecord();
        String makeRecord(String, String);
        //String makeRecord(User);
        //void writeRecord(String, String);
        void writeRecord(String record);
    private:
        File Database;
};    
#endif
