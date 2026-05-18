// write a cpp code to multiply 2 cplx nos using class and objects
#include<bits/stdc++.h>
using namespace std;
class cplx{
    float real;
    float img;
    public:
    void setvalue(float r,float i){
        real=r;
        img=i;
    }
    static cplx pdt(const cplx&c1,const cplx&c2){
        cplx result;
        result.real=c1.real*c2.real-c1.img*c2.img;
        result.img=c1.real*c2.img+c2.real*c1.img;
        return result;
    }
    void display(){
        if(img>=0){ 
            cout<<real<<"+"<<img<<"i"<<endl;
        }else{
            cout<<real<<img<<"i"<<endl;
        }
    }
};
int main(){
   cplx c1,c2,result;
   c1.setvalue(2,3);
   c2.setvalue(2,-4);
   result=cplx::pdt(c1,c2);
   result.display();
   return 0;
}