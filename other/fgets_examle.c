#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
    char test_str[] = "lewis";
    FILE* tmpf = tmpfile();
    fputs("Alan Turing\n", tmpf);
    fputs("John von Neumann\n", tmpf);
    fputs("Alonzo Church\n", tmpf);
 
    rewind(tmpf);
    
    printf("sizeof test_str : %d \n",(int)sizeof(test_str));
    printf("sizeof test_str : %d \n",(int)strlen(test_str));
    
    char buf[8];
    while (fgets(buf, sizeof buf, tmpf) != NULL)
          printf("\"%s\"\n", buf);
 
    if (feof(tmpf))
       puts("End of file reached");

    return 0;
}
