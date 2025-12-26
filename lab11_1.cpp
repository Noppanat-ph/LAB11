#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int n = rand()%9;
    string grade;
    if(n == 0) grade = "A";
    else if(n == 1) grade = "B+";
    else if(n == 2) grade = "B";
    else if(n == 3) grade = "C+";
    else if(n == 4) grade = "C";
    else if(n == 5) grade = "D+";
    else if(n == 6) grade = "D";
    else if(n == 7) grade = "F";
    else grade = "W";
    cout << "You will get " << grade << " in this 261102.";
    
    return 0;
}
