#include <iostream>
using namespace std;

int gryffindor, hufflepuff, ravenclaw, slytherin = 0;
int answear1, answear2, answear3, answear4;


// The magic starts here!

int main(){

  cout << "The Sorting Hat Quiz! \n\n";

// Question1 - output
  cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

  cout << "  1) The Good\n";
  cout << "  2) The Great\n";
  cout << "  3) The Wise\n";
  cout << "  4) The Bold\n\n";
// Question1 - input
  cin >> answear1;

// flow

  if(answear1 == 1){
    hufflepuff++;
  }

  else if(answear1 == 2){
    slytherin++;
  }

  else if(answear1 == 3){
    ravenclaw++;
  }

  else if(answear1 == 4){
    gryffindor++;
  }

  else{
    cout << "Invalid input, Muggles.\n";
  }

// Question2 - output
  cout << "Q2) Dawn or Dusk?\n\n";

  cout << "  1) Dawn\n";
  cout << "  2) Dusk\n";
// Question2 - inpput
  cin >> answear2;

  if(answear2 == 1){
    gryffindor++;
    ravenclaw++;
  }
  else if(answear2 == 2){
    hufflepuff++;
    slytherin++;
  }
  else{
    cout << "Invalid input\n";
  }
  // Question3 - output
    cout << "Q3) Which kind of instrument most pleases your ear? \n";

    cout << "1) The violin\n";
    cout << "2) The trumpet\n";
    cout << "3) The piano\n";
    cout << "4) The drum\n";
  // Question3 - input
    cin >> answear3;

  if(answear3 == 1){
    slytherin++;
  }
  else if(answear3 == 2){
    hufflepuff++;
  }
  else if (answear3 == 3){
    ravenclaw++;
  }
  else if(answear3 == 4){
    gryffindor++;
  }
  else{
    cout << "Invalid input\n";
  }

    // Question4 - output
    cout << "Q4) Which road tempts you most? \n";

    cout << "1) The wide, sunny grassy lane\n";
    cout << "2) The narrow, dark, lantern-lit alley\n";
    cout << "3) The twisting, leaf-strewn path through woods\n";
    cout << "4) The cobbled street lined (ancient buildings)\n";
  // Question4 - input
    cin >> answear4;

  if(answear4 == 1){
    hufflepuff++;
  }
  else if(answear4 == 2){
    slytherin++;
  }
  else if(answear4 == 3){
    gryffindor++;
  }
  else if(answear4 == 4){
    ravenclaw++;
  }
  else{
    cout << "Invalid input\n";
  }

string house;
int max = 0;

if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}
if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}
if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}
if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}

  cout << house << "!\n";

  return 0;
}
