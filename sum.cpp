#include <iostream>
using namespace std;
void sum(int* array, int length){
    int i, sum_of_array=0;
    for( i=0;i<length;i++){
        sum_of_array= sum_of_array + *(array+i);
        cout<<"Sum of array is = " << sum_of_array <<endl ;
    }
}
int main(){
    int array[]={5,7,2,9,8};
    sum(array,5);
    return 0;
}