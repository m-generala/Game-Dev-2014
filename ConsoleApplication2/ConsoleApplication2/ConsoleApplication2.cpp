

// ConsoleApplication2.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
using namespace std;
int genB(int a){
	int b;
	do{
		b=rand()%10;
	}while(b==a||b==7);
		return b;
}
int genC(int a,int b){
	int c;
	do{
	c=rand()%10;
	}while(c==b||c==a);
	return c;
}
int genD(int a,int b,int c){
	int d;
	do{
		d=rand()%10;
	}while(d==c||d==b||d==a);
	return d;
}
int numcheck(int A,int B,int C,int D,int a,int b,int c,int d)
{
  int bulls=0,cows=0;
  if(A==b||A==c||A==d){
	  cows+=1;}
  else{ if (A==a)
	  bulls+=1;}
  if(B==a||B==c||B==d){
	  cows+=1;}
  else{ if (B==b)
	  bulls+=1;}
  if(C==a||C==b||C==d){
	  cows+=1;}
  else{ if (C==c)
	  bulls+=1;}
  if(D==a||D==b||D==c){
	  cows+=1;}
  else{ if (D==d)
	  bulls+=1;}
  if(bulls==4)
  {
     printf("Congrats!\n");
     return 1;
  }
  else{
     printf("Bulls=%d\nCows=%d\nTry Again!!\n",bulls,cows);
  }
};

int main(int argc, char* argv[])
{

	int a=rand()%10;
	int b=genB(a);
	int c=genC(a,b);
	int d=genD(a,b,c);
	//cout<<"A:"<<a<<endl<<"B:"<<b<<endl<<"C:"<<c<<"D:"<<d<<endl;
	int A,B,C,D;
	int game;
	while(1){
	cout<<"Enter 4 digits"<<endl;
	scanf_s("%d%d%d%d",&A,&B,&C,&D);
	game=numcheck(A,B,C,D,a,b,c,d);
	if(game==1){
	exit(0);
	}
	}
	//cout<<A<<" "<<B<<" "<<C<<" "<<D<<endl;
	return 0;
}

