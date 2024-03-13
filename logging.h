#ifndef LOGGING_H
#define LOGGING_H
#include <stdlib.h>


#define LOG(type, format, ...) \
    printf("[%s] " format, type, ##__VA_ARGS__);

#define INFO(format, ...) \
    LOG("INFO", format, ##__VA_ARGS__);

#define ERRO(format, ...) \
    LOG("ERRO", format, ##__VA_ARGS__);

#define WARN(format, ...) \
    LOG("WARN", format, ##__VA_ARGS__);

#ifdef DEBUG
    #define DEBU(format, ...) \
        LOG("DEBU", format, ##__VA_ARGS__);
#else
    #define DEBU(format, ...) 
#endif // DEBUG

#endif // LOGGING_H
