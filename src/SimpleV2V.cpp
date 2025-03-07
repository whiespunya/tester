#ifndef SIMPLE_V2V_H
#define SIMPLE_V2V_H

#include "V2VTypes.h"

bool initV2V(const char* devicePath);
int recvMessage(V2VMessage &msg);
int sendMessage(const V2VMessage &msg);
void closeV2V();

#endif // SIMPLE_V2V_H
