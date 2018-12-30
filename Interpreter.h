#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H

#include "Cli.h"
#include "Icommand.h"
#include "MemoryCtrl.h"
#include "Idna.h"
#include "New.h"

class interpreter
{
public:

    interpreter();
    ~interpreter();
    void run();
    void execCommand();

private:

    cli m_cli;
    memoryCtrl m_memoryCtrl;
    static std::map<char *, exec> commands;
    args * m_args;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H