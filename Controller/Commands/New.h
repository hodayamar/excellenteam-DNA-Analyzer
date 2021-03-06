#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NEW_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NEW_H

#include "../ControllerTools/commandHelper.h"

class New : public commandHelper
{
public:

   New();
   ~New();
    void run(int argc, char ** argv, memoryCtrl &);
    static Icommand *  Create();


private:

    std::string name;
    char * seq;

    void setNameSeq( int, char **, memoryCtrl & );
    void setSeq( char ** );
    void createAndAddingSeqToDB( memoryCtrl & );



};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NEW_H
