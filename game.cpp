#include <iostream>
#include <string>

#include <ncurses.h>

std::string entities[5] = {"Ʌ", "Ω", "Ж", "Θ", "Δ"};

int mockup(){
    std::cout << entities[1] + entities[1] + entities[1] << "\n" << "\n" << " " + entities[4] + " " << "\n";
    return 1;
}


int main(){
    return mockup();
}
