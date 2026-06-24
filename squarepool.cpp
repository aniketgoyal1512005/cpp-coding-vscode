#include<iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int bc;
        long long sz;
        cin>>bc>>sz;
        int cnt=0;
        for(int bi=0;bi<bc;++bi){
            int dx0,dy0,dx1,dy1;
            long long px0,py0,px1,py1;
            cin>>dx0>>dy0>>px0>>py0;
            px1=px0;
            py1=py0;
            dx1=dx0;
            dy1=dy0;
            bool flag=0;
            for(int rep=0;rep<4;++rep){
                if((px0==0||px0==sz)&&(py0==0||py0==sz)){
                    flag=1;
                    break;
                }
                long long tx=dx0>0?sz-px0:px0;
                long long ty=dy0>0?sz-py0:py0;
                long long mv=tx<ty?tx:ty;
                px0+=dx0*mv;
                py0+=dy0*mv;
                if(px0==0||px0==sz)dx0*=-1;
                if(py0==0||py0==sz)dy0*=-1;
                if(px0==px1&&py0==py1&&dx0==dx1&&dy0==dy1)break;
            }
            if(flag)++cnt;
        }
        cout<<cnt<<endl;
    }
return 0 ;
}