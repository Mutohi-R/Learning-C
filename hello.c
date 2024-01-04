

// int main()
// {
//     int speed = 0;
//     int time = 0;
//     printf("Speed: ");
//     scanf("%d", &speed);
//     printf("Time: ");
//     scanf("%d", &time);

//     int distance = speed * time;
    
//     printf("distance: %d\n", distance);
//     return 0;
// }

// int main() {
//     int i = 0;
//     int choice = 0;
//     int total = 0;
//     int conditionNumber = 5;
    
//     while (i < conditionNumber)
//     {
//         printf("enter num:\n");
//         scanf("%d", &choice);
//         total = total + choice;
//         i++;
//     }

//     int average = total / conditionNumber;
    
//     printf("average is: %d", average);
// }

// int main () {
//     int number = 0;
//     int max = -1;

//     while (number >= 0) {
//         printf("enter a number: \n");
//         scanf("%d", &number);
//         if (number > max)
//         {
//             /* code */
//             max = number;
//         }
//     }

//     printf("max: %d", max);
// }

// int main() {
//     double initial = 0, step = 0, stop = 0;

//     do {
//         printf("Enter an initial value: ");
//         scanf("%lf", &initial);
//         if (initial < 0) {printf("Value cannot be less than 0!\n");};
//     } while (initial < 0);

//     do {
//         printf("Enter the step value: ");
//         scanf("%lf", &step);
//         if (step <= 0) {printf("Value cannot be less than or equal to 0!\n");};
//     } while (step <= 0);

//     do {
//         printf("Enter a stop value: ");
//         scanf("%lf", &stop);
//         if (stop <= initial) {printf("Value cannot be less than or equal to initial value\n");};
//     } while (stop <= initial);

//     for (double i = initial; i < stop; i += step)
//     {
//         double converted = i * 3;
//         printf("%lf || %lf\n", i, converted);
//     }
    

//     return 0;
// }

// int main () {
//     int number = 1;

//     switch (number)
//     {
//     case 0:
//         printf("number is 0");
//         break;
//     case 1:
//         printf("number is 1");
//         // break;
//     case 2:
//         printf("number is 2");
//         break;
//     case 3:
//         printf("number is 3");
//         break;

//     default: 
//         printf("number is not 0, 1, 2, 3");
//         break;
//     }
//     return 0;
// }

// int main() {
//      int grades[] = {45, 42, 58, 79, 90};
//      char my_name[] = {'m', 'u', 't', 'o', 'h', 'i', 'r', '\0'};
//      char surname[] = "okuniyi";
//      char my_string[20];

//      printf("my name is: %s %s\n", my_name, surname);

    //  for (int i = 0; i < 7; i++)
    //  {
    //     printf("%c\n", surname[i]);
    //  };
//     printf("Enter your string: \n");
//     scanf("%s", my_string);

//     for (int i = 0; i < 20; i++)
//     {
//         /* code */
//         printf("at %d = %c\n", i, my_string[i]);
//     }
    
//     printf("%s", my_string);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main() {
//     char my_name[50] = "JohNSon ";
//     char surname[] = "DevElopER";

//     int name_length = strlen(my_name);
//     printf("%d\n", name_length);

//     strcat(my_name, surname);
//     printf("%s\n", my_name);

//     name_length = strlen(my_name);
//     printf("new name length is: %d\n", name_length);

//     for(int i = 0; i < name_length; i++) {
//         if(islower(my_name[i])) {
//             my_name[i] = toupper(my_name[i]);
//         } else {
//             if(isupper(my_name[i])) {
//                 my_name[i] = tolower(my_name[i]);
//             }
//         };
//     }

//     printf("%s", my_name);

//     return 0;
// }

#include <stdio.h>

int main() {
    
    int a[] = {1, 2, 3, 4};
    int *p;
    p = a;

    printf("a: %p\n", a),
    printf("p: %p\n", p),
    

    printf("%p", &a);
    return 0;
}