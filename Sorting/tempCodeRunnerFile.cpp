int Partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    int key = 0;
    do
    {
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);

        if(i < j)
        {
            swap(&arr[i],&arr[j]);
        }
    }while(i<j);

    swap(&arr[l],&arr[j]);
    key = j;

return key; 
}