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

package org.web3d.x3d.sai.NURBS;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.NURBS.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>:  NurbsTrimmedSurface generates texture coordinates from a Non-Uniform Rational B-Spline (NURBS) surface.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#NurbsTrimmedSurface" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/nurbs.html#NurbsTrimmedSurface" target="blank">X3D Abstract Specification: NurbsTrimmedSurface</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#NurbsTrimmedSurface" target="_blank">X3D Tooltips: NurbsTrimmedSurface</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface NurbsTrimmedSurface extends X3DNurbsSurfaceGeometryNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>controlPoint</i>.
	 * @return value of controlPoint field
	 */
	@Override
	public X3DCoordinateNode getControlPoint(); // acceptable node types: X3DCoordinateNode

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>controlPoint</i>.
	 * @param newValue is new value for the controlPoint field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setControlPoint(X3DCoordinateNode newValue); // acceptable node types: X3DCoordinateNode

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
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

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
	public boolean getSolid();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off). Warning: default value true can completely hide geometry if viewed from wrong side! Hint: if in doubt, use solid='false' for maximum visibility.
	 * @param newValue is new value for the solid field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setSolid(boolean newValue);

	/**
	 * Provide X3DNode instance (using a properly typed node) with acceptable node types limited to X3DTextureCoordinateNode|NurbsTextureCoordinate, from inputOutput SFNode field <i>texCoord</i>.
	 * @return value of texCoord field
	 */
	@Override
	public X3DNode getTexCoord(); // acceptable node types: X3DTextureCoordinateNode|NurbsTextureCoordinate

	/**
	 * Assign X3DNode instance (using a properly typed node) with acceptable node types limited to X3DTextureCoordinateNode|NurbsTextureCoordinate, to inputOutput SFNode field <i>texCoord</i>.
	 * @param newValue is new value for the texCoord field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setTexCoord(X3DNode newValue); // acceptable node types: X3DTextureCoordinateNode|NurbsTextureCoordinate

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>trimmingContour</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Contour2D.
	 * @see org.web3d.x3d.jsail.NURBS.Contour2DObject
	 * @return value of trimmingContour field
	 */
	public X3DNode[] getTrimmingContour(); // acceptable node types: Contour2D

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>trimmingContour</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Contour2D.
	 * @param newValue is new value for the trimmingContour field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurface setTrimmingContour(X3DNode[] newValue); // acceptable node types: Contour2D

	/**
	 * Add array of child trimmingContour nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Contour2D.
	 * @param newValue is new value array to be appended the trimmingContour field.
	 */
	public void addTrimmingContour(X3DNode[] newValue); // acceptable node types: Contour2D
	/**
	 * Set single child trimmingContour node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the trimmingContour field
	 */
	public void setTrimmingContour(X3DNode newValue); // acceptable node types: Contour2D
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>uClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether opposite surface sides are closed (seamless) across u dimension.  * <br>

	 * @return value of uClosed field
	 */
	@Override
	public boolean getUClosed();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>uClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether opposite surface sides are closed (seamless) across u dimension.
	 * @param newValue is new value for the uClosed field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setUClosed(boolean newValue);

	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>uDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Number of control points in u dimension.  * <br>

	 * @return value of uDimension field
	 */
	@Override
	public int getUDimension();

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>uDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Number of control points in u dimension.
	 * @param newValue is new value for the uDimension field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setUDimension(int newValue);

	/**
	 * Provide array of double results from initializeOnly MFDouble field named <i>uKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Knot vector, where size = number of control points + order of curve.  * <br>

	 * @return value of uKnot field
	 */
	@Override
	public double[] getUKnot();

	/**
	 * Assign double array to initializeOnly MFDouble field named <i>uKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Knot vector, where size = number of control points + order of curve.
	 * @param newValue is new value for the uKnot field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setUKnot(double[] newValue);

	/**
	 * Provide int value within allowed range of [2,infinity) from initializeOnly SFInt32 field named <i>uOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Define order of surface by polynomials of degree = order-1.  * <br>

	 * @return value of uOrder field
	 */
	@Override
	public int getUOrder();

	/**
	 * Assign int value within allowed range of [2,infinity) to initializeOnly SFInt32 field named <i>uOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Define order of surface by polynomials of degree = order-1.
	 * @param newValue is new value for the uOrder field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setUOrder(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>uTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  hint for surface tesselation.  * <br>

	 * @return value of uTessellation field
	 */
	@Override
	public int getUTessellation();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>uTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> hint for surface tesselation.
	 * @param newValue is new value for the uTessellation field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setUTessellation(int newValue);

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>vClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether opposite surface sides are closed (seamless) across u dimension.  * <br>

	 * @return value of vClosed field
	 */
	@Override
	public boolean getVClosed();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>vClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether opposite surface sides are closed (seamless) across u dimension.
	 * @param newValue is new value for the vClosed field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setVClosed(boolean newValue);

	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>vDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Number of control points in v dimension.  * <br>

	 * @return value of vDimension field
	 */
	@Override
	public int getVDimension();

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>vDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Number of control points in v dimension.
	 * @param newValue is new value for the vDimension field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setVDimension(int newValue);

	/**
	 * Provide array of double results from initializeOnly MFDouble field named <i>vKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Knot vector, where size = number of control points + order of curve.  * <br>

	 * @return value of vKnot field
	 */
	@Override
	public double[] getVKnot();

	/**
	 * Assign double array to initializeOnly MFDouble field named <i>vKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Knot vector, where size = number of control points + order of curve.
	 * @param newValue is new value for the vKnot field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setVKnot(double[] newValue);

	/**
	 * Provide int value within allowed range of [2,infinity) from initializeOnly SFInt32 field named <i>vOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Define order of surface by polynomials of degree = order-1.  * <br>

	 * @return value of vOrder field
	 */
	@Override
	public int getVOrder();

	/**
	 * Assign int value within allowed range of [2,infinity) to initializeOnly SFInt32 field named <i>vOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Define order of surface by polynomials of degree = order-1.
	 * @param newValue is new value for the vOrder field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setVOrder(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>vTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  hint for surface tesselation.  * <br>

	 * @return value of vTessellation field
	 */
	@Override
	public int getVTessellation();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>vTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> hint for surface tesselation.
	 * @param newValue is new value for the vTessellation field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setVTessellation(int newValue);

	/**
	 * Provide array of double results within allowed range of (0,infinity) from inputOutput MFDouble field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Vector assigning relative weight value to each control point.  * <br>

	 * @return value of weight field
	 */
	@Override
	public double[] getWeight();

	/**
	 * Assign double array within allowed range of (0,infinity) to inputOutput MFDouble field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Vector assigning relative weight value to each control point.
	 * @param newValue is new value for the weight field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setWeight(double[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setDEF(String newValue);


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
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link NurbsTrimmedSurface} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurface setCssClass(String newValue);

}
