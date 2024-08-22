// #include<stdio.h>
// void printstar(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         printf("%c",str[i]);
//         i++;
//     }
// }
// int main()
// {
//     char str[]={'h','a','r','r','y','\n'};
//     printstar(str);
//     return 0;
// }

// #include<stdio.h>
// void printstar(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         printf("%c",str[i]);
//         i++;
//     }
// }
// int main()
// {
//     char str[]="harry";
//     printstar(str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[] = "harry";
//     char s2[] = "ravi";
//     // puts(strcat(s1, s2));
//     printf("the length of s1 is %d\n", strlen(s1));
//     printf("the length of s2 is %d\n", strlen(s2));
//     printf("the reverse is ");
//     puts(strrev(s1));
//     puts(strrev(s2));
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[]="my name is harshita";
//     printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[]="my name is harshita";
//     puts(str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[48];
//     scanf("%s",str);
//     printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[48];
//     gets(str);
//     printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[48];
//     scanf("%[^\n]s",str);
//     printf("%s",str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[48];
//     gets(str);
//     printf("%s\n", str);
//     // printf(strrev(str));
//     int size = 0;
//     int k = 0;
//     while (str[k] != '\0')
//     {
//         size++;
//         k++;
//     }
//     for(int i=0,j=size-1;i<=j;i++,j--){
//         char temp =  str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
//     puts("the reverse is =");
//     puts(str);

// //     printf("%d", size);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20] = "college";
//     printf("%s\n", str);
//     for (int i = 6; i >= 2; i--)
//     {
//         str[i + 1] = str[i];
//     }
//     str[2] = 'k';
//     printf("%s", str);
//     return 0;
// }


