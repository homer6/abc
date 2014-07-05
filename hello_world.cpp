//#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

class Test {}; // This will fail in C mode

using namespace std;

int main(){


    vector<string> my_list( { "one", "two", "three" } );

    for( auto item : my_list ){
        cout << item << endl;
    }

    //printf("hello, world!\n");

    return 1;

}

