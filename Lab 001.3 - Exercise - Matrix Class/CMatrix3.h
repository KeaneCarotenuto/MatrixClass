#pragma once
class CMatrix3
{
private:
	float m_fMatrix[3][3];

public:
	CMatrix3();
	CMatrix3(float r1c1, float r1c2, float r1c3, float r2c1, float r2c2, float r2c3, float r3c1, float r3c2, float r3c3 );
	
	void CopyFrom(float _temp[3][3]);

	void SetElement(int _iX, int _iY, float _fValue);

	float GetElement(int _iX, int _iY) const;

	static CMatrix3& Identity(CMatrix3& _rResult);

	static CMatrix3& Zero(CMatrix3& _rResult);

	static bool Equals(const CMatrix3& _rA, const CMatrix3& _rB);

	static CMatrix3& Add(const CMatrix3& _rA, const CMatrix3& _rB, CMatrix3& _rResult);

	static CMatrix3& Subtract(const CMatrix3& _rA, const CMatrix3& _rB, CMatrix3& _rResult);

	static CMatrix3& Multiply(float _fScalar, const CMatrix3& _rA, CMatrix3& _rResult);

	static CMatrix3& Multiply(const CMatrix3& _rA, const CMatrix3& _rB, CMatrix3& _rResult);

	static CMatrix3& Transpose(const CMatrix3& _rA, CMatrix3& _rResult);

	static float Determinant(const CMatrix3& _rA);

	static bool Inverse(const CMatrix3& _rA, CMatrix3& _rResult);

	static bool TestHarness();

};

