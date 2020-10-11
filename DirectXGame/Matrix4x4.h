#pragma once
#include <memory>
#include "Vector3D.h"
class Matrix4x4
{
public:
	Matrix4x4() {};

	void setIdentity() {
		::memset(m_mat, 0 , sizeof(float)*16);
		m_mat[0][0] = 1;
		m_mat[1][1] = 1;
		m_mat[2][2] = 1;
		m_mat[3][3] = 1;

	};

	void setTranslation(const Vector3D& translation) {
		setIdentity();
		m_mat[3][0] = translation.m_x;
		m_mat[3][1] = translation.m_y;
		m_mat[3][2] = translation.m_z;
	}

	void setScale(const Vector3D& scale) {
		setIdentity();
		m_mat[0][0] = scale.m_x;
		m_mat[1][1] = scale.m_y;
		m_mat[2][2] = scale.m_z;
	};

	void operator*=(const Matrix4x4& matrix)
	{
		Matrix4x4 out;
		for (int row = 0; row < 4; row++) {
			for (int col = 0; col < 4; col++) {
				out.m_mat[row][col] = m_mat[row][0] * matrix.m_mat[0][col] +
					m_mat[row][1] * matrix.m_mat[1][col] +
					m_mat[row][2] * matrix.m_mat[2][col] +
					m_mat[row][3] * matrix.m_mat[3][col];
			}
		}

		::memcpy(m_mat, out.m_mat, sizeof(float) * 16);

	};

	void setOrthoLH(float width, float height, float near_plane, float far_plane) {
		setIdentity();
		m_mat[0][0] = 2.0f / width;
		m_mat[1][1] = 2.0f / height;
		m_mat[2][2] = 1.0f / (far_plane - near_plane);
		m_mat[3][2] = -(near_plane/(far_plane - near_plane));
	}

	~Matrix4x4() {};

	float m_mat[4][4] = {};
};
