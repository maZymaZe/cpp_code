#include <stdexcept>
#include "grade.h"
#include "median.h"


double grade(double midterm,double final,double homework)
{
	return 0.2*midterm + 0.4*final + 0.4*homework;
}

double grade(double midterm,double final,const sequence& hw)
{
	if(hw.size() == 0)
		throw std::domain_error("student has no homework score");
	
	return grade(midterm,final,median(hw));
}

double grade(const Student_info& s)
{
	return grade(s.midterm,s.final,s.homework);
}

bool fgrade(const Student_info& s)
{
	return s.f_grade<80;
}