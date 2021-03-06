#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H

#include <sstream>
#include "Nucleotide.h"


class  Idna
{
public:

    virtual ~Idna(){};

    virtual unsigned long getLength() const = 0;
    virtual Nucleotide operator[](size_t) const = 0;

    virtual int getIdSeq() const = 0;
    virtual std::string getNameSeq() const = 0;
    virtual void setNameSeq( std::string ) = 0;


protected:

    std::string nameSeq;
    int idSeq;
    unsigned long len;
    static int autoInc;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
