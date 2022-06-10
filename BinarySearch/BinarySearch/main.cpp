#include <iostream>
#include <vector>

using namespace std;
vector<int> numbers;

void BinarySearch();
int main(void)
{
	int MIN, MAX;
	cout << "������ �ּҰ�, �ִ� �Է� : ";
	cin >> MIN >> MAX;
	for (int i = MIN; i <= MAX; i++)
	{
		numbers.push_back(i);
	}
	BinarySearch();
}

void BinarySearch()
{
	cout << "���̰� �´ٸ� YES, �� ���ٸ� UP ,�� ���ٸ� DOWN�� �Է��ϼ���" << endl << endl;
	string answer;

	int LEFT = 0, RIGHT = (int)numbers.size() - 1;

	while (LEFT<=RIGHT)
	{
		int mid = (LEFT + RIGHT) / 2;
		cout << "Searching range : " << numbers[LEFT] << "-" << numbers[RIGHT] << endl;
		cout << numbers[mid] << "���Դϱ�? : ";
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
		cout << "������ ���� �Ф�" << endl;

	}
}