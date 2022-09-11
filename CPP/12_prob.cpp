#include<iostream>

using namespace std;

void print(const int *const arr,size_t n){
    cout<<"[ ";

    for (size_t i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}


int * apply_all(const int *const arr1,size_t n1,const int *const arr2,size_t n2);

int main(){

    const size_t arr1_size{5};
    const size_t arr2_size{3};
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};

    cout<<"Arry 1:"<<endl;
    print(array1,arr1_size);

    cout<<"Arry 2:"<<endl;
    print(array2,arr2_size);

    int *results =apply_all(array1,arr1_size,array2,arr2_size);
    constexpr size_t result_size{arr1_size*arr2_size};

    cout<<"Result: ";
    print(results,result_size);

    delete [] results;
    cout<<endl;

    return 0;
}

int * apply_all(const int *const arr1,size_t n1,const int *const arr2,size_t n2){

    int *new_array{};

    new_array= new int[n1*n2];

    int pos{0};

    for (size_t j{0}; j < n2; j++){
        for (size_t i {0}; i < n1; i++){
            new_array[pos]=arr1[i]*arr2[j];
            pos++;
        }
    }
    return new_array;
}