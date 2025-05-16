#include <iostream>
#include <sstream>
using namespace std;

class Student{
    public:
    int age,standard;
    string first_name,last_name;
    
    void set_age(int a){
        this->age=a;
    }
    void set_standard(int s){
        this->standard=s;
    }
    void set_first_name(string f){
        this->first_name=f;
    }
    void set_last_name(string l){
        this->last_name=l;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    void get_first_name(){
        cout<<first_name<<endl;
    }
    void get_last_name(){
        cout<<last_name<<", ";
    }
    void to_string(){
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    st.get_last_name();
    st.get_first_name();
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}
