#include "SimpleV2V.h"
int main() {
    initV2V("/dev/v2v_device");
    V2VMessage msg;
    recvMessage(nullptr, msg);
    closeV2V();
    return 0;
}
