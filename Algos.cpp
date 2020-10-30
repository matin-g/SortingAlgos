
/*************************************************************************
 * AUTHOR     : Matin Ghaffari
 * hw EC      : Extra Credit
 * CLASS      : CS 1C
 * SECTION    : 7/26/19 MTWTh: 3:00 - 5:20
*************************************************************************/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

#include <ctime>
#include <time.h>

#define ll long long

using namespace std;
using namespace std::chrono;

const int MAX_SIZE = 100;

void initAr(int list1[], int list2[], int list3[]);
void outputAr(int list[]);
void bubbleSort(int list[], int length, long long int &comp, long long int &assign);
void selecSort(int list[], int length, long long int &comp, long long int &assign);
void insertSort(int list[], int length,  long long int &comps, long long int &assign);
int Partition(int list[], int low, int high, long long int &comp, long long int &assign);
void quickSort(int list[], int low, int high, long long int &comps, long long int &assigns);
void mergeHelper(int list[], int left, int merge, int r, long long int &comps, long long int &assigns);
void mergeSort(int list[], int left, int right, long long int &comps, long long int &assigns);

int main()
{
	cout << endl;
	cout << "************************************** " << endl;
	cout << "*       Running HW Extra Credit      * " << endl;
	cout << "*   Programmed by Matin Ghaffari     * " << endl;
	cout << "*  CS1C 7/26/19 MTWTh: 3:00 - 5:20   * " << endl;
	cout << "************************************** ";

	int list3[MAX_SIZE];
	int list1[MAX_SIZE];
	int list2[MAX_SIZE];

	long long int comparisons = 0;
	long long int assignments = 0;

	high_resolution_clock::time_point t1;
	high_resolution_clock::time_point t2;

	initAr(list1, list2, list3);

	cout << "\n\n----------------------------------------------------\n";
	cout << "           *** Setting The Initial Lists ***\n"
			<< "----------------------------------------------------\n";
	cout << "List 1: ";
	outputAr(list1);

	cout << "List 2: ";
	outputAr(list2);

	cout << "List 3: ";
	outputAr(list3);

	cout << "\n----------------------------------------------------";
	cout << "\n              *** BUBBLE SORT ***  \n"
			<< "----------------------------------------------------\n";

	bubbleSort(list1, MAX_SIZE, comparisons, assignments);
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;
	cout << "List 1: ";
	outputAr(list1);
	cout << endl << endl;

	bubbleSort(list2, MAX_SIZE, comparisons, assignments);

	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 2: ";
	outputAr(list2);
	cout << endl << endl;

	bubbleSort(list3, MAX_SIZE, comparisons, assignments);

	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;
	cout << "List 3: ";
	outputAr(list3);
	cout << endl;

	cout << "----------------------------------------------------\n";
	cout  << "*** Resetting to Initial List configuration ***\n"
			<< "----------------------------------------------------\n";

	initAr(list1, list2, list3);
	cout << "List 1: ";
	outputAr(list1);

	cout << "List 2: ";
	outputAr(list2);

	cout << "List 3: ";
	outputAr(list3);

	cout << "\n----------------------------------------------------";
	cout << "\n               *** Insertion Sort ***\n"
			<< "----------------------------------------------------\n";

	insertSort(list1, MAX_SIZE, comparisons, assignments);

	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 1: ";
	outputAr(list1);
	cout << endl << endl;

	insertSort(list2, MAX_SIZE, comparisons, assignments);

	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 2: ";
	outputAr(list2);
	cout << endl << endl;

	insertSort(list3, MAX_SIZE, comparisons, assignments);
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 3: ";
	outputAr(list3);
	cout << endl;
	cout << "----------------------------------------------------\n";
	cout << "*** Resetting to Initial List configuration ***\n"
			<< "----------------------------------------------------\n";

	initAr(list1, list2, list3);
	cout << "List 1: ";
	outputAr(list1);

	cout << "List 2: ";
	outputAr(list2);

	cout << "List 3: ";
	outputAr(list3);

	cout << "\n----------------------------------------------------";
	cout << "\n              *** Selection Sort ***\n"
			<< "----------------------------------------------------\n";


	selecSort(list1, MAX_SIZE, comparisons, assignments);

	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 1: ";
	outputAr(list1);
	cout << endl << endl;

	selecSort(list2, MAX_SIZE, comparisons, assignments);
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 2: ";
	outputAr(list2);
	cout << endl << endl;

	selecSort(list3, MAX_SIZE, comparisons, assignments);
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 3: ";
	outputAr(list3);
	cout << endl;
	cout << "----------------------------------------------------\n";
	cout  << "*** Resetting to Initial List configuration ***\n"
			<< "----------------------------------------------------\n";
	initAr(list1, list2, list3);
	cout << "List 1: ";
	outputAr(list1);

	cout << "List 2: ";
	outputAr(list2);

	cout << "List 3: ";
	outputAr(list3);

	cout << "\n----------------------------------------------------";
	cout << "\n               *** Quick Sort ***\n"
			<< "----------------------------------------------------\n";


	t1 = high_resolution_clock::now();
	quickSort(list1, 0, MAX_SIZE - 1, comparisons, assignments);

	t2 = high_resolution_clock::now();
	cout << "\nIt took " << duration_cast<nanoseconds>(t2 - t1).count()
    	    		  << " nanoseconds to quick sort\n";
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 1: ";
	outputAr(list1);
	cout << endl << endl;

	t1 = high_resolution_clock::now();

	quickSort(list2, 0, MAX_SIZE - 1, comparisons, assignments);

	t2 = high_resolution_clock::now();

	auto duration  =  duration_cast<nanoseconds>(t2 - t1).count();
	cout << "\nIt took "<< duration << " nanoseconds to quick sort\n";
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 2: ";
	outputAr(list2);

	cout << endl << endl;

	t1 = high_resolution_clock::now();

	quickSort(list3, 0, MAX_SIZE - 1, comparisons, assignments);

	t2 = high_resolution_clock::now();
	auto duration1  =  duration_cast<nanoseconds>(t2 - t1).count();
	cout << "\nIt took "
			<< duration1
			<< " nanoseconds to quick sort\n";
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 3: ";
	outputAr(list3);
	cout << endl;

	cout << "----------------------------------------------------\n";
	cout    << "*** Resetting to Initial List configuration ***\n"
			<< "----------------------------------------------------\n";

	initAr(list1, list2, list3);
	cout << "List 1: ";
	outputAr(list1);

	cout << "List 2: ";
	outputAr(list2);

	cout << "List 3: ";
	outputAr(list3);

	cout << "\n----------------------------------------------------";
	cout << "\n               *** Merge Sort ***\n"
			<< "----------------------------------------------------\n";

	t1 = high_resolution_clock::now();

	mergeSort(list1, 0, MAX_SIZE - 1, comparisons, assignments);

	t2 = high_resolution_clock::now();
	auto duration2  =  duration_cast<nanoseconds>(t2 - t1).count();
	cout << "\nIt took "<< duration2 << " nanoseconds to merge sort.\n";
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 1: ";
	outputAr(list1);
	cout << endl << endl;

	t1 = high_resolution_clock::now();

	mergeSort(list2, 0, MAX_SIZE - 1, comparisons, assignments);

	t2 = high_resolution_clock::now();
	auto duration3  =  duration_cast<nanoseconds>(t2 - t1).count();
	cout << "\nIt took "<< duration3 << " nanoseconds to merge sort.\n";
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 2: ";
	outputAr(list2);
	cout << endl << endl;

	t1 = high_resolution_clock::now();

	mergeSort(list3, 0, MAX_SIZE - 1, comparisons, assignments);

	t2 = high_resolution_clock::now();
	auto duration4  =  duration_cast<nanoseconds>(t2 - t1).count();
	cout << "\nIt took "<< duration4 << " nanoseconds to merge sort.\n";
	cout << "Comparisons: " << comparisons << "\nAssignments: " << assignments<<endl;

	cout << "List 3: ";
	outputAr(list3);

	cout << "\n--------------------------------------------------------------------------------------------\n\n";

	return 0;
}

