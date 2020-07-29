#include<iostream>
using namespace std ;
int main()
{
	float F, S, T, Mid, Final, Qtotal, totalFST ;

	cout << "===========(QUIZZES)===========" << endl;
	cout << " Enter frist quizz  (10) : ";
	cin  >> F;
	cout << " Enter second quizz (10) : ";
	cin  >> S;	
	cout << " Enter third quizz  (10) : ";
	cin  >> T;
	cout << endl;

	cout << "==========(MID-TERM)===========" << endl;
	cout << " Enter Mid-term (40) : ";
	cin  >> Mid;
	cout << endl;

	cout << "===========(FINAL)=============" << endl;
	cout << " Enter Final (50) : ";
	cin  >> Final;
	cout << endl;

	Qtotal   = (F+S+T)/3;
	totalFST = (Qtotal+Mid+Final);

	cout << " Quizz Total : " << Qtotal   << endl;
	cout << " Mid-term    : " << Mid      << endl;
	cout << " Final       : " << Final    << endl;
	cout << " Total       : " << totalFST << endl;

	cout << " Your Score is : " << ((totalFST <= 50) == 0 ? "PASS" : "FAIL") << endl;

	system("pause");
	return 0;
}  //===== Chayanin Chaklang == Sec:B == No. 21 =====