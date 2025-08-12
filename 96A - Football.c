#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);

    int count = 1; // counts consecutive same players
    int len = strlen(s);
    int dangerous = 0;

    for (int i = 1; i < len; i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                dangerous = 1;
                break;
            }
        } else {
            count = 1;
        }
    }

    if (dangerous)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

