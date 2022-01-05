#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* Pairs
    We start by pairs to store coordinates and other values which have meaning when stored together
    */
    pair<int,int> pairOfInts;
    cin >> pairOfInts.first >> pairOfInts.second;
    if(pairOfInts.first > pairOfInts.second)
    {
        swap(pairOfInts.first,pairOfInts.second);
    }
    cout << pairOfInts.first << " "<< pairOfInts.second << "\n";
    pair<string,int> student;
    cin >> student.first >> student.second;
    /*
    Pair Coordinates
    */
    int n;
    cin >> n;
    pair<int,int> coord;
    cin >> coord.first >> coord.second;
    /*
    Ways to Store Pairs inside;
    */
    pair<int,int> sus {69,69};
    pair<int,int> sussybaka(42,42);
    pair<int,int> suspair = make_pair(23,32);
    auto amogus = make_pair("sussybaka",34);
    /*
    Pair Access
    */
    // Here We Go with Tuples
    tuple<int, char, float, double, string> very_bad_tuple(4, '5', 6.0f, 7.00, "haha");

    // getters
    int four = get<0>(very_bad_tuple);
    char five = get<1>(very_bad_tuple);
    float six = get<2>(very_bad_tuple);
    double seven = get<3>(very_bad_tuple);
    string haha = get<4>(very_bad_tuple);

    // setters
    get<0>(very_bad_tuple) = 5;
    // Here we start with sequence containers
    //Vector
    vector<int> vec(5);
    int a; cin >> n;
    int m; cin >> m;
    vec.resize(m);
    vector<int> suss;
    int x = 0;
    while(cin >> x and x!= -1)
    {
        suss.push_back(x);
    }
    //Accessing Vector elements
    vector<int> susss(5,0);
    susss[0] = 1;
    susss[1] = 2;
    susss[2] = 3;
    for(auto y : susss)
    {
        cout << x << "\n";
    }
    //deque
    deque<int> dq;
    int u = 0;
    while(cin >> u && u != -1)
    {
        dq.push_back(u);
    }

    list<int> A(5, 0); // list of 5 elements with 0 value
    auto it = A.begin();
    *it = 1; it++;
    *it = 2; it++;
    *it = 3; it++;
    *it = 4; it++;
    *it = 5;

    // we can foreach loop, because list defines bidirectional iterators.
    for(int x: A) cout << x << ' '; // 1 2 3 4 5

    A.push_back(6);
    for(int x: A) cout << x << ' '; // 1 2 3 4 5 6

    A.push_front(0);
    for(int x: A) cout << x << ' '; // 0 1 2 3 4 5 6

    cout << A.size() << '\n'; // 7

    vector<pair<string, string>> bakasus;
    string very_long_input_string; cin >> very_long_input_string;
    string another_very_long_string; cin >> another_very_long_string;
    bakasus.emplace_back(very_long_input_string, another_very_long_string);




}
