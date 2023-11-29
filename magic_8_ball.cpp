#include <iostream>
#include <cstdlib>
using namespace std; 

int main(){

// Your future is here! 

cout << "MAGIC 8-BALL: " << endl; 

srand(time(NULL));
int answear = rand() % 10;

cout << answear << endl;

  if (answear == 0){
    cout << "It is certain." << endl; 
  } 
    
    else if (answear == 1) {
    cout << "You may rely on it." << endl;
  }

    else if (answear == 2) {
    cout << "Yes." << endl;
  }

    else if (answear == 3) {
    cout << "It is decidedly so." << endl;
  }

    else if (answear == 4) {
    cout << "As I see it, yes." << endl;
  }

    else if (answear == 5) {
    cout << "My sources say no." << endl;
  }

    else if (answear == 6) {
    cout << "Reply hazy, try again." << endl;
  }

    else if (answear == 7) {
    cout << "Don't count on it." << endl;
  }

    else if (answear == 8) {
    cout << "Most likely."  << endl;
  }

    else {
    cout << "Very doubtful." << endl;
  }


  return 0;
}
