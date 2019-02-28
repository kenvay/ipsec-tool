#ifndef _IPSEC_SM4_H_
#define _IPSEC_SM4_H_

///////////////////////////////////////////////////////////////////////////////
#define SM4_ENCRYPT     1
#define SM4_DECRYPT     0
///////////////////////////////////////////////////////////////////////////////
vchar_t * sm4_cbc_encrypt(vchar_t *data, vchar_t *key, vchar_t *iv);
vchar_t * sm4_cbc_decrypt(vchar_t *data, vchar_t *key, vchar_t *iv);
int     sm4_weakkey(vchar_t *key);
int     sm4_keylen(int len);
///////////////////////////////////////////////////////////////////////////////

#endif
