#ifdef __cplusplus
#error "Do not use C++: this is a C application."
#endif
#if !defined(__GNUC__) || (__GNUC__ < 4)
#define __attribute__(x)
#endif
#if defined(__linux__) || defined(__MINT__)
#define _GNU_SOURCE	/* See test-*.c what needs this. */
#endif
#if !defined(__BEGIN_DECLS)
# define __BEGIN_DECLS
#endif
#if !defined(__END_DECLS)
# define __END_DECLS
#endif
#include <sys/types.h>
#define INFTIM (-1)
#define HAVE_ARC4RANDOM 1
#define HAVE_B64_NTOP 0
#define HAVE_CAPSICUM 0
#define HAVE_ERR 1
#define HAVE_EXPLICIT_BZERO 0
#define HAVE_GETPROGNAME 1
#define HAVE_INFTIM 0
#define HAVE_MD5 0
#define HAVE_MEMMEM 1
#define HAVE_MEMRCHR 0
#define HAVE_MEMSET_S 1
#define HAVE_PATH_MAX 1
#define HAVE_PLEDGE 0
#define HAVE_PROGRAM_INVOCATION_SHORT_NAME 0
#define HAVE_REALLOCARRAY 0
#define HAVE_RECALLOCARRAY 0
#define HAVE_SANDBOX_INIT 1
#define HAVE_SECCOMP_FILTER 0
#define HAVE_SOCK_NONBLOCK 0
#define HAVE_STRLCAT 1
#define HAVE_STRLCPY 1
#define HAVE_STRNDUP 1
#define HAVE_STRNLEN 1
#define HAVE_STRTONUM 0
#define HAVE_SYSTRACE 0
#define HAVE_ZLIB 1
#define HAVE___PROGNAME 1
#define MD5_BLOCK_LENGTH 64
#define MD5_DIGEST_LENGTH 16
#define MD5_DIGEST_STRING_LENGTH (MD5_DIGEST_LENGTH * 2 + 1)
typedef struct MD5Context {
	u_int32_t state[4];
	u_int64_t count;
	u_int8_t buffer[MD5_BLOCK_LENGTH];
} MD5_CTX;
extern void MD5Init(MD5_CTX *);
extern void MD5Update(MD5_CTX *, const u_int8_t *, size_t);
extern void MD5Pad(MD5_CTX *);
extern void MD5Transform(u_int32_t [4], const u_int8_t [MD5_BLOCK_LENGTH]);
extern char *MD5End(MD5_CTX *, char *);
extern void MD5Final(u_int8_t [MD5_DIGEST_LENGTH], MD5_CTX *);
extern void explicit_bzero(void *, size_t);
void *memrchr(const void *b, int, size_t);
extern void *reallocarray(void *, size_t, size_t);
extern void *recallocarray(void *, size_t, size_t, size_t);
extern long long strtonum(const char *, long long, long long, const char **);
