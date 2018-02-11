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

import org.web3d.x3d.jsail.ConfigurationProperties;
import org.web3d.x3d.sai.*;  // making sure #2

/**
 * Methods for constants corresponding to each X3D field type and accessType.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#FieldTypes" target="blank">X3D Abstract Specification: 5.3 Field types</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class X3DConcreteFieldTypes implements org.web3d.x3d.sai.X3DFieldTypes
{
		/**
		 * Convert accessType value to string
		 * @param accessType the accessType enumeration value to convert
		 * @return string name for accessType value */
		public static String toAccessTypeString (int accessType)
		{
			switch (accessType)
			{
				case INPUT_ONLY:
					return "inputOnly";
				case INITIALIZE_ONLY:
					return "initializeOnly";
				case INPUT_OUTPUT:
					return "inputOutput";
				case OUTPUT_ONLY:
					return "outputOnly";
				default:
					String message = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE +" "  + accessType;
					System.err.println ("X3DFieldTypes.toString(" + accessType + ") " + message);
					return message; // TODO throw exception?
			}
		}
		/**
		 * Convert fieldType value to string
		 * @param fieldType the fieldType enumeration value to convert
		 * @return string name for fieldType value */
		public static String toFieldString (int fieldType)
		{
			switch (fieldType)
			{
				case SFBOOL:
					return "SFBool";
				case MFBOOL:
					return "MFBool";
				case SFINT32:
					return "SFInt32";
				case MFINT32:
					return "MFInt32";
				case SFFLOAT:
					return "SFFloat";
				case MFFLOAT:
					return "MFFloat";
				case SFDOUBLE:
					return "SFDouble";
				case MFDOUBLE:
					return "MFDouble";
				case SFTIME:
					return "SFTime";
				case MFTIME:
					return "MFTime";
				case SFNODE:
					return "SFNode";
				case MFNODE:
					return "MFNode";
				case SFVEC2F:
					return "SFVec2f";
				case MFVEC2F:
					return "MFVec2f";
				case SFVEC3F:
					return "SFVec3f";
				case MFVEC3F:
					return "MFVec3f";
				case SFVEC3D:
					return "SFVec3d";
				case MFVEC3D:
					return "MFVec3d";
				case SFROTATION:
					return "SFRotation";
				case MFROTATION:
					return "MFRotation";
				case SFCOLOR:
					return "SFColor";
				case MFCOLOR:
					return "MFColor";
				case SFCOLORRGBA:
					return "SFColorRGBA";
				case MFCOLORRGBA:
					return "MFColorRGBA";
				case SFIMAGE:
					return "SFImage";
				case MFIMAGE:
					return "MFImage";
				case SFSTRING:
					return "SFString";
				case MFSTRING:
					return "MFString";

				// added in v3.3
				case SFVEC2D:
					return "SFVec2d";
				case MFVEC2D:
					return "MFVec2d";
				case SFVEC4F:
					return "SFVec4f";
				case MFVEC4F:
					return "MFVec4f";
				case SFVEC4D:
					return "SFVec4d";
				case MFVEC4D:
					return "MFVec4d";
				case SFMATRIX3D:
					return "SFMatrix3d";
				case MFMATRIX3D:
					return "MFMatrix3d";
				case SFMATRIX3F:
					return "SFMatrix3f";
				case MFMATRIX3F:
					return "MFMatrix3f";
				case SFMATRIX4D:
					return "SFMatrix4d";
				case MFMATRIX4D:
					return "MFMatrix4d";
				case SFMATRIX4F:
					return "SFMatrix4f";
				case MFMATRIX4F:
					return "MFMatrix4f";
				default:
					String message = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE +" "  + fieldType;
					System.err.println ("X3DFieldTypes.toString(" + fieldType + ") " + message);
					return message; // TODO throw exception?
			}
		}
	}
