#ifndef ERROR2_H
#define ERROR2_H

#include <stdexcept>
using std::runtime_error;

class Error2 : public runtime_error
{
public:
    Error2() : runtime_error("Segundo Error!") {}
    void mostrar_error()
    {
        throw this;
    }
};

#endif