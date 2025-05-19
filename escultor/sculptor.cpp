#include "sculptor.h"
#include <fstream>

Sculptor::Sculptor(int _nx, int _ny, int _nz){
    nx = _nx;
    ny = _ny;
    nz = _nz;
    // aloca a matriz de voxels v
}

Sculptor::~Sculptor(){

}

void Sculptor::setColor(float r, float g, float b, float a){
    this->r = r;
    this->g = g;
    this->b = b;
}
void Sculptor::putVoxel(int x, int y, int z){

}
void Sculptor::cutVoxel(int x, int y, int z){

}
void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){

}
void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){

}
void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){

}
void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){

}
void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

}
void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

}
void Sculptor::writeOFF(const char* filename){
    std::ofstream fout;
    int nvoxels;

    fout.open(filename);
    if (!fout.is_open()) {
        exit(1);
    }
    fout << "OFF\n";
    // conta quantos voxels estao marcados com show == true
    // lasso aninhado

    fout << nvoxels * 8 << " " << nvoxels * 6 << " 0\n";
    // escrever os vertices

    // escrever as faces
    fout.close();

}
