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

package org.web3d.x3d.jsail.Texturing;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Texturing.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * <i>X3D node tooltip</i>: TextureProperties allows precise fine-grained control over application of image textures to geometry.
 * <ul>
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='Shape' level='2'/&amp;gt; </li> 
 *  <li> <i>Hint:</i>  Texture mapping <br> <a href="https://en.wikipedia.org/wiki/Texture_mapping" target="_blank">https://en.wikipedia.org/wiki/Texture_mapping</a> </li> 
 * </ul>
 * <br>
 * Note that {@linkplain SFColorObject#ALICEBLUE SFColorObject} provides a variety of color constants.
 * <br>

 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#TextureProperties" target="blank">X3D Abstract Specification: TextureProperties</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#TextureProperties" target="_blank">X3D Tooltips: TextureProperties</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Images" target="_blank">X3D Scene Authoring Hints: Images</a>
 */
public class TexturePropertiesObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Texturing.TextureProperties
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float anisotropicDegree; // SFFloat

	private float[] borderColor; // SFColorRGBA

	private int borderWidth; // SFInt32

	private String boundaryModeR; // SFString

	private String boundaryModeS; // SFString

	private String boundaryModeT; // SFString

	private boolean generateMipMaps; // SFBool

	private String magnificationFilter; // SFString

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private String minificationFilter; // SFString

	private String textureCompression; // SFString

	private float texturePriority; // SFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>boundaryModeR</i> can equal this enumeration value <i>"CLAMP"</i> (Java syntax) or <i>CLAMP</i> (XML syntax). */
	public static final String BOUNDARYMODER_CLAMP = "CLAMP";

	/** SFString field named <i>boundaryModeR</i> can equal this enumeration value <i>"CLAMP_TO_EDGE"</i> (Java syntax) or <i>CLAMP_TO_EDGE</i> (XML syntax). */
	public static final String BOUNDARYMODER_CLAMP_TO_EDGE = "CLAMP_TO_EDGE";

	/** SFString field named <i>boundaryModeR</i> can equal this enumeration value <i>"CLAMP_TO_BOUNDARY"</i> (Java syntax) or <i>CLAMP_TO_BOUNDARY</i> (XML syntax). */
	public static final String BOUNDARYMODER_CLAMP_TO_BOUNDARY = "CLAMP_TO_BOUNDARY";

	/** SFString field named <i>boundaryModeR</i> can equal this enumeration value <i>"MIRRORED_REPEAT"</i> (Java syntax) or <i>MIRRORED_REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODER_MIRRORED_REPEAT = "MIRRORED_REPEAT";

	/** SFString field named <i>boundaryModeR</i> can equal this enumeration value <i>"REPEAT"</i> (Java syntax) or <i>REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODER_REPEAT = "REPEAT";

	/** SFString field named <i>boundaryModeS</i> can equal this enumeration value <i>"CLAMP"</i> (Java syntax) or <i>CLAMP</i> (XML syntax). */
	public static final String BOUNDARYMODES_CLAMP = "CLAMP";

	/** SFString field named <i>boundaryModeS</i> can equal this enumeration value <i>"CLAMP_TO_EDGE"</i> (Java syntax) or <i>CLAMP_TO_EDGE</i> (XML syntax). */
	public static final String BOUNDARYMODES_CLAMP_TO_EDGE = "CLAMP_TO_EDGE";

	/** SFString field named <i>boundaryModeS</i> can equal this enumeration value <i>"CLAMP_TO_BOUNDARY"</i> (Java syntax) or <i>CLAMP_TO_BOUNDARY</i> (XML syntax). */
	public static final String BOUNDARYMODES_CLAMP_TO_BOUNDARY = "CLAMP_TO_BOUNDARY";

	/** SFString field named <i>boundaryModeS</i> can equal this enumeration value <i>"MIRRORED_REPEAT"</i> (Java syntax) or <i>MIRRORED_REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODES_MIRRORED_REPEAT = "MIRRORED_REPEAT";

	/** SFString field named <i>boundaryModeS</i> can equal this enumeration value <i>"REPEAT"</i> (Java syntax) or <i>REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODES_REPEAT = "REPEAT";

	/** SFString field named <i>boundaryModeT</i> can equal this enumeration value <i>"CLAMP"</i> (Java syntax) or <i>CLAMP</i> (XML syntax). */
	public static final String BOUNDARYMODET_CLAMP = "CLAMP";

	/** SFString field named <i>boundaryModeT</i> can equal this enumeration value <i>"CLAMP_TO_EDGE"</i> (Java syntax) or <i>CLAMP_TO_EDGE</i> (XML syntax). */
	public static final String BOUNDARYMODET_CLAMP_TO_EDGE = "CLAMP_TO_EDGE";

	/** SFString field named <i>boundaryModeT</i> can equal this enumeration value <i>"CLAMP_TO_BOUNDARY"</i> (Java syntax) or <i>CLAMP_TO_BOUNDARY</i> (XML syntax). */
	public static final String BOUNDARYMODET_CLAMP_TO_BOUNDARY = "CLAMP_TO_BOUNDARY";

	/** SFString field named <i>boundaryModeT</i> can equal this enumeration value <i>"MIRRORED_REPEAT"</i> (Java syntax) or <i>MIRRORED_REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODET_MIRRORED_REPEAT = "MIRRORED_REPEAT";

	/** SFString field named <i>boundaryModeT</i> can equal this enumeration value <i>"REPEAT"</i> (Java syntax) or <i>REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODET_REPEAT = "REPEAT";

	/** SFString field named <i>magnificationFilter</i> can equal this enumeration value <i>"AVG_PIXEL"</i> (Java syntax) or <i>AVG_PIXEL</i> (XML syntax). */
	public static final String MAGNIFICATIONFILTER_AVG_PIXEL = "AVG_PIXEL";

	/** SFString field named <i>magnificationFilter</i> can equal this enumeration value <i>"DEFAULT"</i> (Java syntax) or <i>DEFAULT</i> (XML syntax). */
	public static final String MAGNIFICATIONFILTER_DEFAULT = "DEFAULT";

	/** SFString field named <i>magnificationFilter</i> can equal this enumeration value <i>"FASTEST"</i> (Java syntax) or <i>FASTEST</i> (XML syntax). */
	public static final String MAGNIFICATIONFILTER_FASTEST = "FASTEST";

	/** SFString field named <i>magnificationFilter</i> can equal this enumeration value <i>"NEAREST_PIXEL"</i> (Java syntax) or <i>NEAREST_PIXEL</i> (XML syntax). */
	public static final String MAGNIFICATIONFILTER_NEAREST_PIXEL = "NEAREST_PIXEL";

	/** SFString field named <i>magnificationFilter</i> can equal this enumeration value <i>"NICEST"</i> (Java syntax) or <i>NICEST</i> (XML syntax). */
	public static final String MAGNIFICATIONFILTER_NICEST = "NICEST";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"AVG_PIXEL"</i> (Java syntax) or <i>AVG_PIXEL</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_AVG_PIXEL = "AVG_PIXEL";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"AVG_PIXEL_AVG_MIPMAP"</i> (Java syntax) or <i>AVG_PIXEL_AVG_MIPMAP</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_AVG_PIXEL_AVG_MIPMAP = "AVG_PIXEL_AVG_MIPMAP";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"AVG_PIXEL_NEAREST_MIPMAP"</i> (Java syntax) or <i>AVG_PIXEL_NEAREST_MIPMAP</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_AVG_PIXEL_NEAREST_MIPMAP = "AVG_PIXEL_NEAREST_MIPMAP";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"DEFAULT"</i> (Java syntax) or <i>DEFAULT</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_DEFAULT = "DEFAULT";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"FASTEST"</i> (Java syntax) or <i>FASTEST</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_FASTEST = "FASTEST";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"NEAREST_PIXEL"</i> (Java syntax) or <i>NEAREST_PIXEL</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_NEAREST_PIXEL = "NEAREST_PIXEL";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"NEAREST_PIXEL_AVG_MIPMAP"</i> (Java syntax) or <i>NEAREST_PIXEL_AVG_MIPMAP</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_NEAREST_PIXEL_AVG_MIPMAP = "NEAREST_PIXEL_AVG_MIPMAP";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"NEAREST_PIXEL_NEAREST_MIPMAP"</i> (Java syntax) or <i>NEAREST_PIXEL_NEAREST_MIPMAP</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_NEAREST_PIXEL_NEAREST_MIPMAP = "NEAREST_PIXEL_NEAREST_MIPMAP";

	/** SFString field named <i>minificationFilter</i> can equal this enumeration value <i>"NICEST"</i> (Java syntax) or <i>NICEST</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_NICEST = "NICEST";

	/** SFString field named <i>textureCompression</i> can equal this enumeration value <i>"DEFAULT"</i> (Java syntax) or <i>DEFAULT</i> (XML syntax). */
	public static final String TEXTURECOMPRESSION_DEFAULT = "DEFAULT";

	/** SFString field named <i>textureCompression</i> can equal this enumeration value <i>"FASTEST"</i> (Java syntax) or <i>FASTEST</i> (XML syntax). */
	public static final String TEXTURECOMPRESSION_FASTEST = "FASTEST";

	/** SFString field named <i>textureCompression</i> can equal this enumeration value <i>"HIGH"</i> (Java syntax) or <i>HIGH</i> (XML syntax). */
	public static final String TEXTURECOMPRESSION_HIGH = "HIGH";

	/** SFString field named <i>textureCompression</i> can equal this enumeration value <i>"LOW"</i> (Java syntax) or <i>LOW</i> (XML syntax). */
	public static final String TEXTURECOMPRESSION_LOW = "LOW";

	/** SFString field named <i>textureCompression</i> can equal this enumeration value <i>"MEDIUM"</i> (Java syntax) or <i>MEDIUM</i> (XML syntax). */
	public static final String TEXTURECOMPRESSION_MEDIUM = "MEDIUM";

	/** SFString field named <i>textureCompression</i> can equal this enumeration value <i>"NICEST"</i> (Java syntax) or <i>NICEST</i> (XML syntax). */
	public static final String TEXTURECOMPRESSION_NICEST = "NICEST";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>TextureProperties</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "TextureProperties";

	/** Provides name of this element: <i>TextureProperties</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>TextureProperties</i> element: <i>Texturing</i> */
	public static final String COMPONENT = "Texturing";

	/** Defines X3D component for the <i>TextureProperties</i> element: <i>Texturing</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Texturing</i> component level for this element: <i>2</i> */
	public static final int LEVEL = 2;

	/** Provides default X3D component level for this element: <i>2</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFFloat field named <i>anisotropicDegree</i> has default value <i>1f</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final float ANISOTROPICDEGREE_DEFAULT_VALUE = 1f;

	/** SFColorRGBA field named <i>borderColor</i> has default value <i>{0f,0f,0f,0f}</i> (Java syntax) or <i>0 0 0 0</i> (XML syntax). */
	public static final float[] BORDERCOLOR_DEFAULT_VALUE = {0f,0f,0f,0f};

	/** SFInt32 field named <i>borderWidth</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int BORDERWIDTH_DEFAULT_VALUE = 0;

	/** SFString field named <i>boundaryModeR</i> has default value <i>"REPEAT"</i> (Java syntax) or <i>REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODER_DEFAULT_VALUE = "REPEAT";

	/** SFString field named <i>boundaryModeS</i> has default value <i>"REPEAT"</i> (Java syntax) or <i>REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODES_DEFAULT_VALUE = "REPEAT";

	/** SFString field named <i>boundaryModeT</i> has default value <i>"REPEAT"</i> (Java syntax) or <i>REPEAT</i> (XML syntax). */
	public static final String BOUNDARYMODET_DEFAULT_VALUE = "REPEAT";

	/** SFBool field named <i>generateMipMaps</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean GENERATEMIPMAPS_DEFAULT_VALUE = false;

	/** SFString field named <i>magnificationFilter</i> has default value <i>"FASTEST"</i> (Java syntax) or <i>FASTEST</i> (XML syntax). */
	public static final String MAGNIFICATIONFILTER_DEFAULT_VALUE = "FASTEST";

	/** SFString field named <i>minificationFilter</i> has default value <i>"FASTEST"</i> (Java syntax) or <i>FASTEST</i> (XML syntax). */
	public static final String MINIFICATIONFILTER_DEFAULT_VALUE = "FASTEST";

	/** SFString field named <i>textureCompression</i> has default value <i>"FASTEST"</i> (Java syntax) or <i>FASTEST</i> (XML syntax). */
	public static final String TEXTURECOMPRESSION_DEFAULT_VALUE = "FASTEST";

	/** SFFloat field named <i>texturePriority</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float TEXTUREPRIORITY_DEFAULT_VALUE = 0f;

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D node
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_TYPE
	 * @return X3D type (SFvec3f etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE if not recognized
	 */
	@Override		
	public String getFieldType(String fieldName)
	{
		String result;

		switch (fieldName)
		{
			// String constants for exact field type values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing type-matching checks
											
			case "containerField":
				result = "SFString";
				break;
			case "anisotropicDegree":
				result = "SFFloat";
				break;
			case "borderColor":
				result = "SFColorRGBA";
				break;
			case "borderWidth":
				result = "SFInt32";
				break;
			case "boundaryModeR":
				result = "SFString";
				break;
			case "boundaryModeS":
				result = "SFString";
				break;
			case "boundaryModeT":
				result = "SFString";
				break;
			case "generateMipMaps":
				result = "SFBool";
				break;
			case "magnificationFilter":
				result = "SFString";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "minificationFilter":
				result = "SFString";
				break;
			case "textureCompression":
				result = "SFString";
				break;
			case "texturePriority":
				result = "SFFloat";
				break;
			case "DEF":
				result = "SFString";
				break;
			case "USE":
				result = "SFString";
				break;
			case "class":
				result = "SFString";
				break;
			default:
			{
				// if fieldName has a prefix "set_" prepended (or a suffix "_changed" appended) then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getFieldType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getFieldType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Indicate accessType corresponding to given fieldName.
	 * @param fieldName name of field in this X3D node
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_ACCESSTYPE
	 * @return X3D accessType (inputOnly etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE if not recognized
	 */
	@Override
	public String getAccessType(String fieldName)
	{
		String result; // set by following checks
		switch (fieldName)
		{
			// String constants for field accessType values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing accessType-matching checks
			case "anisotropicDegree":
				result = "inputOutput";
				break;
			case "borderColor":
				result = "inputOutput";
				break;
			case "borderWidth":
				result = "inputOutput";
				break;
			case "boundaryModeR":
				result = "inputOutput";
				break;
			case "boundaryModeS":
				result = "inputOutput";
				break;
			case "boundaryModeT":
				result = "inputOutput";
				break;
			case "generateMipMaps":
				result = "initializeOnly";
				break;
			case "magnificationFilter":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "minificationFilter":
				result = "inputOutput";
				break;
			case "textureCompression":
				result = "inputOutput";
				break;
			case "texturePriority":
				result = "inputOutput";
				break;
			case "DEF":
				result = "inputOutput";
				break;
			case "USE":
				result = "inputOutput";
				break;
			case "class":
				result = "inputOutput";
				break;
			default:
			{
				// if user has added a prefix "set_" or suffix "_changed" then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getAccessType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getAccessType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** containerField describes typical field relationship of a node to its parent.
	 * Usage is not ordinarily needed when using this API, default value is provided for informational purposes. */
	String containerField_DEFAULT_VALUE = "textureProperties";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFFloat field named <i>anisotropicDegree</i>. */
	public static final String fromField_ANISOTROPICDEGREE = "anisotropicDegree";

	/** toField ROUTE name for SFFloat field named <i>anisotropicDegree</i>. */
	public static final String toField_ANISOTROPICDEGREE = "anisotropicDegree";

	/** fromField ROUTE name for SFColorRGBA field named <i>borderColor</i>. */
	public static final String fromField_BORDERCOLOR = "borderColor";

	/** toField ROUTE name for SFColorRGBA field named <i>borderColor</i>. */
	public static final String toField_BORDERCOLOR = "borderColor";

	/** fromField ROUTE name for SFInt32 field named <i>borderWidth</i>. */
	public static final String fromField_BORDERWIDTH = "borderWidth";

	/** toField ROUTE name for SFInt32 field named <i>borderWidth</i>. */
	public static final String toField_BORDERWIDTH = "borderWidth";

	/** fromField ROUTE name for SFString field named <i>boundaryModeR</i>. */
	public static final String fromField_BOUNDARYMODER = "boundaryModeR";

	/** toField ROUTE name for SFString field named <i>boundaryModeR</i>. */
	public static final String toField_BOUNDARYMODER = "boundaryModeR";

	/** fromField ROUTE name for SFString field named <i>boundaryModeS</i>. */
	public static final String fromField_BOUNDARYMODES = "boundaryModeS";

	/** toField ROUTE name for SFString field named <i>boundaryModeS</i>. */
	public static final String toField_BOUNDARYMODES = "boundaryModeS";

	/** fromField ROUTE name for SFString field named <i>boundaryModeT</i>. */
	public static final String fromField_BOUNDARYMODET = "boundaryModeT";

	/** toField ROUTE name for SFString field named <i>boundaryModeT</i>. */
	public static final String toField_BOUNDARYMODET = "boundaryModeT";

	/** fromField ROUTE name for SFString field named <i>magnificationFilter</i>. */
	public static final String fromField_MAGNIFICATIONFILTER = "magnificationFilter";

	/** toField ROUTE name for SFString field named <i>magnificationFilter</i>. */
	public static final String toField_MAGNIFICATIONFILTER = "magnificationFilter";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFString field named <i>minificationFilter</i>. */
	public static final String fromField_MINIFICATIONFILTER = "minificationFilter";

	/** toField ROUTE name for SFString field named <i>minificationFilter</i>. */
	public static final String toField_MINIFICATIONFILTER = "minificationFilter";

	/** fromField ROUTE name for SFString field named <i>textureCompression</i>. */
	public static final String fromField_TEXTURECOMPRESSION = "textureCompression";

	/** toField ROUTE name for SFString field named <i>textureCompression</i>. */
	public static final String toField_TEXTURECOMPRESSION = "textureCompression";

	/** fromField ROUTE name for SFFloat field named <i>texturePriority</i>. */
	public static final String fromField_TEXTUREPRIORITY = "texturePriority";

	/** toField ROUTE name for SFFloat field named <i>texturePriority</i>. */
	public static final String toField_TEXTUREPRIORITY = "texturePriority";

	/** Constructor for TexturePropertiesObject to initialize member variables with default values. */
	public TexturePropertiesObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "textureProperties" };

		anisotropicDegree = ANISOTROPICDEGREE_DEFAULT_VALUE;
		borderColor = BORDERCOLOR_DEFAULT_VALUE;
		borderWidth = BORDERWIDTH_DEFAULT_VALUE;
		boundaryModeR = BOUNDARYMODER_DEFAULT_VALUE;
		boundaryModeS = BOUNDARYMODES_DEFAULT_VALUE;
		boundaryModeT = BOUNDARYMODET_DEFAULT_VALUE;
		generateMipMaps = GENERATEMIPMAPS_DEFAULT_VALUE;
		magnificationFilter = MAGNIFICATIONFILTER_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		minificationFilter = MINIFICATIONFILTER_DEFAULT_VALUE;
		textureCompression = TEXTURECOMPRESSION_DEFAULT_VALUE;
		texturePriority = TEXTUREPRIORITY_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value within allowed range of [1,infinity) from inputOutput SFFloat field named <i>anisotropicDegree</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [1,infinity) anisotropicDegree defines minimum degree of anisotropy to account for in texture filtering (1=no effect for symmetric filtering, otherwise provide higher value). At least 2-to-1 anisotropy is often supported in low-level graphics rendering software and hardware, relative to horizontal and vertical directions.
 * <ul>
 *  <li> <i>Hint:</i> Anisotropy indicates directional dependence of properties. <br> <a href="https://en.wikipedia.org/wiki/Anisotropy" target="_blank">https://en.wikipedia.org/wiki/Anisotropy</a> </li> 
 *  <li> <i>Hint:</i>  OpenGL EXT_texture_filter_anisotropic <br> <a href="https://www.khronos.org/registry/OpenGL/extensions/EXT/EXT_texture_filter_anisotropic.txt" target="_blank">https://www.khronos.org/registry/OpenGL/extensions/EXT/EXT_texture_filter_anisotropic.txt</a> </li> 
 * </ul>
	 * @return value of anisotropicDegree field
	 */
	@Override
	public float getAnisotropicDegree()
	{
		return anisotropicDegree;
	}

	/**
	 * Assign float value within allowed range of [1,infinity) to inputOutput SFFloat field named <i>anisotropicDegree</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [1,infinity) anisotropicDegree defines minimum degree of anisotropy to account for in texture filtering (1=no effect for symmetric filtering, otherwise provide higher value). At least 2-to-1 anisotropy is often supported in low-level graphics rendering software and hardware, relative to horizontal and vertical directions. Hint: Anisotropy indicates directional dependence of properties. https://en.wikipedia.org/wiki/Anisotropy Hint: OpenGL EXT_texture_filter_anisotropic https://www.khronos.org/registry/OpenGL/extensions/EXT/EXT_texture_filter_anisotropic.txt
	 * @param newValue is new value for the anisotropicDegree field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setAnisotropicDegree(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 1f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties anisotropicDegree newValue=" + newValue + " has component value less than restriction minInclusive=1");
            }
		anisotropicDegree = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat anisotropicDegree field, similar to {@link #setAnisotropicDegree(float)}.
	 * @param newValue is new value for the anisotropicDegree field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setAnisotropicDegree(SFFloatObject newValue)
	{
		setAnisotropicDegree(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 4-tuple float results using RGBA values [0..1] using RGBA values [0..1] from inputOutput SFColorRGBA field named <i>borderColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] borderColor defines border pixel color.
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of borderColor field
	 */
	@Override
	public float[] getBorderColor()
	{
		return borderColor;
	}

	/**
	 * Assign 4-tuple float array using RGBA values [0..1] using RGBA values [0..1] to inputOutput SFColorRGBA field named <i>borderColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] borderColor defines border pixel color. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the borderColor field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setBorderColor(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties borderColor newValue=" + SFColorRGBAObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		borderColor = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFColorRGBA borderColor field, similar to {@link #setBorderColor(float[])}.
	 * @param newValue is new value for the borderColor field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setBorderColor(SFColorRGBAObject newValue)
	{
		setBorderColor(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFColorRGBA borderColor field, similar to {@link #setBorderColor(float[])}.

	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @param alpha fourth component for opaqueness (1 - transparency)

	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setBorderColor(float red, float green, float blue, float alpha)
	{
		setBorderColor(new float[] {red, green, blue, alpha});
		return this;
	}
	/**
	 * Provide int value within allowed range of [0,infinity) from inputOutput SFInt32 field named <i>borderWidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,infinity) borderWidth number of pixels for texture border.  * <br>

	 * @return value of borderWidth field
	 */
	@Override
	public int getBorderWidth()
	{
		return borderWidth;
	}

	/**
	 * Assign int value within allowed range of [0,infinity) to inputOutput SFInt32 field named <i>borderWidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,infinity) borderWidth number of pixels for texture border.
	 * @param newValue is new value for the borderWidth field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setBorderWidth(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties borderWidth newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		borderWidth = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 borderWidth field, similar to {@link #setBorderWidth(int)}.
	 * @param newValue is new value for the borderWidth field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setBorderWidth(SFInt32Object newValue)
	{
		setBorderWidth(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] from inputOutput SFString field named <i>boundaryModeR</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeR describes handling of texture-coordinate boundaries.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.7 Texture boundary modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes</a> for details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #BOUNDARYMODER_CLAMP CLAMP}, {@link #BOUNDARYMODER_CLAMP_TO_EDGE CLAMP_TO_EDGE}, {@link #BOUNDARYMODER_CLAMP_TO_BOUNDARY CLAMP_TO_BOUNDARY}, {@link #BOUNDARYMODER_MIRRORED_REPEAT MIRRORED_REPEAT}, {@link #BOUNDARYMODER_REPEAT REPEAT}.
	 * @return value of boundaryModeR field
	 */
	@Override
	public String getBoundaryModeR()
	{
		return boundaryModeR;
	}

	/**
	 * Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] to inputOutput SFString field named <i>boundaryModeR</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #BOUNDARYMODER_CLAMP CLAMP}, {@link #BOUNDARYMODER_CLAMP_TO_EDGE CLAMP_TO_EDGE}, {@link #BOUNDARYMODER_CLAMP_TO_BOUNDARY CLAMP_TO_BOUNDARY}, {@link #BOUNDARYMODER_MIRRORED_REPEAT MIRRORED_REPEAT}, {@link #BOUNDARYMODER_REPEAT REPEAT}).
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeR describes handling of texture-coordinate boundaries. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.7 Texture boundary modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes for details.
	 * @param newValue is new value for the boundaryModeR field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setBoundaryModeR(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(BOUNDARYMODER_CLAMP) ||
			newValue.equals(BOUNDARYMODER_CLAMP_TO_EDGE) ||
			newValue.equals(BOUNDARYMODER_CLAMP_TO_BOUNDARY) ||
			newValue.equals(BOUNDARYMODER_MIRRORED_REPEAT) ||
			newValue.equals(BOUNDARYMODER_REPEAT))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties boundaryModeR newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		boundaryModeR = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString boundaryModeR field, similar to {@link #setBoundaryModeR(String)}.
	 * @param newValue is new value for the boundaryModeR field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setBoundaryModeR(SFStringObject newValue)
	{
		setBoundaryModeR(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] from inputOutput SFString field named <i>boundaryModeS</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeS describes handling of texture-coordinate boundaries.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.7 Texture boundary modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes</a> for details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #BOUNDARYMODES_CLAMP CLAMP}, {@link #BOUNDARYMODES_CLAMP_TO_EDGE CLAMP_TO_EDGE}, {@link #BOUNDARYMODES_CLAMP_TO_BOUNDARY CLAMP_TO_BOUNDARY}, {@link #BOUNDARYMODES_MIRRORED_REPEAT MIRRORED_REPEAT}, {@link #BOUNDARYMODES_REPEAT REPEAT}.
	 * @return value of boundaryModeS field
	 */
	@Override
	public String getBoundaryModeS()
	{
		return boundaryModeS;
	}

	/**
	 * Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] to inputOutput SFString field named <i>boundaryModeS</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #BOUNDARYMODES_CLAMP CLAMP}, {@link #BOUNDARYMODES_CLAMP_TO_EDGE CLAMP_TO_EDGE}, {@link #BOUNDARYMODES_CLAMP_TO_BOUNDARY CLAMP_TO_BOUNDARY}, {@link #BOUNDARYMODES_MIRRORED_REPEAT MIRRORED_REPEAT}, {@link #BOUNDARYMODES_REPEAT REPEAT}).
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeS describes handling of texture-coordinate boundaries. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.7 Texture boundary modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes for details.
	 * @param newValue is new value for the boundaryModeS field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setBoundaryModeS(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(BOUNDARYMODES_CLAMP) ||
			newValue.equals(BOUNDARYMODES_CLAMP_TO_EDGE) ||
			newValue.equals(BOUNDARYMODES_CLAMP_TO_BOUNDARY) ||
			newValue.equals(BOUNDARYMODES_MIRRORED_REPEAT) ||
			newValue.equals(BOUNDARYMODES_REPEAT))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties boundaryModeS newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		boundaryModeS = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString boundaryModeS field, similar to {@link #setBoundaryModeS(String)}.
	 * @param newValue is new value for the boundaryModeS field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setBoundaryModeS(SFStringObject newValue)
	{
		setBoundaryModeS(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] from inputOutput SFString field named <i>boundaryModeT</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeT describes handling of texture-coordinate boundaries.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.7 Texture boundary modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes</a> for details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #BOUNDARYMODET_CLAMP CLAMP}, {@link #BOUNDARYMODET_CLAMP_TO_EDGE CLAMP_TO_EDGE}, {@link #BOUNDARYMODET_CLAMP_TO_BOUNDARY CLAMP_TO_BOUNDARY}, {@link #BOUNDARYMODET_MIRRORED_REPEAT MIRRORED_REPEAT}, {@link #BOUNDARYMODET_REPEAT REPEAT}.
	 * @return value of boundaryModeT field
	 */
	@Override
	public String getBoundaryModeT()
	{
		return boundaryModeT;
	}

	/**
	 * Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] to inputOutput SFString field named <i>boundaryModeT</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #BOUNDARYMODET_CLAMP CLAMP}, {@link #BOUNDARYMODET_CLAMP_TO_EDGE CLAMP_TO_EDGE}, {@link #BOUNDARYMODET_CLAMP_TO_BOUNDARY CLAMP_TO_BOUNDARY}, {@link #BOUNDARYMODET_MIRRORED_REPEAT MIRRORED_REPEAT}, {@link #BOUNDARYMODET_REPEAT REPEAT}).
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeT describes handling of texture-coordinate boundaries. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.7 Texture boundary modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes for details.
	 * @param newValue is new value for the boundaryModeT field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setBoundaryModeT(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(BOUNDARYMODET_CLAMP) ||
			newValue.equals(BOUNDARYMODET_CLAMP_TO_EDGE) ||
			newValue.equals(BOUNDARYMODET_CLAMP_TO_BOUNDARY) ||
			newValue.equals(BOUNDARYMODET_MIRRORED_REPEAT) ||
			newValue.equals(BOUNDARYMODET_REPEAT))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties boundaryModeT newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		boundaryModeT = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString boundaryModeT field, similar to {@link #setBoundaryModeT(String)}.
	 * @param newValue is new value for the boundaryModeT field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setBoundaryModeT(SFStringObject newValue)
	{
		setBoundaryModeT(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>generateMipMaps</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Determines whether MIPMAPs are generated for texture images.
 * <ul>
 *  <li> <i>Warning:</i> must declare generateMipMaps='true' for minificationFilter modes with MIPMAP in their value. </li> 
 *  <li> <i>Hint:</i> mipmap preprocessing is a low-level rendering technique that can increase rendering speed and reduce aliasing artifacts. </li> 
 *  <li> <i>Hint:</i> Mipmap pyramids are pre-calculated, optimized sequences of images, each of which is a progressively lower resolution representation of the same image. The height and width of each image level in the mipmap is a power of two smaller than the previous level. </li> 
 *  <li> <i>Hint:</i> Aliasing <br> <a href="https://en.wikipedia.org/wiki/Aliasing" target="_blank">https://en.wikipedia.org/wiki/Aliasing</a> </li> 
 *  <li> <i>Hint:</i>  Mipmap <br> <a href="https://en.wikipedia.org/wiki/Mipmap" target="_blank">https://en.wikipedia.org/wiki/Mipmap</a> </li> 
 * </ul>
	 * @return value of generateMipMaps field
	 */
	@Override
	public boolean getGenerateMipMaps()
	{
		return generateMipMaps;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>generateMipMaps</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Determines whether MIPMAPs are generated for texture images. Warning: must declare generateMipMaps='true' for minificationFilter modes with MIPMAP in their value. Hint: mipmap preprocessing is a low-level rendering technique that can increase rendering speed and reduce aliasing artifacts. Hint: Mipmap pyramids are pre-calculated, optimized sequences of images, each of which is a progressively lower resolution representation of the same image. The height and width of each image level in the mipmap is a power of two smaller than the previous level. Hint: Aliasing https://en.wikipedia.org/wiki/Aliasing Hint: Mipmap https://en.wikipedia.org/wiki/Mipmap
	 * @param newValue is new value for the generateMipMaps field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setGenerateMipMaps(boolean newValue)
	{
		generateMipMaps = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool generateMipMaps field, similar to {@link #setGenerateMipMaps(boolean)}.
	 * @param newValue is new value for the generateMipMaps field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setGenerateMipMaps(SFBoolObject newValue)
	{
		setGenerateMipMaps(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['AVG_PIXEL'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NICEST'] from inputOutput SFString field named <i>magnificationFilter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> magnificationFilter indicates texture filter when image is smaller than screen space representation.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.8 Texture magnification modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMagnificationModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMagnificationModes</a> for details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #MAGNIFICATIONFILTER_AVG_PIXEL AVG_PIXEL}, {@link #MAGNIFICATIONFILTER_DEFAULT DEFAULT}, {@link #MAGNIFICATIONFILTER_FASTEST FASTEST}, {@link #MAGNIFICATIONFILTER_NEAREST_PIXEL NEAREST_PIXEL}, {@link #MAGNIFICATIONFILTER_NICEST NICEST}.
	 * @return value of magnificationFilter field
	 */
	@Override
	public String getMagnificationFilter()
	{
		return magnificationFilter;
	}

	/**
	 * Assign String enumeration value ("AVG_PIXEL"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NICEST") ['AVG_PIXEL'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NICEST'] to inputOutput SFString field named <i>magnificationFilter</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #MAGNIFICATIONFILTER_AVG_PIXEL AVG_PIXEL}, {@link #MAGNIFICATIONFILTER_DEFAULT DEFAULT}, {@link #MAGNIFICATIONFILTER_FASTEST FASTEST}, {@link #MAGNIFICATIONFILTER_NEAREST_PIXEL NEAREST_PIXEL}, {@link #MAGNIFICATIONFILTER_NICEST NICEST}).
	 * <br><br>
	 * <i>Tooltip:</i> magnificationFilter indicates texture filter when image is smaller than screen space representation. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.8 Texture magnification modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMagnificationModes for details.
	 * @param newValue is new value for the magnificationFilter field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setMagnificationFilter(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(MAGNIFICATIONFILTER_AVG_PIXEL) ||
			newValue.equals(MAGNIFICATIONFILTER_DEFAULT) ||
			newValue.equals(MAGNIFICATIONFILTER_FASTEST) ||
			newValue.equals(MAGNIFICATIONFILTER_NEAREST_PIXEL) ||
			newValue.equals(MAGNIFICATIONFILTER_NICEST))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties magnificationFilter newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		magnificationFilter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString magnificationFilter field, similar to {@link #setMagnificationFilter(String)}.
	 * @param newValue is new value for the magnificationFilter field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setMagnificationFilter(SFStringObject newValue)
	{
		setMagnificationFilter(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata()
	{
		return metadata;
	}

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see #setMetadata(ProtoInstanceObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setMetadata(X3DMetadataObject newValue)
	{
		metadata = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) metadata).setParentObject(this); // parentTest15
		}
		if (metadataProtoInstance != null)
		{
			metadataProtoInstance.setParentObject(null); // housekeeping, clear prior object
			metadataProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of metadata field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public TexturePropertiesObject clearMetadata()
	{
		((X3DConcreteElement) metadata).clearParentObject(); // remove references to facilitate Java memory management
		metadata = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>metadata</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DMetadataObject.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the metadata field
	 * @see #setMetadata(X3DMetadataObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public TexturePropertiesObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
	{
		if (metadata != null)
		{
			((X3DConcreteElement) metadata).setParentObject(null); // housekeeping, clear prior object
			metadata = null;
		}
		metadataProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>metadata</i>, if available.
	 * @see #getMetadata()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getMetadataProtoInstance()
	{
		return metadataProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>metadata</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getMetadata()
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 */
	public boolean hasMetadata()
	{
		return (metadata != null) || (metadataProtoInstance != null);
	}
	/**
	 * Provide String enumeration value ['AVG_PIXEL'|'AVG_PIXEL_AVG_MIPMAP'|'AVG_PIXEL_NEAREST_MIPMAP'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NEAREST_PIXEL_AVG_MIPMAP'|'NEAREST_PIXEL_NEAREST_MIPMAP'|'NICEST'] from inputOutput SFString field named <i>minificationFilter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> minificationFilter indicates texture filter when image is larger than screen space representation.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.9 Texture minification modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMinificationModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMinificationModes</a> for details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #MINIFICATIONFILTER_AVG_PIXEL AVG_PIXEL}, {@link #MINIFICATIONFILTER_AVG_PIXEL_AVG_MIPMAP AVG_PIXEL_AVG_MIPMAP}, {@link #MINIFICATIONFILTER_AVG_PIXEL_NEAREST_MIPMAP AVG_PIXEL_NEAREST_MIPMAP}, {@link #MINIFICATIONFILTER_DEFAULT DEFAULT}, {@link #MINIFICATIONFILTER_FASTEST FASTEST}, {@link #MINIFICATIONFILTER_NEAREST_PIXEL NEAREST_PIXEL}, {@link #MINIFICATIONFILTER_NEAREST_PIXEL_AVG_MIPMAP NEAREST_PIXEL_AVG_MIPMAP}, {@link #MINIFICATIONFILTER_NEAREST_PIXEL_NEAREST_MIPMAP NEAREST_PIXEL_NEAREST_MIPMAP}, {@link #MINIFICATIONFILTER_NICEST NICEST}.
	 * @return value of minificationFilter field
	 */
	@Override
	public String getMinificationFilter()
	{
		return minificationFilter;
	}

	/**
	 * Assign String enumeration value ("AVG_PIXEL"|"AVG_PIXEL_AVG_MIPMAP"|"AVG_PIXEL_NEAREST_MIPMAP"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NEAREST_PIXEL_AVG_MIPMAP"|"NEAREST_PIXEL_NEAREST_MIPMAP"|"NICEST") ['AVG_PIXEL'|'AVG_PIXEL_AVG_MIPMAP'|'AVG_PIXEL_NEAREST_MIPMAP'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NEAREST_PIXEL_AVG_MIPMAP'|'NEAREST_PIXEL_NEAREST_MIPMAP'|'NICEST'] to inputOutput SFString field named <i>minificationFilter</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #MINIFICATIONFILTER_AVG_PIXEL AVG_PIXEL}, {@link #MINIFICATIONFILTER_AVG_PIXEL_AVG_MIPMAP AVG_PIXEL_AVG_MIPMAP}, {@link #MINIFICATIONFILTER_AVG_PIXEL_NEAREST_MIPMAP AVG_PIXEL_NEAREST_MIPMAP}, {@link #MINIFICATIONFILTER_DEFAULT DEFAULT}, {@link #MINIFICATIONFILTER_FASTEST FASTEST}, {@link #MINIFICATIONFILTER_NEAREST_PIXEL NEAREST_PIXEL}, {@link #MINIFICATIONFILTER_NEAREST_PIXEL_AVG_MIPMAP NEAREST_PIXEL_AVG_MIPMAP}, {@link #MINIFICATIONFILTER_NEAREST_PIXEL_NEAREST_MIPMAP NEAREST_PIXEL_NEAREST_MIPMAP}, {@link #MINIFICATIONFILTER_NICEST NICEST}).
	 * <br><br>
	 * <i>Tooltip:</i> minificationFilter indicates texture filter when image is larger than screen space representation. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.9 Texture minification modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMinificationModes for details.
	 * @param newValue is new value for the minificationFilter field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setMinificationFilter(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(MINIFICATIONFILTER_AVG_PIXEL) ||
			newValue.equals(MINIFICATIONFILTER_AVG_PIXEL_AVG_MIPMAP) ||
			newValue.equals(MINIFICATIONFILTER_AVG_PIXEL_NEAREST_MIPMAP) ||
			newValue.equals(MINIFICATIONFILTER_DEFAULT) ||
			newValue.equals(MINIFICATIONFILTER_FASTEST) ||
			newValue.equals(MINIFICATIONFILTER_NEAREST_PIXEL) ||
			newValue.equals(MINIFICATIONFILTER_NEAREST_PIXEL_AVG_MIPMAP) ||
			newValue.equals(MINIFICATIONFILTER_NEAREST_PIXEL_NEAREST_MIPMAP) ||
			newValue.equals(MINIFICATIONFILTER_NICEST))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties minificationFilter newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		minificationFilter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString minificationFilter field, similar to {@link #setMinificationFilter(String)}.
	 * @param newValue is new value for the minificationFilter field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setMinificationFilter(SFStringObject newValue)
	{
		setMinificationFilter(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['DEFAULT'|'FASTEST'|'HIGH'|'LOW'|'MEDIUM'|'NICEST'] from inputOutput SFString field named <i>textureCompression</i>.
	 * <br><br>
	 * <i>Tooltip:</i> textureCompression indicates compression algorithm selection mode.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i> see X3D Specification Table 18.10 Texture compression modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureCompressionModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureCompressionModes</a> for details. </li> 
 *  <li> <i>Hint:</i>  Texture compression <br> <a href="https://en.wikipedia.org/wiki/Texture_compression" target="_blank">https://en.wikipedia.org/wiki/Texture_compression</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #TEXTURECOMPRESSION_DEFAULT DEFAULT}, {@link #TEXTURECOMPRESSION_FASTEST FASTEST}, {@link #TEXTURECOMPRESSION_HIGH HIGH}, {@link #TEXTURECOMPRESSION_LOW LOW}, {@link #TEXTURECOMPRESSION_MEDIUM MEDIUM}, {@link #TEXTURECOMPRESSION_NICEST NICEST}.
	 * @return value of textureCompression field
	 */
	@Override
	public String getTextureCompression()
	{
		return textureCompression;
	}

	/**
	 * Assign String enumeration value ("DEFAULT"|"FASTEST"|"HIGH"|"LOW"|"MEDIUM"|"NICEST") ['DEFAULT'|'FASTEST'|'HIGH'|'LOW'|'MEDIUM'|'NICEST'] to inputOutput SFString field named <i>textureCompression</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #TEXTURECOMPRESSION_DEFAULT DEFAULT}, {@link #TEXTURECOMPRESSION_FASTEST FASTEST}, {@link #TEXTURECOMPRESSION_HIGH HIGH}, {@link #TEXTURECOMPRESSION_LOW LOW}, {@link #TEXTURECOMPRESSION_MEDIUM MEDIUM}, {@link #TEXTURECOMPRESSION_NICEST NICEST}).
	 * <br><br>
	 * <i>Tooltip:</i> textureCompression indicates compression algorithm selection mode. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.10 Texture compression modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureCompressionModes for details. Hint: Texture compression https://en.wikipedia.org/wiki/Texture_compression
	 * @param newValue is new value for the textureCompression field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setTextureCompression(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(TEXTURECOMPRESSION_DEFAULT) ||
			newValue.equals(TEXTURECOMPRESSION_FASTEST) ||
			newValue.equals(TEXTURECOMPRESSION_HIGH) ||
			newValue.equals(TEXTURECOMPRESSION_LOW) ||
			newValue.equals(TEXTURECOMPRESSION_MEDIUM) ||
			newValue.equals(TEXTURECOMPRESSION_NICEST))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties textureCompression newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		textureCompression = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString textureCompression field, similar to {@link #setTextureCompression(String)}.
	 * @param newValue is new value for the textureCompression field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setTextureCompression(SFStringObject newValue)
	{
		setTextureCompression(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>texturePriority</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] texturePriority defines relative priority for this texture when allocating texture memory, an important rendering resource in graphics-card hardware. Default value 0 is lowest, 1 is highest.  * <br>

	 * @return value of texturePriority field
	 */
	@Override
	public float getTexturePriority()
	{
		return texturePriority;
	}

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>texturePriority</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] texturePriority defines relative priority for this texture when allocating texture memory, an important rendering resource in graphics-card hardware. Default value 0 is lowest, 1 is highest.
	 * @param newValue is new value for the texturePriority field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setTexturePriority(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties texturePriority newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
            if (newValue > 1f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties texturePriority newValue=" + SFFloatObject.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=1");
            }
		texturePriority = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat texturePriority field, similar to {@link #setTexturePriority(float)}.
	 * @param newValue is new value for the texturePriority field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setTexturePriority(SFFloatObject newValue)
	{
		setTexturePriority(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TexturePropertiesObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to TextureProperties
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("TextureProperties DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setDEF(SFStringObject newValue)
	{
		setDEF(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value). Hint: USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. Warning: do NOT include any child nodes, a DEF attribute, or any other attribute values (except for containerField) when defining a USE attribute. Warning: each USE value must match a corresponding DEF value that is defined earlier in the scene.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TexturePropertiesObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to TextureProperties
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("TextureProperties USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("TextureProperties USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TexturePropertiesObject setCssClass(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		setConcreteCssClass(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString cssClass field, similar to {@link #setCssClass(String)}.
	 * @param newValue is new value for the class field.
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setCssClass(SFStringObject newValue)
	{
		setCssClass(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Assign field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @param newValue is new value for the description field.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TexturePropertiesObject setIS(ISObject newValue)
	{
		if (IS != null)
			IS.setParentObject(null); // housekeeping, clear prior object
		IS = newValue;
		IS.setParentObject(this);
		return this;
	}
	/**
	 * Provide field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return current ISObject, if any.
	 */
	@Override
	public ISObject getIS()
	{
		return IS;
	}
	/**
	 * Assign a USE reference to another DEF node of same node type, similar to {@link #setUSE(String)}.
	 * <br ><br >
	 * <i>Warning:</i> note that the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.
	 * <br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param DEFnode must have a DEF value defined
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TexturePropertiesObject setUSE(TexturePropertiesObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on TexturePropertiesObject" +
				" that has no DEF name defined, thus a copy cannot be referenced as a USE node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		setUSE(DEFnode.getDEF());
		return this;
	}
	/**
	 * Utility constructor that assigns DEF label after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 */
	public TexturePropertiesObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TexturePropertiesObject addComments (String newComment)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(\"" + newComment + "\")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TexturePropertiesObject addComments (String[] newComments)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(" + Arrays.toString(newComments) + ")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link TexturePropertiesObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TexturePropertiesObject addComments (CommentsBlock newCommentsBlock)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(CommentsBlock) " +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.addAll(newCommentsBlock.toStringList());
		return this;
	}
		
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see X3DObject#toStringXML()
	 * @see X3DObject#toFileXML(String)
	 * @see X3DObject#toFileX3D(String)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	@Override
	public String toStringX3D(int indentLevel)
	{
		boolean hasAttributes = true; // TODO check for non-default attribute values
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<TextureProperties"); // start opening tag
		if (hasAttributes)
		{
			if (!getDEF().equals(DEF_DEFAULT_VALUE) && !isUSE())
			{
				stringX3D.append(" DEF='").append(SFStringObject.toString(getDEF())).append("'");
			}
			
			if (!getUSE().equals(USE_DEFAULT_VALUE))
			{
				stringX3D.append(" USE='").append(SFStringObject.toString(getUSE())).append("'");
			}
			
                            if (!getContainerFieldOverride().isEmpty() && !getContainerFieldOverride().equals(containerField_DEFAULT_VALUE))
                            {
                                    stringX3D.append(" containerField='").append(getContainerFieldOverride()).append("'");
                            }
                            
			if (((getAnisotropicDegree() != ANISOTROPICDEGREE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" anisotropicDegree='").append(SFFloatObject.toString(getAnisotropicDegree())).append("'");
			}
			if ((!Arrays.equals(getBorderColor(), BORDERCOLOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" borderColor='").append(SFColorRGBAObject.toString(getBorderColor())).append("'");
			}
			if (((getBorderWidth() != BORDERWIDTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" borderWidth='").append(SFInt32Object.toString(getBorderWidth())).append("'");
			}
			if ((!getBoundaryModeR().equals(BOUNDARYMODER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" boundaryModeR='").append(new SFStringObject(getBoundaryModeR()).toStringX3D()).append("'");
			}
			if ((!getBoundaryModeS().equals(BOUNDARYMODES_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" boundaryModeS='").append(new SFStringObject(getBoundaryModeS()).toStringX3D()).append("'");
			}
			if ((!getBoundaryModeT().equals(BOUNDARYMODET_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" boundaryModeT='").append(new SFStringObject(getBoundaryModeT()).toStringX3D()).append("'");
			}
			if (((getGenerateMipMaps() != GENERATEMIPMAPS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" generateMipMaps='").append(SFBoolObject.toString(getGenerateMipMaps())).append("'");
			}
			if ((!getMagnificationFilter().equals(MAGNIFICATIONFILTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" magnificationFilter='").append(new SFStringObject(getMagnificationFilter()).toStringX3D()).append("'");
			}
			if ((!getMinificationFilter().equals(MINIFICATIONFILTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" minificationFilter='").append(new SFStringObject(getMinificationFilter()).toStringX3D()).append("'");
			}
			if ((!getTextureCompression().equals(TEXTURECOMPRESSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" textureCompression='").append(new SFStringObject(getTextureCompression()).toStringX3D()).append("'");
			}
			if (((getTexturePriority() != TEXTUREPRIORITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" texturePriority='").append(SFFloatObject.toString(getTexturePriority())).append("'");
			}
			if ((!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" class='").append(new SFStringObject(getCssClass()).toStringX3D()).append("'");
			}
		}
		if ((hasChild) && !isUSE()) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag

			if (getIS() != null)
				stringX3D.append(getIS().toStringX3D(indentLevel + indentIncrement));

			// recursively iterate over child element
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			if      (metadata != null)
			{
				stringX3D.append(((X3DConcreteElement)metadata).toStringX3D(indentLevel + indentIncrement));
			}
			else if (metadataProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)metadataProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</TextureProperties>").append("\n"); // finish closing tag
		}
		else
		{
			stringX3D.append("/>").append("\n"); // otherwise finish singleton tag
		}
		return stringX3D.toString();
	}

	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	@Override
	public String toStringClassicVRML(int indentLevel)
	{
		StringBuilder stringClassicVRML = new StringBuilder();
		boolean hasAttributes = true; // TODO further refinement
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
		if (isUSE())
		{
			hasAttributes = false;
			hasChild      = false; // USE nodes include no other fields
		}
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		if (!getDEF().equals(DEF_DEFAULT_VALUE))
		{
			stringClassicVRML.append("DEF ").append(SFStringObject.toString(getDEF())).append(" ");
		}
		if (!getUSE().equals(USE_DEFAULT_VALUE))
		{
			 stringClassicVRML.append("USE ").append(SFStringObject.toString(getUSE())).append("\n");
		}
		else // only have further output if not a USE node
		{
			stringClassicVRML.append("TextureProperties").append(" { "); // define node name, node content follows

			if (hasAttributes || hasChild)
			{
				stringClassicVRML.append("\n").append(indent).append(indentCharacter); // fields for this node follow
			}
			if (hasAttributes)
			{

				boolean hasISconnect = (getIS() != null) && !getIS().getConnectList().isEmpty();
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("anisotropicDegree"))
						{
							stringClassicVRML.append(indentCharacter).append("anisotropicDegree").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAnisotropicDegree() != ANISOTROPICDEGREE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("anisotropicDegree ").append(SFFloatObject.toString(getAnisotropicDegree())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("borderColor"))
						{
							stringClassicVRML.append(indentCharacter).append("borderColor").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getBorderColor(), BORDERCOLOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("borderColor ").append(SFColorRGBAObject.toString(getBorderColor())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("borderWidth"))
						{
							stringClassicVRML.append(indentCharacter).append("borderWidth").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getBorderWidth() != BORDERWIDTH_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("borderWidth ").append(SFInt32Object.toString(getBorderWidth())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("boundaryModeR"))
						{
							stringClassicVRML.append(indentCharacter).append("boundaryModeR").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getBoundaryModeR().equals(BOUNDARYMODER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("boundaryModeR ").append("\"").append(SFStringObject.toString(getBoundaryModeR())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("boundaryModeS"))
						{
							stringClassicVRML.append(indentCharacter).append("boundaryModeS").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getBoundaryModeS().equals(BOUNDARYMODES_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("boundaryModeS ").append("\"").append(SFStringObject.toString(getBoundaryModeS())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("boundaryModeT"))
						{
							stringClassicVRML.append(indentCharacter).append("boundaryModeT").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getBoundaryModeT().equals(BOUNDARYMODET_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("boundaryModeT ").append("\"").append(SFStringObject.toString(getBoundaryModeT())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("generateMipMaps"))
						{
							stringClassicVRML.append(indentCharacter).append("generateMipMaps").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getGenerateMipMaps() != GENERATEMIPMAPS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("generateMipMaps ").append(SFBoolObject.toString(getGenerateMipMaps())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("magnificationFilter"))
						{
							stringClassicVRML.append(indentCharacter).append("magnificationFilter").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getMagnificationFilter().equals(MAGNIFICATIONFILTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("magnificationFilter ").append("\"").append(SFStringObject.toString(getMagnificationFilter())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("minificationFilter"))
						{
							stringClassicVRML.append(indentCharacter).append("minificationFilter").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getMinificationFilter().equals(MINIFICATIONFILTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("minificationFilter ").append("\"").append(SFStringObject.toString(getMinificationFilter())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("textureCompression"))
						{
							stringClassicVRML.append(indentCharacter).append("textureCompression").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getTextureCompression().equals(TEXTURECOMPRESSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("textureCompression ").append("\"").append(SFStringObject.toString(getTextureCompression())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("texturePriority"))
						{
							stringClassicVRML.append(indentCharacter).append("texturePriority").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTexturePriority() != TEXTUREPRIORITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("texturePriority ").append(SFFloatObject.toString(getTexturePriority())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("class"))
						{
							stringClassicVRML.append(indentCharacter).append("class").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("# class ").append("\"").append(SFStringObject.toString(getCssClass())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
			}
		}
		if (hasChild) // has contained node(s), comment(s), IS/connect and/or source code
		{
			// recursively iterate over child element
			if (metadata != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadata).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (metadataProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadataProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringClassicVRML.append(commentsBlock.toStringClassicVRML(indentLevel));
				stringClassicVRML.append(indent); // end SFNode
			}
		}
		if (hasAttributes || hasChild)
		{
			stringClassicVRML.append("}").append("\n"); // finish node content
		}
		return stringClassicVRML.toString();
	}

	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */
	@Override
	public String toStringVRML97(int indentLevel)
	{
		return toStringClassicVRML(indentLevel);
	}

	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue)
	{
		return findElementByNameValue(nameValue, ""); // empty string is wildcard, any element match is allowed
	}
								
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue, String elementName)
	{
		if ((nameValue == null) || nameValue.isEmpty())
		{
			String errorNotice = "findElementByNameValue(\"\", " + elementName + ") cannot use empty string to find a name attribute";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		// no name field available for this element
		X3DConcreteElement referenceElement;
		if (metadata != null)
		{
			referenceElement = ((X3DConcreteElement) metadata).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (metadataProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) metadataProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node or statement with given name attribute is found, meaning both objects are attached to same scene graph.
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @see #findElementByNameValue(String, String)
	 * @return whether node is found
	 */
	public boolean hasElementByNameValue(String nameValue, String elementName)
	{
		return (findElementByNameValue(nameValue, elementName) != null);
	}

	/**
	 * Recursive method to provide object reference to node by DEF, if found as this node or in a contained node.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same DEF, this method does not handle that case.
	 * @see #findElementByNameValue(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found node, null otherwise
	 */
	@Override
	public X3DConcreteNode findNodeByDEF(String DEFvalue)
	{
		if ((DEFvalue == null) || DEFvalue.isEmpty())
		{
			String errorNotice = "findNodeByDEF(\"\") cannot use empty string to find a name";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		if (getDEF().equals(DEFvalue))
			return this;
		X3DConcreteNode referenceNode;
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node with DEFvalue is found, meaning both objects are attached to same scene graph.
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @see #findNodeByDEF(String)
	 * @return whether node is found
	 */
	public boolean hasNodeByDEF(String DEFvalue)
	{
		return (findNodeByDEF(DEFvalue) != null);
	}

		
	/**
	 * Recursive method to validate this element plus all contained nodes and statements.
	 * @return validation results (if any)
	 */
	@Override
	public String validate()
	{
		validationResult = new StringBuilder(); // prepare for updated results

		setAnisotropicDegree(getAnisotropicDegree()); // exercise field checks, simple types

		setBorderColor(getBorderColor()); // exercise field checks, simple types

		setBorderWidth(getBorderWidth()); // exercise field checks, simple types

		setBoundaryModeR(getBoundaryModeR()); // exercise field checks, simple types

		setBoundaryModeS(getBoundaryModeS()); // exercise field checks, simple types

		setBoundaryModeT(getBoundaryModeT()); // exercise field checks, simple types

		setGenerateMipMaps(getGenerateMipMaps()); // exercise field checks, simple types

		setMagnificationFilter(getMagnificationFilter()); // exercise field checks, simple types

		setMinificationFilter(getMinificationFilter()); // exercise field checks, simple types

		setTextureCompression(getTextureCompression()); // exercise field checks, simple types

		setTexturePriority(getTexturePriority()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (metadata != null)
		{
			setMetadata(getMetadata());
			((X3DConcreteElement) metadata).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadata).getValidationResult());
		}
		if (metadataProtoInstance != null)
		{
			setMetadata(getMetadataProtoInstance());
			((X3DConcreteElement) metadataProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadataProtoInstance).getValidationResult());
		}
		if ((metadata != null) && (metadataProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both metadata and metadataProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasMetadata()) // test USE restrictions
		{
			String errorNotice = "TextureProperties USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "TextureProperties USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (getIS() != null)
		{
			if (getIS().getConnectList().isEmpty())
			{
				String errorNotice = "IS statement present, but contains no connect statements";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidProtoException(errorNotice); // report error
			}				
			// TODO also check that this node has ancestor ProtoBody, and that a field with same name also exists, so that IS is legal
		}
		if (!getContainerFieldOverride().isEmpty() &&
			!Arrays.asList(containerField_ALTERNATE_VALUES).contains(getContainerFieldOverride()))
		{
			String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
				": illegal value encountered, containerField='" + getContainerFieldOverride() +
				"' but allowed values are containerField_ALTERNATE_VALUES='" + 
				new MFStringObject(containerField_ALTERNATE_VALUES).toStringX3D() + "'.";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldException(errorNotice); // report error
		}

		// profile validation test, if connected to full scene
		if (findAncestorX3DObject() != null)
		{
			String     modelProfile = findAncestorX3DObject().getProfile();
			headObject modelHead    = findAncestorX3DObject().getHead();
			ArrayList<componentObject> sceneComponentsList = new ArrayList<>();
			if (modelHead != null) 
				sceneComponentsList = modelHead.getComponentList();
			boolean hasSatisfactoryComponent = false;
			for (componentObject nextComponent : sceneComponentsList)
			{
				if ( nextComponent.getName().equals("Texturing") &&
					(nextComponent.getLevel() >= 2))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Texturing' level='2'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Texturing\").setLevel(2);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
