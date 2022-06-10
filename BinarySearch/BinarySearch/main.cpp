#include <iostream>
#include <vector>

using namespace std;
vector<int> numbers;

void BinarySearch();
int main(void)
{
	int MIN, MAX;
	cout << "나이의 최소값, 최댓값 입력 : ";
	cin >> MIN >> MAX;
	for (int i = MIN; i <= MAX; i++)
	{
		numbers.push_back(i);
	}
	BinarySearch();
}

void BinarySearch()
{
	cout << "나이가 맞다면 YES, 더 많다면 UP ,더 적다면 DOWN을 입력하세요" << endl << endl;
	string answer;

	int LEFT = 0, RIGHT = (int)numbers.size() - 1;

	while (LEFT<=RIGHT)
	{
		int mid = (LEFT + RIGHT) / 2;
		cout << "Searching range : " << numbers[LEFT] << "-" << numbers[RIGHT] << endl;
		cout << numbers[mid] << "살입니까? : ";
		cin >> answer;
		if (answer == "YES")
		{
			cout << "WOW" << endl;
				return;
		}
		else if (answer == "UP")
		{
			LEFT = mid + 1;

		}
		else if(answer =="DOWN")
		{
			RIGHT = mid - 1;
		}
		cout << "속이지 마요 ㅠㅠ" << endl;

	}
}