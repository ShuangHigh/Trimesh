#include <iostream>
#include <stdio.h>
#include "include/TriMesh.h"
using namespace std;
using namespace trimesh;
int main(){
   TriMesh *m = TriMesh::read("g.ply");
    cout<<m->vertices.size()<<endl;
    cout<<m->faces.size()<<endl;
    printf("Hello world\n");

    return 0;
}
