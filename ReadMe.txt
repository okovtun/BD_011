https://github.com/okovtun/BD_011
https://www.youtube.com/watch?v=JcxXWXfzvh0&list=PLeqyOOqxeiIOAV6jwf66i0qm7tLMGSQZn&index=1&t=1316s

TOREAD:
http://cplusplus.com/doc/tutorial/operators/

TODO:
Что будет выведено на экран:

----------------------------- 1 --------------------------------

int i = 3;
i = ++i + ++i;
cout << i << endl;

----------------------------- 2 --------------------------------

int i = 3;
i = i++ + ++i;
cout << i << endl;

----------------------------- 3 --------------------------------

int i = 3;
i = i++ + 1 + ++i * 2;
cout << i << endl;

----------------------------- 4 --------------------------------

int i = 3;
i = i++ + 1 + ++i *= 2;
cout << i << endl;

----------------------------- 5 --------------------------------

int i = 3;
i += i++ + 1 + ++i *= 2;
cout << i << endl;