//NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int size = 1;

void swap(int *A,int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}

void heapify(int arr[],int size,int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < size && arr[left] > arr[largest])
       largest = left;

    if(right < size && arr[right] > arr[largest])
       largest = right;

    if(largest != i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,size,largest);
    }
}

void heap(int arr[],int newnum)
{
    arr[size] = newnum;
    size+=1;
    int current = size -1;

    while (current != 0)
    {
        int perent = (current - 1) / 2;
        if(arr[current] > arr[perent]){
            swap(&arr[current],&arr[perent]);
            current = perent;
        }else{
            break;
        }
    }

}


 void buildMaxHeap(int arr[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
}


void printdisplay(int arr[], int size) {
    cout<<"Array elements: ";
    for (int i = 0; i < size; i++) {
       cout<<arr[i];
    }
    cout<<("\n");
}



int main() {

    int randomArray[] = {1,3,5,4,6,13,10,9,8,15,17};
    int randomSize = sizeof(randomArray) / sizeof(randomArray[0]);

    cout<<"Original Random Array:\n";
    printdisplay(randomArray, randomSize);

    buildMaxHeap(randomArray, randomSize);

    cout<<"Max Heap from Random Array:\n";
    printdisplay(randomArray, randomSize);

    return 0;

}
