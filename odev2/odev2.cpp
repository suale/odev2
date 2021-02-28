

#include <iostream>
#include <Eigen/Dense>
#include <algorithm>    
#include <vector>  
using namespace std;
using namespace Eigen;
int main()
{

	cout << "Soru 1-------------------------------------------------------" << endl;
	srand((unsigned int)time(0));
	MatrixXi m = MatrixXi::Random(5, 8);
	for (int i = 0; i < m.rows(); i++)
		for (int j = 0; j < m.cols(); j++)
		{
			m(i, j) =(abs((m(i, j) % 100)))+1 ;
		}
	
	cout << m << endl;
	cout << "Soru 1-------------------------------------------------------" << endl;
	cout << "Soru 2-------------------------------------------------------" << endl;

	MatrixXi m1(60 * 60, 60);
	cout << "Matris kodda olusturuldu" << endl;
	cout << "Soru 2-------------------------------------------------------" << endl;
	cout << "Soru 3-------------------------------------------------------" << endl;
	MatrixXd m2 = MatrixXd::Random(10, 10) * 100;
	MatrixXi m2i = m2.cast<int>().array().abs();
	int min = m2i.minCoeff();
	int max = m2i.maxCoeff();

	cout << m2i << endl;
	cout << "Minimum : " << " " << min << endl;
	cout << "Maximum : " << " " << max << endl;

	cout << "Soru 3-------------------------------------------------------" << endl;

	cout << "Soru 4-------------------------------------------------------" << endl;
	cout << "Soru 4-------------------------------------------------------" << endl;

	cout << "Soru 5-------------------------------------------------------" << endl;
	Matrix<float, 10, 1> vektor = VectorXf::Random(10, 1) * 10;
	cout << "Vektor ilk hali:"<< vektor << endl;
	int siraNo;
	vektor.maxCoeff(&siraNo);
	vektor(siraNo) = 0;
	cout <<"Vektor son hali"<<  vektor << endl;
	cout << "Soru 5-------------------------------------------------------" << endl;

	cout << "Soru 6-------------------------------------------------------" << endl;
	MatrixXi MM = MatrixXi::Ones(100, 150);
	for (int i = 0; i < MM.rows(); ++i) {
		for (int j = 0; j < MM.cols(); ++j)
		{
			MM(i, j) = i + 1;

		}
	}
	//cout << MM << endl;
	cout << "Soru 6-------------------------------------------------------" << endl;
	cout << "Soru 7-------------------------------------------------------" << endl;
	MatrixXi gecici = MatrixXi(25, 25);
	gecici=MM.topLeftCorner(25, 25);
	MM.topLeftCorner(25, 25) = MM.bottomRightCorner(25, 25);
	MM.bottomRightCorner(25, 25) = gecici;
	gecici = MM.topRightCorner(25, 25);
	MM.topRightCorner(25, 25) = MM.bottomLeftCorner(25, 25);
	MM.bottomLeftCorner(25,25) = gecici;
	cout << MM << endl;
	cout << "Soru 7-------------------------------------------------------" << endl;
	cout << "Soru 8-------------------------------------------------------" << endl;

	MatrixXi m8i = MatrixXi(10, 10);
	for (int i = 0; i < m8i.rows(); ++i) {
		for (int j = 0; j < m8i.cols(); ++j)
		{
			m8i(i, j) = (i*10)+j+1;

		}
	}

	cout << "Matris" <<endl<< m8i << endl;
	m8i = m8i.transpose().eval();
	cout << "Transpoz" << endl<< m8i << endl;

	cout << "Soru 8-------------------------------------------------------" << endl;
	cout << "Soru 9-------------------------------------------------------" << endl;

	//BU SORUNUN CEVABI YANLIŞ
	MatrixXd m9 = MatrixXd::Random(10, 10) * 100;
	MatrixXi m9i = m9.cast<int>().array().abs();
	cout << "Matris" << endl;
	cout << m9i << endl;
	
	int rowss= 10;
	int colss = 10;
	for (int i = 0; i < rowss; i++)
	{
		for (int j = 0; j < colss; j++)
		{
			if (i % 2 == 1 && j % 2 == 1) {
			    
				m9i(i, j) = m9i(j, i);
				
			}
		}
		
	}
	cout << "Degismis hali" << endl;
	cout << m9i << endl;	



	cout << "Soru 9-------------------------------------------------------" << endl;

	cout << "Soru 10-------------------------------------------------------" << endl;
	MatrixXd m10 = MatrixXd::Random(100, 100) * 100;
	MatrixXi m10i = m10.cast<int>().array().abs();
	cout << m10i << endl;
	cout << "Soru 10-------------------------------------------------------" << endl;


	cout << "Soru 11-------------------------------------------------------" << endl;
	
	MatrixXd m11 = MatrixXd::Random(10, 10) * 100;
	MatrixXi m11i = m11.cast<int>().array().abs();

	cout <<"Sirasiz"<<endl<< m11i << endl;
	cout << "sirali" << endl;
	for (int i = 0; i < m11i.rows(); i++)
	{		
		int t = 0;
		Matrix<int, 1, 10> vektorcuk = m11i.block<1, 10>(i, 0);
		for (int x = 0; x < 10; x++)
		{
			for (int y = 0; y < 9; y++)
			{
				if (vektorcuk(y) > vektorcuk(y+1))
				{
					t = vektorcuk(y);
					vektorcuk(y) = vektorcuk(y + 1);
					vektorcuk(y + 1) = t;
				}
			}
		}
		cout << vektorcuk << endl;
			
		
	}
	


	cout << "Soru 11-------------------------------------------------------" << endl;

	return 0;
}

