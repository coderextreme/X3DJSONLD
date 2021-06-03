'use strict'

class Matrix extends Array {
	constructor(x, y, z, w) {
		super(x, y, z, w);
	}
	dotprod(that) {
		return parseFloat(this.row(0)) * parseFloat(that.row(0)) + parseFloat(this.row(1)) * parseFloat(that.row(1)) + parseFloat(this.row(2)) * parseFloat(that.row(2)) + parseFloat(this.row(3)) * parseFloat(that.row(3));
	}
	matmatmult(that) {
		return new Matrix(
			  new Matrix(
				this.row(0).dotprod(that.col(0)),
				this.row(0).dotprod(that.col(1)),
				this.row(0).dotprod(that.col(2)),
				this.row(0).dotprod(that.col(3))),
			  new Matrix(
			  	this.row(1).dotprod(that.col(0)),
				this.row(1).dotprod(that.col(1)),
				this.row(1).dotprod(that.col(2)),
				this.row(1).dotprod(that.col(3))),
			  new Matrix(
			  	this.row(2).dotprod(that.col(0)),
				this.row(2).dotprod(that.col(1)),
				this.row(2).dotprod(that.col(2)),
				this.row(2).dotprod(that.col(3))),
			  new Matrix(
			  	this.row(3).dotprod(that.col(0)),
				this.row(3).dotprod(that.col(1)),
				this.row(3).dotprod(that.col(2)),
				this.row(3).dotprod(that.col(3))));
	}
	matvecmult(that) {
		return new Matrix(
			 this.row(0).dotprod(that),
			 this.row(1).dotprod(that),
			 this.row(2).dotprod(that),
			 this.row(3).dotprod(that));
	}
	vecmatmult(that) {
		return new Matrix(
			 this.dotprod(that.col(0)),
			 this.dotprod(that.col(1)),
			 this.dotprod(that.col(2)),
			 this.dotprod(that.col(3)));
	}
	row(r) {
		return this[r];
	}
	col(c) {
		return new Matrix(this[0][c], this[1][c], this[2][c], this[3][c]);
	}
	copy() {
		return  new Matrix(
			new Matrix(this[0][0], this[0][1], this[0][2], this[0][3]),
			new Matrix(this[1][0], this[1][1], this[1][2], this[1][3]),
			new Matrix(this[2][0], this[2][1], this[2][2], this[2][3]),
			new Matrix(this[3][0], this[3][1], this[3][2], this[3][3]));
	}
	static invertquaternion(x, y, z, r) {
		x = parseFloat(x);
		y = parseFloat(y);
		z = parseFloat(z);
		r = parseFloat(r);
		return Matrix.quaternion(-x, -y, -z, r);
	}
	static quaternion(x, y, z, r) {
		x = parseFloat(x);
		y = parseFloat(y);
		z = parseFloat(z);
		r = parseFloat(r);
		var n = Math.sqrt(x*x+y*y+z*z+r*r);
		x = x / n;
		y = y / n;
		z = z / n;
		r = r / n;
		return new Matrix(
			new Matrix(x, -y, -z, -r),
		  	new Matrix(y,  x, -r,  z),
		  	new Matrix(z,  r,  x, -y),
		  	new Matrix(r, -z,  y,  x));
	}
	static translation(x, y, z) {
		x = parseFloat(x);
		y = parseFloat(y);
		z = parseFloat(z);
		return  new Matrix(
			new Matrix(1, 0, 0, x),
			new Matrix(0, 1, 0, y),
			new Matrix(0, 0, 1, z),
			new Matrix(0, 0, 0, 1));
	}
	static scale(x, y, z) {
		x = parseFloat(x);
		y = parseFloat(y);
		z = parseFloat(z);
		return new Matrix(
			new Matrix(x, 0, 0, 0),
			new Matrix(0, y, 0, 0),
			new Matrix(0, 0, z, 0),
			new Matrix(0, 0, 0, 1));
	}
	mat() {
		return JSON.stringify(this);
	}
	vec() {
		return JSON.stringify(this);
	}
	subtract(that) {
		return new Matrix(
			parseFloat(this.row(0)) - parseFloat(that.row(0)),
			parseFloat(this.row(1)) * parseFloat(that.row(1)),
			parseFloat(this.row(2)) - parseFloat(that.row(2)),
			parseFloat(this.row(3)) - parseFloat(that.row(3)));
	}
}

module.exports = Matrix;
