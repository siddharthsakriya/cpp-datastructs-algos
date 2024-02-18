#include <iostream>

void selection_sort(std::vector<int>& ints){
    for (int i = 0; i < ints.size(); i++){
        int minimum_index = i;
        for (int j = i+1; j < ints.size(); j++){
            if (ints[minimum_index] > ints[j]){
                minimum_index = j;
            }
        }
        int temp = ints[i];
        ints[i] = ints[minimum_index];
        ints[minimum_index] = temp;
    }
    for (int val:ints){
        std::cout << val << std::endl;
    }
};

void insertion_sort(std::vector<int>& ints){
    for (int i = 1; i < ints.size(); i++){
        int curr = ints[i];
        int j = i - 1;
        while (j > 0 and ints[j]>curr){
            ints[j+1] = ints[j];
            j -= 1;
        }
        ints[j+1] = curr;
    }
    for (int val:ints){
        std::cout << val << std::endl;
    }
};



int main() {
    std::vector<int> my_ints = {5, 3, 8, 4, 2};
    std::cout << "Selection Sort" << std::endl;
    selection_sort(my_ints);
    std::cout << "Insertion Sort" << std::endl;
    insertion_sort(my_ints);
    return 0;
}
