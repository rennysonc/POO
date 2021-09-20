#include <iostream>
#include <string>

using namespace std;

bool maiscula(string txt)
{
    for(auto &c:txt){
        if(isupper(c)==1){
            return true;
        }
    }
    return false;
}

int main()
{
    cout << maiscula("tEm caracteres maiusculo") << endl;
    cout << maiscula("nao tem caracteres") << endl;
    return 0;
}