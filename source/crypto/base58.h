#ifndef LIBBASE58_H
#define LIBBASE58_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

extern bool (*b58_sha256_impl)(void *, const void *, size_t);

extern bool b58tobin(void *bin, size_t *binszp, const char *b58, size_t b58sz);
extern int b58check(const void *bin, size_t binsz, const char *base58str, size_t b58sz);

extern bool b58enc(char *b58, size_t *b58sz, const void *data, size_t binsz);
extern bool b58check_enc(char *b58c, size_t *b58c_sz, uint8_t *verPrefix, size_t prefixsz, 
		const void *data, size_t datasz, uint8_t *suffix, size_t suffixsz);

#ifdef __cplusplus
}
#endif

#endif
