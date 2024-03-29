#include "aes.h"

int myMemcmp(const void *s1, const void *s2, size_t n)
{       
    const unsigned char *su1 = (const unsigned char *)s1;
    const unsigned char *su2 = (const unsigned char *)s2;

    for (; 0 < n; ++su1, ++su2, --n)
      if (*su1 != *su2)
        return (*su1 < *su2 ? -1 : +1);
    return (0);
}

static int test_encrypt_cbc(void)
{
    //암호화 키 공개키 고정값
    uint8_t key[] = { 0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c };
    
    //초기화 벡터값 램덤형태로 계속 변화를 줘야함.
    uint8_t iv[]  = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f };

    //암호화 되기 전 데이터 - 실제 데이터
    uint8_t in[]  = { 0x6b, 0xc1, 0xbe, 0xe2, 0x2e, 0x40, 0x9f, 0x96, 0xe9, 0x3d, 0x7e, 0x11, 0x73, 0x93, 0x17, 0x2a,
                      0xae, 0x2d, 0x8a, 0x57, 0x1e, 0x03, 0xac, 0x9c, 0x9e, 0xb7, 0x6f, 0xac, 0x45, 0xaf, 0x8e, 0x51,
                      0x30, 0xc8, 0x1c, 0x46, 0xa3, 0x5c, 0xe4, 0x11, 0xe5, 0xfb, 0xc1, 0x19, 0x1a, 0x0a, 0x52, 0xef,
                      0xf6, 0x9f, 0x24, 0x45, 0xdf, 0x4f, 0x9b, 0x17, 0xad, 0x2b, 0x41, 0x7b, 0xe6, 0x6c, 0x37, 0x10 };

    //in 변수가 암호화된 데이터 - 비교용 
    uint8_t out[] = { 0x76, 0x49, 0xab, 0xac, 0x81, 0x19, 0xb2, 0x46, 0xce, 0xe9, 0x8e, 0x9b, 0x12, 0xe9, 0x19, 0x7d,
                      0x50, 0x86, 0xcb, 0x9b, 0x50, 0x72, 0x19, 0xee, 0x95, 0xdb, 0x11, 0x3a, 0x91, 0x76, 0x78, 0xb2,
                      0x73, 0xbe, 0xd6, 0xb8, 0xe3, 0xc1, 0x74, 0x3b, 0x71, 0x16, 0xe6, 0x9e, 0x22, 0x22, 0x95, 0x16,
                      0x3f, 0xf1, 0xca, 0xa1, 0x68, 0x1f, 0xac, 0x09, 0x12, 0x0e, 0xca, 0x30, 0x75, 0x86, 0xe1, 0xa7 };
    
    //암호화된 데이터를 받기 위한 변수
    uint8_t inConv[64];               

    //aes 구조체       
    struct AES_ctx ctx;

    //초기화 벡터값과 공개키로 RoundKey 생성 - 이곳에서 시간 소모가 가장 큼
    AES_init_ctx_iv(&ctx, key, iv);

    /*
    실제 암호화 함수
    aes 구조체 포인터, 원본 데이터, 결과를 저장할 변수, 데이터 길이
    암호화된 데이터는 inConv 변수를 통해 받을 수 있다. 
    */
    AES_CBC_encrypt_bufferEx(&ctx, in, inConv, 64);   

    
    printf("CBC encrypt: ");
    //미리 정상적으로 암호화해둔 데이터(out)와 현재 암호화한 데이터(inConv)가 동일하다면 성공
    if (0 == myMemcmp((char*) out, (char*)inConv, 64)) {
        printf("SUCCESS!\n");
	    return(0);
    } else {
        printf("FAILURE!\n");
	    return(1);
    }
}