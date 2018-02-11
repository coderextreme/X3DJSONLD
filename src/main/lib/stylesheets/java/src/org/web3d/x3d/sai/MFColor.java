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


/**
 * MFColor specifies zero or more SFColor RGB triples. Each color value is an RGB triple of floating point numbers in the range 0.0 to 1.0. The default value of an uninitialized MFColor field is the empty list. Individual SFColor array values are optionally separated by commas.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#MFColor" target="_blank">SAI Java Specification: B.4.10</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFColorAndMFColor" target="blank">X3D Abstract Specification: 5.3.2 SFColor and MFColor</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface MFColor extends MField
{
    /**
     * Write out the current value of this field into the external valueDestination array.
     *
     * @param valueDestination The array to be filled in with current field values.
     * @throws ArrayIndexOutOfBoundsException The provided valueDestination array was too small.
     */
	public void getValue(float[][] valueDestination);

    /**
     * Write out the current value of this field into the external valueDestination array.
     *
     * @param valueDestination The array to be filled in with current field values.
     * @throws ArrayIndexOutOfBoundsException The provided valueDestination array was too small.
     */
	public void getValue(float[] valueDestination);

    /**
     * <p>
     * Get an individual value from the existing field array.
     * </p><p>
     * If the index is outside the bounds of the current array of data values,
     * an ArrayIndexOutOfBoundsException is thrown.
     * </p>
     * @param index is position of selected value in current array
     * @param valueDestination The array to be filled in with the selected current field value.
     * @throws ArrayIndexOutOfBoundsException The index was outside of the bounds of the current array.
     */
	public void get1Value(int index, float[] valueDestination);

    /**
     * Assign a new value to this field.
     * @param numColors The number of 3-tuple RGB colors in the newValue array
     * @param newValue The newValue to set
     */	
	public void setValue(int numColors, float[] newValue);

    /**
     * Assign a new value to this field.
     * @param numColors The number of 3-tuple RGB colors in the newValue array
     * @param newValue The newValue to set
     */	
	public void setValue(int numColors, float[][] newValue);

    /**
     * Replace a single value at the appropriate location in the existing value array.
	 * Size of the current underlying value array does not change.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColor tuple size of <i>3</i>.
	 * @param index is position of selected value in current array
     * @param newValue provides new value to apply
     */
	public void set1Value(int index, float[] newValue);

    /**
     * Places a new value at the end of the existing value array, increasing the field length accordingly.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColor tuple size of <i>3</i>.
	 * @param newValue The newValue to append
     */
	public void append(float[] newValue);

    /**
     * Insert a new value prior to the index location in the existing value array, increasing the field length accordingly.
     * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColor tuple size of <i>3</i>.
	 * @param index The position for the inserted value in the current array
     * @param newValue The newValue to insert
     */
	public void insertValue(int index, float[] newValue);
}
