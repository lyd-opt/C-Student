#include <iostream>
#include <string>
template <typename T>
 T const & Max(T const &a,T const& b);
int main(){
    using namespace std;
    int a=4;
    int b=45;
    string x="msmjfjidiii";
    string y="math";
    cout<<"调用模板函数："<<endl;
    cout<<"max(a,b):"<<Max(a,b)<<endl;
    cout<<"Max(x,y):"<<Max(x,y)<<endl;
}
template <typename T>
 T const & Max(T const &a,T const& b){
    return a<b?b:a;
}
