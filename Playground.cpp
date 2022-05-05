#include <iostream>

const char * recomendMeFood(char firstLeter);


int main()
{
    int age;
    age = 25;
    std::cout << "Today I'll eat " << recomendMeFood('c');
    return 0;
}

const char * recomendMeFood(char firstLeter){
    if(firstLeter == 'a' || firstLeter =='A'){
        return "apple";
    }
    else if (firstLeter =='b' || firstLeter == 'B'){
        return "banna";
    }
    else if (firstLeter =='c' || firstLeter == 'C'){
        return "cake";
    }
}