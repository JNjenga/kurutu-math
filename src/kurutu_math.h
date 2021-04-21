#ifndef KMATH_H_
#define KMATH_H_

#include <array>

class v3
{
	public:
		float x;
		float y;
		float z;
		
		v3 () : x{}, y{}, z{}
		{
		}

		v3 (float x_, float y_, float z_)
			: x{x_}, y{y_}, z{z_}
		{

		}

		float dot(const v3 & v)
		{
			std::array<float, 3> a;

			a[0] = x * v.x;
			a[1] = y * v.y;
			a[2] = z * v.z;

			return a[0] + a[1] + a[2];
		}

		v3 cross(const v3 & v)
		{
			float tx = y*v.z - z*v.y;
			float ty = z*v.x - x*v.z;
			float tz = x*v.y - y*v.x;
			return v3(tx, ty, tz);
		}

		void add(const v3 & v)
		{
			x += v.x;
			y += v.y;
			z += v.z;
		}

		void add(const float k)
		{
			x += k;
			y += k;
			z += k;
		}

		void sub(const v3 & v)
		{
			x -= v.x;
			y -= v.y;
			z -= v.z;
		}

		void sub(const float k)
		{
			x -= k;
			y -= k;
			z -= k;
		}

		void mul(const v3 & v)
		{
			x *= v.x;
			y *= v.y;
			z *= v.z;
		}

		void mul(const float k)
		{
			x *= k;
			y *= k;
			z *= k;
		}

		void div(const v3 & v)
		{
			x /= v.x;
			y /= v.y;
			z /= v.z;
		}

		void div(const float k)
		{
			x /= k;
			y /= k;
			z /= k;
		}

		// Operator overloads
		float operator[](int i)
		{
			switch(i)
			{
				case 0:
					return x;
					break;
				case 1:
					return y;
					break;
				case 2:
					return z;
					break;
				default:
					break;
			}
			// TODO : Handle out of bounds access
			return 0.0f;
		}

		v3 & operator=(const v3 & v)
		{
			x = v.x;
			y = v.y;
			z = v.z;
			return *this;
		}

		v3 & operator+(const v3 & v)
		{
			add(v);
			return *this;
		}

		v3 & operator+(float k)
		{
			add(k);
			return *this;
		}

		v3 &operator-(const v3 & v)
		{
			sub(v);
			return *this;
		}

		v3 & operator-(float k)
		{
			sub(k);
			return *this;
		}

		v3 & operator*(const v3 & v)
		{
			mul(v);
			return *this;
		}

		v3 & operator*(float k)
		{
			mul(k);
			return *this;
		}

		v3 & operator/(const v3 & v)
		{
			div(v);
			return *this;
		}

		v3 & operator/(float k)
		{
			div(k);
			return *this;
		}

};

class v4
{
	public :
		float x;
		float y;
		float z;
		float w;
		
		v4 () : x{}, y{}, z{}, w{}
		{
		}

		v4 (float x_, float y_, float z_, float w_)
			: x{x_}, y{y_}, z{z_}, w{w_}
		{

		}

		float dot(const v4 & v)
		{
			return x * v.x + y * v.y + z * v.z + w * v.w;
		}

		v4 cross(const v4 & v)
		{
			return v4();
		}

		void add(const v4 & v)
		{
			x += v.x;
			y += v.y;
			z += v.z;
			w += v.w;
		}

		void add(const float k)
		{
			x += k;
			y += k;
			z += k;
			w += w;
		}

		void sub(const v4 & v)
		{
			x -= v.x;
			y -= v.y;
			z -= v.z;
			w -= v.w;
		}

		void sub(const float k)
		{
			x -= k;
			y -= k;
			z -= k;
			w -= k;
		}

		void mul(const v4 & v)
		{
			x *= v.x;
			y *= v.y;
			z *= v.z;
			w *= v.w;
		}

		void mul(const float k)
		{
			x *= k;
			y *= k;
			z *= k;
			w *= k;
		}

		void div(const v4 & v)
		{
			x /= v.x;
			y /= v.y;
			z /= v.z;
			w /= v.w;
		}

		void div(const float k)
		{
			x /= k;
			y /= k;
			z /= k;
			w /= k;
		}

		float operator[](int i)
		{
			switch(i)
			{
				case 0:
					return x;
					break;
				case 1:
					return y;
					break;
				case 2:
					return z;
					break;
				case 3:
					return w;
					break;
				default:
					break;
			}
			// TODO : Handle out of bounds access
			return 0.0f;
		}

		v4 & operator=(const v4 & v)
		{
			x = v.x;
			y = v.y;
			z = v.z;
			w = v.w;
			return *this;
		}

		v4 & operator+(const v4 & v)
		{
			add(v);
			return *this;
		}

		v4 &  operator+(float k)
		{
			add(k);
			return *this;
		}

		v4 &  operator-(const v4 & v)
		{
			sub(v);
			return *this;
		}

		v4 & operator-(float k)
		{
			sub(k);
			return *this;
		}

		v4 & operator*(const v4 & v)
		{
			mul(v);
			return *this;
		}

		v4 & operator*(float k)
		{
			mul(k);
			return *this;
		}

		v4 & operator/(const v4 & v)
		{
			div(v);
			return *this;
		}

		v4 & operator/(float k)
		{
			div(k);
			return *this;
		}
};

#endif
