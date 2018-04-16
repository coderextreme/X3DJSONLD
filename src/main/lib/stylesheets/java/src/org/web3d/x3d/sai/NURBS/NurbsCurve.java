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
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: NurbsCurve is a 3D curve analogous to NurbsPatchSurface.
 * <ul>
 *  <li> <i> Hint:</i>  the contained controlPoint field can hold a Coordinate or CoordinateDouble node. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#NurbsCurve" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/nurbs.html#NurbsCurve" target="blank">X3D Abstract Specification: NurbsCurve</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#NurbsCurve" target="_blank">X3D Tooltips: NurbsCurve</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface NurbsCurve extends X3DParametricGeometryNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>closed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether or not the curve is closed (i.e. matching end values).  * <br>

	 * @return value of closed field
	 */
	public boolean getClosed();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>closed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether or not the curve is closed (i.e. matching end values).
	 * @param newValue is new value for the closed field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsCurve setClosed(boolean newValue);

	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>controlPoint</i>.
	 * @return value of controlPoint field
	 */
	public X3DCoordinateNode getControlPoint(); // acceptable node types: X3DCoordinateNode

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>controlPoint</i>.
	 * @param newValue is new value for the controlPoint field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsCurve setControlPoint(X3DCoordinateNode newValue); // acceptable node types: X3DCoordinateNode

	/**
	 * Provide array of double results from initializeOnly MFDouble field named <i>knot</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  knot vector, where size = number of control points + order of curve.  * <br>

	 * @return value of knot field
	 */
	public double[] getKnot();

	/**
	 * Assign double array to initializeOnly MFDouble field named <i>knot</i>.
	 * <br><br>
	 * <i>Tooltip:</i> knot vector, where size = number of control points + order of curve.
	 * @param newValue is new value for the knot field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsCurve setKnot(double[] newValue);

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
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsCurve setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide int value within allowed range of [2,infinity) from initializeOnly SFInt32 field named <i>order</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  define order of surface by polynomials of degree = order-1.  * <br>

	 * @return value of order field
	 */
	public int getOrder();

	/**
	 * Assign int value within allowed range of [2,infinity) to initializeOnly SFInt32 field named <i>order</i>.
	 * <br><br>
	 * <i>Tooltip:</i> define order of surface by polynomials of degree = order-1.
	 * @param newValue is new value for the order field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsCurve setOrder(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>tessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  hint for surface tesselation.  * <br>

	 * @return value of tessellation field
	 */
	public int getTessellation();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>tessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> hint for surface tesselation.
	 * @param newValue is new value for the tessellation field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsCurve setTessellation(int newValue);

	/**
	 * Provide array of double results within allowed range of (0,infinity) from inputOutput MFDouble field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Vector assigning relative weight value to each control point.  * <br>

	 * @return value of weight field
	 */
	public double[] getWeight();

	/**
	 * Assign double array within allowed range of (0,infinity) to inputOutput MFDouble field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Vector assigning relative weight value to each control point.
	 * @param newValue is new value for the weight field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsCurve setWeight(double[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsCurve setDEF(String newValue);


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
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsCurve setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link NurbsCurve} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsCurve setCssClass(String newValue);

}
