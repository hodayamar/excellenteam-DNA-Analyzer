#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SHOWLIST_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SHOWLIST_H

#include "../ControllerTools/Icommand.h"

class showList : public Icommand
{
public:

    ~showList();
    void run(int argc, char ** argv, memoryCtrl &);
    static Icommand *  Create();

};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SHOWLIST_H
