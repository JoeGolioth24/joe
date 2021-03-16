#include <iostream>

using namespace std;
class Input{
	private:
		int Kehadiran ,Tugas, Quiz,  Mid, Final, score;
		string grade;
		
	public:	
		void first(int Kehadiran, int Tugas, int Quiz, int mid, int final);
		void display(int a);
		void last();
};

void Input::first(int Kehadiran, int Tugas, int Quiz, int Mid, int Final){
	Kehadiran = (Kehadiran*10)/100;
	Quiz = (Quiz*10)/100;
	Tugas = (Tugas*20)/100;
	Mid = (Mid*30)/100;
	Final = (Final*30)/100;
}


void Input::last(){
	score = Kehadiran+ Tugas + Quiz + Mid + Final;

	if (score >= 91 && score <=100){
		grade = "A";
	}
	else if (score >= 85 && score <=90){
		grade = "A-";
	}
	else if (score>= 82 && score <=84){
		grade = "B+";
	}
	else if (score>= 78 && score <=81){
		grade = "B";
	}
	else if (score>= 75 && score <=77){
		grade = "B-";
	}
	else if (score>= 70 && score <=74){
		grade = "C+";
	}
	else if (score>= 67 && score <=69){
		grade = "C";
	}
	else if (score>= 60 && score <=66){
		grade = "C-";
	}
	else if (score>= 40 && score <=59){
		grade = "D";
	}
	else if (score>= 0 && score <=39){
		grade = "F";
}
}
void Input::display(int a){
	cout << a << "\t" << score << "(" << grade << ")" << endl;
}

int main()
{
	int Total,total1,kehadiran,tugas,quiz,mid,final;	
	cout << "number of Students : "; cin >> total1;
		
	Input student[total1+1];

	for(int i=0; i<total1; i++) {
		cout << " nilai student " << i+1 << endl;
		cout << "Kehadiran\t:"; 	cin >> kehadiran;
		cout << "Quiz\t\t:"; 		cin >> quiz;
		cout << "Tugas\t:"; 	cin >> tugas;
		cout << "Mid \t:"; 		cin >> mid;
		cout << "Final\t:"; 	cin >> final;
		student[i].first(kehadiran,tugas,quiz,mid,final);	
		student[i].last();
	}
	


	
	
	cout << " student  grade" << endl;
	
	for(int j=0; j<total1; j++){
		student[j].display(j+1);

	
	}

	
	
	return 0;
}
