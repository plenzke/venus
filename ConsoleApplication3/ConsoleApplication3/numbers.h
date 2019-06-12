#include <string>

using namespace std;

string numbers_lt_20_to_string(int number)
{
	string answer;
	switch(number)
	{
	case 0:
		answer = "ноль"; break;
	case 1:
		answer = "один"; break; 
	case 2:
		answer = "два"; break;
	case 3:
		answer = "три"; break;
    case 4:
		answer = "четыре"; break;
	case 5:
		answer = "пять"; break;
	case 6:
		answer = "шесть"; break;
	case 7:
		answer = "семь"; break;
	case 8:
		answer = "восемь"; break;
	case 9:
		answer = "девять"; break;
	case 10:
		answer = "десять"; break;
	case 11:
		answer = "одиннадцать"; break;
	case 12:
		answer = "двенадцать"; break;
	case 13:
		answer = "тринадцать"; break;
	case 14:
		answer = "четырнадцать"; break;
	case 15:
		answer = "пятьнадцать"; break;
	case 16:
		answer = "шестьнадцать"; break;
	case 17:
		answer = "семьнадцать"; break;
	case 18:
		answer = "восемнадцать"; break;
	case 19:
		answer = "девятьнадцать"; break;
	case 20:
		answer = "двадцать"; break; 
	case 30:
		answer = "тридцать"; break;
	case 40:
		answer = "сорок"; break;
	case 50:
		answer = "пятьдесят"; break;
    case 60:
		answer = "шестьдесят"; break;
	case 70:
		answer = "семьдесят"; break;
	case 80:
		answer = "восемьдесят"; break;
    case 90:
		answer = "девяносто"; break;
    case 100:
		answer = "сто"; break;
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
	case 1: answer2 = "десять"; break;
	case 2: answer2 = "двадцать"; break;
	case 3: answer2 = "тридцать"; break;
	case 4: answer2 = "сорок"; break;
	case 5: answer2 = "пятьдесят"; break;
	case 6: answer2 = "шестьдесят"; break;
	case 7: answer2 = "семьдесят"; break;
	case 8: answer2 = "восемьдесят"; break;
	case 9: answer2 = "девяносто"; break;
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
	case 1: answer3 = "сто"; break;
	case 2: answer3 = "двести"; break;
	case 3: answer3 = "триста"; break;
	case 4: answer3 = "четыреста"; break;
	case 5: answer3 = "пятьсот"; break;
	case 6: answer3 = "шестьсот"; break;
	case 7: answer3 = "семьсот"; break;
	case 8: answer3 = "восемьсот"; break;
	case 9: answer3 = "девятьсот"; break;
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