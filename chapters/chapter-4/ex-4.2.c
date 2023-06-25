#include <stdio.h>
#include <ctype.h> 

double atof(char s[]);


int main(){
    printf("22426.76 \n");
    double ans = atof("22426.76e+3");
    printf("%6.6lf",ans);
}


double atof(char s[]){
double val, power;
int i, sign, expe;

for(i = 0; isspace(s[i]); i++);

sign =(s[i] == '-') ? -1 : 1;
if (s[i]=='+'||s[i]=='-'){
    i++;
}

for(val = 0.0; isdigit(s[i]); i++){
    val = 10.0 * val + (s[i] - '0');
}
if(s[i] == '.'){
    i++;
}
for(power = 1.0; isdigit(s[i]); i++){
    val = 10.0 * val + (s[i] - '0');
    power = power * 10.0;
}
val = sign * val / power ;

if(s[i] == 'e' || s[i] == 'E'){
    sign = (s[++i] == '-')? -1 : 1;
}

if(s[i] == '+' || s[i] == '-'){
    i++;
}

for(expe = 0; isdigit(s[i]); i++){
expe = 10.0 * expe + (s[i] - '0');
}

if(sign == 1){
    while (expe-- > 0)
    {
        val *= 10;
    }
}
    else{
        while (expe-- > 0)
        {
            val /= 10;
        }
    }
return val;
}

