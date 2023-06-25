/* getop function using pointers */
int getop(char *s){
    int c;
    while((*s = c = getch()) == ' ' || c == '\t')
        ;
    *(s + 1) = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    int i = 0;
    if(isdigit(c))
        while(isdigit(*(s + (++i)) = c = getch()))
            ;
    if(c == '.')
        while(isdigit(*(s + (++i)) = c = getch()))
        ;
    *(s + i) = '\0';
    if(c != EOF)
        ungetch(c);
    return NUMBER;
}

/* reverse function using pointers */
void reverse (char *s, int start, int end) {
    if (start >= end)
        return;
    char *start_ptr = s  + start;
    char *end_ptr = s + end;
    char temp = *start_ptr;
    *start_ptr = *end_ptr;
    *end_ptr = temp;
    reverse(s, start + 1,end - 1);
}

/* itoa function using pointers */
void itoa(int n, char *s) {
    int sign = n;
    char *ptr = s;
    if(sign < 0) {
        n = -n;
    }
    do {
        *ptr = n % 10 + '0';
        ptr++;
        n/=10;
    }while(n > 0);
    if(sign < 0){
        *ptr = '-';
        ptr++;
    }
    *ptr = '\0';
    reverse(s);
}

/* atoi function using pointers */

int atoi(const char *s) {
    int res = 0;
    int sign = 1;
    while(*s == ' ' || *s == '\t')
        s++;
    if(*s == '-' || *s == '+'){
 sign =(*s == '-') ? -1 : 1;
s++;
}
while (*s >= '0' && *s <= '9'){
result = result * 10 + (*s - '0');
s++;
}
return result * sign;
}