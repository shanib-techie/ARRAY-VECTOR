// WHAT & WHYY?
// SO FAR WE HAVE EXPLORED ARRAYS WITH ONLY ONE
// DIMENSION IT IS ALSO POSSIBLE FOR ARRAY TO HAVE OR DIMENSIONS THE TWO DIMENSIONAL ARRAY IS CLASS MATRIX
// int[r][c]/where r == no of row & c == no of coloum
// int arr[4][3]
//  ________
// |3|5|6|8|
// ---------
// |2|9|5|1|  //arr[2][4] ==1
// ---------  //arr[1][3] ==6
// |2|8|6|1|
// ---------

//QUES___---->
// QUES 1 WAP TO STORE ROLL NUMBER AND MARKS OBTAINED BY  4 STUENT SIDE BY SIDE IN A MATRIX
// QUES 2 WAP TO STORE 10 AT EVERY INDEX OF A 2 D MATRIX WITH 5 ROW AND 5 COLOUM' INT[5][5] = {0,0,0,0,0,0,00,0,.......25TH TERM}
// QUES 3WAP TO ADD TWO MATRIX
// QUES 4 WAP TO GET MAXIMUM ELEMENT FROM MATRIX
// ALSO GET MINIMUM ELEMENT FROM MATRIX
// QUES 5 FIND THE SUM OF ALL ELEMENT IN THE GIVEN MATRIX AND PRODUCT ALSO
// QUES6 GIVE A MATRIX 'A' OF DIMENSION NXM AND 2 COORDINATE (LI,RI) AND (L2,R2) RETURN TE SUM OF THE RECTANGLE FROM (LI,R1) TO (L2,R2).
//MAKE MATRIX AND FIND IT TRAMSPORT 
// // WAY TO INITIALIZE 2 D __ARRAY
// int ARR[4][2] = {{124,56},{123,57},{122,58},{121,59}};
// int arr[4][2] = {1234,56,1235,57,1236,58,1237,59};
// int arry [][3] = {12,23,15,24,12,77}
//FOR 2 D ARRAY WE USE TWOO FOR LOOP
// #include <iostream>
// using namespace std;
// int main(){
//     int arry[2][3] ;
//     arry[0][0] = 4;
//     arry[0][1] = 8;
//     arry[0][2] = 5;
//     arry[1][0] = 8;
//     arry[1][1] = 1;
//     arry[1][2] = 9;
//     for (int i = 0 ;i<2;i++){ //row
//         for(int j =0 ; j <3;j++){  //coloum
//             cout<<arry[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int j=0;j<3;j++){
//         for(int i = 0; i<2 ;i++){
//             cout<<arry[j][i]<<" ";
//         }cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main (){
//     int r , c;
//     cout<<"ENTER THE NUMBER OF ROW IN MATRIX ";
//     cin>>r;
//     cout<<"ENTER THE NUM OF COLOUM IN MATRIX ";
//     cin>>c;
//     int arry[r][c];
//     cout<<endl;
//     for(int i =0;i<r;i++){
//         for (int j = 0 ;j<c;j++){
//             cout<<" the element of matrix at position "<<"A("<<i<< "x" <<j<<") <======> ";
//             cin>>arry[i][j];
//         }
//     }
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//             cout<<arry[i][j] <<" ";
//         }
//         cout<<endl;
//     }
// }


