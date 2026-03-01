//STL
//STL (Standard Template Library) is a library in C++ that provides ready-made data structures and algorithms.
//STL = Collection of Containers + Algorithms + Iterators

//Conatiners
//A container in C++ is an object that stores a collection of elements (data).
//Container = A data structure that stores multiple values


//vector
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     for(int x:v){
//         cout<<x<<" ";
//     }
//     cout<<endl;

//     cout<<v[2]<<endl;
//     cout<<v.at(3)<<endl;
//     v.insert(v.begin()+1,25);
//     v.erase(v.begin()+3);
//     for(int x:v){
//         cout<<x<<" ";
//     }


// }


//List

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l;
//     l.push_back(20);
//     l.push_back(30);
//     l.push_back(40);
//     for(int x:l){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     l.push_front(10);
//     l.push_back(50);
//     l.pop_back();
//     l.pop_front();
//     // auto it=l.begin();
//     // it++;
//     // l.insert(it,5);
//     for(int x:l){
//         cout<<x<<" ";
//     }
//     l.remove(5);
//     //accessing ellement at index
//     auto it=l.begin();
//     advance(it,2);
//     cout<<*it;
// }


//dequeue is same as vector but insertion and deletion at both ends we can do









//iterators


//An iterator in C++ is an object that points to elements inside a container (like vector, list, set, map).
//It works similar to a pointer and is used to traverse (move through) container elements.
//STL containers don't allow direct indexing sometimes (like list, set, map)
//Provide uniform way to access elements


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     set <int>s={1,9,2,8,3,4,5,6,7};
//     set<int>::iterator it;
//     for(auto it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    set <int>s={1,9,2,8,3,4,5,6,7};
    set<int>::iterator it;
    for(auto it=s.rbegin();it!=s.rend();it++){
        cout<<*it<<" ";
    }
}
