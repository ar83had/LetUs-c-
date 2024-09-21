#include<iostream>
using namespace std;

//                         //templete function
// const float PI=3.141;
// template<class var>
// var area(var r){
//     var a = static_cast<var>(PI*r*r);
//     return a;
// }   

// int main(){

//     cout<<area(2)<<endl<<area(2.2);   //when we pass int and float we got int and float respectively;
//     return 0;
// }

                            //user define data type

// class Date{
//     private:
//         int date,month,year;
//     public:
//         Date(){};
//         Date(int date,int month,int year){
//             this->date=date;
//             this->month=month;
//             this->year=year;
//         };
//         bool operator<(Date& obj){
//             if(year<obj.year)
//                 return true;
//             else if(year>obj.year)
//                 return false;
//             else{
//                 if(month<obj.month)
//                     return true;
//                 else if(month>obj.month)
//                     return false;
//                 else{
//                     if(date<obj.date)
//                         return true;
//                     else
//                         return false;
//                 }
//             }
//         };
//         friend ostream& operator<<(ostream& cout,Date& obj);
// };

// ostream& operator<<(ostream& ostream,Date& obj){
//     cout<<obj.date<<'/'<<obj.month<<'/'<<obj.year<<endl;
//     return cout;
// };

// template<class var>
// var& minfn(var& date1,var& date2){
//     if(date1<date2)
//         return date1;
//     else
//         return date2;
// };

// int main(){
//     Date d1(31,6,2024);
//     cout<<d1;
//     Date d2(31,8,2024);
//     cout<<d2;
//     Date temp = minfn(d1,d2); 
//     cout<<(minfn(d1,d2));
//     return 0;
// }

                        //multiple Argument Templete;

// template<class f,class i>
// f percentage(i s1,i s2,i s3){
//     f pre =(s1+s2+s3)/3.0;
//     return pre;
// }

// template<class var>
// void percentage(var i){
//     cout<<i<<endl;
//     return;
// }

// int main(){
//     float pre = percentage<float,int>(12,42,43);  //it define that f = float and i =int;
//     cout<<pre<<endl;
//     percentage(4);   //overloading of percentage templete;
//     cout<<pre<<endl;
//     return 0;
// }


                            //varidic function
template<class T>
float _sum(T n1){
    return n1;
}

template<class T,class... S>
float _sum(T n1,S... rest){
    return n1+_sum(rest...);
}

int main(){
    float f = _sum(1,2,3,4,5,6);
    float f2 = _sum(1.2,34.54,3.14);
    cout<<"f1 ="<<f<<endl<<"f2 ="<<f2<<endl;
    return 0;
}

