#include <bits/stdc++.h>
using namespace std;
#define EPSL 0.0000000001

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        pair<int,int> points[3];
        cin >> points[0].first >> points[0].second;
        cin >> points[1].first >> points[1].second;
        cin >> points[2].first >> points[2].second;
        double distAP, distBP, distAO, distBO, w;
        distAP = sqrt(((points[1].first - points[0].first) * (points[1].first - points[0].first)) + ((points[1].second - points[0].second) * (points[1].second - points[0].second)));
        distBP = sqrt(((points[2].first - points[0].first) * (points[2].first - points[0].first)) + ((points[2].second - points[0].second) * (points[2].second - points[0].second)));
        distAO = sqrt((points[1].first * points[1].first) + (points[1].second * points[1].second));
        distBO = sqrt((points[2].first * points[2].first) + (points[2].second * points[2].second));
        w = max(min(distAP, distBP), min(distAO, distBO));
        if((distAP - w <= EPSL && distAO - w <= EPSL) || (distBP - w <= EPSL && distBO - w <= EPSL))
            printf("%.10lf\n", w);
        else
        {
            w = max(w, sqrt(((points[1].first - points[2].first) * (points[1].first - points[2].first)) + ((points[1].second - points[2].second) * (points[1].second - points[2].second))) / ((double)2));
            printf("%.10lf\n", w);
        }
    }
}