// #include <stdio.h>
// // #include <stdlib.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[34];

//     ptr = fopen("myfile.txt","r");
//     fscanf(ptr, "%s", string);
//     printf("The content of this file has %s\n",string);
//     return 0;
// }



// #include <stdio.h>
// // #include <stdlib.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[64] = "This content was produced by Me";

//     ptr = fopen("myfile.txt","w");
//     fprintf(ptr, "%s", string);
//     return 0;
// }





// #include <stdio.h>
// // #include <stdlib.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[64] = "This content was produced by Me";

//     ptr = fopen("myfile.txt","a");
//     fprintf(ptr, "%s", string);
//     return 0;
// }





// #include <stdio.h>
// // #include <stdlib.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[64] = "This content was produced by Me";

//     ptr = fopen("myfile.txt","w");
//     fprintf(ptr, "%s", string);
//     return 0;
// }




// #include <stdio.h>

// int main() {
//     FILE *file;
//     int num1, num2, num3;

//     // Open the file in read mode
//     file = fopen("input.txt", "r");
//     if (file == NULL) {
//         printf("Error opening file\n");
//         return 1;
//     }

//     // Read the three integers from the file
//     fscanf(file, "%d %d %d", &num1, &num2, &num3);

//     // Close the file
//     fclose(file);

//     // Print the integers
//     printf("The three integers are: %d %d %d\n", num1, num2, num3);

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int num;

//     // Ask the user for the number
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Open the file in write mode
//     FILE *file = fopen("multiplication_table.txt", "w");
//     if (file == NULL) {
//         printf("Error opening file\n");
//         return 1;
//     }

//     // Generate the multiplication table
//     fprintf(file, "Multiplication Table of %d:\n", num);
//     fprintf(file, "--------------------------------\n");
//     for (int i = 1; i <= 10; i++) {
//         fprintf(file, "%d x %d = %d\n", num, i, num * i);
//     }

//     // Close the file
//     fclose(file);

//     printf("Multiplication table generated and saved to multiplication_table.txt\n");

//     return 0;
// }






// #include <stdio.h>

// int main() {
//     // Open the input file in read mode
//     FILE *input_file = fopen("input.txt", "r");
//     if (input_file == NULL) {
//         printf("Error opening input file\n");
//         return 1;
//     }

//     // Open the output file in write mode
//     FILE *output_file = fopen("output.txt", "w");
//     if (output_file == NULL) {
//         printf("Error opening output file\n");
//         fclose(input_file);
//         return 1;
//     }

//     // Read the input file character by character and write its content twice to the output file
//     char c;
//     while ((c = fgetc(input_file)) != EOF) {
//         fputc(c, output_file);
//     }
//     rewind(input_file); // Go back to the beginning of the input file
//     while ((c = fgetc(input_file)) != EOF) {
//         fputc(c, output_file);
//     }

//     // Close the files
//     fclose(input_file);
//     fclose(output_file);

//     printf("Content written twice to output.txt\n");

//     return 0;
// }




// #include <stdio.h>
// #include <string.h>

// int main() {
//     char employee1_name[50];
//     char employee2_name[50];
//     float employee1_salary;
//     float employee2_salary;

//     // Ask the user for the name and salary of the first employee
//     printf("Enter the name of the first employee: ");
//     fgets(employee1_name, sizeof(employee1_name), stdin);
//     employee1_name[strcspn(employee1_name, "\n")] = 0; // Remove the newline character
//     printf("Enter the salary of the first employee: ");
//     scanf("%f", &employee1_salary);

//     // Ask the user for the name and salary of the second employee
//     printf("Enter the name of the second employee: ");
//     fgets(employee2_name, sizeof(employee2_name), stdin);
//     employee2_name[strcspn(employee2_name, "\n")] = 0; // Remove the newline character
//     printf("Enter the salary of the second employee: ");
//     scanf("%f", &employee2_salary);

//     // Open the file in write mode
//     FILE *file = fopen("employees.txt", "w");
//     if (file == NULL) {
//         printf("Error opening file\n");
//         return 1;
//     }

//     // Write the employee data to the file
//     fprintf(file, "Employee 1:\n");
//     fprintf(file, "Name: %s\n", employee1_name);
//     fprintf(file, "Salary: %.2f\n\n", employee1_salary);

//     fprintf(file, "Employee 2:\n");
//     fprintf(file, "Name: %s\n", employee2_name);
//     fprintf(file, "Salary: %.2f\n", employee2_salary);

//     // Close the file
//     fclose(file);

