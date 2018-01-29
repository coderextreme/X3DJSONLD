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

package org.web3d.x3d.jsail.Geospatial;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Texturing.*;

/**
 * <i>X3D node tooltip</i>: GeoElevationGrid is a geometry node defining a rectangular height field, with default values for a 1m by 1m square at height 0. Vertices corresponding to GeoElevationGrid height values define quadrilaterals, which are placed above or below a curved geospatial surface using geographic coordinates.
 * <ul>
 *  <li> <i>Hint:</i> the height array defines (xDimension-1)*(zDimension-1) quadrilaterals. </li> 
 *  <li> <i>Warning:</i> generated quadrilaterals can be nonplanar. Tessellation splits quadrilaterals into triangles along seam starting at initial vertex of the quadrilateral and proceeding to opposite vertex. </li> 
 *  <li> <i>Hint:</i> positive direction for normal of each triangle is on same side of the quadrilateral. Triangles are defined either counterclockwise or clockwise depending on value of ccw field. </li> 
 *  <li> <i>Hint:</i> GeoElevationGrid can contain GeoOrigin, Color|ColorRGBA, Normal and TextureCoordinate nodes. </li> 
 *  <li> <i>Hint:</i> insert a Shape node before adding geometry or Appearance. </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/GeospatialComponentX3dEarth.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/GeospatialComponentX3dEarth.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='Geospatial' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#GeoElevationGrid" target="blank">X3D Abstract Specification: GeoElevationGrid</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#GeoElevationGrid" target="_blank">X3D Tooltips: GeoElevationGrid</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class GeoElevationGridObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Geospatial.GeoElevationGrid
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private boolean ccw; // SFBool

	private X3DColorNode color; // SFNode acceptable node types: X3DColorNode
	private ProtoInstanceObject colorProtoInstance; // allowed alternative for color field

	private boolean colorPerVertex; // SFBool

	private double creaseAngle; // SFDouble

	private double[] geoGridOrigin; // SFVec3d

	private GeoOrigin geoOrigin; // SFNode acceptable node types: GeoOrigin
	private ProtoInstanceObject geoOriginProtoInstance; // allowed alternative for geoOrigin field

	private ArrayList<String> geoSystem = new ArrayList<>(); // MFString

	private ArrayList<Double> height = new ArrayList<>(); // MFDouble

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private X3DNormalNode normal; // SFNode acceptable node types: X3DNormalNode
	private ProtoInstanceObject normalProtoInstance; // allowed alternative for normal field

	private boolean normalPerVertex; // SFBool

	private boolean solid; // SFBool

	private X3DTextureCoordinateNode texCoord; // SFNode acceptable node types: X3DTextureCoordinateNode
	private ProtoInstanceObject texCoordProtoInstance; // allowed alternative for texCoord field

	private int xDimension; // SFInt32

	private double xSpacing; // SFDouble

	private float yScale; // SFFloat

	private int zDimension; // SFInt32

	private double zSpacing; // SFDouble

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>GeoElevationGrid</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "GeoElevationGrid";

	/** Provides name of this element: <i>GeoElevationGrid</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>GeoElevationGrid</i> element: <i>Geospatial</i> */
	public static final String COMPONENT = "Geospatial";

	/** Defines X3D component for the <i>GeoElevationGrid</i> element: <i>Geospatial</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Geospatial</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFBool field named <i>ccw</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean CCW_DEFAULT_VALUE = true;

	/** SFBool field named <i>colorPerVertex</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean COLORPERVERTEX_DEFAULT_VALUE = true;

	/** SFDouble field named <i>creaseAngle</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final double CREASEANGLE_DEFAULT_VALUE = 0;

	/** SFVec3d field named <i>geoGridOrigin</i> has default value <i>{0,0,0}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final double[] GEOGRIDORIGIN_DEFAULT_VALUE = {0,0,0};

	/** MFString field named <i>geoSystem</i> has default quoted value <i>new String[] {"GD","WE"}</i> (Java syntax) or quoted value <i>"GD" "WE"</i> (XML syntax). */
	public static final ArrayList<String> GEOSYSTEM_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("GD","WE"));

	/** MFDouble field named <i>height</i> has default value <i>{0.0,0.0,0.0,0.0}</i> (Java syntax) or <i>0 0 0 0</i> (XML syntax). */
	public static final ArrayList<Double> HEIGHT_DEFAULT_VALUE = new ArrayList<>(Arrays.asList(0.0,0.0,0.0,0.0));

	/** SFBool field named <i>normalPerVertex</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean NORMALPERVERTEX_DEFAULT_VALUE = true;

	/** SFBool field named <i>solid</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean SOLID_DEFAULT_VALUE = true;

	/** SFInt32 field named <i>xDimension</i> has default value <i>2</i> (Java syntax) or <i>2</i> (XML syntax). */
	public static final int XDIMENSION_DEFAULT_VALUE = 2;

	/** SFDouble field named <i>xSpacing</i> has default value <i>1.0</i> (Java syntax) or <i>1.0</i> (XML syntax). */
	public static final double XSPACING_DEFAULT_VALUE = 1.0;

	/** SFFloat field named <i>yScale</i> has default value <i>1f</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final float YSCALE_DEFAULT_VALUE = 1f;

	/** SFInt32 field named <i>zDimension</i> has default value <i>2</i> (Java syntax) or <i>2</i> (XML syntax). */
	public static final int ZDIMENSION_DEFAULT_VALUE = 2;

	/** SFDouble field named <i>zSpacing</i> has default value <i>1.0</i> (Java syntax) or <i>1.0</i> (XML syntax). */
	public static final double ZSPACING_DEFAULT_VALUE = 1.0;

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
			case "ccw":
				result = "SFBool";
				break;
			case "color":
				result = "SFNode";
				break;
			case "colorPerVertex":
				result = "SFBool";
				break;
			case "creaseAngle":
				result = "SFDouble";
				break;
			case "geoGridOrigin":
				result = "SFVec3d";
				break;
			case "geoOrigin":
				result = "SFNode";
				break;
			case "geoSystem":
				result = "MFString";
				break;
			case "height":
				result = "MFDouble";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "normal":
				result = "SFNode";
				break;
			case "normalPerVertex":
				result = "SFBool";
				break;
			case "solid":
				result = "SFBool";
				break;
			case "texCoord":
				result = "SFNode";
				break;
			case "xDimension":
				result = "SFInt32";
				break;
			case "xSpacing":
				result = "SFDouble";
				break;
			case "yScale":
				result = "SFFloat";
				break;
			case "zDimension":
				result = "SFInt32";
				break;
			case "zSpacing":
				result = "SFDouble";
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
			case "ccw":
				result = "initializeOnly";
				break;
			case "color":
				result = "inputOutput";
				break;
			case "colorPerVertex":
				result = "initializeOnly";
				break;
			case "creaseAngle":
				result = "initializeOnly";
				break;
			case "geoGridOrigin":
				result = "initializeOnly";
				break;
			case "geoOrigin":
				result = "initializeOnly";
				break;
			case "geoSystem":
				result = "initializeOnly";
				break;
			case "height":
				result = "initializeOnly";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "normal":
				result = "inputOutput";
				break;
			case "normalPerVertex":
				result = "initializeOnly";
				break;
			case "set_height":
				result = "inputOnly";
				break;
			case "solid":
				result = "initializeOnly";
				break;
			case "texCoord":
				result = "inputOutput";
				break;
			case "xDimension":
				result = "initializeOnly";
				break;
			case "xSpacing":
				result = "initializeOnly";
				break;
			case "yScale":
				result = "inputOutput";
				break;
			case "zDimension":
				result = "initializeOnly";
				break;
			case "zSpacing":
				result = "initializeOnly";
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
	String containerField_DEFAULT_VALUE = "geometry";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFNode field named <i>color</i>. */
	public static final String fromField_COLOR = "color";

	/** toField ROUTE name for SFNode field named <i>color</i>. */
	public static final String toField_COLOR = "color";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFNode field named <i>normal</i>. */
	public static final String fromField_NORMAL = "normal";

	/** toField ROUTE name for SFNode field named <i>normal</i>. */
	public static final String toField_NORMAL = "normal";

	/** toField ROUTE name for MFFloat field named <i>set_height</i>. */
	public static final String toField_SET_HEIGHT = "set_height";

	/** fromField ROUTE name for SFNode field named <i>texCoord</i>. */
	public static final String fromField_TEXCOORD = "texCoord";

	/** toField ROUTE name for SFNode field named <i>texCoord</i>. */
	public static final String toField_TEXCOORD = "texCoord";

	/** fromField ROUTE name for SFFloat field named <i>yScale</i>. */
	public static final String fromField_YSCALE = "yScale";

	/** toField ROUTE name for SFFloat field named <i>yScale</i>. */
	public static final String toField_YSCALE = "yScale";

	/** Constructor for GeoElevationGridObject to initialize member variables with default values. */
	public GeoElevationGridObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "geometry" };

		ccw = CCW_DEFAULT_VALUE;
		color = null; // clear out any prior node
		colorPerVertex = COLORPERVERTEX_DEFAULT_VALUE;
		creaseAngle = CREASEANGLE_DEFAULT_VALUE;
		geoGridOrigin = GEOGRIDORIGIN_DEFAULT_VALUE;
		geoOrigin = null; // clear out any prior node
		geoSystem = GEOSYSTEM_DEFAULT_VALUE;
		height = HEIGHT_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		normal = null; // clear out any prior node
		normalPerVertex = NORMALPERVERTEX_DEFAULT_VALUE;
		solid = SOLID_DEFAULT_VALUE;
		texCoord = null; // clear out any prior node
		xDimension = XDIMENSION_DEFAULT_VALUE;
		xSpacing = XSPACING_DEFAULT_VALUE;
		yScale = YSCALE_DEFAULT_VALUE;
		zDimension = ZDIMENSION_DEFAULT_VALUE;
		zSpacing = ZSPACING_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>ccw</i>.
	 * <br><br>
	 * <i>Tooltip:</i> ccw = counterclockwise: ordering of vertex coordinates orientation, according to Right-Hand Rule (RHR).
 * <ul>
 *  <li> <i> Hint:</i>  ccw false can reverse solid (backface culling) and normal-vector orientation. Note that consistency of left-handed or right-handed point sequences is important throughout. </li> 
 * </ul>
	 * @return value of ccw field
	 */
	@Override
	public boolean getCcw()
	{
		return ccw;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>ccw</i>.
	 * <br><br>
	 * <i>Tooltip:</i> ccw = counterclockwise: ordering of vertex coordinates orientation, according to Right-Hand Rule (RHR). Hint: ccw false can reverse solid (backface culling) and normal-vector orientation. Note that consistency of left-handed or right-handed point sequences is important throughout.
	 * @param newValue is new value for the ccw field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setCcw(boolean newValue)
	{
		ccw = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool ccw field, similar to {@link #setCcw(boolean)}.
	 * @param newValue is new value for the ccw field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setCcw(SFBoolObject newValue)
	{
		setCcw(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DColorNode instance (using a properly typed node) using RGB values [0..1] from inputOutput SFNode field <i>color</i>.
	 * @see #getColorProtoInstance()
	 * @return value of color field
	 */
	@Override
	public X3DColorNode getColor()
	{
		return color;
	}

	/**
	 * Assign X3DColorNode instance (using a properly typed node) using RGB values [0..1] to inputOutput SFNode field <i>color</i>.
	 * @see #setColor(ProtoInstanceObject)
	 * @param newValue is new value for the color field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setColor(X3DColorNode newValue)
	{
		color = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) color).setParentObject(this); // parentTest15
		}
		if (colorProtoInstance != null)
		{
			colorProtoInstance.setParentObject(null); // housekeeping, clear prior object
			colorProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of color field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public GeoElevationGridObject clearColor()
	{
		((X3DConcreteElement) color).clearParentObject(); // remove references to facilitate Java memory management
		color = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>color</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DColorNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the color field
	 * @see #setColor(X3DColorNode)
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoElevationGridObject setColor(ProtoInstanceObject newProtoInstanceNode)
	{
		if (color != null)
		{
			((X3DConcreteElement) color).setParentObject(null); // housekeeping, clear prior object
			color = null;
		}
		colorProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>color</i>, if available.
	 * @see #getColor()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getColorProtoInstance()
	{
		return colorProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>color</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getColor()
	 * @see #getColorProtoInstance()
	 */
	public boolean hasColor()
	{
		return (color != null) || (colorProtoInstance != null);
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>colorPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per quadrilateral (false).
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of colorPerVertex field
	 */
	@Override
	public boolean getColorPerVertex()
	{
		return colorPerVertex;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>colorPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per quadrilateral (false). Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the colorPerVertex field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setColorPerVertex(boolean newValue)
	{
		colorPerVertex = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool colorPerVertex field, similar to {@link #setColorPerVertex(boolean)}.
	 * @param newValue is new value for the colorPerVertex field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setColorPerVertex(SFBoolObject newValue)
	{
		setColorPerVertex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value unit axis, angle (in radians) within allowed range of [0,infinity) from initializeOnly SFDouble field named <i>creaseAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) creaseAngle defines angle (in radians) for determining whether adjacent polygons are drawn with sharp edges or smooth shading. If angle between normals of two adjacent polygons is less than creaseAngle, smooth shading is rendered across the shared line segment.
 * <ul>
 *  <li> <i>Hint:</i> creaseAngle=0 means render all edges sharply, creaseAngle=3.14159 means render all edges smoothly. </li> 
 *  <li> <i>Warning:</i>  note type double, unlike ElevationGrid creaseAngle. </li> 
 * </ul>
	 * @return value of creaseAngle field
	 */
	@Override
	public double getCreaseAngle()
	{
		return creaseAngle;
	}

	/**
	 * Assign double value unit axis, angle (in radians) within allowed range of [0,infinity) to initializeOnly SFDouble field named <i>creaseAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) creaseAngle defines angle (in radians) for determining whether adjacent polygons are drawn with sharp edges or smooth shading. If angle between normals of two adjacent polygons is less than creaseAngle, smooth shading is rendered across the shared line segment. Hint: creaseAngle=0 means render all edges sharply, creaseAngle=3.14159 means render all edges smoothly. Warning: note type double, unlike ElevationGrid creaseAngle.
	 * @param newValue is new value for the creaseAngle field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setCreaseAngle(double newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid creaseAngle newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		creaseAngle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFDouble creaseAngle field, similar to {@link #setCreaseAngle(double)}.
	 * @param newValue is new value for the creaseAngle field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setCreaseAngle(SFDoubleObject newValue)
	{
		setCreaseAngle(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple double results from initializeOnly SFVec3d field named <i>geoGridOrigin</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Geographic coordinate for southwest (lower-left) corner of height dataset.  * <br>

	 * @return value of geoGridOrigin field
	 */
	@Override
	public double[] getGeoGridOrigin()
	{
		return geoGridOrigin;
	}

	/**
	 * Assign 3-tuple double array to initializeOnly SFVec3d field named <i>geoGridOrigin</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Geographic coordinate for southwest (lower-left) corner of height dataset.
	 * @param newValue is new value for the geoGridOrigin field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setGeoGridOrigin(double[] newValue)
	{
		if (newValue == null)
			newValue = new double[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid geoGridOrigin newValue=" + SFVec3dObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		geoGridOrigin = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3d geoGridOrigin field, similar to {@link #setGeoGridOrigin(double[])}.
	 * @param newValue is new value for the geoGridOrigin field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setGeoGridOrigin(SFVec3dObject newValue)
	{
		setGeoGridOrigin(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3d geoGridOrigin field, similar to {@link #setGeoGridOrigin(double[])}.
	 * @param x first component
	 * @param y second component

	 * @param z third component

	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setGeoGridOrigin(double x, double y, double z)
	{
		setGeoGridOrigin(new double[] {x, y, z});
		return this;
	}
	/**
	 * Provide GeoOrigin instance (using a properly typed node) (deprecated node, optional) from initializeOnly SFNode field <i>geoOrigin</i>.
	 * @see #getGeoOriginProtoInstance()
	 * @return value of geoOrigin field
	 */
	@Override
	public GeoOrigin getGeoOrigin()
	{
		return geoOrigin;
	}

	/**
	 * Assign GeoOrigin instance (using a properly typed node) (deprecated node, optional) to initializeOnly SFNode field <i>geoOrigin</i>.
	 * @see #setGeoOrigin(ProtoInstanceObject)
	 * @param newValue is new value for the geoOrigin field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setGeoOrigin(GeoOrigin newValue)
	{
		geoOrigin = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) geoOrigin).setParentObject(this); // parentTest15
		}
		if (geoOriginProtoInstance != null)
		{
			geoOriginProtoInstance.setParentObject(null); // housekeeping, clear prior object
			geoOriginProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of geoOrigin field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public GeoElevationGridObject clearGeoOrigin()
	{
		((X3DConcreteElement) geoOrigin).clearParentObject(); // remove references to facilitate Java memory management
		geoOrigin = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>geoOrigin</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type GeoOrigin.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the geoOrigin field
	 * @see #setGeoOrigin(GeoOrigin)
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoElevationGridObject setGeoOrigin(ProtoInstanceObject newProtoInstanceNode)
	{
		if (geoOrigin != null)
		{
			((X3DConcreteElement) geoOrigin).setParentObject(null); // housekeeping, clear prior object
			geoOrigin = null;
		}
		geoOriginProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for initializeOnly SFNode field <i>geoOrigin</i>, if available.
	 * @see #getGeoOrigin()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getGeoOriginProtoInstance()
	{
		return geoOriginProtoInstance;
	}

	/**
	 * Indicate whether an object is available for initializeOnly SFNode field <i>geoOrigin</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getGeoOrigin()
	 * @see #getGeoOriginProtoInstance()
	 */
	public boolean hasGeoOrigin()
	{
		return (geoOrigin != null) || (geoOriginProtoInstance != null);
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type.
 * <ul>
 *  <li> <i>Hint:</i> see X3D Specification 25.2.2 Spatial reference frames <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes</a> </li> 
 *  <li> <i>Hint:</i> see X3D Specification 25.2.4 Specifying geospatial coordinates <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords</a> </li> 
 *  <li> <i>Hint:</i> UTM is Universal Transverse Mercator coordinate system <br> <a href="https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system" target="_blank">https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system</a> </li> 
 *  <li> <i>Warning:</i>  deprecated values are GDC (replaced by GD) and GCC (replaced by GC). </li> 
 * </ul>
	 * @return value of geoSystem field
	 */
	@Override
	public String[] getGeoSystem()
	{
		final String[] valuesArray = new String[geoSystem.size()];
		int i = 0;
		for (String arrayElement : geoSystem) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString geoSystem field, similar to {@link #getGeoSystem()}.

	 * @return value of geoSystem field
	 */
	public ArrayList<String> getGeoSystemList()
	{
		return geoSystem;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type. Hint: see X3D Specification 25.2.2 Spatial reference frames http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes Hint: see X3D Specification 25.2.4 Specifying geospatial coordinates http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords Hint: UTM is Universal Transverse Mercator coordinate system https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system Warning: deprecated values are GDC (replaced by GD) and GCC (replaced by GC).
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setGeoSystem(String[] newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			geoSystem.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setGeoSystem(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setGeoSystem(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setGeoSystem(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setGeoSystem(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setGeoSystem(String newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem.clear();
		geoSystem.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setGeoSystem(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of geoSystem field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoElevationGridObject clearGeoSystem()
	{
		geoSystem.clear(); // reset
		return this;
	}
	/**
	 * Provide array of Double results from initializeOnly MFDouble field named <i>height</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains xDimension rows * zDimension columns floating-point values for elevation above ellipsoid.
 * <ul>
 *  <li> <i>Hint:</i> height array values are in row-major order from west to east, south to north. </li> 
 *  <li> <i>Hint:</i>  geoGridOrigin is in southwest (lower-left) corner of height dataset. </li> 
 * </ul>
	 * @return value of height field
	 */
	@Override
	public double[] getHeight()
	{
		final double[] valuesArray = new double[height.size()];
		int i = 0;
		for (Double arrayElement : height) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFDouble height field, similar to {@link #getHeight()}.

	 * @return value of height field
	 */
	public ArrayList<Double> getHeightList()
	{
		return height;
	}

	/**
	 * Assign Double array to initializeOnly MFDouble field named <i>height</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains xDimension rows * zDimension columns floating-point values for elevation above ellipsoid. Hint: height array values are in row-major order from west to east, south to north. Hint: geoGridOrigin is in southwest (lower-left) corner of height dataset.
	 * @param newValue is new value for the height field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setHeight(double[] newValue)
	{
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		height.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			height.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFDouble height field, similar to {@link #setHeight(double[])}.
	 * @param newValue is new value for the height field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setHeight(MFDoubleObject newValue)
	{
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setHeight(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFDouble height field, similar to {@link #setHeight(double[])}.
	 * @param newValue is new value for the height field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setHeight(ArrayList<Double> newValue)
	{
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		height = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFDouble value of height field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoElevationGridObject clearHeight()
	{
		height.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFDouble height field, similar to {@link #setHeight(double[])}.
	 * @param newValue is new value for the height field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setHeight(int[] newValue)
	{
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		double[] holdArray = new double[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (double)newValue[i];
		}
		setHeight(holdArray);
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public GeoElevationGridObject clearMetadata()
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoElevationGridObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide X3DNormalNode instance (using a properly typed node) from inputOutput SFNode field <i>normal</i>.
	 * @see #getNormalProtoInstance()
	 * @return value of normal field
	 */
	@Override
	public X3DNormalNode getNormal()
	{
		return normal;
	}

	/**
	 * Assign X3DNormalNode instance (using a properly typed node) to inputOutput SFNode field <i>normal</i>.
	 * @see #setNormal(ProtoInstanceObject)
	 * @param newValue is new value for the normal field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setNormal(X3DNormalNode newValue)
	{
		normal = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) normal).setParentObject(this); // parentTest15
		}
		if (normalProtoInstance != null)
		{
			normalProtoInstance.setParentObject(null); // housekeeping, clear prior object
			normalProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of normal field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public GeoElevationGridObject clearNormal()
	{
		((X3DConcreteElement) normal).clearParentObject(); // remove references to facilitate Java memory management
		normal = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>normal</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DNormalNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the normal field
	 * @see #setNormal(X3DNormalNode)
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoElevationGridObject setNormal(ProtoInstanceObject newProtoInstanceNode)
	{
		if (normal != null)
		{
			((X3DConcreteElement) normal).setParentObject(null); // housekeeping, clear prior object
			normal = null;
		}
		normalProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>normal</i>, if available.
	 * @see #getNormal()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getNormalProtoInstance()
	{
		return normalProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>normal</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getNormal()
	 * @see #getNormalProtoInstance()
	 */
	public boolean hasNormal()
	{
		return (normal != null) || (normalProtoInstance != null);
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>normalPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Normal node vector values are applied to each point vertex (true) or per quadrilateral (false).
 * <ul>
 *  <li> <i> Hint:</i>  if no child Normal node is provided, the X3D browser shall automatically generate normals, using creaseAngle to determine smoothed shading across shared vertices. </li> 
 * </ul>
	 * @return value of normalPerVertex field
	 */
	@Override
	public boolean getNormalPerVertex()
	{
		return normalPerVertex;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>normalPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Normal node vector values are applied to each point vertex (true) or per quadrilateral (false). Hint: if no child Normal node is provided, the X3D browser shall automatically generate normals, using creaseAngle to determine smoothed shading across shared vertices.
	 * @param newValue is new value for the normalPerVertex field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setNormalPerVertex(boolean newValue)
	{
		normalPerVertex = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool normalPerVertex field, similar to {@link #setNormalPerVertex(boolean)}.
	 * @param newValue is new value for the normalPerVertex field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setNormalPerVertex(SFBoolObject newValue)
	{
		setNormalPerVertex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off).
 * <ul>
 *  <li> <i>Warning:</i> default value true can completely hide geometry if viewed from wrong side! </li> 
 *  <li> <i>Hint:</i>  if in doubt, use solid='false' for maximum visibility. </li> 
 * </ul>
	 * @return value of solid field
	 */
	@Override
	public boolean getSolid()
	{
		return solid;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off). Warning: default value true can completely hide geometry if viewed from wrong side! Hint: if in doubt, use solid='false' for maximum visibility.
	 * @param newValue is new value for the solid field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setSolid(boolean newValue)
	{
		solid = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool solid field, similar to {@link #setSolid(boolean)}.
	 * @param newValue is new value for the solid field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setSolid(SFBoolObject newValue)
	{
		setSolid(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DTextureCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>texCoord</i>.
	 * @see #getTexCoordProtoInstance()
	 * @return value of texCoord field
	 */
	@Override
	public X3DTextureCoordinateNode getTexCoord()
	{
		return texCoord;
	}

	/**
	 * Assign X3DTextureCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>texCoord</i>.
	 * @see #setTexCoord(ProtoInstanceObject)
	 * @param newValue is new value for the texCoord field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setTexCoord(X3DTextureCoordinateNode newValue)
	{
		texCoord = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) texCoord).setParentObject(this); // parentTest15
		}
		if (texCoordProtoInstance != null)
		{
			texCoordProtoInstance.setParentObject(null); // housekeeping, clear prior object
			texCoordProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of texCoord field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public GeoElevationGridObject clearTexCoord()
	{
		((X3DConcreteElement) texCoord).clearParentObject(); // remove references to facilitate Java memory management
		texCoord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>texCoord</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DTextureCoordinateNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the texCoord field
	 * @see #setTexCoord(X3DTextureCoordinateNode)
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoElevationGridObject setTexCoord(ProtoInstanceObject newProtoInstanceNode)
	{
		if (texCoord != null)
		{
			((X3DConcreteElement) texCoord).setParentObject(null); // housekeeping, clear prior object
			texCoord = null;
		}
		texCoordProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>texCoord</i>, if available.
	 * @see #getTexCoord()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getTexCoordProtoInstance()
	{
		return texCoordProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>texCoord</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getTexCoord()
	 * @see #getTexCoordProtoInstance()
	 */
	public boolean hasTexCoord()
	{
		return (texCoord != null) || (texCoordProtoInstance != null);
	}
	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>xDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along east-west X direction.
 * <ul>
 *  <li> <i>Hint:</i> total horizontal x-axis distance equals (xDimension-1) * xSpacing. </li> 
 *  <li> <i>Warning:</i>  xDimension &amp;lt; 2 means that GeoElevationGrid contains no quadrilaterals. </li> 
 * </ul>
	 * @return value of xDimension field
	 */
	@Override
	public int getXDimension()
	{
		return xDimension;
	}

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>xDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along east-west X direction. Hint: total horizontal x-axis distance equals (xDimension-1) * xSpacing. Warning: xDimension &lt; 2 means that GeoElevationGrid contains no quadrilaterals.
	 * @param newValue is new value for the xDimension field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setXDimension(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid xDimension newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		xDimension = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 xDimension field, similar to {@link #setXDimension(int)}.
	 * @param newValue is new value for the xDimension field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setXDimension(SFInt32Object newValue)
	{
		setXDimension(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value within allowed range of (0,infinity) from initializeOnly SFDouble field named <i>xSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Distance between grid-array vertices along east-west X direction.
 * <ul>
 *  <li> <i>Hint:</i> when geoSystem is GDC, xSpacing is number of degrees of longitude. </li> 
 *  <li> <i>Hint:</i>  when geoSystem is UTM, xSpacing is number of eastings (meters). </li> 
 * </ul>
	 * @return value of xSpacing field
	 */
	@Override
	public double getXSpacing()
	{
		return xSpacing;
	}

	/**
	 * Assign double value within allowed range of (0,infinity) to initializeOnly SFDouble field named <i>xSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Distance between grid-array vertices along east-west X direction. Hint: when geoSystem is GDC, xSpacing is number of degrees of longitude. Hint: when geoSystem is UTM, xSpacing is number of eastings (meters).
	 * @param newValue is new value for the xSpacing field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setXSpacing(double newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue <= 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid xSpacing newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
            }
		xSpacing = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFDouble xSpacing field, similar to {@link #setXSpacing(double)}.
	 * @param newValue is new value for the xSpacing field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setXSpacing(SFDoubleObject newValue)
	{
		setXSpacing(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>yScale</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) Vertical exaggeration of displayed data produced from the height array.  * <br>

	 * @return value of yScale field
	 */
	@Override
	public float getYScale()
	{
		return yScale;
	}

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>yScale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Vertical exaggeration of displayed data produced from the height array.
	 * @param newValue is new value for the yScale field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setYScale(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid yScale newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		yScale = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat yScale field, similar to {@link #setYScale(float)}.
	 * @param newValue is new value for the yScale field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setYScale(SFFloatObject newValue)
	{
		setYScale(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>zDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along north-south Z direction.
 * <ul>
 *  <li> <i>Hint:</i> total lateral z-axis distance equals (zDimension-1) * zSpacing. </li> 
 *  <li> <i>Warning:</i>  zDimension &amp;lt; 2 means that GeoElevationGrid contains no quadrilaterals. </li> 
 * </ul>
	 * @return value of zDimension field
	 */
	@Override
	public int getZDimension()
	{
		return zDimension;
	}

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>zDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along north-south Z direction. Hint: total lateral z-axis distance equals (zDimension-1) * zSpacing. Warning: zDimension &lt; 2 means that GeoElevationGrid contains no quadrilaterals.
	 * @param newValue is new value for the zDimension field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setZDimension(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid zDimension newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		zDimension = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 zDimension field, similar to {@link #setZDimension(int)}.
	 * @param newValue is new value for the zDimension field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setZDimension(SFInt32Object newValue)
	{
		setZDimension(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value within allowed range of (0,infinity) from initializeOnly SFDouble field named <i>zSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Distance between grid-array vertices along north-south Z direction.
 * <ul>
 *  <li> <i>Hint:</i> when geoSystem is GDC, zSpacing is number of degrees of latitude. </li> 
 *  <li> <i>Hint:</i>  when geoSystem is UTM, zSpacing is number of northings (meters). </li> 
 * </ul>
	 * @return value of zSpacing field
	 */
	@Override
	public double getZSpacing()
	{
		return zSpacing;
	}

	/**
	 * Assign double value within allowed range of (0,infinity) to initializeOnly SFDouble field named <i>zSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Distance between grid-array vertices along north-south Z direction. Hint: when geoSystem is GDC, zSpacing is number of degrees of latitude. Hint: when geoSystem is UTM, zSpacing is number of northings (meters).
	 * @param newValue is new value for the zSpacing field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setZSpacing(double newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue <= 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid zSpacing newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
            }
		zSpacing = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFDouble zSpacing field, similar to {@link #setZSpacing(double)}.
	 * @param newValue is new value for the zSpacing field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setZSpacing(SFDoubleObject newValue)
	{
		setZSpacing(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final GeoElevationGridObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to GeoElevationGrid
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("GeoElevationGrid DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setDEF(SFStringObject newValue)
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final GeoElevationGridObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to GeoElevationGrid
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoElevationGrid USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("GeoElevationGrid USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final GeoElevationGridObject setCssClass(String newValue)
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setCssClass(SFStringObject newValue)
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGridObject setIS(ISObject newValue)
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGridObject setUSE(GeoElevationGridObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on GeoElevationGridObject" +
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
	public GeoElevationGridObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public GeoElevationGridObject addComments (String newComment)
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public GeoElevationGridObject addComments (String[] newComments)
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
	 * @return {@link GeoElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public GeoElevationGridObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (color != null) || (colorProtoInstance != null) || (geoOrigin != null) || (geoOriginProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (normal != null) || (normalProtoInstance != null) || (texCoord != null) || (texCoordProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<GeoElevationGrid"); // start opening tag
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
                            
			if (((getCcw() != CCW_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" ccw='").append(SFBoolObject.toString(getCcw())).append("'");
			}
			if (((getColorPerVertex() != COLORPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" colorPerVertex='").append(SFBoolObject.toString(getColorPerVertex())).append("'");
			}
			if (((getCreaseAngle() != CREASEANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" creaseAngle='").append(SFDoubleObject.toString(getCreaseAngle())).append("'");
			}
			if ((!Arrays.equals(getGeoGridOrigin(), GEOGRIDORIGIN_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoGridOrigin='").append(SFVec3dObject.toString(getGeoGridOrigin())).append("'");
			}
			if (((getGeoSystem().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoSystem='").append(new MFStringObject(getGeoSystem()).toStringX3D()).append("'");
			}
			if (((getHeight().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" height='").append(MFDoubleObject.toString(getHeight())).append("'");
			}
			if (((getNormalPerVertex() != NORMALPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" normalPerVertex='").append(SFBoolObject.toString(getNormalPerVertex())).append("'");
			}
			if (((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" solid='").append(SFBoolObject.toString(getSolid())).append("'");
			}
			if (((getXDimension() != XDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" xDimension='").append(SFInt32Object.toString(getXDimension())).append("'");
			}
			if (((getXSpacing() != XSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" xSpacing='").append(SFDoubleObject.toString(getXSpacing())).append("'");
			}
			if (((getYScale() != YSCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" yScale='").append(SFFloatObject.toString(getYScale())).append("'");
			}
			if (((getZDimension() != ZDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" zDimension='").append(SFInt32Object.toString(getZDimension())).append("'");
			}
			if (((getZSpacing() != ZSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" zSpacing='").append(SFDoubleObject.toString(getZSpacing())).append("'");
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
			if      (color != null)
			{
				stringX3D.append(((X3DConcreteElement)color).toStringX3D(indentLevel + indentIncrement));
			}
			else if (colorProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)colorProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (geoOrigin != null)
			{
				stringX3D.append(((X3DConcreteElement)geoOrigin).toStringX3D(indentLevel + indentIncrement));
			}
			else if (geoOriginProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)geoOriginProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (normal != null)
			{
				stringX3D.append(((X3DConcreteElement)normal).toStringX3D(indentLevel + indentIncrement));
			}
			else if (normalProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)normalProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (texCoord != null)
			{
				stringX3D.append(((X3DConcreteElement)texCoord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (texCoordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)texCoordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</GeoElevationGrid>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (color != null) || (colorProtoInstance != null) || (geoOrigin != null) || (geoOriginProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (normal != null) || (normalProtoInstance != null) || (texCoord != null) || (texCoordProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("GeoElevationGrid").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("ccw"))
						{
							stringClassicVRML.append(indentCharacter).append("ccw").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCcw() != CCW_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("ccw ").append(SFBoolObject.toString(getCcw())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("colorPerVertex"))
						{
							stringClassicVRML.append(indentCharacter).append("colorPerVertex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getColorPerVertex() != COLORPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("colorPerVertex ").append(SFBoolObject.toString(getColorPerVertex())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("creaseAngle"))
						{
							stringClassicVRML.append(indentCharacter).append("creaseAngle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCreaseAngle() != CREASEANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("creaseAngle ").append(SFDoubleObject.toString(getCreaseAngle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("geoGridOrigin"))
						{
							stringClassicVRML.append(indentCharacter).append("geoGridOrigin").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getGeoGridOrigin(), GEOGRIDORIGIN_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("geoGridOrigin ").append(SFVec3dObject.toString(getGeoGridOrigin())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("geoSystem"))
						{
							stringClassicVRML.append(indentCharacter).append("geoSystem").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getGeoSystem().length > 0)
				{
					stringClassicVRML.append("geoSystem ").append("[ ").append(MFStringObject.toString(getGeoSystem())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("height"))
						{
							stringClassicVRML.append(indentCharacter).append("height").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getHeight().length > 0)
				{
					stringClassicVRML.append("height ").append("[ ").append(MFDoubleObject.toString(getHeight())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("normalPerVertex"))
						{
							stringClassicVRML.append(indentCharacter).append("normalPerVertex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getNormalPerVertex() != NORMALPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("normalPerVertex ").append(SFBoolObject.toString(getNormalPerVertex())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("solid"))
						{
							stringClassicVRML.append(indentCharacter).append("solid").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("solid ").append(SFBoolObject.toString(getSolid())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("xDimension"))
						{
							stringClassicVRML.append(indentCharacter).append("xDimension").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getXDimension() != XDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("xDimension ").append(SFInt32Object.toString(getXDimension())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("xSpacing"))
						{
							stringClassicVRML.append(indentCharacter).append("xSpacing").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getXSpacing() != XSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("xSpacing ").append(SFDoubleObject.toString(getXSpacing())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("yScale"))
						{
							stringClassicVRML.append(indentCharacter).append("yScale").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getYScale() != YSCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("yScale ").append(SFFloatObject.toString(getYScale())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("zDimension"))
						{
							stringClassicVRML.append(indentCharacter).append("zDimension").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getZDimension() != ZDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("zDimension ").append(SFInt32Object.toString(getZDimension())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("zSpacing"))
						{
							stringClassicVRML.append(indentCharacter).append("zSpacing").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getZSpacing() != ZSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("zSpacing ").append(SFDoubleObject.toString(getZSpacing())).append("\n").append(indent).append(indentCharacter);
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
			if (color != null)
			{
				stringClassicVRML.append(indentCharacter).append("color").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) color).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (colorProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("color").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) colorProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (geoOrigin != null)
			{
				stringClassicVRML.append(indentCharacter).append("geoOrigin").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) geoOrigin).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (geoOriginProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("geoOrigin").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) geoOriginProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
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
			if (normal != null)
			{
				stringClassicVRML.append(indentCharacter).append("normal").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) normal).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (normalProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("normal").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) normalProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (texCoord != null)
			{
				stringClassicVRML.append(indentCharacter).append("texCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) texCoord).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (texCoordProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("texCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) texCoordProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
		if (color != null)
		{
			referenceElement = ((X3DConcreteElement) color).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (colorProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) colorProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (geoOrigin != null)
		{
			referenceElement = ((X3DConcreteElement) geoOrigin).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (geoOriginProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) geoOriginProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
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
		if (normal != null)
		{
			referenceElement = ((X3DConcreteElement) normal).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (normalProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) normalProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (texCoord != null)
		{
			referenceElement = ((X3DConcreteElement) texCoord).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (texCoordProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) texCoordProtoInstance).findElementByNameValue(nameValue, elementName);
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
		if (color != null)
		{
			referenceNode = ((X3DConcreteElement) color).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (geoOrigin != null)
		{
			referenceNode = ((X3DConcreteElement) geoOrigin).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (normal != null)
		{
			referenceNode = ((X3DConcreteElement) normal).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (texCoord != null)
		{
			referenceNode = ((X3DConcreteElement) texCoord).findNodeByDEF(DEFvalue);
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

		setCcw(getCcw()); // exercise field checks, simple types

		setColorPerVertex(getColorPerVertex()); // exercise field checks, simple types

		setCreaseAngle(getCreaseAngle()); // exercise field checks, simple types

		setGeoGridOrigin(getGeoGridOrigin()); // exercise field checks, simple types

		setGeoSystem(getGeoSystem()); // exercise field checks, simple types

		setHeight(getHeight()); // exercise field checks, simple types

		setNormalPerVertex(getNormalPerVertex()); // exercise field checks, simple types

		setSolid(getSolid()); // exercise field checks, simple types

		setXDimension(getXDimension()); // exercise field checks, simple types

		setXSpacing(getXSpacing()); // exercise field checks, simple types

		setYScale(getYScale()); // exercise field checks, simple types

		setZDimension(getZDimension()); // exercise field checks, simple types

		setZSpacing(getZSpacing()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (color != null)
		{
			setColor(getColor());
			((X3DConcreteElement) color).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) color).getValidationResult());
		}
		if (colorProtoInstance != null)
		{
			setColor(getColorProtoInstance());
			((X3DConcreteElement) colorProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) colorProtoInstance).getValidationResult());
		}
		if ((color != null) && (colorProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both color and colorProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasColor()) // test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode color";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (geoOrigin != null)
		{
			setGeoOrigin(getGeoOrigin());
			((X3DConcreteElement) geoOrigin).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) geoOrigin).getValidationResult());
		}
		if (geoOriginProtoInstance != null)
		{
			setGeoOrigin(getGeoOriginProtoInstance());
			((X3DConcreteElement) geoOriginProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) geoOriginProtoInstance).getValidationResult());
		}
		if ((geoOrigin != null) && (geoOriginProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both geoOrigin and geoOriginProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasGeoOrigin()) // test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode geoOrigin";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

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
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (normal != null)
		{
			setNormal(getNormal());
			((X3DConcreteElement) normal).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) normal).getValidationResult());
		}
		if (normalProtoInstance != null)
		{
			setNormal(getNormalProtoInstance());
			((X3DConcreteElement) normalProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) normalProtoInstance).getValidationResult());
		}
		if ((normal != null) && (normalProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both normal and normalProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasNormal()) // test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode normal";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (texCoord != null)
		{
			setTexCoord(getTexCoord());
			((X3DConcreteElement) texCoord).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) texCoord).getValidationResult());
		}
		if (texCoordProtoInstance != null)
		{
			setTexCoord(getTexCoordProtoInstance());
			((X3DConcreteElement) texCoordProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) texCoordProtoInstance).getValidationResult());
		}
		if ((texCoord != null) && (texCoordProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both texCoord and texCoordProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasTexCoord()) // test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode texCoord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "GeoElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("Geospatial") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Geospatial' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Geospatial\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
