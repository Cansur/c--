#include <iostream>
#include <initializer_list>
#include <cstdlib>

using namespace std;
char list_exam(initializer_list<char> v, char p){
    int num = 0;
    for (auto val : v){
        if (abs(static_cast<int>(val)-static_cast<int>(p)) < abs(num-static_cast<int>(p))){
            num = static_cast<int>(val);
        }
    }
    return static_cast<char>(num);
}
int main(){
    cout << "{ 'd', 'p', 'r', 'w', 'g', 'f' }문자 중 h와 가까운 문자는 : " ;
    cout << list_exam({ 'd', 'p', 'r', 'w', 'g', 'f' }, 'h') <<endl;
    cout << "{ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}문자 중 w와 가까운 문자는 : ";
    cout << list_exam({ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}, 'w') << endl;
}