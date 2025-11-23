// #include <iostream> 
// #include <vector>
// using namespace std;
// void merge_two_arr(int arr[],int arr2[],int res[] , int s1, int s2){
//     int i = 0;

//     int j = 0;
//     int k = 0;
//     while (i<s1 && j<s2)
//     {
//         if(arr[i] < arr2[j]){
//             res[k] = arr[i];
//             i++;
//         }
//         else{//arr2[j] < arr[i]
//             res[k] = arr2[j];
//             j++;
//         }
//         k++;
//     }




//     // for remaining
//     while(i<s1){
//             res[k] = arr2[j];
//             k++;
//             j++;
//     }
    
//     while (j < s2){
//         res[k] = arr2[j];
//         k++;
//         j++;
//     }
//     }
    

// int main (){
//     int size1;
//     cout<<"enter the array 1 size : ";
//     cin>>size1;
//     int size2;
//     cout<<"ENTER the array 2 size : ";
//     cin>>size2;
//     int array1[size1] , array2[size2] , res[size1+size2];
//     for(int i = 1;i<=size1;i++){
//         cout<<"enter the element of array 1 at index "<<i<<" : ";
//         cin>>array1[i];
//     }
//        for(int j = 1;j<=size2;j++){
//         cout<<"enter the element of array 2 at index "<<j<<" : ";
//         cin>>array2[j];
//     }
//     for(int i = 1 ;i <= size1;i++){
//         cout<<array1[i]<<" ";
//     }
//     cout<<endl;
//       for(int j = 1 ;j <= size1;j++){
//         cout<<array1[j]<<" ";
//     }


//     cout<<"MERGE SHORTED ARRAY : \n";
//     merge_two_arr(array1, array2, res, size1, size2);
//     for(int k =0;k<size1+size2;k++){
//         cout<<res[k]<<" ";
//     }

// }


