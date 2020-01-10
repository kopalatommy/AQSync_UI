#include "communicationhandler.h"

CommunicationHandler::CommunicationHandler(){

}

CommunicationHandler * CommunicationHandler::instance = nullptr;
CommunicationHandler * CommunicationHandler::GetInstance(){
    if(instance == nullptr) instance = new CommunicationHandler();
    return instance;
}
