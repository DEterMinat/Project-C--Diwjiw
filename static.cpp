#include <iostream>
using namespace std;

class company{
private:
	string founder = "Boss";
	string Address ="Rayong";
	friend void showCompany();
public:
	static int count;
};
class Employee{
	private :
		string name="no Name";
		int salary=0;
	public :
		Employee(){
			cout << "Creat Emtry Object" << endl;
		}
		Employee(string n ,int s){
			name = n;
			salary =s;
						
		}
		void setName(string n){
			name = n;
		}
		void setSalary(int s){
			salary = s;
		}
		string getName(){
			return name;
		}
		int getSalary(){
			return salary;
		}
		void showData(){
			cout <<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
			cout <<"___________________"<<endl;
		}
		virtual void about()=0;
};
class IT : public Employee{
public:
	IT(){
		cout << "Creat IT"<<endl;
	}
	IT(string n,int s) : Employee(n,s){
		company::count++;
	}
	void showData(){
			cout<<"Department IT"<<endl;
			cout <<"Name: "<<getName()<<endl;
			cout<<"Salary: "<<getSalary()<<endl;
			cout <<"___________________"<<endl;
		}
	void about(){
		cout << "Dev Product"<<endl;
	}
};
class Sale : public Employee{
public:
	Sale(){
		cout << "Creat Sale"<<endl;
	}
	Sale(string n,int s) : Employee(n,s){
		company::count++;
	}
	void showData(){
			cout<<"Department Sale"<<endl;
			cout <<"Name: "<<getName()<<endl;
			cout<<"Salary: "<<getSalary()<<endl;
			cout <<"___________________"<<endl;
		}
	void about(){
		cout << "Dev Saller"<<endl;
	}
};

void showCompany(){
	company c;
	cout << c.founder <<endl;
	cout << c.Address << endl;
}
int company::count =0;
int main(){
	
	IT emp1("Diw",800000);
	emp1.showData();
	IT emp2("Wiw",400000);
	emp2.showData();
	Sale emp3("Bank",500000);
	emp3.showData();
	cout << "Employee count: "<<company::count<<endl;
}
