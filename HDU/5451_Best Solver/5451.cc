#include <bits/stdc++.h>

using namespace std;


int fuck[10000] = {
-1,-1,-1,1,1,1,1,-1,-1,-1,1,1,1,-1,-1,-1,1,1,-1,-1,-1,1,1,1,-1,-1,1,1,1,1,1,1,1,-1,-1,1,1,-1,-1,-1,1,1,-1,-1,-1,1,-1,1,1,1,1,-1,-1,1,1,-1,-1,1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,1,1,-1,-1,1,1,-1,1,1,-1,-1,-1,1,-1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,1,-1,1,1,-1,-1,-1,1,1,-1,-1,1,-1,-1,1,-1,1,1,-1,-1,1,1,1,-1,-1,-1,-1,1,-1,-1,1,1,1,-1,1,1,-1,-1,1,1,-1,-1,-1,-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,1,1,-1,-1,1,-1,-1,-1,-1,1,-1,-1,1,1,-1,1,1,-1,-1,1,1,-1,1,-1,1,1,1,-1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,1,1,1,-1,1,1,1,-1,1,1,-1,-1,-1,-1,1,-1,1,-1,1,1,1,-1,1,1,-1,-1,1,1,-1,-1,-1,1,1,-1,-1,-1,1,1,1,1,1,-1,-1,1,-1,-1,1,-1,-1,1,-1,1,1,1,-1,1,-1,1,-1,1,-1,-1,-1,-1,1,1,-1,1,1,1,1,-1,1,-1,1,-1,-1,-1,1,1,-1,-1,1,1,-1,1,-1,-1,1,-1,-1,-1,1,-1,-1,1,-1,-1,-1,1,1,-1,-1,-1,-1,-1,1,-1,1,1,-1,1,1,1,-1,1,1,1,-1,1,-1,1,1,-1,-1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,1,1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,1,1,-1,-1,1,-1,-1,1,1,1,-1,-1,1,1,-1,-1,-1,-1,1,-1,-1,-1,1,1,-1,-1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,1,-1,-1,-1,-1,1,1,-1,-1,1,-1,1,-1,-1,1,1,-1,-1,-1,1,-1,-1,1,1,-1,1,-1,1,1,1,1,-1,-1,1,-1,-1,-1,1,-1,-1,1,1,-1,-1,1,1,1,1,-1,1,1,1,-1,-1,1,1,1,-1,1,1,-1,-1,1,1,-1,1,-1,-1,-1,1,-1,-1,1,1,1,1,-1,1,1,-1,-1,-1,1,1,-1,-1,1,-1,-1,1,1,1,1,1,-1,1,1,-1,1,-1,-1,-1,-1,-1,-1,1,-1,1,1,-1,1,-1,-1,1,-1,-1,1,-1,1,1,1,1,1,-1,1,1,-1,-1,-1,-1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,1,-1,1,-1,-1,1,-1,1,1,-1,1,-1,-1,-1,1,-1,-1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,1,1,-1,-1,1,-1,-1,-1,-1,1,-1,1,-1,1,1,1,-1,1,-1,-1,-1,-1,-1,1,1,1,1,-1,1,-1,1,1,-1,1,-1,1,1,1,-1,-1,1,1,-1,1,-1,1,-1,-1,-1,-1,1,1,1,1,1,-1,-1,1,1,1,1,-1,-1,1,1,1,-1,1,1,1,-1,1,1,-1,-1,-1,-1,-1,1,1,1,-1,-1,1,-1,1,-1,1,1,-1,1,1,-1,-1,1,1,1,1,1,-1,-1,1,-1,-1,-1,-1,-1,-1,1,-1,-1,1,-1,-1,-1,-1,-1,-1,-1,1,1,-1,1,1,1,-1,1,1,1,-1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,1,1,-1,-1,-1,1,-1,1,-1,-1,1,1,1,1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,-1,1,1,1,-1,-1,-1,1,1,-1,-1,1,-1,-1,-1,1,-1,-1,1,1,1,-1,1,-1,-1,-1,-1,-1,1,1,-1,-1,1,-1,1,1,-1,1,-1,-1,-1,1,1,-1,-1,-1,1,1,1,-1,-1,1,1,-1,1,1,-1,-1,1,1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,1,-1,1,1,-1,1,1,-1,-1,-1,-1,1,1,-1,-1,-1,-1,1,-1,1,-1,1,1,-1,1,1,-1,-1,1,1,-1,1,1,1,-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,-1,1,-1,1,-1,-1,-1,1,1,-1,-1,1,1,1,-1,1,1,1,-1,1,-1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,1,1,1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,-1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,-1,-1,1,1,1,1,1,1,-1,1,1,-1,-1,1,-1,-1,1,-1,-1,1,1,1,1,-1,-1,1,-1,-1,-1,-1,1,1,-1,1,-1,1,1,1,-1,1,-1,-1,1,-1,-1,-1,1,-1,-1,1,-1,-1,-1,1,-1,-1,1,1,-1,1,1,-1,1,-1,1,1,-1,-1,-1,1,1,1,1,1,1,1,1,1,1,-1,-1,1,1,-1,1,1,-1,-1,-1,1,-1,-1,1,-1,-1,1,-1,1,1,-1,-1,-1,-1,1,-1,1,1,1,1,1,-1,1,-1,-1,1,1,-1,-1,1,-1,-1,1,-1,-1,-1,1,1,-1,-1,-1,-1,-1,1,1,-1,-1,1,1,-1,1,1,1,1,-1,-1,-1,1,-1,1,1,-1,-1,-1,1,1,1,-1,1,-1,-1,1,-1,-1,1,1,1,1,1,1,1,1,-1,1,-1,1,1,1,-1,1,-1,-1,1,1,1,-1,-1,-1,1,1,-1,-1,1,1,1,1,1,1,-1,-1,1,1,-1,-1,-1,1,-1,1,1,1,-1,1,1,1,1,-1,1,-1,-1,1,-1,1,-1,-1,-1,1,-1,-1,1,-1,1,1,-1,-1,-1,1,-1,-1,-1,-1,-1,1,-1,-1,1,-1,-1,1,1,-1,1,1,-1,1,-1,-1,1,-1,1,1,-1,-1,1,1,1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,-1,1,-1,1,1,-1,1,1,1,-1,-1,1,1,-1,-1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,1,1,1,-1,1,-1,-1,1,1,1,1,1,1,-1,-1,1,-1,1,1,-1,1,-1,-1,1,-1,1,1,-1,-1,-1,-1,1,-1,-1,1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,-1,1,1,-1,1,1,-1,1,1,1,-1,-1,1,-1,1,-1,-1,1,1,1,1,-1,-1,1,-1,-1,-1,-1,-1,1,-1,1,-1,-1,1,1,1,1,-1,1,1,-1,-1,-1,1,-1,1,-1,1,1,1,-1,-1,-1,1,1,1,-1,1,-1,1,-1,-1,-1,-1,1,1,-1,-1,1,-1,1,-1,1,1,-1,-1,-1,-1,-1,1,1,1,1,-1,1,1,-1,1,-1,1,1,-1,-1,-1,1,-1,-1,1,-1,-1,-1,1,1,1,1,1,-1,-1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,1,1,1,1,-1,-1,-1,-1,-1,-1,1,1,1,-1,-1,-1,1,1,-1,-1,1,-1,1,-1,-1,1,1,-1,-1,1,1,-1,1,1,1,1,1,1,1,-1,1,1,-1,-1,1,-1,-1,-1,-1,1,-1,1,1,1,-1,1,1,-1,1,1,-1,-1,1,-1,1,1,-1,1,1,-1,1,1,-1,-1,1,-1,1,-1,1,1,-1,-1,-1,1,-1,1,-1,1,1,-1,1,1,-1,1,-1,-1,1,-1,-1,-1,1,1,-1,1,-1,1,1,-1,-1,1,-1,-1,-1,-1,-1,1,1,1,1,-1,-1,-1,1,-1,-1,-1,1,1,-1,-1,1,1,1,-1,-1,1,-1,1,-1,-1,-1,1,1,1,1,1,-1,-1,1,-1,1,-1,-1,-1,-1,1,1,-1,-1,1,-1,1,-1,1,-1,1,1,1,1,1,-1,1,-1,-1,1,1,-1,-1,1,1,1,1,-1,1,1,-1,-1,-1,-1,1,1,-1,1,-1,1,-1,1,1,1,-1,-1,1,1,-1,1,1,1,-1,1,1,-1,-1,-1,1,1,-1,1,1,1,1,1,1,-1,-1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,-1,1,-1,1,-1,-1,1,-1,1,1,1,-1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,-1,1,1,-1,-1,1,1,1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,-1,1,-1,-1,1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,-1,1,-1,-1,1,-1,1,1,-1,1,1,1,-1,-1,1,-1,-1,-1,1,1,1,1,1,-1,1,-1,-1,1,-1,-1,1,-1,1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,-1,-1,-1,1,1,-1,-1,1,-1,-1,1,1,-1,1,-1,-1,1,1,-1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,1,-1,1,-1,1,1,-1,1,-1,1,-1,-1,1,-1,-1,-1,1,-1,-1,1,1,1,1,1,1,-1,-1,1,-1,-1,-1,-1,-1,1,1,-1,1,-1,1,1,-1,-1,1,-1,-1,1,1,-1,-1,1,1,1,1,-1,-1,-1,-1,1,1,1,1,1,1,1,-1,1,-1,1,1,1,1,1,1,1,-1,-1,1,-1,-1,-1,-1,-1,-1,1,-1,-1,1,-1,-1,1,-1,-1,-1,1,1,1,1,1,1,1,-1,-1,1,1,1,1,-1,1,1,-1,-1,1,-1,-1,1,-1,-1,-1,1,1,1,-1,-1,-1,1,-1,1,1,1,1,-1,-1,1,-1,-1,1,1,1,-1,1,-1,1,1,1,-1,-1,1,1,-1,-1,-1,-1,1,1,1,-1,1,1,1,-1,1,-1,-1,1,-1,-1,1,-1,-1,1,-1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,-1,1,-1,1,-1,1,1,1,1,-1,1,-1,1,-1,-1,-1,-1,-1,1,1,-1,-1,1,-1,-1,1,-1,-1,1,1,-1,1,1,1,1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,1,-1,-1,1,1,-1,-1,1,-1,1,-1,-1,-1,1,1,1,1,-1,-1,-1,1,1,-1,1,-1,-1,-1,1,1,1,-1,-1,-1,1,-1,1,-1,-1,1,1,1,1,1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,1,1,-1,1,1,-1,-1,-1,1,1,-1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,1,1,1,1,1,1,-1,1,-1,-1,1,-1,1,-1,-1,1,-1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,-1,1,1,-1,1,-1,1,-1,-1,-1,-1,-1,1,1,-1,-1,1,1,1,1,-1,1,-1,1,1,1,1,-1,1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,1,1,-1,-1,1,-1,-1,1,1,1,1,-1,1,1,-1,-1,1,1,-1,-1,1,-1,-1,-1,1,1,-1,1,1,-1,1,-1,-1,-1,-1,1,1,-1,-1,1,-1,1,-1,-1,1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,1,1,-1,1,-1,-1,1,-1,-1,-1,-1,-1,1,1,1,1,-1,1,-1,1,-1,-1,-1,1,1,1,1,1,-1,1,1,-1,1,1,-1,-1,1,-1,1,1,1,-1,-1,-1,1,-1,-1,-1,1,1,1,1,-1,1,1,1,1,-1,-1,1,1,1,1,-1,1,-1,-1,1,-1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,1,1,1,-1,1,1,-1,-1,-1,1,-1,1,-1,1,1,-1,-1,1,-1,1,-1,1,1,-1,1,-1,1,1,1,-1,-1,1,1,1,-1,1,-1,1,-1,-1,-1,-1,1,-1,-1,1,-1,-1,-1,-1,-1,1,1,-1,1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,1,1,-1,1,-1,1,-1,1,1,1,-1,-1,1,1,-1,-1,-1,1,1,1,-1,1,1,-1,-1,1,1,1,-1,-1,1,-1,1,-1,1,1,1,-1,1,1,-1,-1,-1,1,1,-1,-1,-1,-1,1,-1,-1,1,1,-1,-1,1,-1,1,-1,1,1,1,-1,-1,-1,-1,-1,1,-1,1,1,1,-1,1,1,-1,1,-1,-1,-1,-1,-1,-1,1,-1,1,1,-1,-1,1,-1,-1,-1,1,1,-1,1,1,-1,-1,-1,-1,1,-1,-1,1,1,-1,1,1,-1,1,-1,1,-1,-1,-1,1,1,1,1,1,-1,1,1,-1,1,1,-1,1,-1,1,1,-1,-1,1,1,-1,1,1,-1,1,-1,1,1,1,1,1,-1,1,1,-1,-1,-1,1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,1,-1,-1,1,-1,1,1,-1,1,1,-1,-1,-1,-1,1,-1,1,1,1,1,1,-1,-1,1,-1,1,-1,-1,1,1,-1,1,-1,-1,1,1,1,-1,-1,1,1,-1,-1,1,-1,1,1,1,1,1,1,1,-1,-1,1,1,-1,-1,1,-1,1,1,1,-1,1,1,-1,1,-1,1,-1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,1,-1,-1,-1,-1,-1,1,-1,1,-1,-1,-1,-1,-1,1,-1,-1,1,-1,-1,1,1,1,1,-1,1,1,1,-1,1,1,-1,1,1,1,-1,1,1,1,-1,1,-1,-1,1,1,-1,1,-1,-1,1,1,1,1,1,1,-1,-1,-1,1,-1,-1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,-1,-1,1,1,-1,-1,-1,1,-1,1,1,-1,-1,1,1,-1,1,-1,-1,-1,1,1,1,1,1,1,1,-1,-1,-1,-1,-1,-1,-1,1,1,1,1,1,1,-1,-1,-1,1,1,-1,1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,1,-1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,1,1,1,-1,-1,1,1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,1,-1,1,1,-1,1,1,-1,1,-1,1,-1,1,-1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,-1,1,-1,1,-1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,-1,1,-1,1,-1,1,1,-1,-1,-1,-1,-1,-1,1,-1,-1,1,1,1,1,-1,1,1,1,-1,-1,-1,1,1,-1,1,1,-1,1,1,-1,1,1,1,-1,-1,1,-1,1,1,-1,-1,-1,1,1,-1,1,-1,1,-1,-1,-1,1,1,-1,-1,-1,1,1,-1,-1,-1,1,-1,1,-1,1,-1,1,1,-1,1,-1,-1,1,1,-1,1,-1,-1,-1,-1,1,-1,1,1,1,1,1,-1,1,1,-1,-1,-1,-1,1,1,1,1,-1,1,-1,-1,-1,-1,-1,1,-1,1,1,1,-1,1,1,-1,-1,1,1,-1,-1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,-1,1,1,-1,-1,1,1,1,1,-1,-1,-1,1,-1,-1,-1,1,1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,1,1,1,-1,1,1,1,1,-1,-1,1,-1,1,-1,1,1,1,-1,1,-1,1,1,1,-1,-1,-1,-1,1,-1,1,1,-1,-1,1,-1,-1,1,-1,1,-1,1,-1,-1,-1,1,1,1,-1,1,1,-1,-1,1,-1,-1,1,1,-1,1,1,-1,1,-1,1,-1,1,-1,-1,-1,-1,1,1,-1,1,1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,-1,1,-1,-1,-1,-1,1,-1,1,1,1,1,1,1,-1,1,-1,-1,1,-1,1,-1,1,1,-1,1,1,1,-1,-1,1,1,1,-1,-1,1,1,1,1,-1,-1,1,1,1,1,-1,1,1,-1,-1,1,-1,1,-1,1,1,1,-1,1,-1,-1,1,-1,1,1,1,1,-1,-1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,1,-1,-1,-1,1,-1,1,-1,1,1,-1,-1,-1,1,-1,-1,1,-1,1,-1,-1,-1,-1,1,-1,-1,-1,1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,1,-1,-1,1,-1,1,-1,-1,1,1,1,-1,1,1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,-1,1,-1,-1,-1,1,1,-1,1,1,-1,1,-1,-1,-1,1,1,1,1,1,1,-1,1,-1,1,-1,-1,1,-1,1,1,1,-1,-1,1,-1,-1,1,-1,1,1,1,1,1,-1,-1,1,1,1,-1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,-1,-1,-1,1,1,1,-1,-1,1,-1,1,-1,1,1,-1,-1,1,1,-1,1,-1,-1,-1,1,-1,-1,1,1,1,-1,-1,1,1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,1,1,1,1,1,-1,-1,-1,-1,-1,1,1,-1,-1,-1,-1,-1,-1,1,1,1,1,-1,1,-1,-1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,1,-1,-1,1,-1,1,1,1,1,1,1,-1,-1,-1,1,-1,-1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,1,-1,1,1,1,-1,-1,-1,-1,1,1,-1,-1,1,-1,-1,1,-1,-1,1,1,1,1,1,1,-1,-1,-1,1,-1,1,1,-1,-1,1,1,1,-1,-1,-1,-1,-1,1,1,1,-1,-1,-1,1,1,-1,-1,-1,1,1,1,1,-1,1,1,-1,1,1,-1,1,-1,1,1,1,-1,1,-1,-1,1,-1,-1,-1,-1,1,-1,1,1,-1,-1,1,1,1,1,-1,1,1,-1,1,1,-1,-1,1,-1,-1,1,-1,1,1,1,1,-1,1,1,-1,-1,-1,-1,-1,-1,1,-1,1,1,-1,1,-1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,-1,1,1,-1,1,1,1,-1,-1,-1,1,1,-1,-1,-1,-1,-1,1,-1,1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,1,1,1,-1,-1,1,-1,-1,-1,-1,-1,1,-1,-1,1,-1,1,1,1,1,1,-1,1,1,-1,-1,1,-1,-1,1,1,-1,1,1,1,1,-1,-1,1,1,-1,1,-1,1,-1,1,-1,-1,1,1,-1,-1,1,-1,1,1,-1,-1,1,-1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,1,-1,1,-1,-1,1,1,-1,1,-1,1,-1,-1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,1,1,1,1,1,-1,-1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,1,1,1,-1,-1,-1,1,-1,-1,1,1,1,-1,-1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,-1,1,-1,1,1,-1,1,1,1,1,-1,-1,-1,-1,-1,-1,1,-1,1,1,1,-1,1,1,-1,1,1,1,-1,-1,-1,-1,1,-1,1,1,-1,1,-1,1,-1,-1,-1,1,1,-1,1,1,-1,1,1,1,1,1,1,-1,-1,1,-1,1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1,-1,1,-1,-1,1,-1,1,1,1,-1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,1,-1,1,-1,-1,-1,-1,1,-1,-1,1,1,-1,-1,-1,1,-1,1,1,-1,-1,-1,1,-1,1,1,1,1,1,-1,1,1,-1,1,1,1,-1,1,1,1,-1,1,-1,-1,1,1,1,1,-1,-1,1,1,1,-1,1,1,-1,-1,1,-1,-1,1,-1,-1,-1,-1,-1,1,1,1,-1,1,-1,1,1,-1,-1,1,-1,1,1,-1,1,-1,-1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,1,1,1,-1,-1,1,-1,1,-1,1,1,-1,1,1,1,-1,1,-1,-1,1,-1,1,1,1,-1,-1,1,-1,1,1,-1,1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,1,-1,-1,-1,1,1,1,1,1,-1,-1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1,1,-1,-1,-1,-1,-1,-1,1,1,-1,-1,-1,1,1,-1,-1,1,1,-1,-1,-1,1,1,-1,1,-1,1,1,-1,1,1,-1,1,-1,-1,-1,1,1,-1,1,1,1,-1,1,-1,1,-1,1,-1,-1,1,1,1,-1,1,1,-1,-1,-1,1,-1,-1,1,-1,-1,1,-1,-1,1,1,-1,1,1,1,-1,1,-1,1,1,-1,1,-1,1,1,-1,1,1,1,-1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,1,1,-1,1,-1,1,1,1,-1,-1,-1,-1,-1,1,1,1,-1,1,1,-1,1,-1,-1,1,1,-1,-1,1,1,1,-1,1,1,-1,1,-1,1,-1,1,-1,1,1,-1,-1,1,1,-1,-1,1,-1,-1,1,1,-1,1,1,-1,-1,-1,-1,-1,-1,-1,1,1,1,1,-1,1,-1,-1,-1,-1,-1,1,1,-1,1,1,1,1,1,1,-1,-1,1,1,-1,1,1,1,-1,1,1,1,1,-1,1,-1,-1,-1,1,-1,1,1,-1,1,-1,1,-1,1,1,-1,-1,-1,1,1,1,-1,-1,1,-1,1,1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,1,1,-1,1,1,1,-1,-1,1,-1,-1,-1,-1,1,-1,1,1,1,1,1,-1,-1,-1,-1,1,1,-1,1,-1,-1,-1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,-1,-1,-1,1,-1,-1,-1,1,1,-1,1,1,-1,-1,-1,1,-1,1,1,-1,-1,-1,-1,-1,1,-1,-1,1,1,-1,-1,-1,1,-1,1,1,-1,-1,1,-1,1,1,-1,-1,-1,1,1,1,-1,-1,1,1,-1,1,-1,1,1,1,-1,1,-1,1,-1,-1,-1,1,1,-1,1,-1,1,1,-1,-1,-1,1,-1,-1,1,1,-1,1,-1,1,-1,1,1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,1,-1,-1,-1,-1,-1,1,-1,-1,-1,1,1,1,1,1,-1,-1,-1,-1,1,-1,-1,1,1,1,-1,-1,-1,-1,1,1,-1,-1,1,1,-1,1,1,-1,1,-1,-1,-1,-1,-1,-1,1,-1,-1,1,-1,-1,1,1,1,1,-1,1,1,-1,1,-1,-1,-1,-1,1,-1,1,-1,1,1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,-1,1,-1,-1,1,1,-1,1,-1,1,1,1,-1,1,-1,-1,1,1,1,-1,1,1,-1,-1,-1,-1,-1,1,-1,-1,1,1,1,1,1,-1,1,-1,-1,1,1,1,1,-1,-1,-1,1,-1,1,1,-1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,1,-1,1,-1,1,-1,-1,1,-1,1,1,1,-1,-1,1,-1,-1,1,-1,-1,1,1,-1,1,1,1,1,-1,-1,1,-1,-1,-1,-1,1,1,1,-1,-1,1,-1,-1,-1,1,-1,1,1,1,-1,-1,-1,1,-1,-1,-1,1,1,-1,1,1,1,-1,-1,1,1,-1,1,-1,1,1,1,1,-1,1,-1,1,1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,1,-1,1,1,1,1,-1,1,-1,1,-1,-1,1,1,1,-1,1,1,1,-1,-1,1,1,-1,-1,1,-1,-1,-1,-1,1,1,-1,-1,1,-1,1,-1,-1,-1,-1,-1,1,-1,1,1,-1,-1,-1,1,-1,-1,1,1,1,-1,1,1,1,1,-1,-1,-1,-1,-1,1,1,1,1,-1,-1,1,-1,-1,1,1,1,-1,1,-1,-1,-1,-1,1,1,1,-1,1,-1,-1,1,-1,1,-1,-1,1,1,1,-1,-1,-1,1,-1,-1,-1,-1,1,1,-1,-1,-1,1,1,-1,-1,1,-1,1,1,1,1
};


