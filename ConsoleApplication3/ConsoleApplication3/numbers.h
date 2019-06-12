#include <string>

using namespace std;

string numbers_lt_20_to_string(int number)
{
	string answer;
	switch(number)
	{
	case 0:
		answer = "����"; break;
	case 1:
		answer = "����"; break; 
	case 2:
		answer = "���"; break;
	case 3:
		answer = "���"; break;
    case 4:
		answer = "������"; break;
	case 5:
		answer = "����"; break;
	case 6:
		answer = "�����"; break;
	case 7:
		answer = "����"; break;
	case 8:
		answer = "������"; break;
	case 9:
		answer = "������"; break;
	case 10:
		answer = "������"; break;
	case 11:
		answer = "�����������"; break;
	case 12:
		answer = "����������"; break;
	case 13:
		answer = "����������"; break;
	case 14:
		answer = "������������"; break;
	case 15:
		answer = "�����������"; break;
	case 16:
		answer = "������������"; break;
	case 17:
		answer = "�����������"; break;
	case 18:
		answer = "������������"; break;
	case 19:
		answer = "�������������"; break;
	case 20:
		answer = "��������"; break; 
	case 30:
		answer = "��������"; break;
	case 40:
		answer = "�����"; break;
	case 50:
		answer = "���������"; break;
    case 60:
		answer = "����������"; break;
	case 70:
		answer = "���������"; break;
	case 80:
		answer = "�����������"; break;
    case 90:
		answer = "���������"; break;
    case 100:
		answer = "���"; break;
	default: break;
	}

	return answer;
	}


string numbers_lt_100_to_string(int number)
{
	string answer2;
	int tens = number / 10;
	int remainder = number % 10;
	switch (tens)
	{
	case 1: answer2 = "������"; break;
	case 2: answer2 = "��������"; break;
	case 3: answer2 = "��������"; break;
	case 4: answer2 = "�����"; break;
	case 5: answer2 = "���������"; break;
	case 6: answer2 = "����������"; break;
	case 7: answer2 = "���������"; break;
	case 8: answer2 = "�����������"; break;
	case 9: answer2 = "���������"; break;
	default: break;
	}
	
	string answer1 = numbers_lt_20_to_string(remainder);

	string answer;
	if (answer2 == "")
	{
		answer = answer1;
	}
	if ((answer2 != "") && (remainder != 0)){
	answer += answer2 + " " + answer1;
	}
	if (remainder == 0){
		answer = answer2;
	}
	return answer;
}

string numbers_lt_1000_to_string(int number)
{
	string answer3;
	int hundreds = number / 100;
	int tens = number % 100;
	switch (hundreds)
	{
	case 1: answer3 = "���"; break;
	case 2: answer3 = "������"; break;
	case 3: answer3 = "������"; break;
	case 4: answer3 = "���������"; break;
	case 5: answer3 = "�������"; break;
	case 6: answer3 = "��������"; break;
	case 7: answer3 = "�������"; break;
	case 8: answer3 = "���������"; break;
	case 9: answer3 = "���������"; break;
	default: break;
	}
	
	string answer2 = numbers_lt_100_to_string(tens);
	string answer;
	if (answer3 == "")
	{
		answer = answer2;
	}
	if ((answer3 != "") && (tens != 0)){
	answer += answer3 + " " + answer2;
	}
	if (tens == 0){
		answer = answer3;
	}
	return answer;
}

string object_to_string(int number, string s1, string s2, string s3)
{
	string answer = numbers_lt_1000_to_string(number);
	int remainder = number % 100;
	if (remainder >= 5 && remainder <= 20)
		answer += " " + s3;
	else
	{
		remainder = number % 10;
		switch (remainder)
		{
		case 0:
			answer += " " + s3;
			break;
		case 1:
			answer += " " + s1;
			break;
		case 2:
			answer += " " + s2;
			break;
		case 3:
			answer += " " + s2;
			break;
		case 4:
			answer += " " + s2;
			break;
		case 5:
			answer += " " + s3;
			break;
		case 6:
			answer += " " + s3;
			break;
		case 7:
			answer += " " + s3;
			break;
		case 8:
			answer += " " + s3;
			break;
		case 9:
			answer += " " + s3;
			break;
		default:
			break;
		}

	}


	return answer;
}


string currency_to_string(int integer, string is1, string is2, string is3, int decimal, string ds1, string ds2, string ds3)
{

	string answer = object_to_string(integer, is1, is2, is3) + ", " + object_to_string(decimal, ds1, ds2, ds3);
	return answer;