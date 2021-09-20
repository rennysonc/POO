#include <iostream>

using namespace std;

unsigned sequence(void);

unsigned sequence(void) 
{
  static unsigned count = 0;
  return count++;
}

int main(void) 
{
  cout << sequence() << endl;
  cout << sequence() << endl;
  cout << sequence() << endl;
  cout << sequence() << endl;
  cout << sequence() << endl;
  
  return 0;
}

