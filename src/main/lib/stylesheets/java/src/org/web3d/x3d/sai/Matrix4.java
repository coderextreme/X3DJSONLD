/*
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (http://www.web3D.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

package org.web3d.x3d.sai;

import java.util.*;

/**
 * Describes a 4x4 Matrix as required by the SAIMatrix abstract type.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#Matrix4" target="_blank">SAI Java Specification: B.5.5 Matrix4</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIMatrix" target="blank">SAI Abstract Specification: 5.2.20 SAIMatrix</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#Matrix4" target="_blank">X3D Tooltips: Matrix4</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface Matrix4
{
    /* TODO: remove constructor definition from interface specification
	public Matrix4();
     */

	public void setIdentity();

	public void set(int row, int column);

	public float get(int row, int column);

//	public void setTransform(SFVec3f translation, // TODO incompatible with double types
//		SFRotation rotation,
//		SFVec3f scale,
//		SFRotation scaleOrientation,
//		SFVec3f center);

//	public void getTransform(SFVec3f translation, // TODO incompatible with double types
//		SFRotation rotation,
//		SFVec3f scale);

	public Matrix4 inverse();

	public Matrix4 transpose();

	public Matrix4 multiplyLeft(Matrix4 matrix4x4);

	public Matrix4 multiplyRight(Matrix4 matrix4x4);

//	public Matrix3 multiplyColVector(SFVec3f vec3f); // TODO SFVec4f ?  // TODO incompatible with double types

//	public Matrix3 multiplyColVector(SFVec3f vec3f); // TODO SFVec4f ?  // TODO incompatible with double types
}
