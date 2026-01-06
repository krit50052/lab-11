#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    string grades[] = {"A", "B" , "B+", "C+", "C", "D+", "D", "F", "W"};
    int randomIndex = rand() % 9;
    string selectedGrade = grades[randomIndex];
    cout << "\n";
    cout << "You will get " << selectedGrade << " in this 261102.";
    
    return 0;
}