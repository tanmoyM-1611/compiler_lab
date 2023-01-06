#include <bits/stdc++.h>
using namespace std;


bool isValid(string str)
{

    // If first character is invalid
    if (((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_')){



    for (int i = 1; i < str.length() ; i++) {

        if (((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'));
              else
                {
                    return false;
                }

    }

          }

          else{


    return false;
}

return true;

}


int main()
{
    char str[50];
    cout<<"Enter String:";
    cin.getline(str,50);



    if (isValid(str))
        cout << "String is Valid";
    else
        cout << "String is not Valid";

    return 0;
}
