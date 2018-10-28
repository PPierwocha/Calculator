#include "Calculator.h"

Calculator::Calculator() {
	a = 0;
	b = 0;
	sign = 0;
}


Calculator::~Calculator() {

}


void Calculator::Push0() {
	if (sign == 0){
		a = 10 * a + 0;
	}
	else
	{
		b = 10 * b + 0;
	}
}


void Calculator::Push1() {
	if (sign == 0){
		a = 10 * a + 1;
	}
	else
	{
		b = 10 * b + 1;
	}
}


void Calculator::Push2() {
	if (sign == 0){
		a = 10 * a + 2;
	}
	else
	{
		b = 10 * b + 2;
	}

}


void Calculator::Push3() {
	if (sign == 0){
		a = 10 * a + 3;
	}
	else
	{
		b = 10 * b + 3;
	}

}


void Calculator::Push4() {
	if (sign == 0){
		a = 10 * a + 4;
	}
	else
	{
		b = 10 * b + 4;
	}

}


void Calculator::Push5() {
	if (sign == 0){
		a = 10 * a + 5;
	}
	else
	{
		b = 10 * b + 5;
	}

}


void Calculator::Push6() {
	if (sign == 0){
		a = 10 * a + 6;
	}
	else
	{
		b = 10 * b + 6;
	}

}


void Calculator::Push7() {
	if (sign == 0){
		a = 10 * a + 7;
	}
	else
	{
		b = 10 * b + 7;
	}

}


void Calculator::Push8() {
	if (sign == 0){
		a = 10 * a + 8;
	}
	else
	{
		b = 10 * b + 8;
	}
}


void Calculator::Push9() {
	if (sign == 0){
		a = 10 * a + 9;
	}
	else
	{
		b = 10 * b + 9;
	}
}


void Calculator::PushPlus() {
	sign = 1;
}


void Calculator::PushMinus() {
	sign = 2;
}


void Calculator::PushMult() {
	sign = 3;
}


void Calculator::PushDiv() {
	sign = 4;
}


int Calculator::Result() {
	if (sign == 0){
		return a;
	}
	else if (sign == 1){
		return a + b;
	}
	else if (sign == 2){
		return a - b;
	}
	else if (sign == 3){
		return a*b;
	}
	else if (sign == 4){
		return a / b;
	}
	else{
		return 0;
	}
}


