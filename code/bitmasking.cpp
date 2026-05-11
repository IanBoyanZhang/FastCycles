#if defined(__i386__) || defined(__x86_64__)
#include <imintrin.h>
#endif

unsigned int approach_1(unsigned int n) {
  return n & -n;
}

int main(int argc, char** argv) {
  return approach_1(argc);
}

// -O2 -mbmi
// blsi    eax, edi
// ret
//
// -O2
// mov     eax, edi
// neg     eax
// and     eax, edi
// ret
