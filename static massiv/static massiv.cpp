#include <iostream>
using namespace std;

int main()
{

	//1

	const int size = 5;
	int arr[size];

	// Massivi doldururuq
	cout << "5 ədəd daxil edin: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	// Massivi tərsinə çıxarırıq
	cout << "Massiv tərsinə: ";
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;


	//2

	const int size = 20;
	int arr[size];

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}

	// Cüt indeksli elementləri çıxarmaq
	cout << "Cüt indeksli elementlər: ";
	for (int i = 0; i < size; i += 2) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;



	//3


	const int size = 10;
	int arr[size];
	int sum = 0, count = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;  // -20 və 20 arasında
	}

	// Müsbət ədədlərin cəmini və sayını tapmaq
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			sum += arr[i];
			count++;
		}
	}

	if (count != 0) {
		cout << "Müsbət ədədlərin ədədi ortası: " << (float)sum / count << endl;
	}
	else {
		cout << "Müsbət ədəd yoxdur." << endl;
	}

	return 0;

	//4




	const int size = 20;
	int arr[size];
	int posCount = 0, negCount = 0, zeroCount = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11 - 5;  // -5 və 5 arasında
	}

	// Mənfi, müsbət və sıfırları saymaq
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			posCount++;
		}
		else if (arr[i] < 0) {
			negCount++;
		}
		else {
			zeroCount++;
		}
	}

	cout << "Müsbət: " << posCount << ", Mənfi: " << negCount << ", Sıfır: " << zeroCount << endl;

	return 0;



	//5


	const int size = 10;
	int arr[size];
	int evenSum = 0, oddCount = 0, oddSum = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}

	// Cüt və tək indeksləri hesablamaq
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			evenSum += arr[i];
		}
		else {
			oddSum += arr[i];
			oddCount++;
		}
	}

	cout << "Cüt indeksli ədədlərin cəmi: " << evenSum << endl;
	cout << "Tək indeksli ədədlərin ədədi ortası: " << (oddCount ? (float)oddSum / oddCount : 0) << endl;

	return 0;


	//6


	const int size = 10;
	char arr[size];
	int letterCount = 0, digitCount = 0, punctuationCount = 0;

	// Random simvollarla doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 256; // 0-dan 255-ə qədər
	}

	// Simvolları saymaq
	for (int i = 0; i < size; i++) {
		// Hərf yoxlanması (A-Z, a-z)
		if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
			letterCount++;
		}
		// Rəqəm yoxlanması (0-9)
		else if (arr[i] >= '0' && arr[i] <= '9') {
			digitCount++;
		}
		// Punktuasiya simvollarını yoxlamaq
		else if ((arr[i] >= '!' && arr[i] <= '/') || (arr[i] >= ':' && arr[i] <= '@') ||
			(arr[i] >= '[' && arr[i] <= '`') || (arr[i] >= '{' && arr[i] <= '~')) ) {
				punctuationCount++;
		}
	}

	// Nəticələri çap etmək
	cout << "Hərflərin sayı: " << letterCount << endl;
	cout << "Rəqəmlərin sayı: " << digitCount << endl;
	cout << "Punktuasiya simvollarının sayı: " << punctuationCount << endl;

	return 0;


	//7

	const int size = 50;
	int arr[size];
	int userInput, count = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;  // 1-100 arası
	}

	// İstifadəçi ədədini daxil edir
	cout << "1-100 arası bir ədəd daxil edin: ";
	cin >> userInput;

	// Massivdə ədədin sayını tapmaq
	for (int i = 0; i < size; i++) {
		if (arr[i] == userInput) {
			count++;
		}
	}

	cout << userInput << " ədədinin sayı: " << count << endl;

	return 0;



	//8

	const int size = 10;
	int arr[size];
	int count3 = 0, count5 = 0, count7 = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;  // 1-100 arası
	}

	// 3-ə, 5-ə, 7-ə bölünənləri saymaq
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 == 0) count3++;
		if (arr[i] % 5 == 0) count5++;
		if (arr[i] % 7 == 0) count7++;
	}

	cout << "3-ə bölünənlərin sayı: " << count3 << endl;
	cout << "5-ə bölünənlərin sayı: " << count5 << endl;
	cout << "7-ə bölünənlərin sayı: " << count7 << endl;

	return 0;




	//9


	const int size = 10;
	int arr[size];
	int count = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;  // 1-100 arası
	}

	// 3-ə bölünüb 5-ə bölünməyənləri saymaq
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
			count++;
		}
	}

	cout << "3-ə bölünüb 5-ə bölünməyənlərin sayı: " << count << endl;

	return 0;



	//10




	const int size = 10;
	int arr[size];
	int sum = 0;
	bool foundNegative = false;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;  // -20 və 20 arası
	}

	// İlk mənfi ədəddən sonra gələnləri toplamaq
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			foundNegative = true;
		}
		else if (foundNegative) {
			sum += arr[i];
		}
	}

	cout << "Birinci mənfi ədədin ardından gələnlərin cəmi: " << sum << endl;

	return 0;


	//11


	const int size = 10;
	int arr[size];
	int sum = 0;
	bool foundPositive = false;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 51 - 30;  // -30 və 20 arası
	}

	// İlk müsbət ədəddən sonra gələnləri toplamaq
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			foundPositive = true;
		}
		else if (foundPositive) {
			sum += arr[i];
		}
	}

	cout << "Birinci müsbət ədədin ardından gələnlərin cəmi: " << sum << endl;

	return 0;



	//12

	const int size = 20;
	int arr[size];
	int minIndex = 0, maxIndex = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;  // 0-99 arası
	}

	// Maksimum və minimum tapmaq
	for (int i = 1; i < size; i++) {
		if (arr[i] < arr[minIndex]) {
			minIndex = i;
		}
		if (arr[i] > arr[maxIndex]) {
			maxIndex = i;
		}
	}

	cout << "Maksimum: " << arr[maxIndex] << " (indeks: " << maxIndex << ")\n";
	cout << "Minimum: " << arr[minIndex] << " (indeks: " << minIndex << ")\n";

	return 0;


	//13


	const int size = 10;
	float arr[size];
	int count = 0;

	// Random kəsr ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 100) / 10.0;  // 0.0-dan 10.0-a qədər
	}

	// Kəsr hissəsi olmayanları saymaq
	for (int i = 0; i < size; i++) {
		if (arr[i] == (int)arr[i]) {
			count++;
		}
	}

	cout << "Kəsr hissəsi olmayan ədədlərin sayı: " << count << endl;

	return 0;




	//14



	const int size = 20;
	int arr[size];
	int oneDigit = 0, twoDigit = 0, threeDigit = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 200 + 1;  // 1-200 arası
	}

	// Rəqəm sayını hesablamaq
	for (int i = 0; i < size; i++) {
		if (arr[i] < 10) {
			oneDigit++;
		}
		else if (arr[i] < 100) {
			twoDigit++;
		}
		else {
			threeDigit++;
		}
	}

	cout << "1 rəqəmli: " << (float)oneDigit / size * 100 << "%, "
		<< "2 rəqəmli: " << (float)twoDigit / size * 100 << "%, "
		<< "3 rəqəmli: " << (float)threeDigit / size * 100 << "%" << endl;

	return 0;


	//15



	const int size = 20;
	int arr[size];

	// Random rəqəmlərlə doldurmaq (2-200 arası)
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 199 + 2; // 2-dən 200-ə qədər
	}

	// Sadə ədədləri çap etmək
	cout << "Sadə ədədlər: ";
	for (int i = 0; i < size; i++) {
		int num = arr[i];
		bool isPrime = true;

		if (num <= 1) {
			isPrime = false; // 1 və mənfi ədədlər sadə deyil
		}
		else {
			for (int j = 2; j * j <= num; j++) {
				if (num % j == 0) {
					isPrime = false; // Ədəd bölünür, sadə deyil
					break;
				}
			}
		}

		if (isPrime) {
			cout << num << " ";
		}
	}
	cout << endl;

	return 0;





	//16


	const int size = 10;
	int arr[size];

	// Random rəqəmlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100; // 0-dan 99-a qədər
	}

	// Massivi çap etmək
	cout << "Orijinal massiv: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Yerləri tərsinə çevirmək
	for (int i = 0; i < size / 2; i++) {
		// Tərsinə çevirmək üçün müvəqqəti dəyişən istifadə edirik
		int temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}

	// Tərsinə çevrilmiş massivi çap etmək
	cout << "Tərsinə çevrilmiş massiv: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;



	//17




	const int size = 10;
	int arr[size];

	// Random rəqəmlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100; // 0-dan 99-a qədər
	}

	// Massivi çap etmək
	cout << "Orijinal massiv: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Qonşu elementlərin yerlərini dəyişmək
	for (int i = 0; i < size - 1; i += 2) {
		// Tərsinə çevirmək üçün müvəqqəti dəyişən istifadə edirik
		int temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}

	// Yerləri dəyişdirilmiş massivi çap etmək
	cout << "Qonşu elementlərin yerləri dəyişdirilmiş massiv: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;

	//18



	const int sizeA = 5, sizeB = 5, sizeC = sizeA + sizeB;
	int A[sizeA], B[sizeB], C[sizeC];

	// A massivini doldurmaq
	srand(time(0));
	for (int i = 0; i < sizeA; i++) {
		A[i] = rand() % 100;
	}

	// B massivini doldurmaq
	for (int i = 0; i < sizeB; i++) {
		B[i] = rand() % 100;
	}

	// C massivinə A və B-nin elementlərini kopyalamaq
	for (int i = 0; i < sizeA; i++) {
		C[i * 2] = A[i];
	}
	for (int i = 0; i < sizeB; i++) {
		C[i * 2 + 1] = B[i];
	}

	// C massivini çap etmək
	cout << "C massivinin elementləri: ";
	for (int i = 0; i < sizeC; i++) {
		cout << C[i] << " ";
	}
	cout << endl;

	return 0;


	//19



	const int size = 10;
	int arr[size];
	int copy[size];
	int j = 0;

	// Random ədədlərlə doldurmaq
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 - 50;  // -50 və 49 arası
	}

	// Kopyalamaq (sıfırdan kiçik, sıfır, müsbət)
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			copy[j++] = arr[i];
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) {
			copy[j++] = arr[i];
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			copy[j++] = arr[i];
		}
	}

	// Kopyalanmış massivi çap etmək
	cout << "Kopyalanmış massiv: ";
	for (int i = 0; i < j; i++) {
		cout << copy[i] << " ";
	}
	cout << endl;

	return 0;


	//20



	const int sizeC = 10;
	const int sizeA = 5, sizeB = 5;
	int C[sizeC], A[sizeA], B[sizeB];

	// C massivini doldurmaq
	srand(time(0));
	for (int i = 0; i < sizeC; i++) {
		C[i] = rand() % 100;
	}

	// A və B massivlərinə kopyalamaq
	for (int i = 0; i < sizeA; i++) {
		A[i] = C[i * 2];
	}
	for (int i = 0; i < sizeB; i++) {
		B[i] = C[i * 2 + 1];
	}

	// A və B massivlərini çap etmək
	cout << "A massivi: ";
	for (int i = 0; i < sizeA; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	cout << "B massivi: ";
	for (int i = 0; i < sizeB; i++) {
		cout << B[i] << " ";
	}
	cout << endl;

	return 0;

}
