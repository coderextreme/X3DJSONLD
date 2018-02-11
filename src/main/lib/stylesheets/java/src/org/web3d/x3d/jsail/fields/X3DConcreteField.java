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

package org.web3d.x3d.jsail.fields;

import java.util.ArrayList;
import org.web3d.x3d.sai.X3DFieldEventListener;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.*; // again making sure #2

/**
 * Concrete implementation class corresponding to X3DField.
 * 
 * <br><br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public abstract class X3DConcreteField implements org.web3d.x3d.sai.X3DField
{
	// ==== Member value declarations are encapsulated and private, using preferred Java types for concretes library ====
										
	private boolean readable = true;
						
	private boolean writable = true;
						
	private ArrayList<X3DFieldEventListener> eventListenerList = new ArrayList<>();
		
	/** Results log of local validation. */
	protected static StringBuilder validationResult = new StringBuilder();
				
	/** Get output of results from prior validation, if any
	 * @return validation results (if any)
	 */		
	public String getValidationResult()
	{
		return validationResult.toString();
	}
	/** WARNING not implemented
	 */
	public X3DConcreteFieldDefinition getDefinition()
	{
		return null; // TODO
	}

	/** Check whether field is readable, default /true/
	 * @see org.web3d.x3d.jsail.Core.fieldObject#getAccessType()
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#accessType">X3D Tooltips: accessType</a>
	 */
	@Override
	public boolean isReadable()
	{
		return readable;
	}

	/** Set whether field is readable
	 * @param newValue new status for readable
	 * @see org.web3d.x3d.jsail.Core.fieldObject#getAccessType()
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#accessType">X3D Tooltips: accessType</a>
	 */
	public void setReadable(boolean newValue)
	{
		readable = newValue;
	}

	/** Check whether field is writable, default /true/
	 * @see org.web3d.x3d.jsail.Core.fieldObject#getAccessType()
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#accessType">X3D Tooltips: accessType</a>
	 */
	@Override
	public boolean isWritable()
	{
		return writable;
	}

	/** Set whether field is writable
	 * @param newValue new status for writable
	 * @see org.web3d.x3d.jsail.Core.fieldObject#getAccessType()
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#accessType">X3D Tooltips: accessType</a>
	 */	
	public void setWritable(boolean newValue)
	{
		writable = newValue;
	}

	/** WARNING not tested */
	@Override
	public void addX3DEventListener(X3DFieldEventListener newListener)
	{
		eventListenerList.add(newListener);
	}

	/** WARNING not tested */
	@Override
	public void removeX3DEventListener(X3DFieldEventListener listener)
	{
		eventListenerList.remove(listener);
	}
						
	/**
	 * Compute tuple size for given type (for example, SFVec3f and MFVec3f have tupleSize of 3).
	 * @param fieldType of interest
	 * @return tuple size
	 */
	public static int getTupleSize(String fieldType)
	{
		if      (fieldType.equals(fieldObject.TYPE_SFBOOL)   || fieldType.equals(fieldObject.TYPE_MFBOOL)   || 
			     fieldType.equals(fieldObject.TYPE_SFINT32)  || fieldType.equals(fieldObject.TYPE_MFINT32)  || 
			     fieldType.equals(fieldObject.TYPE_SFFLOAT)  || fieldType.equals(fieldObject.TYPE_MFFLOAT)  || 
			     fieldType.equals(fieldObject.TYPE_SFDOUBLE) || fieldType.equals(fieldObject.TYPE_MFDOUBLE) || 
			     fieldType.equals(fieldObject.TYPE_SFSTRING) || fieldType.equals(fieldObject.TYPE_MFSTRING) || 
			     fieldType.equals(fieldObject.TYPE_SFTIME)   || fieldType.equals(fieldObject.TYPE_MFTIME)   || 
			     fieldType.equals(fieldObject.TYPE_SFIMAGE)  || fieldType.equals(fieldObject.TYPE_MFIMAGE)  || 
			     fieldType.equals(fieldObject.TYPE_SFNODE)   || fieldType.equals(fieldObject.TYPE_MFNODE))
		{
			return 1;
		}
		else if (fieldType.equals(fieldObject.TYPE_SFVEC2F)  || fieldType.equals(fieldObject.TYPE_MFVEC2F)   || 
			     fieldType.equals(fieldObject.TYPE_SFVEC2D)  || fieldType.equals(fieldObject.TYPE_MFVEC2D))
		{
			return 2;
		}
		else if (fieldType.equals(fieldObject.TYPE_SFCOLOR)  || fieldType.equals(fieldObject.TYPE_MFCOLOR)     || 
			     fieldType.equals(fieldObject.TYPE_SFVEC3F)  || fieldType.equals(fieldObject.TYPE_MFVEC3F)   || 
			     fieldType.equals(fieldObject.TYPE_SFVEC3D)  || fieldType.equals(fieldObject.TYPE_MFVEC3D))
		{
			return 3;
		}
		else if (fieldType.equals(fieldObject.TYPE_SFCOLORRGBA) || fieldType.equals(fieldObject.TYPE_MFCOLORRGBA) || 
			     fieldType.equals(fieldObject.TYPE_SFROTATION)  || fieldType.equals(fieldObject.TYPE_MFROTATION)  || 
			     fieldType.equals(fieldObject.TYPE_SFVEC4F)     || fieldType.equals(fieldObject.TYPE_MFVEC4F)   || 
			     fieldType.equals(fieldObject.TYPE_SFVEC4D)     || fieldType.equals(fieldObject.TYPE_MFVEC4D))
		{
			return 4;
		}
		else if (fieldType.equals(fieldObject.TYPE_SFMATRIX3F)  || fieldType.equals(fieldObject.TYPE_MFMATRIX3F) || 
			     fieldType.equals(fieldObject.TYPE_SFMATRIX3D)  || fieldType.equals(fieldObject.TYPE_MFMATRIX3D))
		{
			return 9;
		}
		else if (fieldType.equals(fieldObject.TYPE_SFMATRIX4F)  || fieldType.equals(fieldObject.TYPE_MFMATRIX4F) || 
			     fieldType.equals(fieldObject.TYPE_SFMATRIX4D)  || fieldType.equals(fieldObject.TYPE_MFMATRIX4D))
		{
			return 16;
		}
		else
		{
			String errorNotice = "Invalid fieldType provided for getTupleSize(" + fieldType + ")";
			throw new InvalidFieldValueException(errorNotice);
		}
	}

	/* Validation is handled by concrete subclasses
	@Override
	public String validate()
	{
		return ""; // TODO
	}
	*/
		
	/** Initialization sets default initial value.
	 */
	abstract public void initialize(); // must be overridden
		
	/** Provides Class corresponding to getValue() results.
	 * @return reflection Class for this field's values
	abstract public Class getReflectionClass(); // must be overridden
	 */

}
