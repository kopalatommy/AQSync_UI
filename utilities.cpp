#include "utilities.h"

Utilities::Utilities()
{

}

bool Utilities::CheckForBit(void * val, int bitIndex){
    return *(reinterpret_cast<int *>(val)) & (1 << bitIndex);
}
void Utilities::SetBit(void * val, int bitIndex){
    *(reinterpret_cast<unsigned int *>(val)) |= (1 << bitIndex);
}
//Review, broken
void Utilities::ClearBit(void * val, int bitIndex){
    *(reinterpret_cast<unsigned int *>(val)) -= (1 << bitIndex);
}

void Utilities::ConvertLongTo(long & val){
    switch (val) {
    case 160:
        //printf("Changed int 160\n");
        val = 1442;
        break;
    case 416:
        //printf("Changed int 416\n");
        val = 1443;
        break;
    case 672:
        //printf("Changed int 672\n");
        val = 1444;
        break;
    case 928:
        //printf("Changed int 928\n");
        val = 1445;
        break;
    case 1184:
        //printf("Changed int 1184\n");
        val = 1446;
        break;
    case 1440:
        //printf("Changed int 1440\n");
        val = 1447;
        break;
    case 161:
        //printf("Changed int 160\n");
        val = 1448;
        break;
    case 417:
        //printf("Changed int 416\n");
        val = 1449;
        break;
    case 673:
        //printf("Changed int 672\n");
        val = 1450;
        break;
    case 929:
        //printf("Changed int 928\n");
        val = 1451;
        break;
    case 1185:
        //printf("Changed int 1184\n");
        val = 1452;
        break;
    case 1441:
        //printf("Changed int 1440\n");
        val = 1453;
        break;
    }
}
void Utilities::ConvertLongBack(long & val){
    switch (val) {
    case 1442:
        val = 160;
        break;
    case 1443:
        val = 416;
        break;
    case 1444:
        val = 672;
        break;
    case 1445:
        val = 928;
        break;
    case 1446:
        val = 1184;
        break;
    case 1447:
        val = 1440;
        break;
    case 1448:
        val = 161;
        break;
    case 1449:
        val = 417;
        break;
    case 1450:
        val = 673;
        break;
    case 1451:
        val = 929;
        break;
    case 1452:
        val = 1185;
        break;
    case 1453:
        val = 1441;
        break;
    }
}
void Utilities::ConvertIntTo(int & val){
    switch (val) {
    case 160:
        //printf("Changed int 160\n");
        val = 1442;
        break;
    case 416:
        //printf("Changed int 416\n");
        val = 1443;
        break;
    case 672:
        //printf("Changed int 672\n");
        val = 1444;
        break;
    case 928:
        //printf("Changed int 928\n");
        val = 1445;
        break;
    case 1184:
        //printf("Changed int 1184\n");
        val = 1446;
        break;
    case 1440:
        //printf("Changed int 1440\n");
        val = 1447;
        break;
    case 161:
        //printf("Changed int 160\n");
        val = 1448;
        break;
    case 417:
        //printf("Changed int 416\n");
        val = 1449;
        break;
    case 673:
        //printf("Changed int 672\n");
        val = 1450;
        break;
    case 929:
        //printf("Changed int 928\n");
        val = 1451;
        break;
    case 1185:
        //printf("Changed int 1184\n");
        val = 1452;
        break;
    case 1441:
        //printf("Changed int 1440\n");
        val = 1453;
        break;
    }
}
void Utilities::ConvertIntBack(int & val){
    switch (val) {
    case 1442:
        val = 160;
        break;
    case 1443:
        val = 416;
        break;
    case 1444:
        val = 672;
        break;
    case 1445:
        val = 928;
        break;
    case 1446:
        val = 1184;
        break;
    case 1447:
        val = 1440;
        break;
    case 1448:
        val = 161;
        break;
    case 1449:
        val = 417;
        break;
    case 1450:
        val = 673;
        break;
    case 1451:
        val = 929;
        break;
    case 1452:
        val = 1185;
        break;
    case 1453:
        val = 1441;
        break;
    }
}
