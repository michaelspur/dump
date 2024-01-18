#include <iostream>
using namespace std;
#include <cstdlib>
 // i love latinas
int main() {
  // rand seed
  srand((unsigned) time(NULL));
  //rand int
  int random_x = rand() % 4;
  int random_y = rand() %2;

  cout << random_x;
  cout << random_y;

  //------
  int x_pos;
  int y_pos;

  int grid[2][5] = {
    {0,0,0,0},
    {0,0,0,0}
};
  grid[random_y][random_x] = 1;
  bool run = true;
  int guesses = 0;
  while(guesses == 0) {
    cout << "guess where the one is \n ";
    cout << "x: ";
    cin >> x_pos;
    cout << "y: ";
    cin >> y_pos;
    guesses ++;
    
}
  if (grid[y_pos][x_pos] == 1) {
    cout << "you are correct!";
} else {
    cout << "you are wrong";
}
  return 0;
}
