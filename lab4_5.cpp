#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include "lab05.hpp"
using namespace std;

template<class T>
std::vector<T> generate_random_vector(std::size_t num, T min = -10, T max = 10)
{
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    std::vector<T> result(num);
    std::generate_n(result.begin(), num, lambda);
    return result;
}


bool remove_first_negative_element(std::vector<int>& vec, int& removed_element){
    int re_ele = 0;
    int re_ind = 0;
    vector<int>::iterator iter = vec.begin();
    for (int i = 0; i<vec.size(); ++i){
        if (vec[i]<0){
            re_ele = vec[i];
            re_ind = i;
            break;
        }
    }
    iter+=re_ind;
    if (re_ele<0){
        removed_element = re_ele;
        vec.erase(iter);
        return true;
    } else{
        removed_element = 0;
        return false;
    }
}



/*int main() {
    std::vector<int> vec1 = generate_random_vector<int>(10, -100, 50);
    int rem_elem = 0;
    int *ptr{&rem_elem};
    cout<<remove_first_negative_element(vec1, *ptr)<<endl;
    cout<<rem_elem<<endl;
    return 0;
}*/
