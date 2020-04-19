#include <iostream>
#include "bmplib.cpp"
#include <cstring>

using namespace std;

unsigned char image[SIZE][SIZE];

void loadImage ();
void saveImage ();
int main()
{
    loadImage();

    for(int i=0 ; i<SIZE ; ++i){
        for(int j=0 ; j<SIZE ; ++j){
            image[i][j]=255-image[i][j];
    }}
    saveImage();



    return 0;
}
void loadImage () {
   char imageFileName[100];
   cout << "Enter the source image file name: ";
   cin >> imageFileName;
   strcat (imageFileName, ".bmp");
   readGSBMP(imageFileName, image);
}
void saveImage () {
   char imageFileName[100];
   cout << "Enter the target image file name: ";
   cin >> imageFileName;
   strcat (imageFileName, ".bmp");
   writeGSBMP(imageFileName, image);
}
