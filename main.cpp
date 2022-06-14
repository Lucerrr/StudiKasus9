#include <iostream>

using namespace std;
class array{
    public:
      void input();
      void proses();
      void output();
    private:
      int data[20];
      int matriks[5][4];
      int temp;
      int d=0;
};

void array::input(){
    //menentukan banyak bilangan
    for(int i=0;i<20;i++){
      cout << "Data ke-" << i+1 << " : ";
      cin >> data[i];
    }
    cout << endl;
    //menampilkan array 1 dimensi
    cout << "Bilangan sebelum diurutkan : \n";
    for(int j=0;j<20;j++){
      cout << " " << data[j];
	  }
  }

void array::proses(){
    // data diurutkan
    for(int k=0;k<19;k++){
      for(int l=k+1;l<20;l++){
        if(data[k]>data[l]){
        temp = data[k];
    	  data[k] = data[l];
    	  data[l] = temp;
        }
      }
    }
    // konversi menjadi 2 dimensi
	    for (int k=0;k<4;k++){
        for (int l=0;l<5;l++){
          matriks[k][l] = data[d];
          d++;
        }
      }
  }

void array::output(){
    cout << endl;
    //bilangan setelah diurutkan
    cout << "==============================================================\n";
    cout << "Bilangan setelah diurutkan : \n";
      for (int d=0; d<20; d++){
        cout << data[d] << " ";
      }
    //menampilkan array 2 dimensi
    cout << endl;
    cout << "Bilangan setelah di konversi menjadi 2 dimensi: \n";
    for (int k=0;k<4;k++){
      for (int l=0;l<5;l++){
        cout << matriks[k][l] << "   ";
      }
      cout << endl;
    }
  }

int main(){
  array x;
  x.input();
  x.proses();
  x.output();
  return 0;
}