//WAP THAT TAKE INPUT MATRIX NXM ORDER THEN FIND IT SUM , PRODUCT  , MAX  ,   SEX_MAX  ,  MIN   
#include <iostream>
using namespace std;
int main (){
    int r , c ;
    cout<<"ENTER THE NUMBER OF ROW IN MATRIX : ";
    cin>>r;
    cout<<"ENTER THE NUMBER OF COLOUM IN MATRIX : ";
    cin>>c;

    int matrix[r][c];
    for(int i = 1 ; i <=r;i++){
        for(int j = 1 ; j <= c;j++){
            cout<<"ENTER THE ELEMENT OF MATRIX AT POSITION"<<i<<"X"<<j<<" : ";
            cin>>matrix[i][j];
        }
    }
    cout<<"YOUR MATRIX : \n";
        for(int i = 1 ; i <=r;i++){
        for(int j = 1 ; j <= c;j++){
            // cout<<"ENTER THE ELEMENT OF MATRIX AT POSITION"<<i<<"X"<<j<<" : ";
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //     FIND SUM AND PRODUCT 

      int sum = 0;
      int product = 1;
      int mx_ele = -87654;
      int mn_ele = 987654;
      int sec_mx = 0;
            for(int i = 1 ; i <=r;i++){
        for(int j = 1 ; j <= c;j++){
            sum += matrix[i][j];
            product *= matrix[i][j];
            mx_ele = max(mx_ele,matrix[i][j]);
            mn_ele = min(mn_ele,matrix[i][j]);
         if(matrix[i][j]!=mx_ele);
            sec_mx = max(mx_ele,matrix[i][j]);

        }
        // cout<<endl;
    }
     cout<<"sum & product of all elemnt : "<<sum<<"\t"<<product<<endl;
     cout<<" MAX AND MIN OF THIS MATRIX : "<<mx_ele<<"\t"<<mn_ele<<endl;
     cout<<sec_mx;


    
}















// QUES TAKE MATRIX AS A INPUT AND THAN FIND IT SUMS AND PRODUCT
// #include <iostream>
// using namespace std;
// int main(){
//     int row , coloum;
//     cout<<"ENTER THE NUMBER OF ROW IN MATRIX : ";
//     cin>>row;
//     cout<<"ENTER THE NUMBER OF COLOUM IN MATRIX : ";
//     cin>>coloum;
//     int matrix[row][coloum];
//     for(int i =1 ;i<=row;i++){
//         for(int j=1;j<=coloum;j++){
//             cout<<"ENTER THE ELEMENT OF MATRIX AT POSITION A("<<i<<"X"<<j<<")";
//             cin>>matrix[i][j];
//         }
    
// }
//     int sum = 0;
//     int product = 1;
//     for(int i = 1 ;i<=row;i++){
//         for(int j = 1;j<=coloum;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i =1;i<=row;i++){
//         for(int j = 1;j<=coloum;j++){
//             sum += matrix[i][j];
//             product *= matrix[i][j];
//         }
//     }
//     cout<<"THE SUM OF ALL ELEMENT FROM MATRIX = "<<sum;
//     cout<<"THE PRODUCT OF ALL ELEMENT FRO MATRIX = "<<product;
// }

// .......................................#############################//////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main(){
//     int no_of_matrix;
//     cout<<"ENTER HOW MUCH MATRIX YOU WILL MAKE : ";
//     cin>>no_of_matrix;
//     int r,c;
//     cout<<"ENTER THE NO. OF ROW IN MATRIX : ";
//     cin>>r;
//     cout<<"ENTER THE NO. OF COLOUM IN MATRIX : ";
//     cin>>c;
//     for(int k = 1;k<=no_of_matrix;k++){
//         string matrix;
//         cout<<"ENTER THE NAME OF"<<k<<" MATRIX :";
//         cin>>matrix;
//     }

//     for(int m =1 ; m<=no_of_matrix;m++){ 
   
//     int  matrix[r][c];
//     for(int i = 1;i<=r;i++){
//         for(int j = 1;j<=c;j++){
//             cout<<"ENTER THE ELEMENT OF MTRIX "<<matrix<<"at position A("<<i<<"X"<<j<<")";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<endl;
//     cout<<"THIS IS YOUR MATRIX" << matrix<<endl;
//     for(int i = 1;i<=r;i++){
//         for(int j = 1;j<=c;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     }
// //     int array[r][c] = sum_of_matrix;
// //     // cout<<"THE SUM OF "<<no_of_matrix<<" IS "<<endl;
// //     for(int s = 1;s<=r;s++){
// //         for(int b = 1;b<=c;b++){
// //             sum_of_matrix[s][b] += matrix[s][b]
// //         }

    
// //     cout<<"THIS IS YOUR MATIsum_of_matrix"<<matrix[s][b]<<" ";
// // }

// }







// // #include  <iostream>
// // using namespace std;
// // int main(){
    
// // }