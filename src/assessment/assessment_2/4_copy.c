//
// Created by technoidentity on 27/6/23.
//
//Write the following function which copies src array to dest array.
// You can assume that dest array has enough space to hold src array.
// end is the pointer to the one element beyond the last element of src array.
void cpy(int *dest, int *src, int *end){
    while(*src != 0){
        *dest = * src;
        dest++;
        src++;
    }
}