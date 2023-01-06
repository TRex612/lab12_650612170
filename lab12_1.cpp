#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;


string Grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};

string random_grade(){
    srand(time(0));
    int x = rand()%9;
    if (x==0) return Grade[0];
    else if (x==1) return Grade[1];
    else if (x==2) return Grade[2];
    else if (x==3) return Grade[3];
    else if (x==4) return Grade[4];
    else if (x==5) return Grade[5];
    else if (x==6) return Grade[6];
    else if (x==7) return Grade[7];
    else return Grade[8];
    
}

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << random_grade() << " in this 261102. ";
    return 0 ;

}