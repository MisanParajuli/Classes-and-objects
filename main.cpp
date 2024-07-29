#include <iostream>
using namespace std;

class Movie{
public:
    string name;
    string director;
    string lead[2];
};

void output(string name, string director, string lead1, string lead2 ){
    cout << "Name: " << name << endl;
    cout << "Director: " << director << endl;
    cout << "Leads: " << lead1 << " and " << lead2 << endl;
    cout << endl << endl;
}


int main(){
    int SIZE;
    cout <<"enter size: ";
    cin >> SIZE;
    cin.ignore();
    cout << endl;

    Movie movie[SIZE];

    for (int i = 0; i<SIZE; i++){

        cout << i+1 << "st Movie's " "Name:" << " ";
        getline (cin, movie[i].name);
        cout << endl;

        cout << "Director: ";
        getline (cin, movie[i].director);
        cout << endl;

        for (int j = 0; j<2; j++){
            cout << "Lead " << j+1 << ": " ;
            getline (cin, movie[i].lead[j]);
            cout << endl;
        }
    }

    for (int i=0; i<SIZE; i++) {
        output(movie[i].name, movie[i].director, movie[i].lead[0], movie[i].lead[1]);

    }

    return 0;
}