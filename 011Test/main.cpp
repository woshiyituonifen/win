#include <iostream>
#include <openssl/md5.h>
int main() {

    MD5_CTX ctx;
    unsigned char outmd[16];
    int i = 0;
    memset(outmd,0,sizeof(outmd));

    MD5_Init(&ctx);
    MD5_Update(&ctx,"hel",3);
    MD5_Update(&ctx,"lo\n",3);
    MD5_Final(outmd,&ctx);
    for(i = 0 ; i < 16 ; i++){
        printf("%02X",outmd[i]);
    }
    printf("\n");
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
