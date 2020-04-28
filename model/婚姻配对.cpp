vector<vector<int>> m_values,w_values;
for(){
    sort(m_values[i])
}
vector<int> hus_of_w;
map<int,int> marriages;
set<int> man;
while(!man.empty()){
    int a=man.front();
    for(m_value[a]){
        if(hus_of_w[i]){
            if(w[i][hus_of_w[i]]>w[i][a])continue;
            else{
                man.insert(hus_of_w[i]);
                hus_of_w[i]=a;
                man.erase(man.find(a));
            }
        }
        else{
            hus_of_w[i]=a;
            man.erase(man.find(a));
        }
    }
}