#include <iomanip>
#include <ios>
#include <iostream>
#include <algorithm>
#include <fstream>

#include "student_info.h"
#include "median.h"
#include "grade.h"
#include "extract.h"

using namespace std;

int main()
{
	vector<Student_info> students,fail;
	ifstream cfile("F51.txt");
	read(cfile,students);
	
	fail = extract_fails_1(students);
	
	cout << "fail :" << fail.size()<<"\n";
	cout << "total:" << students.size()<<"\n";
	sort(fail.begin(),fail.end(),compare);
	
	for(auto &student: fail){
		cout << left << setw(20) << student.name;
		try{
			double final_grade = grade(student);
			streamsize prec = cout.precision();
			cout << "\t" << setprecision(3) << final_grade << setprecision(prec);
		}catch(domain_error& e)
		{
			cout << e.what();
		}
		cout << endl;
	}
	
	return 0;
}