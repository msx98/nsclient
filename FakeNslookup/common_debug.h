#pragma once

#define FLAG_DEBUG                 1
#define FLAG_SKIP_HOSTNAME         0
#define FLAG_REVERT_DNS_IF_INVALID 1
#define FLAG_REAL_NSLOOKUP         0

#define DEBUG_HOSTNAME "www.google.com"

#if FLAG_DEBUG == 1
#define printd printf
#else
#define printd(...)
#endif

#if FLAG_DEBUG == 1
#define assertd assert
#else
#define assertd(...)
#endif

#define perror(...) fprintf(stderr, __VA_ARGS__)

#define _CRT_SECURE_NO_WARNINGS
