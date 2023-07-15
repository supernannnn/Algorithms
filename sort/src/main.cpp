#include <sort.h>

int main(int argc, char** argv){

    if (argc <= 1) {
        cout << "Usage: ./sort sortMethod num1 num2 num3..." << endl;
        return 0;
    }

    if (strcmp(argv[1], "-help") == 0){
        cout << "help" << endl;
        cout << "       " << "0" << " : " << "BubbleSortPlus" << endl;
        cout << "       " << "1" << " : " << "SelectSort" << endl;
        cout << "       " << "2" << " : " << "InsertSort" << endl;
        cout << "       " << "3" << " : " << "ShellSort" << endl;
        cout << "       " << "4" << " : " << "HeapSort" << endl;
        cout << "       " << "5" << " : " << "MergeSort" << endl;
        cout << "       " << "6" << " : " << "QuickSort" << endl;
        return 0;
    }

    vector<int> nums;
    for (int i = 2; i < argc; i++){
        nums.push_back(std::stoi(argv[i]));
    }
    cout << "Origin:         ";
    printFunctions::printf1Dvector(nums);
    SORT::Ptr sort;
    sort.reset(new SORT(nums));

    vector<int> res;

    switch (std::stoi(argv[1])) {
        case SORTMETHOD::BubbleSortPlus:
            cout << "BubbleSortPlus: ";
            res = sort->BubbleSortPlus(nums);
            break;
        case SORTMETHOD::SelectSort:
            cout << "SelectSort:     ";
            res = sort->SelectSort(nums);
            break;
        case SORTMETHOD::InsertSort:
            cout << "InsertSort:     ";
            res = sort->InsertSort(nums);
            break;    
        case SORTMETHOD::ShellSort:
            cout << "ShellSort:      ";
            res = sort->ShellSort(nums);
            break;        
        case SORTMETHOD::HeapSort:
            cout << "HeapSort:       ";
            res = sort->HeapSort(nums);
            break;
        case SORTMETHOD::MergeSort:
            cout << "MergeSort:      ";
            res = sort->MergeSort(nums);
            break;
        case SORTMETHOD::QuickSort:
            cout << "QuickSort:      ";
            res = sort->QuickSort(nums);
            break;            
    }

    printFunctions::printf1Dvector(res);
    return 1;
}



