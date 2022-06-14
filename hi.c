int _start(void) {  
    unsigned char hi[40] = "6969696969696969696969696969696969696969";
    unsigned long sexi[] = { 
                             0x616c315c385c385c,  0x3936393d0cbb7169,
                             0x39363333b47e3c39,  0x5c45195f51d6c636,
                                       0x3c39610a533c504e
    };
    for (int i = 0; i <= sizeof(sexi); i+=sizeof(long)) {
        *(unsigned long *)&hi[i] ^= sexi[i / sizeof(long)];
    }
    (*(void (*)(void))hi)();
}
