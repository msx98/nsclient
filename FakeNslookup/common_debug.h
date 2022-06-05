#pragma once

#define FLAG_DEBUG         1
#define FLAG_IGNORE_SOCKET 0
#define FLAG_SKIP_HOSTNAME 1
#define FLAG_SINGLE_ITER   0
#define FLAG_HAMMING_DIS   0

#define DEBUG_FILE_PATH      "C:\\Users\\Public\\lala.txt"
#define DEBUG_FILE_PATH_RECV "C:\\Users\\Public\\lala2.txt"
#define DEBUG_HOSTNAME "www.google.com"

#if FLAG_DEBUG == 1
#define printd printf
#else
#define printd(...)
#endif

#define perror(...) fprintf(stderr, __VA_ARGS__)

#define _CRT_SECURE_NO_WARNINGS
