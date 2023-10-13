#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int umur){
            age = umur;
        }
        void set_standard(int std){
            standard = std;
        }
        
        void set_first_name(string fname){
            first_name = fname;
        }
        void set_last_name(string lname){
            last_name = lname;
        }
        
        int get_age(){
            return age;
        }
        
        int get_standard(){
            return standard;
        }
        
        string get_first_name(){
            return first_name;
        }
        
        string get_last_name(){
            return last_name;
        }
        
        string to_string(){
            string str_age = ::to_string(get_age());
            string str_std = ::to_string(get_standard());
            string fname = get_first_name();
            string lname = get_last_name();
            string sen = str_age+','+fname+','+lname+','+str_std;
            return sen;
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
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
