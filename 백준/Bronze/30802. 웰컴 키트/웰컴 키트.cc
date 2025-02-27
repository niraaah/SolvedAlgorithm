#include <iostream>

int cntT(int size[], int unitT) {
    if(unitT <= 0){
        return 0;
    }

    int pack = 0;
    for (int i = 0; i < 6; i++){
        pack += (size[i] / unitT);
        if(size[i] % unitT != 0){
            pack++;
        }
    }

    std::cout << pack << std::endl;
    return 1;
}

int cntP(int total, int unitP) {
    if(unitP <= 0){
        return 0;
    }
    int pack = total / unitP;
    int rest = total % unitP;

    std::cout << pack << " " << rest << std::endl;
    return 1;
}

int main() {
    int total = 0;
    int size[6];
    int unitT = 0, unitP = 0;

    std::cin >> total;
    for (int i = 0; i < 6; i++){
        std::cin >> size[i];
    }
    std::cin >> unitT >> unitP;

    cntT(size, unitT);
    cntP(total, unitP);

    return 0;
}
