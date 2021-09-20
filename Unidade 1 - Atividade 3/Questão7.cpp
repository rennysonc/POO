#include <iostream>
#include <string>

using namespace std;

void stringToLower(string &str);

int main(void) 
{
  string str;
  getline(cin, str);

  stringToLower(str);

  cout << str << endl;

  return 0;
}

void stringToLower(string &str) 
{
  for (auto &c : str)
    c = tolower(c);

  return;
}