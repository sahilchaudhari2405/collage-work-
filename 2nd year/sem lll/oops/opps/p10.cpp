#include<iostream> 
using namespace std;
class operators{
    int data;
    public:
        operators(int n){
            data=n;
        }
        void printdata(){
            cout<<data<<endl;
        }
        void operator+(operators add){
            int sum= data + add.data;
            cout<<"The addition of two objects is: "<<sum<<endl;
        }
        void operator-(operators sub){
            int subtraction= data - sub.data;
            cout<<"The subtraction of two objects  is: "<<subtraction<<endl;
        }
};

int main(){
    int a,b; //user define value
    cout<<"enter 2 val of obj"<<endl;
    cin>>a>>b;
    operators m1(a),m2(b);
    cout<<"Value of obj 1 : ";
    m1.printdata();
    cout<<"Value of obj 2 : ";
    m2.printdata();
    m1+m2;
    m1-m2;
    return 0;
}