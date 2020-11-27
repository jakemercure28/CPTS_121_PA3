#include "functions.h"

// funtion definitions

double read_double(FILE* infile) 
{
	// local variable declaration
	double file_value_local = 0;
	// scanner reads file
	fscanf(infile, " %lf", &file_value_local);

	return file_value_local;

}


int read_integer(FILE* infile)
{
	// local variable declaration
	int file_value_local = 0;
	// scanner reads file
	fscanf(infile, " %d", &file_value_local);
	
	return file_value_local;

}


double calculate_sum(double number1, double number2, double number3, double number4, double number5)
{
	double sum_local = 0;
	sum_local = number1 + number2 + number3 + number4 + number5;

	return sum_local;
}

double calculate_mean(double sum, int number)
{
	double mean_local = 0;
	mean_local = sum / number;
	
	return mean_local;
}

double calculate_deviation(double deviation_value, double mean)
{
	double deviation_local = 0;
	deviation_local = deviation_value - mean;

	return deviation_local;
}

double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
{
	double variance_local = 0;
	variance_local = (pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2)) / number;

	return variance_local;
}

double calculate_standard_deviation(double variance)
{
	double standard_deviation_local = sqrt(variance);

	return standard_deviation_local;
}

double find_max(double number1, double number2, double number3, double number4, double number5)
{
	double max_value_local = 0;

	if (number1 > number2 && number1 > number3 && number1 > number4 && number1 > number5)
	{
		max_value_local = number1;
	}
	else if (number2 > number1 && number2 > number3 && number2 > number4 && number2 > number5)
	{
		max_value_local = number2;
	}
	else if (number3 > number1 && number3 > number2 && number3 > number4 && number3 > number5)
	{
		max_value_local = number3;
	}
	else if (number4 > number2 && number4 > number3 && number4 > number1 && number4 > number5)
	{
		max_value_local = number4;
	}
	else
	{
		max_value_local = number5;
	}

	return max_value_local;
}


double find_min(double number1, double number2, double number3, double number4, double number5)
{
	double min_value_local = 0;

	if (number1 < number2 && number1 < number3 && number1 < number4 && number1 < number5)
	{
		min_value_local = number1;
	}
	else if (number2 < number1 && number2 < number3 && number2 < number4 && number2 < number5)
	{
		min_value_local = number2;
	}
	else if (number3 < number1 && number3 < number2 && number3 < number4 && number3 < number5)
	{
		min_value_local = number3;
	}
	else if (number4 < number2 && number4 < number3 && number4 < number1 && number4 < number5)
	{
		min_value_local = number4;
	}
	else
	{
		min_value_local = number5;
	}

	return min_value_local;
}

void print_double(FILE* outfile, double number_random)
{

	fprintf(outfile, "\n%2lf", number_random);
}