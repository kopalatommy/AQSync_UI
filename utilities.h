#ifndef UTILITIES_H
#define UTILITIES_H


class Utilities
{
public:
    Utilities();

    static bool CheckForBit(void * val, int bitIndex);
    static void SetBit(void * val, int bitIndex);
    static void ClearBit(void * val, int bitIndex);

    static void ConvertCharTo(unsigned char & val);
    static void ConvertCharBack(unsigned char & val);
    static void ConvertLongTo(long & val);
    static void ConvertLongBack(long & val);
    static void ConvertIntTo(int & val);
    static void ConvertIntBack(int & val);
};

#endif // UTILITIES_H
