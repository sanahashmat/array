 #include <stdio.h>

int main() {
    char arr[] = "sana hashmat";
    char ch = 'a';
    int count = 0;

    for (int i = 0; i < 11; i++) {
        if (arr[i] == ch)
            count++;
    }

    printf("Character '%c' occurs %d times.\n", ch, count);

    return 0;
}
