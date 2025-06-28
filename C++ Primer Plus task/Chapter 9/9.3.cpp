#include <iostream>
#include <cstring>
using namespace std;

struct chaff{
    char dross[40];
    int slag;
};

int main(){
    chaff * buffer = new chaff[2];
    strcpy(buffer[0].dross, "dross1");
    buffer[0].slag = 1;
    strcpy(buffer[1].dross, "dross2");
    buffer[1].slag = 2;
    for (int i = 0; i < 2; i++){
        cout << "dross: " << buffer[i].dross << endl;
        cout << "slag: " << buffer[i].slag << endl;
    }
    delete [] buffer;
}