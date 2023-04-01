#include<stdio.h>

#include <stdio.h>
#include <string.h>

int is_anagram(char a[], char b[]) {
  if (strlen(a) != strlen(b)) {
    return 0;
  }

  int i = 0;
  int freq_a[26] = {0};
  int freq_b[26] = {0};

  for (i = 0; a[i] && b[i]; i++) {
    freq_a[a[i] - 97]++;
    freq_b[b[i] - 97]++;
  }

  for (i = 0; i < 26; i++) {
    if (freq_a[i] != freq_b[i]) {
      return 0;
    }
  }

  return 1;
}

void main()
{
    char strings_array[5][10]={"tanay","yanat","anaty","hello","lloeh"};

    int i,j,repition_array[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(is_anagram(strings_array[j],strings_array[i]))
            {


                if(repition_array[i][j]==1)
                    continue;

                if(i!=j)
                    printf("%s and %s are anagrams.\n",strings_array[i],strings_array[j]);
                    repition_array[i][j]=1;

            }

        }
    }




}
