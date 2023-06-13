  for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;

// loop equivalent to the for loop above without using && or ||.
  for(int i = 0 ; i < lim-1; i++ ){
    c=getchar();
    if(c == EOF)
        break;
    if(c == '\n')
        break;
    s[i] = c;
}