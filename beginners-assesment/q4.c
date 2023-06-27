void cpy(int *dest, int *src, int *end){
    while(src<end){
        *dest= *src;
        dest++;
        src++;
    }
}