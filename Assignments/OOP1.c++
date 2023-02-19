// PROGRAM 
#include<iostream> 
using namespace std; 
class Complex 
{ 
 	int real;  	int img; 
    public:Complex() 
    { 
        real=0; 
        img=0; 
    } 
    Complex(int r,int i) 
    { 
        real=r; 
        img=i; 
    } 
    int getreal() 
    { 
        return real; 
    } 
    int getimg() 
    {
        return img; 
    } 
    void setreal(int r) 
    { 
        real=r; 
    } 
    void setimg(int i) 
    { 
        img=i; 
    } 
    friend ostream&operator<<(ostream& os,Complex obj); 
    friend istream&operator>>(istream& is,Complex &obj); 
    
    Complex operator +(Complex c) 
    { 
        int r=real+c.getreal(); 
        int i=img+c.getimg(); 
        Complex co(r,i); 
        return co; 
    } 
    Complex operator *(Complex c) 
    { 
        int r=real*c.getreal()-img*c.getimg(); 
        int i=real*c.getimg()+img*c.getreal(); 
    
        Complex co(r,i); 
                return co; 
    } 
}; 
ostream& operator<<(ostream& os,Complex obj) 
{ 
    cout<<"\n" <<obj.getreal()<<"+"<<obj.getimg()<<"i\n"; 
    return os; 
} 
istream&operator>>(istream& is,Complex &obj) 
{ 
    int t1,t2; 
    cout<<"Enter the real part"; 
    cin>>t1; 
    cout<<"Enter the imaginary part"; 
    cin>>t2; 
    obj.setreal(t1); 
    obj.setimg(t2); 
    return is; 
} 
int main() 
{ 	Complex x1; 
 	cin>>x1; 
 	cout<<x1; 
 	Complex x2; 
 	cin>>x2; 
 	cout<<x2; 
 	Complex x3=x1+x2; 
 	cout<<"Addition is\n"; 
 	cout<<x3; 
    x3=x1*x2; 
 	cout<<"Multiplication is\n"; 
 	cout<<x3; 
} 
