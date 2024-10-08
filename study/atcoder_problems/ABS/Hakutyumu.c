#include<stdio.h>
#include<string.h>

// 文字列の末尾が指定された文字列で終わっているかどうかを確認する関数
int endsWith(const char* str, const char* suffix) {
    int lenStr = strlen(str);
    int lenSuffix = strlen(suffix);
    
    // 文字列の長さがsuffixより短ければ終了
    if (lenStr < lenSuffix) return 0;

    // 末尾から比較する
    return strncmp(str + lenStr - lenSuffix, suffix, lenSuffix) == 0;
}

int main() {
    char S[100000];
    scanf("%s", S);

    while (strlen(S) > 0) {
        if (endsWith(S, "dreamer")) {
            S[strlen(S) - 7] = '\0';  // "dreamer" の部分を切り取る
        } else if (endsWith(S, "dream")) {
            S[strlen(S) - 5] = '\0';  // "dream" の部分を切り取る
        } else if (endsWith(S, "eraser")) {
            S[strlen(S) - 6] = '\0';  // "eraser" の部分を切り取る
        } else if (endsWith(S, "erase")) {
            S[strlen(S) - 5] = '\0';  // "erase" の部分を切り取る
        } else {
            // 上記の単語が見つからなかった場合
            printf("NO\n");
            return 0;
        }
    }

    // 全ての文字を削除できた場合
    printf("YES\n");
    return 0;
}
