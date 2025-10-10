#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
void changeValueByParameter(int value);
void changeValueByPointer(int* ptr);

int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    // // Teilaufgabe 0
    // fmt::print("Anzahl der Argumente: {}", argc);
    // for(int i=0; i < argc; i++) {
    //     fmt :: println("argc: {}, argument {}, (Adresse: {})", i, argv[i], fmt::ptr(argv[i]));
    // }

    // // Teilaufgabe 1
    // int x = 10;
    // int* p = &x; //Zeiger auf 
    // fmt::println("Wert: {}, Adresse: {}", x, fmt::ptr(&x));
    // fmt::println("Adresse: {}, Wert: {}", fmt::ptr(&x), fmt::ptr(p));
    // *p = 42;
    // fmt::println("Wert: {}, Adresse: {}", x, fmt::ptr(&x));

    // // Teilaufgabe 2
    // double* ptr;
    // ptr = new double(3.1415);
    // fmt::print("Wert: {}, Adresse: {}\n\n", *ptr, fmt::ptr(ptr));
    // delete ptr;

    // Teilaufgabe 3
    int y = 5;
    fmt::print("Vor changeValueByParameter: {}\n", y);
    changeValueByParameter(y);
    fmt::print("Nach changeValueByParameter: {}\n\n", y);

    fmt::print("Vor changeValueByPointer: {}\n", y);
    changeValueByPointer(&y);
    fmt::print("Nach changeValueByPointer: {}", y);

    return 0; /* exit gracefully*/
}

void changeValueByParameter(int value) {
    value = 99;
    fmt::println("Neuer Wert innerhalb changeValueByParameter: {}", value);
}

void changeValueByPointer(int* ptr) {
    *ptr = 77;
    fmt::print("Neuer Wert innerhalb changeValueByPointer: {}", *ptr);
}