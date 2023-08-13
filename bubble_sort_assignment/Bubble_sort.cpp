#include "Bubble_sort.h"
#include <iostream>
#include <iomanip>

void BUBBLE_SORT () {
    const short arraySize = 10;
    short arr [ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    std::cout<< "Data items in original order:"<< std::endl;
    for (std::size_t i=0; i < arraySize; ++i) {
        std::cout << std::setw (4) << arr [i];
    } //for i
    std::cout << std::endl;

    bool changesMade = true;
    for ( std::size_t pass = 0; pass < arraySize -1 && changesMade; ++pass) {
        changesMade = false;
        for ( std::size_t j = 0; j < arraySize - 1 - pass; j++){
            if ( arr [j] > arr [j + 1]){
                short hold = arr [j];
                arr [j] = arr [j + 1];
                arr [j + 1] = hold;
                changesMade = true;
            } //if
        } // for j
        std::cout << "Data items in pass " << pass + 1 << std::endl;
        for (std::size_t i =0; i < arraySize; ++i){
            std::cout << std::setw (4) << arr [i];
        } // for i
        std::cout << std::endl;
    }// for pass
    std::cout << std::endl << "Data items in ascending order:" << std::endl;
    for (std::size_t i =0; i < arraySize; ++i){
        std::cout << std::setw (4) << arr [i];
    } //for i
    std::cout << std::endl;
}