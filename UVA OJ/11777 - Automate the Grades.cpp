#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, t1, t2, fi, att, c1, c2, c3, mark, t_mark;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d %d %d %d %d %d %d", &t1, &t2, &fi, &att, &c1, &c2, &c3);

        if(c1<=c2 && c1<=c3){
            mark = (c2+c3)/2;
        }
        else if(c2<=c1 && c2<=c3){
            mark = (c1+c3)/2;
        }
        else if(c3<=c1 && c3<=c2){
            mark = (c1+c2)/2;
        }

        t_mark = t1+t2+fi+att+mark;

        if(t_mark>=90){
            printf("Case %d: A\n", i+1);
        }
        else if(t_mark>=80 && t_mark<90){
            printf("Case %d: B\n", i+1);
        }
        else if(t_mark>=70 && t_mark<80){
            printf("Case %d: C\n", i+1);
        }
        else if(t_mark>=60 && t_mark<70){
            printf("Case %d: D\n", i+1);
        }
        else if(t_mark<60){
            printf("Case %d: F\n", i+1);
        }
    }
    return 0;
}


