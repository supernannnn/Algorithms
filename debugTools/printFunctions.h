#ifndef PRINT_FUNCTIONS_H
#define PRINT_FUNCTIONS_H


#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

class printFunctions{
public:
    
    template <typename T>
    static void printf1Dvector(vector<T>& vec){
        for (int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
        cout << '\n';
    }
    template <typename T>
    static void printf2Dvector(vector<vector<T>>& vec){
        for(int i = 0; i < vec.size(); i++){
            for(int j = 0; j < vec[i].size(); j++){
                cout << vec[i][j] << " ";
            }
            cout << '\n';
        }
    }
};

#endif  // PRINT_FUNCTIONS_H