#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <netinet/in.h>

int main(int argc, char const *argv[])
{
    FILE *aFile = fopen(argv[1], "rb");
    FILE *bFile = fopen(argv[2], "rb");

    char a[4];
    char b[4];

    fread(a,1,4,aFile);
    fread(b,1,4,bFile);

    uint32_t* aPoint = reinterpret_cast<uint32_t*>(a);
    uint32_t* bPoint = reinterpret_cast<uint32_t*>(b);

    uint32_t aVal = ntohl(*aPoint);
    uint32_t bVal = ntohl(*bPoint);
    uint32_t sum = aVal + bVal;
    
    printf("%d(%#x)+%d(%#x)=%d(%#x)\n",aVal,aVal,bVal,bVal,sum,sum);

    return 0;
}
