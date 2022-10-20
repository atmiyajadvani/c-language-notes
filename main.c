#include <stdio.h>
#include <math.h>

// The main header file

/* The code below will print the words Hello World!
to the screen, and it is amazing */

int main() {

    // Declaring Variables with data types
    int a = 9;
    //float stores upto 7 decimal digits
    float b = 3.2;
    //float stores upto 15 decimal digits
    double c = 45.32324;
    char alphabet = 'a';

    // Declaring a constant
    const int THETWO = 2;

    // Printing values assigned to variables
    printf("Hello World\n");
    printf("%i\n", a);
    printf("%f\n", b);
    printf("%c\n", alphabet);

    // Arithmetic Operators
    int sum1 = 6;
    int sum2 = 8;
    int sum = sum1 + sum2;
    int sub = sum1 - sum2;
    int multi = sum1 * sum2;
    int div = sum1 / sum2;
    int modu = sum1 % sum2;
    printf("%i", ++sum1);
    printf("%i", --sum2);

    // Assignment Operators
    int x = 10;
    int y = 3;
    y += 2;
    y -= 2;
    y *= 2;
    y /= 2;
    y %= 2;
    y &= 2;
    y |= 2;
    y /= 2;
    y ^= 2;
    y >>= 2;
    y <<= 2;

    // Comparison Operators

    if (x == y){
        printf("equal to");
    } else if (x != y) {
        printf("not equal to");
    } else if (x > y) {
        printf("greater");
    } else if (x < y) {
        printf("smaller");
    } else {
        printf("null");
    }

    // Logical Operators

    if (x < 5 && y < 10){
        printf("AND");
    } else if (x < 2 || y < 3) {
        printf("OR");
    } else if (!(x < 5 && y < 10)) {
        printf("NOT");
    } else {
        printf("null");
    }

    // Shorthand if-statement
    int time;
    (time < 18) ? printf("Good day.") : printf("Good evening.");


    // Switch Statement
    int day = 2;
    switch (day) {
        case 1:
            printf("Today is Saturday");
            break;
        case 2:
            printf("Today is Sunday");
            break;
        default:
            printf("Looking forward to the Weekend");
    }

    // For Loop
    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    // While Loop
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    // Variant of While Loop
    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);

    // BREAK in the statement
    // The break statement can also be used to jump out of a loop.
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    // CONTINUE in the statement
    // The continue statement breaks one iteration (in the loop),
    // if a specified condition occurs, and continues with the
    // next iteration in the loop.
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d\n", i);
    }


    // Arrays
    int myNumbers[] = {25, 50, 75, 100};
    myNumbers[0] = 33;
    printf("%d", myNumbers[0]);

    // Looping through the Array
    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }

    // Declare an array
    int integers[4];
    integers[0] = 25;
    integers[1] = 50;
    integers[2] = 75;
    integers[3] = 100;

    // Strings
    char greetings[] = "Hello World!";
    printf("%s", greetings);

    // Modifying Strings
    char anotherGreeting[] = "Hello World!";
    anotherGreeting[0] = 'J';
    printf("%s", anotherGreeting);


    // User Input - scanf() function
    int userInteger;
    printf("Type a number:\n");
    scanf("%d", &userInteger);
    printf("Your number is: %d", userInteger);


    //Memory Address
    // To access the memory address, use the reference operator (&), and
    // the result will represent where the variable is stored:

    int myAge = 43;
    //The memory address is in hexadecimal form (0x..).
    //You should also note that &myAge is often called a "pointer". A
    // pointer basically stores the memory address of a variable as its value.
    // To print pointer values, we use the %p format specifier.
    printf("%p", &myAge); // Outputs 0x7ffe5367e044


    //Pointers
    printf("%d", myAge);  // Outputs the value of myAge (43)
    printf("%p", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)

    // Above: &myAge is a pointer
    // A pointer = A variable that stores the memory address of another variable as its value.

    // A pointer variable points to a data type (like int) of the same type, and is created with
    // the * operator. The address of the variable you are working with is assigned to the pointer:


    int personAge = 43;     // An int variable
    // ptr holds the value of myAge's memory address.
    int* ptr = &personAge;  // A pointer variable, with the name ptr, that stores the address of personAge

    // Output the value of myAge (43)
    printf("%d\n", personAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &personAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);


    // Dereference

    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);


    // Functions

    // A function consist of two parts:
    // Declaration: the function's name, return type, and parameters (if any)
    // Definition: the body of the function (code to be executed)

    void myFunction() {
        printf("I just got executed!");
    }

    // Functions with parameters
    void anotherFunction(char name[], int age) {
        printf("Hello %s. You are %d years old.\n", name, age);
        return 0;
    }


    // Math Header File
    printf("%f", sqrt(16));
    printf("%f", ceil(1.4));
    printf("%f", floor(1.4));
    printf("%f", pow(4, 3));




    // Structures (Structs)
    // Structs are a way to group several related variables into one place.
    // Each variable in the structure is known as a member of the structure.
    // Unlike an array, a structure can contain many different data types (int, float, char, etc.).

    struct myStructure {   // Structure declaration
        int myNum;           // Member (int variable)
        char myLetter;       // Member (char variable)
    }; // End the structure with a semicolon

    // Access the structure, you must create a variable of it
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);



    //Real Life example of Struct
    struct Car {
        char brand[50];
        char model[50];
        int year;
    };

    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};

    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);






    return 0;
}