#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volumn;
};

void show(box b){
    cout << "Maker: " << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width: " << b.width << endl;
    cout << "Length: " << b.length << endl;
}

void SetVolumn(box * b){
    b->volumn = b->height * b->width * b->length;
}
int main(){
    box b1 = {"Box1", 10, 20, 30};
    SetVolumn(&b1);
    show(b1);
    return 0;
}