#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class expression{
    private:
        vector<string>exp;
        int priority(string ch){
            int ans=4;
            if(ch=="*"||ch=="/")
                return 6;
            else if(ch=="+"||ch=="-")
                return 5;
            else 
                return 4;
        }
        vector<string>postexp;
                int cal(int a,int b,string op){
            if(op=="+")
                return a+b;
            else if(op=="-")
                return a-b;
            else if("/")
                return a/b;
            else if(op=="*")
                return a*b;
        }
    public:
        expression(vector<string>para){
            this->exp=para;
        }
        expression(){};
        void postfix(){
            int size=exp.size();
            stack<string>s;
            vector<string>post;
            for(int c1=0;c1<size;c1++){
                string cur=exp[c1];
                if(cur=="(")
                    s.push(cur);
                else if(cur==")"){
                    while(s.top()!="("){
                        post.push_back(s.top());
                        s.pop();
                    }
                    s.pop();
                }
                else if(cur=="+"||cur=="-"||cur=="/"||cur=="*"){
                        while(s.size()!=0 && (priority(cur)<=priority(s.top()))){
                            post.push_back(s.top());
                            s.pop();
                        }
                    s.push(cur);
                }
                else{
                    post.push_back(cur);
                }
                    
            }

            while(s.size()!=0){
                post.push_back(s.top());
                s.pop();
            }
            
            cout<<endl;
            for(auto el:post){
                cout<<" "<<el;
                postexp.push_back(el);
            }

            return;
        };

        int solve(){
            postfix();
            stack<int>s;
            for(auto el:postexp){
                int a,b;
                if(el=="+"||el=="-"||el=="/"||el=="*"){
                    a=s.top();s.pop();
                    b=s.top();s.pop();
                    int re = cal(b,a,el);
                    s.push(re);
                }
                else{
                    s.push(stoi(el));
                }
            }

            return s.top();
        }
        
};

int main(){
    vector<string>s={"132","+","456","/","2","*","1"};
    expression e1=s;
    e1.postfix();
    cout<<endl<<e1.solve();
    return 0;
}