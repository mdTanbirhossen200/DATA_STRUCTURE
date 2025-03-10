/// NAME OF ALLAH

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


typedef struct {
    int* array;     
    int capacity; 
    int size;      
} Heap;

Heap* createHeap(int capacity)
{
    Heap* heap = (Heap*)malloc(sizeof(Heap));
    heap->array = (int*)malloc(capacity * sizeof(int));
    heap->capacity = capacity;
    heap->size = 0;
    return heap;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(Heap* heap, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < heap->size && heap->array[left] > heap->array[largest])
        largest = left;
    if (right < heap->size && heap->array[right] > heap->array[largest])
        largest = right;
    if (largest != i) {
        swap(&heap->array[i], &heap->array[largest]);
        heapify(heap, largest);
    }
}

void insert(Heap* heap, int value)
{
    if (heap->size == heap->capacity) {
        printf("Heap is full. Cannot insert more elements.\n");
        return;
    }

    int i = heap->size++;
    heap->array[i] = value;

    while (i != 0 && heap->array[(i - 1) / 2] < heap->array[i]) {
        swap(&heap->array[i], &heap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int deleteMax(Heap* heap)
{
    if (heap->size == 0) {
        printf("Heap is empty. Cannot extract maximum element.\n");
        return -1;
    }

    int max = heap->array[0];

    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    heapify(heap, 0);
    return max;
}
void printHeap(Heap* heap)
{
    for (int i = 0; i < heap->size; i++) {
        cout<<heap->array[i];
    }
    cout<<("\n");
}

void destroyHeap(Heap* heap)
{
    free(heap->array);
    free(heap);
}
// Example usage of the heap
int main()
{
    Heap* heap = createHeap(10);
    insert(heap, 35);
    insert(heap, 33);
    insert(heap, 42);
    insert(heap, 10);
    insert(heap, 14);
    insert(heap, 19);
    insert(heap, 27);
    insert(heap, 44);
    insert(heap, 26);
    insert(heap, 31);

     int max;
     cout<<("Maximum element: ")<<max<<endl;
    cout<<("After sorting Max heep:\n");
    printHeap(heap);
    return 0;
}