void mat_multi(long long a[2][2], long long b[2][2], long long mod) {
    long long c[2][2] = {0};
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                c[i][j] = ((c[i][j] + a[i][k] * b[k][j]) % mod + mod) % mod;
    memcpy(a, c, sizeof(c));
}

void mat_pow(long long a[2][2], long long n, long long mod) {
    long long c[2][2] = {1, 0, 0, 1};
    while (n) {
        if (n & 1)
            mat_multi(c, a, mod);
        mat_multi(a, a, mod);
        n >>= 1;
    }
    memcpy(a, c, sizeof(c));
}

long long pow_mod(long long x, long long n, long long mod) {
    x %= mod;
    long long c = 1;
    while (n) {
        if (n & 1)
            c = c * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return c;
}


const int maxn = (int)1e5;
bool vis[maxn + 10];
int pri[9592 + 10], cnt = 0;

void init_pri() {
    for (int i = 2; i * i <= maxn; ++i)
        if (not vis[i]) {
            for (int j = i * i; j <= maxn; j += i)
                vis[j] = true;
        }
    for (int i = 2; i <= maxn; ++i)
        if (not vis[i])
            pri[cnt++] = i;
}

int main() {
    init_pri();

    int T;
    scanf("%d", &T);

    for (int cs = 1; cs <= T; ++cs) {
        long long x, m;
        scanf("%lld %lld", &x, &m);

        int index = lower_bound(pri, pri + cnt, m) - pri;
//        cout << index << endl;
//        cout << fuck[index] << endl;

        long long e = (1 + pow_mod(2, x, m + fuck[index])) % (m + fuck[index]) + (m + fuck[index]);

        long long mat[2][2] = {5, 12, 2, 5};
        mat_pow(mat, e, m);

        printf("Case #%d: %lld\n", cs, (2 * mat[0][0] - 1) % m);
    }

    return 0;
}