void initAr(int list1[], int list2[], int list3[])
{
	srand (time(NULL));

    int num = MAX_SIZE;


    for(int x = 0; x < MAX_SIZE; x++)
     {
          list1[x] = x + 1;
     }

    for(int x = 0; x < MAX_SIZE; x++)
     {

          list2[x] = num;
          num--;
     }

    for (int x=0; x<=MAX_SIZE-1;x++)
    {
        list3[x] = x+1;
    }

    std::random_shuffle(list3, list3 +(MAX_SIZE));

}

void outputAr(int list[])
{
    cout << left;

    for(int x = 0; x < 10; x++)
    {
        cout <<  setw(4) << list[x];
    }

    cout << "...";

    for(int x = 90; x < 100; x++)
    {
        cout << setw(4) << list[x];
    }

    cout << endl;
}

void bubbleSort(int list[], int length,  long long int &comp,  long long int &assign)
{
    comp = 0;
    assign = 0;

    high_resolution_clock::time_point t1;
    high_resolution_clock::time_point t2;

    t1 = high_resolution_clock::now();

    for (int i = 1; i < length; i++)
    {
    	for(int j = 0; j < length - i; j++)
    	{
    		comp++;

    		if (list[j] > list[j + 1])
    		{
    			int temp = list[j];
    			assign++;

    			list[j] = list[j + 1];
    			assign++;

    			list[j + 1] = temp;
    			assign++;
    		}
    	}
    }

    t2 = high_resolution_clock::now();
    cout << "\nIt took " << duration_cast<nanoseconds>(t2 - t1).count()
		 << " nanoseconds to Bubble sort.\n";
}

