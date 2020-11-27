/************************************************
Description: This program will open a file, 
read it, compute statistial analysis of students and
write to a new file.

Programmer: Jake Mercure
Date: 2/11/20
Class: CPTS 121

*************************************************/

#include "functions.h"  // includes the header file 

// Main fuction
int main(void)			// main function 
{
	/************************************************
					
					All	variable declarations

	*************************************************/

	// File variable declaration
	FILE* infile = NULL, *outfile = NULL;

	// sum variables
	double gpa_sum = 0, class_sum = 0, age_sum = 0;
	double number1 = 0, number2 = 0, number3 = 0, number4 = 0, number5 = 0;

	// mean variables
	int number = 5;
	double sum= 0, gpa_mean = 0, class_mean = 0, age_mean = 0;

	// deviation variables
	double deviation_value = 0, mean = 0, deviation1 = 0, deviation2 = 0, deviation3 = 0, deviation4 = 0,
		deviation5 = 0, variance = 0, standard_deviation = 0;

	//max and min variables
	double max_value = 0, min_value = 0;

	// first student information variable declarations
	int first_student_id = 0, first_student_class = 0;
	double first_student_gpa = 0, first_student_age = 0;

	// second student information variable declarations
	int second_student_id = 0, second_student_class = 0;
	double second_student_gpa = 0, second_student_age = 0;
	
	// third student information variable declarations
	int third_student_id = 0, third_student_class = 0;
	double third_student_gpa = 0, third_student_age = 0;
	
	// fourth student information variable declarations
	int fourth_student_id = 0, fourth_student_class = 0;
	double fourth_student_gpa = 0, fourth_student_age = 0;

	// fifth student information variable declarations
	int fifth_student_id = 0, fifth_student_class = 0;
	double fifth_student_gpa = 0, fifth_student_age = 0;

	/***************************************************
	
				student variable definitions

	****************************************************/
	
	// opens input.dat file, "r" means read
	// opens output.dat "w" is write
	// fopen sets the pointer at beggining of the file
	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat", "w");

	// sets first student variables to the information in input.dat
	first_student_id = read_integer(infile);
	first_student_gpa = read_double(infile);
	first_student_class = read_integer(infile);
	first_student_age = read_double(infile);

	// sets second student variables to the information in input.dat
	second_student_id = read_integer(infile);
	second_student_gpa = read_double(infile);
	second_student_class = read_integer(infile);
	second_student_age = read_double(infile);

	// sets thrid student variables to the information in input.dat
	third_student_id = read_integer(infile);
	third_student_gpa = read_double(infile);
	third_student_class = read_integer(infile);
	third_student_age = read_double(infile);

	// sets fourth student variables to the information in input.dat
	fourth_student_id = read_integer(infile);
	fourth_student_gpa = read_double(infile);
	fourth_student_class = read_integer(infile);
	fourth_student_age = read_double(infile);

	// sets fifth student variables to the information in input.dat
	fifth_student_id = read_integer(infile);
	fifth_student_gpa = read_double(infile);
	fifth_student_class = read_integer(infile);
	fifth_student_age = read_double(infile);

	/*************************************************************

			average age, class standing and age calculations

	**************************************************************/

	// sets each student's gpa to the parameters for the sum calculation
		number1 = first_student_gpa, number2 = second_student_gpa, number3 = third_student_gpa,
		number4 = fourth_student_gpa, number5 = fifth_student_gpa;

	gpa_sum = calculate_sum(number1, number2, number3, number4, number5);
	

	// sets each student's class standing to the parameters for sum calculation

		number1 = first_student_class, number2 = second_student_class, number3 = third_student_class,
		number4 = fourth_student_class, number5 = fifth_student_class;

	class_sum = calculate_sum(number1, number2, number3, number4, number5);
	

	// sets each student's age to the parameters for sum calculation

		number1 = first_student_age, number2 = second_student_age, number3 = third_student_age,
		number4 = fourth_student_age, number5 = fifth_student_age;

	age_sum = calculate_sum(number1, number2, number3, number4, number5);
	

	// writes gpa mean to the outfile
	sum = gpa_sum;	// sum is a temp variable, used for calculate_mean()
	gpa_mean = calculate_mean(sum, number);

	// writes class standing mean to the outfile
	sum = class_sum;
	class_mean = calculate_mean(sum, number);
	
	// writes class standing mean to the outfile
	sum = age_sum;
	age_mean = calculate_mean(sum, number);

	/******************************************************
		
		standard deviation calculations for each student
	
	*******************************************************/

	mean = gpa_mean;  // defines the parameter for calculate_deviation
	
	// deviation calculations
	deviation_value = first_student_gpa;
	deviation1 = calculate_deviation(deviation_value, mean);

	deviation_value = second_student_gpa;
	deviation2 = calculate_deviation(deviation_value, mean);

	deviation_value = third_student_gpa;
	deviation3 = calculate_deviation(deviation_value, mean);

	deviation_value = fourth_student_gpa;
	deviation4 = calculate_deviation(deviation_value, mean);

	deviation_value = fifth_student_gpa;
	deviation5 = calculate_deviation(deviation_value, mean);
	
	// variance calculation
	variance = calculate_variance(deviation1, deviation2, deviation3, deviation4, deviation5, number);
	
	// standard deviation calculation
	standard_deviation = calculate_standard_deviation(variance);
	
	

	/***************************************************************
						
						gpa max and min calculations
	
	****************************************************************/
	number1 = first_student_gpa, number2 = second_student_gpa, number3 = third_student_gpa,
		number4 = fourth_student_gpa, number5 = fifth_student_gpa;


	max_value = find_max(number1, number2, number3, number4, number5);

	min_value = find_min(number1, number2, number3, number4, number5);
	

	/*****************************************************************
	
					print double and close files

	******************************************************************/
	double number_random = 21;	// not sure what the print_double() function is for
					// 21 is a randomly chosen number
	print_double(outfile, gpa_mean);
	print_double(outfile, class_mean);
	print_double(outfile, age_mean);
	print_double(outfile, standard_deviation);
	print_double(outfile, max_value);
	print_double(outfile, min_value);

	fclose(infile);
	fopen(outfile, "r");

	//have a good day :)
	return 0;
}