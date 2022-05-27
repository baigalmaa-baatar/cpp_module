#include <iostream>

using namespace std;

class  Movie {
    private:
        string  rating;
    public:
        string  title;
        string  director;

        Movie (string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating)
        {
            if (aRating == "G" || aRating == "PG-13" || aRating == "R")
                rating = aRating;
            else{
                rating = "NR";
            }
        }
        string  getRaiting()
        {
            return rating;
        }
};

int main()
{
    Movie   avengers("The Avengers", "John Williams", "PG-13");
    cout << avengers.getRaiting() << endl;

    return 0;
}