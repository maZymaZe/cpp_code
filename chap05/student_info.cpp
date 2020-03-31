#include "student_info.h"
#include "grade.h"

using namespace std;

istream& read_hw(istream& in, sequence& hw)
{
	if(in){
		hw.clear();
		
		double x;
		while(in >> x)
			hw.push_back(x);
		
		in.clear();
	}
	
	return in;
}

istream& read(istream& in, Student_info& s)
{
	in >> s.name >> s.midterm >> s.final;
	
	read_hw(in,s.homework);
	
	return in;
}

istream& read(istream& in, vector<Student_info>& students)
{
	Student_info record;
	
	while(read(in,record)){
		record.f_grade = grade(record);
		students.push_back(record);
	}
	
	return in;
}

bool compare(const Student_info& x, Student_info& y)
{
	return !(x.f_grade < y.f_grade);
}