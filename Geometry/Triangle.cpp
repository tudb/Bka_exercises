#include "Triangle.h"
#include "Polygon.h"

//KhõÒi taòo cho class
Triangle::Triangle() : Polygon(){
}

//KhõÒi taòo coì ðôìi cho lõìp Triangle
Triangle::Triangle(Polygon oPolygon){
	if (oPolygon.getAmount() == 3)
		this->m_oTriangle = oPolygon;
	else
		cout << "Not a Triangle points" << endl;
}

//HaÌm huÒy cuÒa lõìp 
Triangle::~Triangle(){
}

//HaÌm traÒ vêÌ giaì triò cuÒa 1 ðôìi týõòng cuÒa lõìp ða giaìc hiêÒn thiò toòa ðôò caìc ðiêÒm cuÒa tam giaìc
Polygon Triangle::getTriangle(){

	return m_oTriangle;
}

//Ðãòt giaì triò vaÌo bãÌng tham triò laÌ ðôìi týõòng cuÒa lõìp Polygon
void Triangle::setTriangle(Polygon oPolygon){
	if (oPolygon.getAmount() == 3)
		this->m_oTriangle = oPolygon;
	else
		cout << "Not a Triangle points" << endl;
}

//Quay hiÌnh tam giaìc theo 1 goìc fAlpha ðýa vaÌo
Triangle Triangle::turn(float fAlpha){
	return m_oTriangle.turn(fAlpha);
}

//Tiònh tiêìn hiÌnh tam giaìc theo 1 vector ðýa vaÌo
Triangle Triangle::translatinal(Vector vector){

	return m_oTriangle.translatinal(vector);
}

//Tãng giaÒm kiìch thýõìc cuÒa hiÌnh
Triangle Triangle::zoom(float fCoefficient){

	return m_oTriangle.zoom(fCoefficient);
}

void Triangle::display(){
	m_oTriangle.display();
}

void Triangle::import(){
	m_oTriangle.setAmount(3);
	cout << endl << "Nhap toa do: " << endl;
	for (int nNum = 0; nNum < m_oTriangle.getAmount(); nNum++){
		cout << "Point " << nNum++ << " : " << endl;
		m_oTriangle.getPolygon()[nNum].import();
	}
}
