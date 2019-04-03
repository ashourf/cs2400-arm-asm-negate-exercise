static const int ARRAY_SIZE = 5;
int array[] = { 1, -2, 5, -6, 2 };
int i = 0;
int main() {
   
    while(i != ARRAY_SIZE)
    {
        if (array[i] < 0) {
            array[i] = -1 * array[i];
            i++;
        }
    }

    return 0;
}

