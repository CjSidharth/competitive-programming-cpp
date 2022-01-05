#include<bits/stdc++.h>
using namespace std;
int main()
{
    tuple<int,char,string,float,double> sus_tuple(69,'x',"sus",4.2,42694269426942694269);
    int a = get<0>(sus_tuple);
    char x = get<1>(sus_tuple);
    string sus = get<2>(sus_tuple);
    float baka = get<3>(sus_tuple);
    double sss = get<4>(sus_tuple);

    get<0>(sus_tuple) = 4;
    auto bad_tuple = make_tuple(69,3,3,"sus",3.4);

}
