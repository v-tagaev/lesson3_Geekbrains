//3 item homework, lesson3, Valentin Tagaev
#include <iostream>
#include "item3_file2.cpp" //файл  первой формы

int main (){

    float x=a*(b+(c/d));
    std::cout<< "item3\n";
    std::cout<<"before conversion to float- "<< x<<"\n";

    float y=(float)a*((float)b+((float)c/(float)d));

    std::cout<<"after conversion to float- "<< y<<"\n\n";


    return 0;
}

