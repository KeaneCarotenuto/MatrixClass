#include "CMatrix3.h"
#include <Windows.h>

using namespace std;

CMatrix3::CMatrix3()
{
	float tempMat[3][3] = { {0,0,0},{0,0,0},{0,0,0}, };
	memcpy(m_fMatrix, tempMat, sizeof(m_fMatrix));
}

CMatrix3::CMatrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	float tempMat[3][3] = { {a, b, c},
							{d, e, f},
							{g, h, i} };

	memcpy(m_fMatrix, tempMat, sizeof(m_fMatrix));
}

void CMatrix3::CopyFrom(float _temp[3][3])
{
	memcpy(m_fMatrix, _temp, sizeof(m_fMatrix));
}

void CMatrix3::SetElement(int _iX, int _iY, float _fValue)
{
	m_fMatrix[_iY-1][_iX-1] = _fValue;
}

float CMatrix3::GetElement(int _iX, int _iY) const
{
	return m_fMatrix[_iY-1][_iX-1];
}

CMatrix3& CMatrix3::Add(const CMatrix3& _rA, const CMatrix3& _rB, CMatrix3& _rResult)
{
	
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			_rResult.SetElement(x,y, _rA.GetElement(x,y) + _rB.GetElement(x,y));
		}
	}

	return _rResult;
}
