#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
std::string image = "C:/Users/isaac/Desktop/ima2.jpg";
void showimage(cv::Mat imagen) {
    namedWindow("First OpenCV Application", WINDOW_AUTOSIZE);
    cv::imshow("First OpenCV Application", imagen);
    cv::moveWindow("First OpenCV Application", 0, 45);

}
void blackandwhiteConversion(cv::Mat imagen) {

    for (int y = 0; y < imagen.rows; y++) {
        for (int x = 0; x < imagen.cols; x++) {

            cv::Vec3b& color = imagen.at<cv::Vec3b>(y, x);

            double NewB = color[0] * 0.299;
            double NewG = color[1] * 0.587;
            double NewR = color[2] * 0.114;
            double gris = NewB + NewG + NewR;
            color[0] = gris;
            color[1] = gris;
            color[2] = gris;
        }
    }
    namedWindow("Black and White Image", WINDOW_AUTOSIZE);
    imshow("Black and White Image", imagen);
    cv::moveWindow("Black and White Image", 0, 45);
    cv::waitKey(0);
    cv::destroyAllWindows();
}
void verticalImage(cv::Mat imagen) {
    for (int y = 0; y < imagen.rows / 2; y++) {
        for (int x = 0; x < imagen.cols; x++) {

            cv::Vec3b temp = imagen.at<cv::Vec3b>(y, x);
            imagen.at<cv::Vec3b>(y, x) = imagen.at<cv::Vec3b>(imagen.rows - y - 1, x);
            imagen.at<cv::Vec3b>(imagen.rows - y - 1, x) = temp;
        }
    }

    namedWindow("verticalImage", WINDOW_AUTOSIZE);
    imshow("verticalImage", imagen);
    cv::moveWindow("verticalImage", 0, 45);
    cv::waitKey(0);
    cv::destroyAllWindows();
}
void horizontalImage(cv::Mat imagen) {

    for (int y = 0; y < imagen.rows; y++) {
        for (int x = 0; x < imagen.cols / 2; x++) {

            cv::Vec3b temp = imagen.at<cv::Vec3b>(y, x);
            imagen.at<cv::Vec3b>(y, x) = imagen.at<cv::Vec3b>(y, imagen.cols - x - 1);
            imagen.at<cv::Vec3b>(y, imagen.cols - x - 1) = temp;
        }
    }
    namedWindow("horizontalImage", WINDOW_AUTOSIZE);
    imshow("horizontalImage", imagen);
    cv::moveWindow("horizontalImage", 0, 45);
    cv::waitKey(0);
    cv::destroyAllWindows();
}
void negativeImage(cv::Mat imagen) {

    for (int y = 0; y < imagen.rows; y++) {
        for (int x = 0; x < imagen.cols; x++) {

            cv::Vec3b& color = imagen.at<cv::Vec3b>(y, x);

            double NewB = color[0] - 255;
            double NewG = color[1] - 255;
            double NewR = color[2] - 255;
            double gris = NewB + NewG + NewR;
            color[0] = gris;
            color[1] = gris;
            color[2] = gris;
        }
    }
    namedWindow("negative image", WINDOW_AUTOSIZE);
    imshow("negative Image", imagen);
    cv::moveWindow("negative Image", 0, 45);
    cv::waitKey(0);
    cv::destroyAllWindows();
}

void nineteenGrades(cv::Mat imagen) {

    int heightOriginal = imagen.rows;
    int widthOriginal = imagen.cols;

    int heightNew = widthOriginal;
    int widthNew = heightOriginal;

    cv::Mat rotateImagen(heightNew, widthNew, imagen.type());

    for (int y = 0; y < heightOriginal; y++) {
        for (int x = 0; x < widthOriginal; x++) {
            rotateImagen.at<cv::Vec3b>(x, heightOriginal - y - 1) = imagen.at<cv::Vec3b>(y, x);

        }
    }
    namedWindow("nineteen Grades", WINDOW_AUTOSIZE);
    imshow("nineteen Grades", rotateImagen);
    cv::moveWindow("nineteen Grades", 0, 45);
    cv::waitKey(0);


}

int main(){
    cv::Mat imagen = cv::imread(image);
    while (true) {
        showimage(imagen);
        double color[3];

        char tecla = cv::waitKey(0);

        if (tecla == 'A' || tecla == 'a') {
            cv::destroyAllWindows();
            blackandwhiteConversion(imagen);
            cv::destroyAllWindows();
        }
        if (tecla == 'B' || tecla == 'b') {
            cv::destroyAllWindows();
            horizontalImage(imagen);
            cv::destroyAllWindows();

        }
        if (tecla == 'c' || tecla == 'C') {
            cv::destroyAllWindows();
            verticalImage(imagen);
            cv::destroyAllWindows();

        }
        if (tecla == 'D' || tecla == 'd') {
            cv::destroyAllWindows();
            negativeImage(imagen);
            cv::destroyAllWindows();

        }
        if (tecla == 'E' || tecla == 'e') {
            cv::destroyAllWindows();
            nineteenGrades(imagen);
            cv::destroyAllWindows();

        }
        if (tecla == 27) {
            cv::destroyAllWindows();
            std::cout << "Gracias por usar mi programa";
            break;
        }

    }
    return 0;
}