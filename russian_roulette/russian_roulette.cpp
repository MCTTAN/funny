#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

void empty_revolver(vector<int>& amo){
  for(unsigned int i = 0; i < amo.size(); ++i)
    amo.at(i) = 0;
  return;
}

int highscore(int points){
  int data;
  ofstream outFS;
  ifstream inFS;
  int highscore;
  vector<int> scores;
  
  outFS.open("highscore.txt");
  
  if(!outFS.is_open()){
    cout << "Error opening highscore.txt" << endl;
    exit(1);
  }
  
  while(outFS.good())
    outFS << points;
  
  outFS.close();
  
  inFS.open("highscore.txt");
  
  if(!inFS.is_open()){
    cout << "Error opening highscore.txt" << endl;
    exit(1);
  }
  
  inFS >> data;
  
  while(inFS.good()){
    scores.push_back(data);
    inFS >> data;
  }
  
  highscore = scores.at(0);
  
  inFS.close();
  
  for(unsigned i = 0; i < scores.size(); ++i)
    if(scores.at(i) > highscore)
      highscore = scores.at(i);
  
  return highscore;
}

int main(){
  char response;
  vector<int> amo(6);
  int position_of_bullet, pull, points;
  srand(time(0));
  
  cout << "      _=______________________-_" << endl;
  cout << "  =< ' | ========|______________" << endl;
  cout << "    |  | ========|______________" << endl;
  cout << "    /  | ========|/" << endl;
  cout << "   |   | ========|'" << endl;
  cout << "   |___| ________'" << endl;
  cout << "  '.... /  |  |" << endl;
  cout << " |......|  /  |" << endl;
  cout << " |......|-____'" << endl;
  cout << " |......|" << endl;
  cout << "'.......|" << endl;
  cout << "|.......|" << endl;
  cout << "|_______)" << endl << endl;
  
  empty_revolver(amo);
  amo.at(rand() % 6) = 1;

  for(unsigned i = 0; i < amo.size(); ++i)
    if(amo.at(i) == 1)
      position_of_bullet = i;
  
  cout << "Revolver is loaded." << endl << "Pull the trigger? (Y or N)" << endl;
  cin >> response;
  
  while(toupper(response) == 'Y'){
    pull = rand() % 6;
    
    if(pull == position_of_bullet){
      cout << endl << "You're dead." << endl << "Score: " << points << endl << "Highscore: " << highscore(points) << endl;
      response = 'N';
      break;
    }
    
    else{
      points += 1;
      cout << endl << "You survived." << endl << "Score: " << points << endl;
      empty_revolver(amo);
      amo.at(rand() % 6) = 1;
      cout << "Revolver is loaded." << endl << "Pull the trigger? (Y or N)" << endl;
      cin >> response;
    }
  }
  
  cout << "Highscore: " << highscore(points) << endl;
  
  return 0;
}
