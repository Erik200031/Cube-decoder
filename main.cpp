#include <iostream>
#include "cube.h"

int main() {

    Cube obj;
    obj.incode("hello world");
    obj.decode(obj.code());
    return 0;
}
