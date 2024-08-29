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

// #include <stdio.h>

// int main() {
//     char str[100], ch;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     printf("You entered: %s and %c\n", str, ch);

//     return 0;
// }

// #include <stdio.h>

// int my_strlen(const char *str) {
//     int len = 0;
//     while (*str != '\0') {
//         len++;
//         str++;
//     }
//     return len;
// }

// int main() {
//     char str[] = "hello";
//     int len = my_strlen(str);
//     printf("Length of string: %d\n", len);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void slice(char *str, int m, int n) {
//     int len = strlen(str);
//     if (m < 0 || n > len || m > n) {
//         printf("Invalid slice indices\n");
//         return;
//     }

//     // Shift the characters to the left
//     for (int i = m; i <= n; i++) {
//         str[i - m] = str[i];
//     }

//     // Null-terminate the string
//     str[n - m + 1] = '\0';
// }

// int main() {
//     char str[] = "hello world";
//     printf("Original string: %s\n", str);

//     slice(str, 6, 10);
//     printf("Sliced string: %s\n", str);

//     return 0;
// }

// #include <stdio.h>

// char *my_strcpy(char *dest, const char *src) {

//     char *original_dest = dest;

//     while (*src != '\0') {
//         *dest = *src;
//         dest++;
//         src++;
//     }

//     *dest = '\0';

//     return original_dest;
// }

// int main() {
//     char source[] = "Hello, World!";
//     char destination[50];

//     // Copy the string from source to destination
//     my_strcpy(destination, source);

//     // Print the result
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void encrypt_string(char* str) {
//     int i;
//     for (i = 0; i < strlen(str); i++) {
//         str[i] = str[i] + 1; // add 1 to the ASCII value of each character
//     }
// }

// int main() {
//     char str[] = "Hello, World!";
//     printf("Original string: %s\n", str);

//     encrypt_string(str);
//     printf("Encrypted string: %s\n", str);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void decrypt_string(char* str) {
//     int i;
//     for (i = 0; i < strlen(str); i++) {
//         str[i] = str[i] - 1; // subtract 1 from the ASCII value of each character
//     }
// }

// int main() {
//     char str[] = "Ifmmp, Xpsme!"; // encrypted string
//     printf("Encrypted string: %s\n", str);

//     decrypt_string(str);
//     printf("Decrypted string: %s\n", str);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int count_char_occurrences(char* str, char c) {
//     int count = 0;
//     int i;
//     for (i = 0; i < strlen(str); i++) {
//         if (str[i] == c) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     char str[] = "Hello, World!";
//     char c = 'o';
//     printf("String: %s\n", str);
//     printf("Character to search for: %c\n", c);
//     int occurrences = count_char_occurrences(str, c);
//     printf("Occurrences of '%c': %d\n", c, occurrences);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int char_present(char* str, char c) {
//     int i;
//     for (i = 0; i < strlen(str); i++) {
//         if (str[i] == c) {
//             return 1; // character found, return 1
//         }
//     }
//     return 0; // character not found, return 0
// }

// int main() {
//     char str[] = "Hello, World!";
//     char c = 'o';
//     printf("String: %s\n", str);
//     printf("Character to search for: %c\n", c);
//     int result = char_present(str, c);
//     if (result == 1) {
//         printf("Character '%c' is present in the string.\n", c);
//     } else {
//         printf("Character '%c' is not present in the string.\n", c);
//     }
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// void parser(char *string)
// {
//     int in = 0;
//     int index = 0;
//     for (int i = 0; i < strlen(string); i++)
//     {
//         if (string[i] == '<')
//         {
//             in = 1;
//             continue;
//         }
//         else if (string[i] == '>')
//         {
//             in = 0;
//             continue;
//         }
//         if (in == 0)
//         {
//             string[index] = string[i];
//             index++;
//         }
//     }
//     string[index] = '\0';
//     while (string[0] == ' ')
//     {
//         for (int i = 0; i < strlen(string); i++)
//         {
//             string[i] = string[i + 1];
//         }
//     }
//     while (string[strlen(string) - 1] == ' ')
//     {
//         string[strlen(string) - 1] = '\0';
//     }
// }
// int main()
// {
//     char string[] = "<h1>     this is a heading      <h1>";
//     parser(string);
//     printf("the parsed string is~~%s~~", string);
//     return 0;
// }