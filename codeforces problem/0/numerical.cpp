// #include<bits/stdc++.h>
// using namespace std;
// float u[3][3];
// float l[3][3];
// float y[3];
// float sol[3];
// float mat[3][3],arr[3];
// int row=0;


// void f(string equation) {
//     vector<int>n;
//     string currentNumber;
//     for(char c:equation){
//         if(isdigit(c) || (c == '-'&&currentNumber.empty())){
//             currentNumber+=c;
//         }
//         else{
//             if(!currentNumber.empty()){
//                 n.push_back(stoi(currentNumber));
//                 currentNumber.clear();
//             }
//         }
//     }

//     if(!currentNumber.empty()){
//        n.push_back(stoi(currentNumber));
//     }
//     //mat[row].resize(n.size()-1);
//     for (int i=0;i<3;i++) {
//         mat[row][i]=n[i];
//     }
//     arr[row]=n[3];
//     ++row;

// }

// void Eqn(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(j==0){
//                 cout<<mat[i][j]<<"x ";
//             }
//             if(j==1){
//                 if(mat[i][j]>=0){
//                     cout<<"+"<<mat[i][j]<<"y ";
//                 }
//                 else{
//                     cout<<mat[i][j]<<"y ";
//                 }
//             }

//             if(j==2){
//                 if(mat[i][j]>=0){
//                     cout<<"+"<<mat[i][j]<<"z ";
//                 }
//                 else{
//                     cout<<mat[i][j]<<"z ";
//                 }
//             }
//             if(j==3){
//                     cout<<" = "<<arr[i]<<endl;
//                 }
//             }
//             cout<<endl;
//         }
//     }

// void factorization(){
//    u[0][0]=mat[0][0];
//    u[0][1]=mat[0][1];
//    u[0][2]=mat[0][2];
//    l[1][0]=mat[1][0]/mat[0][0];//
//    u[1][1]=mat[1][1]-l[1][0]*u[0][1];
//    l[2][0]=mat[2][0]/mat[0][0];//
//    u[1][2]=mat[1][2]-(l[1][0]*mat[0][2]);//
//    l[2][1]=(mat[2][1]-l[2][0]*u[0][1])/u[1][1];
//    u[2][2]=mat[2][2]-l[2][0]*u[0][2]-l[2][1]*u[1][2];


//    y[0]=arr[0];
//    y[1]=arr[1]-(l[1][0]*y[0]);
//    y[2]=arr[2]-(l[2][0]*y[0])-(l[2][1]*y[1]);


//    sol[2]=y[2]/u[2][2];
//    sol[1]=(y[1]-(u[1][2]*sol[2]))/u[1][1];
//    sol[0]=(y[0]-(u[0][1]*sol[1])-(u[0][2]*sol[2]))/u[0][0];

// }


// int  main(){

//   //vector<string>s;
//   //string ss;
//   //int n;cin>>n;
// //   for(int i=0;i<n;i++){
// //     cin>>ss;
// //     s.push_back(ss);
// //   }
// //  for(int i=0;i<n;i++){
// //     f(s[i]);
// //  }

//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             cin>>mat[i][j];
//         }
//     }

//     for(int i=0; i<3; i++)
//     {
//         cin>>arr[i];
//     }


//   Eqn();

//   factorization();
//   cout<<"Upper Triangular Matrix"<<endl;
//     for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<u[i][j]<<" ";
//     }
//     cout<<endl;

// }
// cout<<endl;
//   cout<<"Lower Triangular Matrix"<<endl;
//  for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         if(i==j){
//             l[i][j]=1;
//         }
//         cout<<l[i][j]<<" ";
//     }
//     cout<<endl;
//  }
//  cout<<endl;
//  cout<<"Solutions: "<<endl;
// cout<<"x = "<<sol[0]<<endl;
// cout<<"y = "<<sol[1]<<endl;
// cout<<"z = "<<sol[2]<<endl;
// }
// /*
// 3
// 27x+6y-1Z=85
// 6x+15y+2Z=72
// 1x+1y+54Z=110
// */






























