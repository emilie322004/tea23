#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
void foo();

int globalVar0 = 1;
int globalVar1 = 0;
int globalVar2;
static int globalVar3 = 5;
const int globalVar4 = 10;

int main(int argc, char **argv) {

    // Aufgabe 1
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    fmt::print("GlobalVar:{}, Adresse: {}\n", globalVar0, fmt::ptr(&globalVar0));
    fmt::print("GlobalVar:{}, Adresse: {}\n", globalVar1, fmt::ptr(&globalVar1));
    fmt::print("GlobalVar:{}, Adresse: {}\n", globalVar2, fmt::ptr(&globalVar2));
    fmt::print("GlobalVar:{}, Adresse: {}\n", globalVar3, fmt::ptr(&globalVar3));
    fmt::print("GlobalVar:{}, Adresse: {}\n", globalVar4, fmt::ptr(&globalVar4));

    // Aufgabe 2
    int localVar0 = 2;
    int localVar1 = 0;
    int localVar2 ;
    static int localVar3 = 50;
    const int localVar4 = 100;
    
    fmt::println("LocalVar:{}, Adresse: {}", localVar0, fmt::ptr(&localVar0));
    fmt::println("LocalVar:{}, Adresse: {}", localVar1, fmt::ptr(&localVar1));
    fmt::println("LocalVar:{}, Adresse: {}", localVar2, fmt::ptr(&localVar2));
    fmt::println("LocalVar:{}, Adresse: {}", localVar3, fmt::ptr(&localVar3));
    fmt::println("LocalVar:{}, Adresse: {}", localVar4, fmt::ptr(&localVar4));

    // Aufgabe 3
    int* heapVar = new int(3);
    fmt::println("Aufgabe 3 -> Var:{}, Adresse: {}", *heapVar, fmt::ptr(&heapVar));
    delete heapVar;

    // Aufgabe 4
    foo();
    fmt::print("Adresse von foo: {}\n", fmt::ptr(&foo));
    

    return 0; /* exit gracefully*/
}

void foo(){
    fmt::print("Hello from foo!\n");
}