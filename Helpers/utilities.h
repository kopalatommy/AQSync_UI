#ifndef UTILITIES_H
#define UTILITIES_H

#include <QObject>

class Utilities
{
public:
    Utilities();

    static void ConvertCharTo(unsigned char & val);
    static void ConvertCharBack(unsigned char & val);

    static void ConvertIntTo(int & val);
    static void ConvertIntBack(int & val);
};

#endif // UTILITIES_H
