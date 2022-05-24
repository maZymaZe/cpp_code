#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class leaf_node {
   public:
    string condition;
    string solution;
    bool vis;
    void setdata(string cd, string sl) {
        condition = cd;
        solution = sl;
        vis = false;
    }
};
class inter_node {
   public:
    string condition;
    vector<inter_node*> next_inter;
    vector<leaf_node*> next_leaf;
    bool vis;
    void setdata(string cd) {
        condition = cd;
        next_inter.clear();
        next_leaf.clear();
        vis = false;
    }
    void addi(inter_node* it) { next_inter.push_back(it); }
    void addl(leaf_node* it) { next_leaf.push_back(it); }
};
bool getans() {
    cout << "请输入'y'表示肯定,'n'表示否定" << endl;
    string s, n("n"), y("y");
    cin >> s;
    while (s != n && s != y) {
        cout << "请输入'y'表示肯定,'n'表示否定" << endl;
        cin >> s;
    }
    return s == y;
}
class expert_system {
   public:
    int solved;
    inter_node its[13];
    leaf_node lfs[25];
    expert_system() {
        its[0].setdata("夏季车内温度过高");
        its[1].setdata("空调系统不制冷");
        its[2].setdata("鼓风机不工作");
        its[3].setdata("压缩机不旋转");
        its[4].setdata("空调系统异响或震动");
        its[5].setdata("压缩机异响");
        its[6].setdata("离合器异响");
        its[7].setdata("鼓风机异响");
        its[8].setdata("制冷效果差");
        its[9].setdata("出风量变少");
        its[10].setdata("歧管压力异常");
        its[11].setdata("压缩机离合器接合不正常");
        lfs[1].setdata("系统制冷剂过少", "补充制冷剂");
        lfs[2].setdata("管路元件堵塞或损坏", "检修或更换元件");
        lfs[3].setdata("易熔丝熔断", "更换易熔丝");
        lfs[4].setdata("开关插头脱落", "检修或更换元件");
        lfs[5].setdata("功率电阻丝损坏", "更换功率电阻丝");
        lfs[6].setdata("鼓风机电动机损坏", "更换鼓风机");
        lfs[7].setdata("鼓风机线路故障", "检查并排除线路故障");
        lfs[8].setdata("压缩机损坏", "检修或更换压缩机");
        lfs[9].setdata("压缩机线路故障", "检查并排除线路故障");
        lfs[10].setdata("离合器线圈故障", "更换离合器线圈");
        lfs[11].setdata("压力传感器故障", "更换压力传感器");
        lfs[12].setdata("空调系统压力不正常", "添加制冷剂");
        lfs[13].setdata("制冷剂过量", "将多余制冷剂排出");
        lfs[14].setdata("缺少冷冻机油", "补充冷冻机油");
        lfs[15].setdata("压缩机驱动带过松", "调整或更换驱动带");
        lfs[16].setdata("压缩机安装位置和托架不牢固", "重新安装紧固");
        lfs[17].setdata("离合器打滑", "检修或更换离合器");
        lfs[18].setdata("压缩机离合器间隙不正常", "重新调整间隙");
        lfs[19].setdata("鼓风机风扇有噪音", "检修或更换鼓风机");
        lfs[20].setdata("鼓风机内部有异物", "清除异物");
        lfs[21].setdata("温度传感器异常", "检修或更换元件");
        lfs[22].setdata("空调滤芯过脏", "清洗滤芯");
        lfs[23].setdata("送风管道和空气混合控制电动机异常", "修复或更换零件");
        lfs[24].setdata("歧管泄露", "检漏，补注制冷剂");
        its[0].addi(&its[1]);
        its[0].addi(&its[4]);
        its[0].addi(&its[8]);
        its[1].addi(&its[2]);
        its[1].addi(&its[3]);
        its[1].addi(&its[11]);
        its[4].addi(&its[5]);
        its[4].addi(&its[6]);
        its[4].addi(&its[7]);
        its[8].addi(&its[9]);
        its[8].addi(&its[10]);
        its[9].addi(&its[2]);
        its[1].addl(&lfs[1]);
        its[1].addl(&lfs[2]);
        its[2].addl(&lfs[3]);
        its[2].addl(&lfs[4]);
        its[2].addl(&lfs[5]);
        its[2].addl(&lfs[6]);
        its[2].addl(&lfs[7]);
        its[3].addl(&lfs[8]);
        its[11].addl(&lfs[9]);
        its[11].addl(&lfs[10]);
        its[11].addl(&lfs[11]);
        its[11].addl(&lfs[12]);
        its[4].addl(&lfs[13]);
        its[4].addl(&lfs[14]);
        its[5].addl(&lfs[15]);
        its[5].addl(&lfs[16]);
        its[6].addl(&lfs[17]);
        its[6].addl(&lfs[18]);
        its[7].addl(&lfs[19]);
        its[7].addl(&lfs[20]);
        its[8].addl(&lfs[2]);
        its[8].addl(&lfs[21]);
        its[9].addl(&lfs[22]);
        its[9].addl(&lfs[23]);
        its[10].addl(&lfs[24]);
        cout << "专家系统初始化完成" << endl;
    }
    void work() {
        solved = 0;
        dfs_inter(&its[0]);
        cout << "专家系统退出" << endl;
    }

   protected:
    void dfs_leaf(leaf_node* lf) {
        if (lf->vis)
            return;
        lf->vis = true;
        cout << "请问是否出现下述现象？" << endl << lf->condition << endl;
        bool ans = getans();
        if (!ans)
            return;
        cout << "请尝试下面的解决方案" << endl << lf->solution << endl;
        cout << lf->condition << "修复了吗?" << endl;
        ans = getans();
        if (!ans) {
            cout << "异常，未修复 " << lf->condition << ",继续排查看看吧"
                 << endl;
            return;
        }
        cout << "全部恢复正常了吗?" << endl;
        ans = getans();
        if (!ans) {
            cout << "继续排查看看吧" << endl;
            return;
        }
        solved = true;
        return;
    }
    void dfs_inter(inter_node* it) {
        if (it->vis)
            return;
        it->vis = true;
        cout << "请问是否出现下述现象？" << endl << it->condition << endl;
        bool ans = getans();
        if (!ans)
            return;
        for (auto its : it->next_inter) {
            dfs_inter(its);
            if (solved)
                return;
        }
        for (auto lfs : it->next_leaf) {
            dfs_leaf(lfs);
            if (solved)
                return;
        }
        cout << "异常，未查明出现 " << it->condition << " 的原因,继续排查看看吧"
             << endl;
    }
};
int main() {
    system("chcp 65001");
    expert_system es = expert_system();
    es.work();
    return 0;
}