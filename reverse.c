void switchArr(int arr[], unsigned int first, unsigned int last)
{
  int tmp = arr[first];
  arr[first] = arr[last];
  arr[last] = tmp;
}

void reverse (int arr[], unsigned int len )

{
  for (int i =0; i < len/2; i++)
  {
    switchArr(arr, i, len-i-1);
  }
}
