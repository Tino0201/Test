#include <cstdio>

int a[100001], len, key;

int search( ) {
  int left = 1;
  int right = len;
  int mid = 0;
  while (left <= right) {
    mid = 0.5 * (left + right);
    if (a[mid] == key) {
      return mid;
    } else if (a[mid] < key) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return false;
} 

int main( ) {
  scanf("%d %d", &len, &key);
  for (int i = 1; i <= len; ++i) {
    scanf("%d", &a[i]);
  }
  printf("%d", search());
  return 0;
}