void selecSort(int list[], int length,  long long int &comp,  long long int &assign)
{
    comp = 0;
    assign = 0;
    int min_i;
    int temp;

	high_resolution_clock::time_point t1;
		high_resolution_clock::time_point t2;
		t1 = high_resolution_clock::now();
    for(int i = 0; i < length - 1; i++)
    {
        min_i = i;

        for (int pos = i + 1; pos < length; pos++)
        {
            comp++;
            if (list[pos] < list[min_i])
            {
                min_i = pos;
                assign++;
            }
        }

        temp = list[min_i];
        assign++;

        list[min_i] = list[i];
        assign++;

        list[i] = temp;
        assign++;
    }

	t2 = high_resolution_clock::now();
	cout << "\nIt took " << duration_cast<nanoseconds>(t2 - t1).count()
		 << " nanoseconds to selection sort\n";
}

void insertSort(int list[], int length,  long long int &comps,  long long int &assign)
{
	comps = 0;
	assign = 0;
	high_resolution_clock::time_point t1;
	high_resolution_clock::time_point t2;

	t1 = high_resolution_clock::now();

	// i is the first element that is in unsorted position
	for(int i = 1; i < length; i++)
	{
		comps++;
		if(list[i] < list[i - 1])
		{
			int temp = list[i];
			assign++;

			int position = i;

			do
			{
				comps++;
				list[position] = list[position - 1];
				assign++;
				position--;
			}while(position > 0 && list[position - 1] > temp);

			list[position] = temp;
			assign++;

		}
	}
	t2 = high_resolution_clock::now();
	cout << "\nIt took "<< duration_cast<nanoseconds>(t2 - t1).count()
		 << " nanoseconds to insertion sort\n";
}

int Partition(int list[], int low, int high, long long int &comp, long long int &assign)
{
    int pivot = list[high];
    int i = low;
    int temp;

    for(int j = low; j < high ; j++){
        comp++;
        if(list[j] <= pivot)
        {
        	temp = list[i];
            list[j] = list[i];
            list[i] = temp;
       
            i++;
            assign++;
        }
    }
    
	temp = list[high];
	list[high]=list[i];
	list[i] =temp;

    return i;
}

void quickSort(int list[], int low, int high, long long int &comps, long long int &assigns)
{
	if(low < high)
	{
        int var = Partition(list, low, high, comps, assigns);
        quickSort(list, low, var - 1, comps, assigns);
        quickSort(list, var + 1, high, comps, assigns);
    }
}

void mergeHelper(int list[], int left, int merge, int right, long long int &comps, long long int &assigns)
{
    comps = 0;
    assigns = 0;

    int i, j, k;

    int x = merge - left + 1;
    int y =  right - merge;

    int L[x], R[y];

    for (i = 0; i < x; i++)
    {
        comps++;
        L[i] = list[left + i];
    }

    for (j = 0; j < y; j++)
    {
        comps++;
        R[j] = list[merge + 1+ j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < x && j < y)
    {
        if (L[i] <= R[j])
        {
            list[k] = L[i];
            assigns++;
            i++;
        }
        else
        {
            list[k] = R[j];
            assigns++;
            j++;
        }
        k++;
    }

    while (i < x)
    {
        list[k] = L[i];
        assigns++;

        i++;
        k++;
    }

    while (j < y)
    {
        list[k] = R[j];
        assigns++;

        j++;
        k++;
    }
}

void mergeSort(int list[], int left, int right, long long int &comps, long long int &assigns)
{
    if (left < right)
    {
        int merge = left+(right-left)/2;

        mergeSort(list, left, merge, comps, assigns);
        mergeSort(list, merge+1, right, comps, assigns);

        mergeHelper(list, left, merge, right, comps, assigns);
    }

}

