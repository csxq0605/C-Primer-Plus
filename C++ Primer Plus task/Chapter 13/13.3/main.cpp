#include "dma.h"

int main(){
    using namespace std;
    DMA * p_dma[3];
    p_dma[0] = new baseDMA("baseDMA", 5);
    p_dma[1] = new lacksDMA("lacks", "lacksDMA", 4);
    p_dma[2] = new hasDMA("has", "hasDMA", 3);
    for(int i = 0; i < 3; i++){
        p_dma[i]->ViewDMA();
        cout << endl;
    }
    for(int i = 0; i < 3; i++){
        delete p_dma[i];
    }
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        continue;
    }
    std::cout << "Bye!\n";
    return 0;
}