  #include <iostream>
  #include <stdio.h>
  #include <Windows.h>
  #include <stdlib.h>
  using namespace std;
  int main(){loopin:
  char lnameI[10],Isurnamel[10];
  printf("enter you're name:");
  cin>>lnameI;
  printf("enter your surname:");
  cin>>Isurnamel;
  char _fullname[20];
  for (int i=0;i<10;i++){_fullname[i]=lnameI[i]}
  for (int i=10;i<20;i++){_fullname[i]=Isurnamel[i-10]}
  printf("your full name is ");
  for (int i=0;i<20;i++){cout<<_fullname[i];}
  system("pause");
  char ans;
  printf("do it again?")
  cin>>ans;
  if (ans=='y'){goto loopin;}
  else {goto endin;}
  endin:
  return 0;}
