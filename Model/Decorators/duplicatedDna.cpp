#include "duplicatedDna.h"

duplicatedDna::duplicatedDna(IDNAp dnaToDuplicate, std::string name)
{

    m_dna = dnaToDuplicate;

    idSeq = autoInc++;

    if(name.compare(""))
    {
        nameSeq = name;
    }

    else
    {
        setToDefualtName();
    }
}

unsigned long duplicatedDna::getLength()const
{
    return m_dna->getLength();
}

Nucleotide duplicatedDna::operator[](size_t index)const
{
    return m_dna-> operator[](index);
}



