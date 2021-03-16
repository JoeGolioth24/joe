# include <iostream>

using namespace std;
class input{
	private:
		int Attendance ,Assignment ,Quiz ,  Midexam, Finalexam, hasil;
		string grade;
		
	public:	
		void first(int attendance, int assignment, int quiz, int midexam, int finalexam);
		void display(int a);
		void last();
};

void input::first(int attendance, int assignment, int quiz, int midexam, int finalexam){
	Attendance = (attendance*10)/100;
	Assignment = (assignment*20)/100;
	quiz = (quiz*10)/100;
	Midexam= (midexam*30)/100;
	Finalexam= (finalexam*30)/100;
}


void input::last(){
	hasil = Attendance + Assignment + Quiz + Midexam + Finalexam;

	if (hasil >= 91 && hasil <=100){
		grade = "A";
	}
	else if (hasil >= 85 && hasil <=90){
		grade = "A-";
	}
	else if (hasil >= 82 && hasil <=84){
		grade = "B+";
	}
	else if (hasil >= 78 && hasil <=81){
		grade = "B";
	}
	else if (hasil >= 75 && hasil <=77){
		grade = "B-";
	}
	else if (hasil >= 70 && hasil <=74){
		grade = "C+";
	}
	else if (hasil >= 67 && hasil <=69){
		grade = "C";
	}
	else if (hasil >= 60 && hasil <=66){
		grade = "C-";
	}
	else if (hasil >= 40 && hasil <=59){
		grade = "D";
	}
	else if (hasil >= 0 && hasil <=39){
		grade = "F";
}
}
void input::display(int a){
	cout << a << "\t" << hasil << "(" << grade << ")" << endl;
}

int main()
{
	int jumlah,jumlah1,attendance,assignment,quiz,midexam,finalexam;
	cout << " number of Students : "; cin >> jumlah1;
		
	Nilai  student[jumlah1+1];

	for(int i=0; i<jumlah1; i++) {
		cout << "Attendance\t:"; 	cin >> attendance;
		cout << "Assignment\t\t:"; 		cin >> assignment;
		cout << "quiz\t:"; 	cin >> quiz;
		cout << "Mid Exam\t:"; 		cin >> midexam;
		cout << "Final Exam\t:"; 	cin >> finalexam;
		student[i].first(attendance,assignment,quiz,midexam,finalexam);	
		student[i].last();
	}
	

	
	
	cout << " student grade " << endl;
	
	
	for(int j=0; j<hasil1; j++){
		student[j].display(j+1);
	}
	
	
	return 0;
}
