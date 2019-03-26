#include <iostream>

using namespace std;

int removeDublicatesFromSortedArray(int arr[], int size){

    ///verificam daca vectorul are 1 element sau este null
    if (size == 0 || size==1)
        return size;
    int temp[size];
    int i = 0, j = 0;

    //parcurgem vectorul, comparind elementul curent cu urmatorul, iar daca este diferit, stocam in vectorul temp
    for(i = 0 ;i < size-1; ++i){
        if(arr[i] != arr[i+1])
            temp[j++] = arr[i];
    }

    //stocam ultimul element din arr in temp
    temp[j++] = arr[size-1];

    //rescriem arr cu noile valori din temp
    for (i = 0; i < j; ++i) {
        arr[i] = temp[i];
    }

    return j;
}



int main() {
    //int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int arr[] = {1,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    size = removeDublicatesFromSortedArray(arr,size);

    for (int i=0; i<size; i++)
        cout << arr[i] << " ";

    return 0;
}