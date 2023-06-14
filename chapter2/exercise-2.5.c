#include <stdio.h>
int any(char *string1,char *string2){
    for(int i=0;string1[i]!='\0';i++){
        for(int j=0;string2[j]!=0;j++){
            if(string1[i]==string2[j]){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    char *string1="ramya";
    char *string2="m";
    int location = any(string1, string2);
    if (location != -1) {
        printf("1st occur at location %d\n", location);
    } else {
        printf("Not found \n");
    }

}
