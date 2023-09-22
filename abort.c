#include <stdio.h>
#include<stdlib.h>

#define _WRITE_ABORT_MSG 1
#define _CALL_REPORTFAULT 2

int main() {
    // Set the _WRITE_ABORT_MSG flag to enable abort message writing.
    _set_abort_behavior(_WRITE_ABORT_MSG, _WRITE_ABORT_MSG);

    // ... Rest of your program ...

    // When abort is called, it will write an abort message to stderr.
    abort();
    
    return 0;
}
