//
//  main.cpp
//  in
//
//  Created by 20141105059c on 15/12/2.
//  Copyright © 2015年 20141105059c. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[3]={1,2,3};
    int b[4];
    int i;
    for(i=1;i<100;i++)
    {
        b[i]=i;
    }
    printf("%d  %d  %d\n",a[0],a[1],a[2]);
    printf("%x  %x\n",a,b);
    return 0;
}
