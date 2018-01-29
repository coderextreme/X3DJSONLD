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


import org.web3d.x3d.sai.Core.X3DNode;
import org.web3d.x3d.sai.Core.*;  // making sure #0

/**
 * The MFNode field specifies zero or more nodes; the default value of an MFNode field is the empty list.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#MFNode" target="_blank">SAI Java Specification: B.4.30</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAINode" target="blank">SAI Abstract Specification: 5.2.22 SAINode</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFNodeAndMFNode" target="blank">X3D Abstract Specification: 5.3.12 SFNode and MFNode</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface MFNode extends MField
{
	/**
	 * Write the current value of the field out to the provided copiedNodes array.
	 *
	 * @param copiedNodes The array to be filled in with current field values.
	 * @throws ArrayIndexOutOfBoundsException The provided copiedNodes array was too small
	 */
	public void getValue(X3DNode[] copiedNodes);

	/**
	 * <p>
	 * Get an individual value from the existing field array.
	 * </p>
	 * <p>
	 * If the index is outside the bounds of the current array of data values,
	 * an ArrayIndexOutOfBoundsException is thrown.
	 * </p>
	 * @param index is position of selected value in current array
	 * @return The selected value
	 * @throws ArrayIndexOutOfBoundsException The index was outside of the bounds of the current array.
	 */
	public X3DNode get1Value(int index);

    /**
     * Assign an array subset to this field.
     * @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
     * @param newValue The replacement value array to (potentially) slice and then assign.
     */	
	public void setValue(int size, X3DNode[] newValue);

    /**
     * Replace a single value at the appropriate location in the existing value array.
	 * Size of the current underlying value array does not change.
     * @param imageIndex the index of the selected image
     * @param newValue provides new value to apply
     */
	public void set1Value(int imageIndex, X3DNode newValue);

    /**
     * Places a new value at the end of the existing value array, increasing the field length accordingly.
     * @param newValue The newValue to append
     */
	public void append(X3DNode newValue);

    /**
     * Insert a new value prior to the imageIndex location in the existing value array, increasing the field length accordingly.
     * @param imageIndex the index of the selected image
     * @param newValue The newValue to insert
     */
	public void insertValue(int imageIndex, X3DNode newValue);
}
