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
import org.web3d.x3d.sai.Texturing.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Texturing.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: MultiTexture applies several individual textures to a single geometry node, enabling a variety of visual effects that include light mapping and environment mapping. MultiTexture contains multiple ImageTexture, MovieTexture and PixelTexture nodes. Texture maps have a 2D coordinate system (s, t) horizontal and vertical, with (s, t) texture-coordinate values in range [0.0, 1.0] for opposite corners of the image.
 * <ul>
 *  <li> <i>Hint:</i> insert Shape and Appearance nodes before adding texture. </li> 
 *  <li> <i>Hint:</i> Texture mapping <br> <a href="https://en.wikipedia.org/wiki/Texture_mapping" target="_blank">https://en.wikipedia.org/wiki/Texture_mapping</a> </li> 
 *  <li> <i>Warning:</i> the number of textures to be blended may have a significant impact on performance, depending on available graphics hardware capabilities. </li> 
 *  <li> <i>Hint:</i> multitexturing is accomplished using MultiTexture, MultiTextureCoordinate and MultiTextureTransform nodes. </li> 
 *  <li> <i>Hint:</i> X3D Texturing component Figure 18.2 Lightmap example, <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#f-Lightmapexample" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#f-Lightmapexample</a> </li> 
 *  <li> <i>Hint:</i>  X3D Texturing component Table 18.2: Comparison of single texture and multitexture attributes, <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#t-SingleAndMultitextureAttrs" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#t-SingleAndMultitextureAttrs</a> </li> 
 * </ul>
 * <br>
 * Note that {@linkplain SFColorObject#ALICEBLUE SFColorObject} provides a variety of color constants.
 * <br>

 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#MultiTexture" target="blank">X3D Abstract Specification: MultiTexture</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MultiTexture" target="_blank">X3D Tooltips: MultiTexture</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Images" target="_blank">X3D Scene Authoring Hints: Images</a>
 */
public class MultiTextureObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Texturing.MultiTexture
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float alpha; // SFFloat

	private float[] color; // SFColor

	private ArrayList<String> function = new ArrayList<>(); // MFString

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private ArrayList<String> mode = new ArrayList<>(); // MFString

	private ArrayList<String> source = new ArrayList<>(); // MFString

	private ArrayList<X3DTextureNode> texture = new ArrayList<>(); // MFNode acceptable node types: X3DTextureNode

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** MFString field named <i>function</i> is an array that can include this quoted enumeration value <i>new String[] {"COMPLEMENT"}</i> (Java syntax) or <i>'"COMPLEMENT"'</i> (XML syntax). */
	public static final ArrayList<String> FUNCTION_COMPLEMENT = new ArrayList<String>(Arrays.<String>asList("COMPLEMENT"));

	/** MFString field named <i>function</i> is an array that can include this quoted enumeration value <i>new String[] {"ALPHAREPLICATE"}</i> (Java syntax) or <i>'"ALPHAREPLICATE"'</i> (XML syntax). */
	public static final ArrayList<String> FUNCTION_ALPHAREPLICATE = new ArrayList<String>(Arrays.<String>asList("ALPHAREPLICATE"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"ADD"}</i> (Java syntax) or <i>'"ADD"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_ADD = new ArrayList<String>(Arrays.<String>asList("ADD"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"ADDSIGNED"}</i> (Java syntax) or <i>'"ADDSIGNED"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_ADDSIGNED = new ArrayList<String>(Arrays.<String>asList("ADDSIGNED"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"ADDSIGNED2X"}</i> (Java syntax) or <i>'"ADDSIGNED2X"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_ADDSIGNED2X = new ArrayList<String>(Arrays.<String>asList("ADDSIGNED2X"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"ADDSMOOTH"}</i> (Java syntax) or <i>'"ADDSMOOTH"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_ADDSMOOTH = new ArrayList<String>(Arrays.<String>asList("ADDSMOOTH"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"BLENDCURRENTALPHA"}</i> (Java syntax) or <i>'"BLENDCURRENTALPHA"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_BLENDCURRENTALPHA = new ArrayList<String>(Arrays.<String>asList("BLENDCURRENTALPHA"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"BLENDDIFFUSEALPHA"}</i> (Java syntax) or <i>'"BLENDDIFFUSEALPHA"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_BLENDDIFFUSEALPHA = new ArrayList<String>(Arrays.<String>asList("BLENDDIFFUSEALPHA"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"BLENDFACTORALPHA"}</i> (Java syntax) or <i>'"BLENDFACTORALPHA"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_BLENDFACTORALPHA = new ArrayList<String>(Arrays.<String>asList("BLENDFACTORALPHA"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"BLENDTEXTUREALPHA"}</i> (Java syntax) or <i>'"BLENDTEXTUREALPHA"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_BLENDTEXTUREALPHA = new ArrayList<String>(Arrays.<String>asList("BLENDTEXTUREALPHA"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"DOTPRODUCT3"}</i> (Java syntax) or <i>'"DOTPRODUCT3"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_DOTPRODUCT3 = new ArrayList<String>(Arrays.<String>asList("DOTPRODUCT3"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"MODULATE"}</i> (Java syntax) or <i>'"MODULATE"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_MODULATE = new ArrayList<String>(Arrays.<String>asList("MODULATE"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"MODULATE2X"}</i> (Java syntax) or <i>'"MODULATE2X"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_MODULATE2X = new ArrayList<String>(Arrays.<String>asList("MODULATE2X"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"MODULATE4X"}</i> (Java syntax) or <i>'"MODULATE4X"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_MODULATE4X = new ArrayList<String>(Arrays.<String>asList("MODULATE4X"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"MODULATEALPHA_ADDCOLOR"}</i> (Java syntax) or <i>'"MODULATEALPHA_ADDCOLOR"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_MODULATEALPHA_ADDCOLOR = new ArrayList<String>(Arrays.<String>asList("MODULATEALPHA_ADDCOLOR"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"MODULATEINVALPHA_ADDCOLOR"}</i> (Java syntax) or <i>'"MODULATEINVALPHA_ADDCOLOR"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_MODULATEINVALPHA_ADDCOLOR = new ArrayList<String>(Arrays.<String>asList("MODULATEINVALPHA_ADDCOLOR"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"MODULATEINVCOLOR_ADDALPHA"}</i> (Java syntax) or <i>'"MODULATEINVCOLOR_ADDALPHA"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_MODULATEINVCOLOR_ADDALPHA = new ArrayList<String>(Arrays.<String>asList("MODULATEINVCOLOR_ADDALPHA"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"OFF"}</i> (Java syntax) or <i>'"OFF"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_OFF = new ArrayList<String>(Arrays.<String>asList("OFF"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"REPLACE"}</i> (Java syntax) or <i>'"REPLACE"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_REPLACE = new ArrayList<String>(Arrays.<String>asList("REPLACE"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"SELECTARG1"}</i> (Java syntax) or <i>'"SELECTARG1"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_SELECTARG1 = new ArrayList<String>(Arrays.<String>asList("SELECTARG1"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"SELECTARG2"}</i> (Java syntax) or <i>'"SELECTARG2"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_SELECTARG2 = new ArrayList<String>(Arrays.<String>asList("SELECTARG2"));

	/** MFString field named <i>mode</i> is an array that can include this quoted enumeration value <i>new String[] {"SUBTRACT"}</i> (Java syntax) or <i>'"SUBTRACT"'</i> (XML syntax). */
	public static final ArrayList<String> MODE_SUBTRACT = new ArrayList<String>(Arrays.<String>asList("SUBTRACT"));

	/** MFString field named <i>source</i> is an array that can include this quoted enumeration value <i>new String[] {"DIFFUSE"}</i> (Java syntax) or <i>'"DIFFUSE"'</i> (XML syntax). */
	public static final ArrayList<String> SOURCE_DIFFUSE = new ArrayList<String>(Arrays.<String>asList("DIFFUSE"));

	/** MFString field named <i>source</i> is an array that can include this quoted enumeration value <i>new String[] {"FACTOR"}</i> (Java syntax) or <i>'"FACTOR"'</i> (XML syntax). */
	public static final ArrayList<String> SOURCE_FACTOR = new ArrayList<String>(Arrays.<String>asList("FACTOR"));

	/** MFString field named <i>source</i> is an array that can include this quoted enumeration value <i>new String[] {"SPECULAR"}</i> (Java syntax) or <i>'"SPECULAR"'</i> (XML syntax). */
	public static final ArrayList<String> SOURCE_SPECULAR = new ArrayList<String>(Arrays.<String>asList("SPECULAR"));

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>MultiTexture</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "MultiTexture";

	/** Provides name of this element: <i>MultiTexture</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>MultiTexture</i> element: <i>Texturing</i> */
	public static final String COMPONENT = "Texturing";

	/** Defines X3D component for the <i>MultiTexture</i> element: <i>Texturing</i>
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

	/** SFFloat field named <i>alpha</i> has default value <i>1f</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final float ALPHA_DEFAULT_VALUE = 1f;

	/** SFColor field named <i>color</i> has default value <i>{1f,1f,1f}</i> (Java syntax) or <i>1 1 1</i> (XML syntax). */
	public static final float[] COLOR_DEFAULT_VALUE = {1f,1f,1f};

	/** MFString field named <i>function</i> has default value equal to an empty list. */
	public static final ArrayList<String> FUNCTION_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>mode</i> has default value equal to an empty list. */
	public static final ArrayList<String> MODE_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>source</i> has default value equal to an empty list. */
	public static final ArrayList<String> SOURCE_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

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
			case "alpha":
				result = "SFFloat";
				break;
			case "color":
				result = "SFColor";
				break;
			case "function":
				result = "MFString";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "mode":
				result = "MFString";
				break;
			case "source":
				result = "MFString";
				break;
			case "texture":
				result = "MFNode";
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
			case "alpha":
				result = "inputOutput";
				break;
			case "color":
				result = "inputOutput";
				break;
			case "function":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "mode":
				result = "inputOutput";
				break;
			case "source":
				result = "inputOutput";
				break;
			case "texture":
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
	public String containerField_DEFAULT_VALUE = "texture";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFFloat field named <i>alpha</i>. */
	public static final String fromField_ALPHA = "alpha";

	/** toField ROUTE name for SFFloat field named <i>alpha</i>. */
	public static final String toField_ALPHA = "alpha";

	/** fromField ROUTE name for SFColor field named <i>color</i>. */
	public static final String fromField_COLOR = "color";

	/** toField ROUTE name for SFColor field named <i>color</i>. */
	public static final String toField_COLOR = "color";

	/** fromField ROUTE name for MFString field named <i>function</i>. */
	public static final String fromField_FUNCTION = "function";

	/** toField ROUTE name for MFString field named <i>function</i>. */
	public static final String toField_FUNCTION = "function";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for MFString field named <i>mode</i>. */
	public static final String fromField_MODE = "mode";

	/** toField ROUTE name for MFString field named <i>mode</i>. */
	public static final String toField_MODE = "mode";

	/** fromField ROUTE name for MFString field named <i>source</i>. */
	public static final String fromField_SOURCE = "source";

	/** toField ROUTE name for MFString field named <i>source</i>. */
	public static final String toField_SOURCE = "source";

	/** fromField ROUTE name for MFNode field named <i>texture</i>. */
	public static final String fromField_TEXTURE = "texture";

	/** toField ROUTE name for MFNode field named <i>texture</i>. */
	public static final String toField_TEXTURE = "texture";

	/** Constructor for MultiTextureObject to initialize member variables with default values. */
	public MultiTextureObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "texture" };

		alpha = ALPHA_DEFAULT_VALUE;
		color = COLOR_DEFAULT_VALUE;
		function = new ArrayList<>(FUNCTION_DEFAULT_VALUE);
		metadata = null; // clear out any prior node
		mode = new ArrayList<>(MODE_DEFAULT_VALUE);
		source = new ArrayList<>(SOURCE_DEFAULT_VALUE);
		texture = new ArrayList<>();

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>alpha</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] The alpha field defines the alpha (1-transparency) base value for mode operations.  * <br>

	 * @return value of alpha field
	 */
	@Override
	public float getAlpha()
	{
		return alpha;
	}

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>alpha</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] The alpha field defines the alpha (1-transparency) base value for mode operations.
	 * @param newValue is new value for the alpha field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setAlpha(float newValue)
	{
		// set-newValue-validity-checks #0
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("MultiTexture alpha newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
            if (newValue > 1f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("MultiTexture alpha newValue=" + SFFloatObject.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=1");
            }
		alpha = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat alpha field, similar to {@link #setAlpha(float)}.
	 * @param newValue is new value for the alpha field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setAlpha(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setAlpha(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>color</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] The color field defines the RGB base values for mode operations.
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of color field
	 */
	@Override
	public float[] getColor()
	{
		return color;
	}

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>color</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] The color field defines the RGB base values for mode operations. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the color field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setColor(float[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MultiTexture color newValue=" + SFColorObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		color = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFColor color field, similar to {@link #setColor(float[])}.
	 * @param newValue is new value for the color field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setColor(SFColorObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setColor(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign values to SFColor color field, similar to {@link #setColor(float[])}.

	 * @param red first component
	 * @param green second component
	 * @param blue third component

	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setColor(float red, float green, float blue)
	{
		setColor(new float[] {red, green, blue});
		return this;
	}
	/**
	 * Provide array of String enumeration results ['"COMPLEMENT"'|'"ALPHAREPLICATE"'|'"etc."'] from inputOutput MFString field named <i>function</i>.
	 * <br><br>
	 * <i>Tooltip:</i> function operators COMPLEMENT or ALPHAREPLICATE can be applied after the mode blending operation. Empty string value "" indicates that no function operation is applied for that stage.
 * <ul>
 *  <li> <i>Hint:</i> include the same number of function values as textures, otherwise the default of no function operation is applied for each remaining stage. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.5 Values for the function field <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-ValuesForFunctionField" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-ValuesForFunctionField</a> for further details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #FUNCTION_COMPLEMENT COMPLEMENT}, {@link #FUNCTION_ALPHAREPLICATE ALPHAREPLICATE}.
	 * @return value of function field
	 */
	@Override
	public String[] getFunction()
	{
		final String[] valuesArray = new String[function.size()];
		int i = 0;
		for (String arrayElement : function) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString function field, similar to {@link #getFunction()}.

	 * @return value of function field
	 */
	public ArrayList<String> getFunctionList()
	{
		return function;
	}

	/**
	 * Assign String enumeration array (""COMPLEMENT""|""ALPHAREPLICATE"") ['"COMPLEMENT"'|'"ALPHAREPLICATE"'|'"etc."'] to inputOutput MFString field named <i>function</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #FUNCTION_COMPLEMENT COMPLEMENT}, {@link #FUNCTION_ALPHAREPLICATE ALPHAREPLICATE}).
	 * <br><br>
	 * <i>Tooltip:</i> function operators COMPLEMENT or ALPHAREPLICATE can be applied after the mode blending operation. Empty string value "" indicates that no function operation is applied for that stage. Hint: include the same number of function values as textures, otherwise the default of no function operation is applied for each remaining stage. Hint: see X3D Specification Table 18.5 Values for the function field http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-ValuesForFunctionField for further details.
	 * @param newValue is new value for the function field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setFunction(String[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearFunction(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		function.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			function.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString function field, similar to {@link #setFunction(String[])}.
	 * @param newValue is new value for the function field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setFunction(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearFunction(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setFunction(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Assign single SFString object value to MFString function field, similar to {@link #setFunction(String[])}.
	 * @param newValue is new value for the function field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setFunction(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearFunction(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #2
		setFunction(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString function field, similar to {@link #setFunction(String[])}.
	 * @param newValue is new value for the function field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setFunction(String newValue)
	{
		if (newValue == null)
		{
			clearFunction(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #3
		setFunction(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString function field, similar to {@link #setFunction(String[])}.
	 * @param newValue is new value for the function field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setFunction(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearFunction(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		function = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of function field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MultiTextureObject clearFunction()
	{
		function.clear(); // reset
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setMetadata(X3DMetadataObject newValue)
	{
		// set-newValue-validity-checks #0
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public MultiTextureObject clearMetadata()
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MultiTextureObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide array of String enumeration results ['"ADD"'|'"ADDSIGNED"'|'"ADDSIGNED2X"'|'"ADDSMOOTH"'|'"BLENDCURRENTALPHA"'|'"BLENDDIFFUSEALPHA"'|'"BLENDFACTORALPHA"'|'"BLENDTEXTUREALPHA"'|'"DOTPRODUCT3"'|'"MODULATE"'|'"MODULATE2X"'|'"MODULATE4X"'|'"MODULATEALPHA_ADDCOLOR"'|'"MODULATEINVALPHA_ADDCOLOR"'|'"MODULATEINVCOLOR_ADDALPHA"'|'"OFF"'|'"REPLACE"'|'"SELECTARG1"'|'"SELECTARG2"'|'"SUBTRACT"'|'"etc."'] from inputOutput MFString field named <i>mode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> mode field indicates the type of blending operation, both for color and for alpha channel.
 * <ul>
 *  <li> <i>Hint:</i> include the same number of mode values as textures, otherwise the default value MODULATE is added for each remaining stage. </li> 
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.3 Multitexture modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-MultitextureModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-MultitextureModes</a> for further details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #MODE_ADD ADD}, {@link #MODE_ADDSIGNED ADDSIGNED}, {@link #MODE_ADDSIGNED2X ADDSIGNED2X}, {@link #MODE_ADDSMOOTH ADDSMOOTH}, {@link #MODE_BLENDCURRENTALPHA BLENDCURRENTALPHA}, {@link #MODE_BLENDDIFFUSEALPHA BLENDDIFFUSEALPHA}, {@link #MODE_BLENDFACTORALPHA BLENDFACTORALPHA}, {@link #MODE_BLENDTEXTUREALPHA BLENDTEXTUREALPHA}, {@link #MODE_DOTPRODUCT3 DOTPRODUCT3}, {@link #MODE_MODULATE MODULATE}, {@link #MODE_MODULATE2X MODULATE2X}, {@link #MODE_MODULATE4X MODULATE4X}, {@link #MODE_MODULATEALPHA_ADDCOLOR MODULATEALPHA_ADDCOLOR}, {@link #MODE_MODULATEINVALPHA_ADDCOLOR MODULATEINVALPHA_ADDCOLOR}, {@link #MODE_MODULATEINVCOLOR_ADDALPHA MODULATEINVCOLOR_ADDALPHA}, {@link #MODE_OFF OFF}, {@link #MODE_REPLACE REPLACE}, {@link #MODE_SELECTARG1 SELECTARG1}, {@link #MODE_SELECTARG2 SELECTARG2}, {@link #MODE_SUBTRACT SUBTRACT}.
	 * @return value of mode field
	 */
	@Override
	public String[] getMode()
	{
		final String[] valuesArray = new String[mode.size()];
		int i = 0;
		for (String arrayElement : mode) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString mode field, similar to {@link #getMode()}.

	 * @return value of mode field
	 */
	public ArrayList<String> getModeList()
	{
		return mode;
	}

	/**
	 * Assign String enumeration array (""ADD""|""ADDSIGNED""|""ADDSIGNED2X""|""ADDSMOOTH""|""BLENDCURRENTALPHA""|""BLENDDIFFUSEALPHA""|""BLENDFACTORALPHA""|""BLENDTEXTUREALPHA""|""DOTPRODUCT3""|""MODULATE""|""MODULATE2X""|""MODULATE4X""|""MODULATEALPHA_ADDCOLOR""|""MODULATEINVALPHA_ADDCOLOR""|""MODULATEINVCOLOR_ADDALPHA""|""OFF""|""REPLACE""|""SELECTARG1""|""SELECTARG2""|""SUBTRACT"") ['"ADD"'|'"ADDSIGNED"'|'"ADDSIGNED2X"'|'"ADDSMOOTH"'|'"BLENDCURRENTALPHA"'|'"BLENDDIFFUSEALPHA"'|'"BLENDFACTORALPHA"'|'"BLENDTEXTUREALPHA"'|'"DOTPRODUCT3"'|'"MODULATE"'|'"MODULATE2X"'|'"MODULATE4X"'|'"MODULATEALPHA_ADDCOLOR"'|'"MODULATEINVALPHA_ADDCOLOR"'|'"MODULATEINVCOLOR_ADDALPHA"'|'"OFF"'|'"REPLACE"'|'"SELECTARG1"'|'"SELECTARG2"'|'"SUBTRACT"'|'"etc."'] to inputOutput MFString field named <i>mode</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #MODE_ADD ADD}, {@link #MODE_ADDSIGNED ADDSIGNED}, {@link #MODE_ADDSIGNED2X ADDSIGNED2X}, {@link #MODE_ADDSMOOTH ADDSMOOTH}, {@link #MODE_BLENDCURRENTALPHA BLENDCURRENTALPHA}, {@link #MODE_BLENDDIFFUSEALPHA BLENDDIFFUSEALPHA}, {@link #MODE_BLENDFACTORALPHA BLENDFACTORALPHA}, {@link #MODE_BLENDTEXTUREALPHA BLENDTEXTUREALPHA}, {@link #MODE_DOTPRODUCT3 DOTPRODUCT3}, {@link #MODE_MODULATE MODULATE}, {@link #MODE_MODULATE2X MODULATE2X}, {@link #MODE_MODULATE4X MODULATE4X}, {@link #MODE_MODULATEALPHA_ADDCOLOR MODULATEALPHA_ADDCOLOR}, {@link #MODE_MODULATEINVALPHA_ADDCOLOR MODULATEINVALPHA_ADDCOLOR}, {@link #MODE_MODULATEINVCOLOR_ADDALPHA MODULATEINVCOLOR_ADDALPHA}, {@link #MODE_OFF OFF}, {@link #MODE_REPLACE REPLACE}, {@link #MODE_SELECTARG1 SELECTARG1}, {@link #MODE_SELECTARG2 SELECTARG2}, {@link #MODE_SUBTRACT SUBTRACT}).
	 * <br><br>
	 * <i>Tooltip:</i> mode field indicates the type of blending operation, both for color and for alpha channel. Hint: include the same number of mode values as textures, otherwise the default value MODULATE is added for each remaining stage. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.3 Multitexture modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-MultitextureModes for further details.
	 * @param newValue is new value for the mode field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setMode(String[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearMode(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		mode.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			mode.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString mode field, similar to {@link #setMode(String[])}.
	 * @param newValue is new value for the mode field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setMode(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearMode(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setMode(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Assign single SFString object value to MFString mode field, similar to {@link #setMode(String[])}.
	 * @param newValue is new value for the mode field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setMode(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearMode(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #2
		setMode(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString mode field, similar to {@link #setMode(String[])}.
	 * @param newValue is new value for the mode field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setMode(String newValue)
	{
		if (newValue == null)
		{
			clearMode(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #3
		setMode(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString mode field, similar to {@link #setMode(String[])}.
	 * @param newValue is new value for the mode field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setMode(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearMode(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		mode = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of mode field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MultiTextureObject clearMode()
	{
		mode.clear(); // reset
		return this;
	}
	/**
	 * Provide array of String enumeration results ['"DIFFUSE"'|'"FACTOR"'|'"SPECULAR"'|'"etc."'] from inputOutput MFString field named <i>source</i>.
	 * <br><br>
	 * <i>Tooltip:</i> source field determines whether each image source is treated as DIFFUSE, SPECULAR or a multiplicative FACTOR. Empty string value "" indicates that no source modifier is applied for that stage.
 * <ul>
 *  <li> <i>Hint:</i> include the same number of source values as textures, otherwise the default of no source interpretation is applied for each remaining stage. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.4 Values for the source field <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-ValuesForSourceField" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-ValuesForSourceField</a> for further details. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #SOURCE_DIFFUSE DIFFUSE}, {@link #SOURCE_FACTOR FACTOR}, {@link #SOURCE_SPECULAR SPECULAR}.
	 * @return value of source field
	 */
	@Override
	public String[] getSource()
	{
		final String[] valuesArray = new String[source.size()];
		int i = 0;
		for (String arrayElement : source) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString source field, similar to {@link #getSource()}.

	 * @return value of source field
	 */
	public ArrayList<String> getSourceList()
	{
		return source;
	}

	/**
	 * Assign String enumeration array (""DIFFUSE""|""FACTOR""|""SPECULAR"") ['"DIFFUSE"'|'"FACTOR"'|'"SPECULAR"'|'"etc."'] to inputOutput MFString field named <i>source</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #SOURCE_DIFFUSE DIFFUSE}, {@link #SOURCE_FACTOR FACTOR}, {@link #SOURCE_SPECULAR SPECULAR}).
	 * <br><br>
	 * <i>Tooltip:</i> source field determines whether each image source is treated as DIFFUSE, SPECULAR or a multiplicative FACTOR. Empty string value "" indicates that no source modifier is applied for that stage. Hint: include the same number of source values as textures, otherwise the default of no source interpretation is applied for each remaining stage. Hint: see X3D Specification Table 18.4 Values for the source field http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-ValuesForSourceField for further details.
	 * @param newValue is new value for the source field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setSource(String[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearSource(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		source.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			source.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString source field, similar to {@link #setSource(String[])}.
	 * @param newValue is new value for the source field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setSource(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearSource(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setSource(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Assign single SFString object value to MFString source field, similar to {@link #setSource(String[])}.
	 * @param newValue is new value for the source field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setSource(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearSource(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #2
		setSource(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString source field, similar to {@link #setSource(String[])}.
	 * @param newValue is new value for the source field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setSource(String newValue)
	{
		if (newValue == null)
		{
			clearSource(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #3
		setSource(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString source field, similar to {@link #setSource(String[])}.
	 * @param newValue is new value for the source field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setSource(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearSource(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		source = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of source field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MultiTextureObject clearSource()
	{
		source.clear(); // reset
		return this;
	}
	/**
	 * Provide array of X3DTextureNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>texture</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DTextureNode.
	 * @see org.web3d.x3d.sai.Texturing.X3DTextureNode
	 * @return value of texture field
	 */
	@Override
	public X3DNode[] getTexture()
	{
		final X3DNode[] valuesArray = new X3DNode[texture.size()];
		int i = 0;
		for (X3DTextureNode arrayElement : texture) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode texture field, similar to {@link #getTexture()}.

	 * @return value of texture field
	 */
	public ArrayList<X3DTextureNode> getTextureList()
	{
		return texture;
	}

	/**
	 * Assign X3DTextureNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>texture</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DTextureNode.
	 * @param newValue is new value for the texture field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setTexture(X3DNode[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearTexture(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		texture.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DTextureNode)
			{
				texture.add((X3DTextureNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DTextureNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode texture field, similar to {@link #setTexture(X3DNode[])}.
	 * @param newValue is new value for the texture field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setTexture(ArrayList<X3DTextureNode> newValue)
	{
		if (newValue == null)
		{
			clearTexture(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		texture = newValue;
		for (X3DTextureNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child texture node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DTextureNode.
	 * @param newValue is new value to be appended the texture field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public MultiTextureObject addTexture(X3DTextureNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		texture.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child texture nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DTextureNode.
	 * @param newValue is new value array to be appended the texture field.
	 */
	@Override
	public void addTexture(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DTextureNode)
			{
				texture.add((X3DTextureNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DTextureNode; newValue=" + Arrays.toString(newValue));
		}
	}

	/**
	 * Set single child texture node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DTextureNode.
	 * @param newValue is new node for the texture field (restricted to X3DTextureNode)
	 */
	@Override
	public void setTexture(X3DNode newValue)
	{
		if (newValue == null)
		{
			texture.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DTextureNode)
		{
			for (X3DTextureNode element : texture)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			texture.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			texture.add((X3DTextureNode)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DTextureNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of texture field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MultiTextureObject clearTexture()
	{
		for (X3DTextureNode element : texture)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		texture.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>texture</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getTexture()
	 */
	public boolean hasTexture()
	{
		return (!texture.isEmpty());
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final MultiTextureObject setDEF(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to MultiTexture
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MultiTexture DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("MultiTexture DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setDEF(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final MultiTextureObject setUSE(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to MultiTexture
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MultiTexture USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("MultiTexture USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setUSE(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setUSE(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final MultiTextureObject setCssClass(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		setConcreteCssClass(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString cssClass field, similar to {@link #setCssClass(String)}.
	 * @param newValue is new value for the class field.
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setCssClass(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MultiTextureObject setIS(ISObject newValue)
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MultiTextureObject setUSE(MultiTextureObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on MultiTextureObject" +
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
	public MultiTextureObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public MultiTextureObject addComments (String newComment)
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public MultiTextureObject addComments (String[] newComments)
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
	 * @return {@link MultiTextureObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public MultiTextureObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || (!texture.isEmpty()) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<MultiTexture"); // start opening tag
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
                            
			if (((getAlpha() != ALPHA_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" alpha='").append(SFFloatObject.toString(getAlpha())).append("'");
			}
			if ((!Arrays.equals(getColor(), COLOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" color='").append(SFColorObject.toString(getColor())).append("'");
			}
			if (((getFunction().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" function='").append(new MFStringObject(getFunction()).toStringX3D()).append("'");
			}
			if (((getMode().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" mode='").append(new MFStringObject(getMode()).toStringX3D()).append("'");
			}
			if (((getSource().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" source='").append(new MFStringObject(getSource()).toStringX3D()).append("'");
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

			// recursively iterate over child elements
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
			for (X3DTextureNode element : texture)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</MultiTexture>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || (!texture.isEmpty()) || !commentsList.isEmpty();
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
			stringClassicVRML.append("MultiTexture").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("alpha"))
						{
							stringClassicVRML.append(indentCharacter).append("alpha").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAlpha() != ALPHA_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("alpha ").append(SFFloatObject.toString(getAlpha())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("color"))
						{
							stringClassicVRML.append(indentCharacter).append("color").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getColor(), COLOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("color ").append(SFColorObject.toString(getColor())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("function"))
						{
							stringClassicVRML.append(indentCharacter).append("function").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getFunction().length > 0)
				{
					stringClassicVRML.append("function ").append("[ ").append(MFStringObject.toString(getFunction())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("mode"))
						{
							stringClassicVRML.append(indentCharacter).append("mode").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getMode().length > 0)
				{
					stringClassicVRML.append("mode ").append("[ ").append(MFStringObject.toString(getMode())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("source"))
						{
							stringClassicVRML.append(indentCharacter).append("source").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getSource().length > 0)
				{
					stringClassicVRML.append("source ").append("[ ").append(MFStringObject.toString(getSource())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
			// recursively iterate over child elements
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
			if (texture.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("texture").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DTextureNode element : texture)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
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
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, CAD and HAnim nodes.
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
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, CAD and HAnim nodes.
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
		for (X3DTextureNode element : texture) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
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
		if (metadataProtoInstance != null)
		{
			referenceNode = ((X3DConcreteElement) metadataProtoInstance).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (X3DTextureNode element : texture) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
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

		setAlpha(getAlpha()); // exercise field checks, simple types

		setColor(getColor()); // exercise field checks, simple types

		setFunction(getFunction()); // exercise field checks, simple types

		setMode(getMode()); // exercise field checks, simple types

		setSource(getSource()); // exercise field checks, simple types

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
			String errorNotice = "MultiTexture USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "MultiTexture USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		for (X3DTextureNode element : texture) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setTexture(getTexture()); // also test getter/setter validation

		if (isUSE() && hasTexture()) // test USE restrictions
		{
			String errorNotice = "MultiTexture USE='" + getUSE() + "' is not allowed to have contained MFNode texture";
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
				!modelProfile.equals("Interchange") &&
				!modelProfile.equals("CADInterchange") &&
				!modelProfile.equals("Interactive") &&
				!modelProfile.equals("Interactive") &&
				!modelProfile.equals("Immersive") &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model containing 'MultiTexture' node, add head statement <component name='Texturing' level='2'/>\n" +
					"or Java source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponent(\"Texturing\").setLevel(2);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
