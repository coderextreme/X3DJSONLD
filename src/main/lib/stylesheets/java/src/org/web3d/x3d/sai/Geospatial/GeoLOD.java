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


import org.web3d.x3d.sai.Core.X3DChildNode;
import org.web3d.x3d.sai.Grouping.X3DBoundedObject;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Core.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: GeoLOD provides quadtree level-of-detail loading/unloading for multi-resolution terrains. GeoLOD can contain children and GeoOrigin nodes.
 * <ul>
 *  <li> <i>Hint:</i> children nodes expose the scene graph for the currently loaded set of nodes. </li> 
 *  <li> <i>Hint:</i> rootNode specifies the geometry of the root tile. </li> 
 *  <li> <i>Warning:</i> do not use rootUrl and rootNode simultaneously, since each specifies the root tile. </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/GeospatialComponentX3dEarth.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/GeospatialComponentX3dEarth.pdf</a> </li> 
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='Geospatial' level='1'/&amp;gt; </li> 
 *  <li> <i>Warning:</i>  nested LOD (and/or GeoLOD) nodes with overlapping range intervals can lead to unexpected or undefined behavior. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#GeoLOD" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#GeoLOD" target="blank">X3D Abstract Specification: GeoLOD</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#GeoLOD" target="_blank">X3D Tooltips: GeoLOD</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface GeoLOD extends X3DChildNode, X3DBoundedObject
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 3-tuple float results from initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxCenter field
	 */
	@Override
	public float[] getBboxCenter();

	/**
	 * Assign 3-tuple float array to initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLOD setBboxCenter(float[] newValue);

	/**
	 * Provide array of 3-tuple float results within allowed range of [0,infinity), or default value [-1 -1 -1], from initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint.
 * <ul>
 *  <li> <i>Hint:</i> can be useful for collision computations or inverse-kinematics (IK) engines. </li> 
 *  <li> <i>Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxSize field
	 */
	@Override
	public float[] getBboxSize();

	/**
	 * Assign 3-tuple float array within allowed range of [0,infinity), or default value [-1 -1 -1], to initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint. Hint: can be useful for collision computations or inverse-kinematics (IK) engines. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLOD setBboxSize(float[] newValue);

	/**
	 * Provide array of 3-tuple double results from initializeOnly SFVec3d field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Viewer range from geographic-coordinates center triggers quadtree loading/unloading.  * <br>

	 * @return value of center field
	 */
	public double[] getCenter();

	/**
	 * Assign 3-tuple double array to initializeOnly SFVec3d field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Viewer range from geographic-coordinates center triggers quadtree loading/unloading.
	 * @param newValue is new value for the center field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setCenter(double[] newValue);

	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child1Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child1Url field
	 */
	public String[] getChild1Url();

	/**
	 * Assign String array to initializeOnly MFString field named <i>child1Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child1Url field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setChild1Url(String[] newValue);

	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child2Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child2Url field
	 */
	public String[] getChild2Url();

	/**
	 * Assign String array to initializeOnly MFString field named <i>child2Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child2Url field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setChild2Url(String[] newValue);

	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child3Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child3Url field
	 */
	public String[] getChild3Url();

	/**
	 * Assign String array to initializeOnly MFString field named <i>child3Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child3Url field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setChild3Url(String[] newValue);

	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child4Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child4Url field
	 */
	public String[] getChild4Url();

	/**
	 * Assign String array to initializeOnly MFString field named <i>child4Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child4Url field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setChild4Url(String[] newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from outputOnly MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of children field
	 */
	public X3DNode[] getChildren(); // acceptable node types: X3DChildNode
	/**
	 * Provide GeoOrigin instance (using a properly typed node) (deprecated node, optional) from initializeOnly SFNode field <i>geoOrigin</i>.
	 * @return value of geoOrigin field
	 */
	public GeoOrigin getGeoOrigin(); // acceptable node types: GeoOrigin

	/**
	 * Assign GeoOrigin instance (using a properly typed node) (deprecated node, optional) to initializeOnly SFNode field <i>geoOrigin</i>.
	 * @param newValue is new value for the geoOrigin field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setGeoOrigin(GeoOrigin newValue); // acceptable node types: GeoOrigin

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
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setGeoSystem(String[] newValue);

	/**
	 * Provide int value from outputOnly SFInt32 field named <i>level_changed</i>.
	 * @return value of level_changed field
	 */
	public int getLevel();
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
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLOD setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide float value within allowed range of [0,infinity) from initializeOnly SFFloat field named <i>range</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Viewer range from geographic-coordinates center triggers quadtree loading/unloading.
 * <ul>
 *  <li> <i> Hint:</i>  not setting range values indicates that level switching can be optimized automatically based on performance. </li> 
 * </ul>
	 * @return value of range field
	 */
	public float getRange();

	/**
	 * Assign float value within allowed range of [0,infinity) to initializeOnly SFFloat field named <i>range</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Viewer range from geographic-coordinates center triggers quadtree loading/unloading. Hint: not setting range values indicates that level switching can be optimized automatically based on performance.
	 * @param newValue is new value for the range field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setRange(float newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from initializeOnly MFNode field <i>rootNode</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of rootNode field
	 */
	public X3DNode[] getRootNode(); // acceptable node types: X3DChildNode

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to initializeOnly MFNode field <i>rootNode</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value for the rootNode field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setRootNode(X3DNode[] newValue); // acceptable node types: X3DChildNode

	/**
	 * Add array of child rootNode nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value array to be appended the rootNode field.
	 */
	public void addRootNode(X3DNode[] newValue); // acceptable node types: X3DChildNode
	/**
	 * Set single child rootNode node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the rootNode field
	 */
	public void setRootNode(X3DNode newValue); // acceptable node types: X3DChildNode
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>rootUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Use either rootNode or rootUrl to specify root geometry, not both.  * <br>

	 * @return value of rootUrl field
	 */
	public String[] getRootUrl();

	/**
	 * Assign String array to initializeOnly MFString field named <i>rootUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Use either rootNode or rootUrl to specify root geometry, not both.
	 * @param newValue is new value for the rootUrl field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLOD setRootUrl(String[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLOD setDEF(String newValue);


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
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLOD setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link GeoLOD} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLOD setCssClass(String newValue);

}
