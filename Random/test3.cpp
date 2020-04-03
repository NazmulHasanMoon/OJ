#include<bits/stdc++.h>
using namespace std;

int main() {
	char c[10]="237 2 3  ";
	int i,l=strlen(c);
	for(i=l-1;i>=0;i--)
    {
        if(isalnum(c[i])){
            c[i+1]='\0';
            break;
        }
    }
    cout<<c<<'*';
}
/*int main() {
    unsigned int number_of_lines = 0;
    FILE *infile = fopen("in.txt.txt", "r");
    freopen("output.txt","w",stdout);
    int ch;

    while (EOF != (ch=getc(infile)))
        if ('\n' == ch)
            ++number_of_lines;
    printf("%u\n", number_of_lines);
    return 0;
}*/
