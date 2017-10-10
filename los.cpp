#include<iostream>
using namespace std;
int ingresar(int,int,int,int,int**);
int crear(int a,int m, int n,int **por){
  if (a==m){
    return 0;
  }
  else{
    por[a]=new int[n];
    return ingresar(0,0,3,3,por);
    return crear(++a,m,n,por);
  }
}
int crearc(int a,int m, int n,int **zeta){
  if (a==m){
    return 0;
  }
  else{
    zeta[a]=new int[n];
    return crear(++a,m,n,zeta);
  }
}
int borrar(int a,int m, int n,int **por){
  if (a==m){
    delete [] por;
    return 0;
  }
  else{
    delete [] por[a];
    return borrar(++a,m,n,por);
  }
}
int ingresar(int a,int b, int m,int n,int **por){
  int c;
  c=m*n;
  if (b==c){
    return 0;
  }
  else{
    cout<<"ingrese dato";
    cin>>por[a][b];
    return ingresar(a,++b,m,n,por);
    //return ingresar(++a,b,m,n,por);
  }
}
int suma(int a,int b, int m,int n,int **por,int **zeta,int **alga){
  if(a==m){
    return 0;
  }
  else{
    crearc(0,3,3,por);
    alga[a][b]=zeta[a][b] + por[a][b];
    return suma(++a,9,m,n,por,zeta,alga);
    
  }
}

int main(){
  int m,n;
  int **array=new int*[m];
  int **ptr= new int*[m];
  int **asc= new int*[m];
  crear(0,3,3,array);
  crear(0,3,3,ptr);
  //ingresar(0,0,3,3,array);
  return 0;
  
}
