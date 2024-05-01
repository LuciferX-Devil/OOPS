/*Write a program to create a Class Matrix with data members row and columns along with
the suitable member functions to read and display the matrix. Define a function, + and -
that overloads its operation by performing the operations matrix addition and
subtraction. Implement using the objects. [Module 7, Moderate]*/

#include <iostream>

using namespace std;

class Matrix{
    public:
    int row,column;int matrix[4][4];
    void matrixFiller(int row,int column){
        this->row=row;this->column=column;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cin>>matrix[i][j];
            }
        }
    }

    void matrixDisp(){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void operator +(Matrix& m2){
        Matrix temp;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                temp.matrix[i][j]=matrix[i][j]+m2.matrix[i][j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<temp.matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    void operator -(Matrix& m2){
        Matrix temp;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                temp.matrix[i][j]=matrix[i][j]-m2.matrix[i][j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<temp.matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

};

int main(){
    Matrix m1,m2;
    int row1,column1,row2,column2;
    cin>>row1>>column1;
    m1.matrixFiller(row1,column1);
    cin>>row2>>column2;
    if(row1!=row2 || column1!=column2){cout<<"Invalid matrix size"<<endl;}
    else{
        m2.matrixFiller(row2,column2);
        m1.matrixDisp();m2.matrixDisp();
        string input;cin>>input;
        if(input=="+"){m1+m2;}else if(input=="-"){m1-m2;}else{cout<<"Invalid operator!"<<endl;}
    }

    return 0;
}
