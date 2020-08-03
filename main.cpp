#include <iostream>
using namespace std;

class Staff {
  private:
    int StaffId;
    string Name;
    string Phone;
    float Salary;
  
  public:
    Staff(int staffId, string name, string phone, float salary){
      StaffId = staffId;
      Name = name;
      Phone = phone;
      Salary = salary;
    }

    void Display(){
      cout << StaffId << ": Name: " << Name << "\n\t Phone: " << Phone <<"\n\t Salary: " << Salary << endl;
      return;
    }
};

class Academics: public Staff{
	private:
    string Domain;
    int Publications;
	
	public:
  Academics(int staffId, string name, string phone, float salary, string domain, int publications) : Staff(staffId, name, phone, salary) {
		Domain = domain;
		Publications = publications;
	}
	
  void Display(){
		Staff::Display();
		cout << "\t Domain: " << Domain << "\n\t Publications: " << Publications << endl;
    return;
	}
};

class Technical: public Staff{
  private:
    string Skills;

  public:
    Technical(int staffId, string name, string phone, float salary, string skills) : Staff(staffId, name, phone, salary){
      Skills = skills;
    }

    void Display()
    {
      Staff::Display();
      cout << "\t Skills: " << Skills << endl;
      return;
    }
};

class Contract: public Staff{
  private:
  int Period;

  public:

  Contract(int staffId, string name, string phone, float salary, int period): Staff(staffId, name, phone, salary) {
    Period = period;
  }
  
  void Display()
  {
    Staff::Display();
    cout << "\t Contract: " << Period << " years" << endl;
      return;
  }
};


int main(){
  Staff s(1, "Ram Kumar", "221605", 50000 );
  s.Display();
  cout << "\n";

   Academics a(2, "Anshul Kumar", "321605", 50000, "CSE", 4 );
  a.Display();
  cout << "\n";

  Technical t(3, "Aditya Kumar", "251605", 50000, "Web Development" );
  t.Display();
  cout << "\n";

  Contract c(4, "Manoj Kumar", "521605", 50000, 2 );
  c.Display();
  cout << "\n";
  
 return 0;
}