#include <iostream>
#include<bits/stdc++.h>
#include <vector>


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

void rotate(vector<int>& nums, int k) {
    if(k > nums.size())
        return;
    int temp[nums.size()];
    for(int i = 0; i < nums.size() ; ++i){
        temp[(i+k)%nums.size()] = nums[i];
    }

    for(int j = 0; j< nums.size(); ++j)
        cout<<" "<<temp[j];
//
//    int count = 0;
//
//    //hardcore pt moldoveni
//    do{
//        int last = nums[nums.size() - 1];
//        for (int i = nums.size() - 1; i > 0; --i) {
//            nums[i] = nums[i - 1];
//        }
//        nums[0] = last;
//        count ++;
//    } while (count < k);

//varianta pt cei slabi (cum spune pislaras!!!)
//    std::rotate(nums.rbegin(), nums.rbegin()+k,nums.rend());
//    cout<< "Array after rotation: "<<endl;
//    for(vector<int>::iterator it = nums.begin(); it != nums.end();++it)
//        cout<<" "<< *it;

}

void merge(vector<int>& nums1,vector<int>& nums2){
    nums1.insert( nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(),nums1.end());

    cout<< "Merged array:"<<endl;
    for(vector<int>::iterator it = nums1.begin(); it != nums1.end();++it)
        cout<<" "<<*it;

}

int missingNumber(vector<int>& nums) {

    int total;
    total = (nums.size()) * (nums.size() + 1) / 2;
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        total -= *it;
    return total;

}



int main() {
    //int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int arr[] = {1,1,2};

    int size = sizeof(arr) / sizeof(int);

    size = removeDublicatesFromSortedArray(arr,size);

    for (int i=0; i<size; i++)
        cout << arr[i] << " ";


    vector<int> nums1{1,2,3};
    vector<int> nums2{2,5,6};

    //merge(nums1,nums2);

    vector<int> vect{3,0,1};
    vector<int> vect3{9,6,4,2,3,5,7,0,1};

   // int k = missingNumber(vect3);
    //cout<<"\n"<<k<<endl;



//
    vector<int> vec1{1,2,3,4,5,6,7};
    vector<signed> vect2{-1,-100,3,99};
    int k;
    cout<<"\nInsert position of array rotation to the right: "<<endl;
    cin>>k;
    cout<<"\nArray after rotation: "<<endl;
    rotate(vec1,k);


//    for(vector<int>::iterator it = vec1.begin(); it != vec1.end();++it)
//        cout<<" "<< *it;

    return 0;
}