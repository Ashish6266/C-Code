#include <iostream>

class Movie{
    private:
        std::string rating;
    public:
        std::string title;
        std::string director;

    Movie(std::string aTitle, std::string aDirector, std::string aRating){
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }
    void setRating(std::string aRating){
        rating = aRating;
    }

    std::string getRating(){
        return rating;
    }
};

int main(){

    Movie troy("Troy", "yo", "R");
    std::cout << troy.getRating();

    return 0;
}