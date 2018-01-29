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

package org.web3d.x3d.sai.Geospatial;


import org.web3d.x3d.sai.Rendering.X3DGeometryNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.Texturing.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
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
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#GeoElevationGrid" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#GeoElevationGrid" target="blank">X3D Abstract Specification: GeoElevationGrid</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#GeoElevationGrid" target="_blank">X3D Tooltips: GeoElevationGrid</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface GeoElevationGrid extends X3DGeometryNode
{
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
	public boolean getCcw();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>ccw</i>.
	 * <br><br>
	 * <i>Tooltip:</i> ccw = counterclockwise: ordering of vertex coordinates orientation, according to Right-Hand Rule (RHR). Hint: ccw false can reverse solid (backface culling) and normal-vector orientation. Note that consistency of left-handed or right-handed point sequences is important throughout.
	 * @param newValue is new value for the ccw field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setCcw(boolean newValue);

	/**
	 * Provide X3DColorNode instance (using a properly typed node) using RGB values [0..1] from inputOutput SFNode field <i>color</i>.
	 * @return value of color field
	 */
	public X3DColorNode getColor(); // acceptable node types: X3DColorNode

	/**
	 * Assign X3DColorNode instance (using a properly typed node) using RGB values [0..1] to inputOutput SFNode field <i>color</i>.
	 * @param newValue is new value for the color field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setColor(X3DColorNode newValue); // acceptable node types: X3DColorNode

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>colorPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per quadrilateral (false).
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of colorPerVertex field
	 */
	public boolean getColorPerVertex();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>colorPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per quadrilateral (false). Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the colorPerVertex field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setColorPerVertex(boolean newValue);

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
	public double getCreaseAngle();

	/**
	 * Assign double value unit axis, angle (in radians) within allowed range of [0,infinity) to initializeOnly SFDouble field named <i>creaseAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) creaseAngle defines angle (in radians) for determining whether adjacent polygons are drawn with sharp edges or smooth shading. If angle between normals of two adjacent polygons is less than creaseAngle, smooth shading is rendered across the shared line segment. Hint: creaseAngle=0 means render all edges sharply, creaseAngle=3.14159 means render all edges smoothly. Warning: note type double, unlike ElevationGrid creaseAngle.
	 * @param newValue is new value for the creaseAngle field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setCreaseAngle(double newValue);

	/**
	 * Provide array of 3-tuple double results from initializeOnly SFVec3d field named <i>geoGridOrigin</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Geographic coordinate for southwest (lower-left) corner of height dataset.  * <br>

	 * @return value of geoGridOrigin field
	 */
	public double[] getGeoGridOrigin();

	/**
	 * Assign 3-tuple double array to initializeOnly SFVec3d field named <i>geoGridOrigin</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Geographic coordinate for southwest (lower-left) corner of height dataset.
	 * @param newValue is new value for the geoGridOrigin field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setGeoGridOrigin(double[] newValue);

	/**
	 * Provide GeoOrigin instance (using a properly typed node) (deprecated node, optional) from initializeOnly SFNode field <i>geoOrigin</i>.
	 * @return value of geoOrigin field
	 */
	public GeoOrigin getGeoOrigin(); // acceptable node types: GeoOrigin

	/**
	 * Assign GeoOrigin instance (using a properly typed node) (deprecated node, optional) to initializeOnly SFNode field <i>geoOrigin</i>.
	 * @param newValue is new value for the geoOrigin field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setGeoOrigin(GeoOrigin newValue); // acceptable node types: GeoOrigin

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
	public String[] getGeoSystem();

	/**
	 * Assign String array to initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type. Hint: see X3D Specification 25.2.2 Spatial reference frames http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes Hint: see X3D Specification 25.2.4 Specifying geospatial coordinates http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords Hint: UTM is Universal Transverse Mercator coordinate system https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system Warning: deprecated values are GDC (replaced by GD) and GCC (replaced by GC).
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setGeoSystem(String[] newValue);

	/**
	 * Provide array of double results from initializeOnly MFDouble field named <i>height</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains xDimension rows * zDimension columns floating-point values for elevation above ellipsoid.
 * <ul>
 *  <li> <i>Hint:</i> height array values are in row-major order from west to east, south to north. </li> 
 *  <li> <i>Hint:</i>  geoGridOrigin is in southwest (lower-left) corner of height dataset. </li> 
 * </ul>
	 * @return value of height field
	 */
	public double[] getHeight();

	/**
	 * Assign double array to initializeOnly MFDouble field named <i>height</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains xDimension rows * zDimension columns floating-point values for elevation above ellipsoid. Hint: height array values are in row-major order from west to east, south to north. Hint: geoGridOrigin is in southwest (lower-left) corner of height dataset.
	 * @param newValue is new value for the height field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setHeight(double[] newValue);

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata(); // acceptable node types: X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGrid setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide X3DNormalNode instance (using a properly typed node) from inputOutput SFNode field <i>normal</i>.
	 * @return value of normal field
	 */
	public X3DNormalNode getNormal(); // acceptable node types: X3DNormalNode

	/**
	 * Assign X3DNormalNode instance (using a properly typed node) to inputOutput SFNode field <i>normal</i>.
	 * @param newValue is new value for the normal field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setNormal(X3DNormalNode newValue); // acceptable node types: X3DNormalNode

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>normalPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Normal node vector values are applied to each point vertex (true) or per quadrilateral (false).
 * <ul>
 *  <li> <i> Hint:</i>  if no child Normal node is provided, the X3D browser shall automatically generate normals, using creaseAngle to determine smoothed shading across shared vertices. </li> 
 * </ul>
	 * @return value of normalPerVertex field
	 */
	public boolean getNormalPerVertex();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>normalPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Normal node vector values are applied to each point vertex (true) or per quadrilateral (false). Hint: if no child Normal node is provided, the X3D browser shall automatically generate normals, using creaseAngle to determine smoothed shading across shared vertices.
	 * @param newValue is new value for the normalPerVertex field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setNormalPerVertex(boolean newValue);

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
	public boolean getSolid();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off). Warning: default value true can completely hide geometry if viewed from wrong side! Hint: if in doubt, use solid='false' for maximum visibility.
	 * @param newValue is new value for the solid field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setSolid(boolean newValue);

	/**
	 * Provide X3DTextureCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>texCoord</i>.
	 * @return value of texCoord field
	 */
	public X3DTextureCoordinateNode getTexCoord(); // acceptable node types: X3DTextureCoordinateNode

	/**
	 * Assign X3DTextureCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>texCoord</i>.
	 * @param newValue is new value for the texCoord field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setTexCoord(X3DTextureCoordinateNode newValue); // acceptable node types: X3DTextureCoordinateNode

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
	public int getXDimension();

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>xDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along east-west X direction. Hint: total horizontal x-axis distance equals (xDimension-1) * xSpacing. Warning: xDimension &lt; 2 means that GeoElevationGrid contains no quadrilaterals.
	 * @param newValue is new value for the xDimension field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setXDimension(int newValue);

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
	public double getXSpacing();

	/**
	 * Assign double value within allowed range of (0,infinity) to initializeOnly SFDouble field named <i>xSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Distance between grid-array vertices along east-west X direction. Hint: when geoSystem is GDC, xSpacing is number of degrees of longitude. Hint: when geoSystem is UTM, xSpacing is number of eastings (meters).
	 * @param newValue is new value for the xSpacing field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setXSpacing(double newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>yScale</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) Vertical exaggeration of displayed data produced from the height array.  * <br>

	 * @return value of yScale field
	 */
	public float getYScale();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>yScale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Vertical exaggeration of displayed data produced from the height array.
	 * @param newValue is new value for the yScale field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setYScale(float newValue);

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
	public int getZDimension();

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>zDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along north-south Z direction. Hint: total lateral z-axis distance equals (zDimension-1) * zSpacing. Warning: zDimension &lt; 2 means that GeoElevationGrid contains no quadrilaterals.
	 * @param newValue is new value for the zDimension field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setZDimension(int newValue);

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
	public double getZSpacing();

	/**
	 * Assign double value within allowed range of (0,infinity) to initializeOnly SFDouble field named <i>zSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Distance between grid-array vertices along north-south Z direction. Hint: when geoSystem is GDC, zSpacing is number of degrees of latitude. Hint: when geoSystem is UTM, zSpacing is number of northings (meters).
	 * @param newValue is new value for the zSpacing field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoElevationGrid setZSpacing(double newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGrid setDEF(String newValue);


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
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGrid setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link GeoElevationGrid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoElevationGrid setCssClass(String newValue);

}
