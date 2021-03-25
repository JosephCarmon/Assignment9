/*
 * Assignment9.cpp
 *
 *  Created on: Mar 24, 2021
 *      Author: Joe
copy and copy_n
fill and fill_n
move
transform
generate
swap
swap_ranges
reverse
reverse_copy
rotate
unique
unique_copy

 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;


int generate_random()
{
	srand(time(0));
    return rand()%10;
}

bool cmp_function(int a , int b )
{
    return a+b;
}

int main ()
{

	//Copy
	vector<int> iVectorCopy,iVectorCopy2;

	iVectorCopy.push_back(2);
	iVectorCopy.push_back(4);
	iVectorCopy.push_back(6);
	iVectorCopy.push_back(8);
	iVectorCopy.push_back(10);

	//capy(start iterator,end interator, start iterator of target)
	copy(iVectorCopy.begin(),iVectorCopy.end(), iVectorCopy2.begin());

	//copy_n
	int iArrayValues[] = {1,2,3,4,5,6,7,8,9};

	vector<int> iVectorCopyn(iArrayValues,iArrayValues+9), iVectorCopyn2;

	//copy_n(begining iterator, int, begining iterator of target)
	copy_n(iVectorCopyn.begin(),5,iVectorCopyn2.begin());

	//fill
	vector<int> iFill(10);

	//fill(begining iterator,end iterator, int(fill data type)
	fill(iFill.begin(),iFill.end(), 5);

	fill(iFill.begin(), iFill.end()-5,3);

	//fill_n
	int iArrayFill[] = {1,2,3,4,5,6,7,8,9};

	vector<int> iFillnVector(iArrayFill, iArrayFill+9);

	//fill_n(begining iterator, int, value)
	fill_n(iFillnVector.begin(), 5, 10);


    //move
	string sString1 = "Frank";
	string sString2 = "Rick";

	vector<string> sVector;

	sVector.push_back(sString1);
	sVector.push_back(move(sString2));

	//generate
	vector<int> iGenerateVector, iGenerateVector2;

	iGenerateVector.resize(10);
	iGenerateVector2.resize(10);

	//generate(begin iterator, end iterator, function call)
	generate(iGenerateVector.begin(), iGenerateVector.end(), generate_random);

	//generate_n
	generate_n(iGenerateVector2.begin(), 5, generate_random);

	//unique
	int iArrayUnique[] = {1,5,5,5,9,6,6,4,4};

	vector<int> iVectorUnique(iArrayUnique,iArrayUnique+9), iVectorUnique2;
	vector<int>::iterator it;

	it = unique(iVectorUnique.begin(),iVectorUnique.end());

	iVectorUnique.resize(distance(iVectorUnique.begin(),it));

	vector<int> iUniqueVector(iArrayUnique,iArrayUnique+9);

	it = unique(iUniqueVector.begin(),iUniqueVector.end(),cmp_function);
	iUniqueVector.resize(distance(iUniqueVector.begin(),it));








    return 0;

}


