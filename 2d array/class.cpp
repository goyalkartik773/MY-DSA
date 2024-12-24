#include <iostream>
using namespace std;
class NaturalNumber
{
public:
    int val;

    NaturalNumber()
    {
        val = 0;
    }

    NaturalNumber(int val)
    {
        this->val = val;
    }

    NaturalNumber *operator+(NaturalNumber &n1)
    {
        NaturalNumber *temp = new NaturalNumber;
        temp->val = this->val + n1.val;
        return temp;
    }

    void display()
    {
        cout << val << " ";
    }
};
class Complex
{
public:
    int realpart;
    int imgpart;
    Complex() {}
    Complex(int realpart, int imgpart)
    {
        this->realpart = realpart;
        this->imgpart = imgpart;
    }
    Complex *operator+(Complex &c1)
    {
        Complex *temp = new Complex;
        temp->realpart = this->realpart + c1.realpart;
        temp->imgpart = this->imgpart + c1.imgpart;
        return temp;
    }
    void display()
    {
        cout << realpart << " +" << imgpart << "i" << endl;
    }
};
class Matrix
{
public:
    int **arr;
    int row;
    int col;
    Matrix() {}
    Matrix(int row, int col)
    {
        this->row = row;
        this->col = col;
        // intialisation of 2d array
        arr = new int *[row];
        for (int i = 0; i < col; i++)
        {
            arr[i] = new int[col];
        }
    }
    void inputmatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Enter value at " << "(" << i << "," << j << ")" << endl;
                cin >> arr[i][j];
            }
        }
    }
    Matrix *operator+(Matrix m1)
    {
        Matrix *temp = new Matrix(this->row, this->col);
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->col; j++)
            {
                temp->arr[i][j] = this->arr[i][j] + m1.arr[i][j];
            }
        }
        return temp;
    }
    void display()
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    cout << "display of two natural number:" << endl;
    NaturalNumber *n1 = new NaturalNumber(5);
    NaturalNumber *n2 = new NaturalNumber(6);
    NaturalNumber *n3 = *n1 + *n2;
    n3->display();
    cout << endl;
    cout << "display of two complex number:" << endl;
    Complex *c1 = new Complex(2, 4);
    Complex *c2 = new Complex(3, 6);
    Complex *c3 = *c1 + *c2;
    c3->display();
    cout<<endl;
    cout << "display of two matrix:" << endl;
    Matrix *m1 = new Matrix(3, 3);
    m1->inputmatrix();
    Matrix *m2 = new Matrix(3, 3);
    m2->inputmatrix();
    Matrix *m3 = *m1 + *m2;
    m3->display();
    cout<<endl;

    delete n1;
    delete n2;
    delete n3;
    delete c1;
    delete c2;
    delete c3;
    delete m1;
    delete m2;
    delete m3;

    return 0;
}