//     printf("Employee data written to employees.txt\n");

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     // Open the file in read mode
//     FILE *file = fopen("input.txt", "r+");
//     if (file == NULL) {
//         printf("Error opening file\n");
//         return 1;
//     }

//     // Read the integer from the file
//     int num;
//     fscanf(file, "%d", &num);

//     // Double the value
//     num *= 2;

//     // Move the file pointer to the beginning of the file
//     rewind(file);

//     // Write the new value to the file
//     fprintf(file, "%d", num);

//     // Close the file
//     fclose(file);

//     printf("Value doubled and written back to input.txt\n");

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamically allocate an array of 6 integers
//     int* arr = (int*) malloc(6 * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Initialize the array with some values
//     for (int i = 0; i < 6; i++) {
//         arr[i] = i * 2; // Initialize with even numbers
//     }

//     // Print the array values
//     for (int i = 0; i < 6; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Don't forget to free the dynamically allocated memory
//     free(arr);

//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamically allocate an array of 6 integers using calloc
//     int* arr = (int*) calloc(6, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Get input from the user to store in the array
//     printf("Enter 6 integers:\n");
//     for (int i = 0; i < 6; i++) {
//         printf("Enter arr[%d]: ", i);
//         scanf("%d", &arr[i]);
//     }

//     // Print the array values
//     printf("You entered:\n");
//     for (int i = 0; i < 6; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Don't forget to free the dynamically allocated memory
//     free(arr);

//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamically allocate an array of 6 integers using calloc
//     int* arr = (int*) calloc(6, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Initialize the array with some values
//     for (int i = 0; i < 6; i++) {
//         arr[i] = i * 2; // Initialize with even numbers
//     }

//     // Print the array values
//     for (int i = 0; i < 6; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Don't forget to free the dynamically allocated memory
//     free(arr);

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamically allocate an array of 5 integers using calloc
//     int* arr = (int*) calloc(5, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Initialize the array with some values
//     for (int i = 0; i < 5; i++) {
//         arr[i] = i * 2; // Initialize with even numbers
//     }

//     // Print the initial array values
//     printf("Initial array values:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Use realloc to resize the array to store 10 integers
//     int* resized_arr = (int*) realloc(arr, 10 * sizeof(int));

//     if (resized_arr == NULL) {
//         printf("Memory reallocation failed\n");
//         free(arr);
//         return 1;
//     }

//     arr = resized_arr; // Update the pointer to the resized array

//     // Initialize the new elements with some values
//     for (int i = 5; i < 10; i++) {
//         arr[i] = i * 3; // Initialize with multiples of 3
//     }

//     // Print the resized array values
//     printf("Resized array values:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Don't forget to free the dynamically allocated memory
//     free(arr);

//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamically allocate an array to store the multiplication table of 7 up to 10
//     int* arr = (int*) calloc(10, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Initialize the array with the multiplication table of 7 up to 10
//     for (int i = 0; i < 10; i++) {
//         arr[i] = 7 * (i + 1); // Calculate the multiplication table
//     }

//     // Print the initial array values
//     printf("Initial array values:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Use realloc to resize the array to store 15 numbers from 7 to 15
//     int* resized_arr = (int*) realloc(arr, 15 * sizeof(int));

//     if (resized_arr == NULL) {
//         printf("Memory reallocation failed\n");
//         free(arr);
//         return 1;
//     }

//     arr = resized_arr; // Update the pointer to the resized array

//     // Initialize the new elements with the remaining multiplication table values
//     for (int i = 10; i < 15; i++) {
//         arr[i] = 7 * (i + 1); // Calculate the remaining multiplication table values
//     }

//     // Print the resized array values
//     printf("Resized array values:\n");
//     for (int i = 0; i < 15; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Don't forget to free the dynamically allocated memory
//     free(arr);

//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Dynamically allocate an array of 5 integers using calloc
//     int* arr = (int*) calloc(5, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Initialize the array with some values
//     for (int i = 0; i < 5; i++) {
//         arr[i] = i * 2; // Initialize with even numbers
//     }

//     // Print the initial array values
//     printf("Initial array values:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Use realloc to resize the array to store 10 integers
//     int* resized_arr = (int*) realloc(arr, 10 * sizeof(int));

//     if (resized_arr == NULL) {
//         printf("Memory reallocation failed\n");
//         free(arr);
//         return 1;
//     }

//     arr = resized_arr; // Update the pointer to the resized array

//     // Initialize the new elements with some values
//     for (int i = 5; i < 10; i++) {
//         arr[i] = i * 3; // Initialize with multiples of 3
//     }

//     // Print the resized array values
//     printf("Resized array values:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     // Don't forget to free the dynamically allocated memory
//     free(arr);

//     return 0;
// }