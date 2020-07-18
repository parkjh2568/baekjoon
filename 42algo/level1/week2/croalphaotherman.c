#include <stdio.h>

int main() {
    char a[101];
    scanf("%s", a);

    int i;
    int c = 0;
    for (i = 0;a[i]; i++) {
        char b = a[i];
        if (b == 'n' || b == 'l') {
            if (a[i + 1] == 'j') continue;
        }
        else if (b == 'c' || b == 's' || b == 'z') {
            if (a[i + 1] == '=' || a[i + 1] == '-') continue;
        }
        else if (b == 'd') {
            if (a[i + 1] == '-') continue;
            if (a[i + 1] == 'z' && a[i + 2] == '=') continue;
        }

        c++;
    }
    printf("%d", c);
}
