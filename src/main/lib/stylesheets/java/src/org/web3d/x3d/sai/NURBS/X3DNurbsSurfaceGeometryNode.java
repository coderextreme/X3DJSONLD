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
 * Abstract geometry type for all types of NURBS surfaces.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DNurbsSurfaceGeometryNode" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/nurbs.html#X3DNurbsSurfaceGeometryNode" target="blank">X3D Abstract Specification: TODO</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface X3DNurbsSurfaceGeometryNode extends X3DParametricGeometryNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>controlPoint</i>.
	 * @return value of controlPoint field
	 */
	public X3DCoordinateNode getControlPoint(); // acceptable node types: X3DCoordinateNode

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>controlPoint</i>.
	 * @param newValue is new value for the controlPoint field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setControlPoint(X3DCoordinateNode newValue); // acceptable node types: X3DCoordinateNode

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	public X3DMetadataObject getMetadata(); // acceptable node types: X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>solid</i>.
	 * @return value of solid field
	 */
	public boolean getSolid();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>solid</i>.
	 * @param newValue is new value for the solid field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setSolid(boolean newValue);

	/**
	 * Provide X3DNode instance (using a properly typed node) with acceptable node types limited to X3DTextureCoordinateNode|NurbsTextureCoordinate, from inputOutput SFNode field <i>texCoord</i>.
	 * @return value of texCoord field
	 */
	public X3DNode getTexCoord(); // acceptable node types: X3DTextureCoordinateNode|NurbsTextureCoordinate

	/**
	 * Assign X3DNode instance (using a properly typed node) with acceptable node types limited to X3DTextureCoordinateNode|NurbsTextureCoordinate, to inputOutput SFNode field <i>texCoord</i>.
	 * @param newValue is new value for the texCoord field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setTexCoord(X3DNode newValue); // acceptable node types: X3DTextureCoordinateNode|NurbsTextureCoordinate

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>uClosed</i>.
	 * @return value of uClosed field
	 */
	public boolean getUClosed();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>uClosed</i>.
	 * @param newValue is new value for the uClosed field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setUClosed(boolean newValue);

	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>uDimension</i>.
	 * @return value of uDimension field
	 */
	public int getUDimension();

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>uDimension</i>.
	 * @param newValue is new value for the uDimension field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setUDimension(int newValue);

	/**
	 * Provide array of double results from initializeOnly MFDouble field named <i>uKnot</i>.
	 * @return value of uKnot field
	 */
	public double[] getUKnot();

	/**
	 * Assign double array to initializeOnly MFDouble field named <i>uKnot</i>.
	 * @param newValue is new value for the uKnot field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setUKnot(double[] newValue);

	/**
	 * Provide int value within allowed range of [2,infinity) from initializeOnly SFInt32 field named <i>uOrder</i>.
	 * @return value of uOrder field
	 */
	public int getUOrder();

	/**
	 * Assign int value within allowed range of [2,infinity) to initializeOnly SFInt32 field named <i>uOrder</i>.
	 * @param newValue is new value for the uOrder field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setUOrder(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>uTessellation</i>.
	 * @return value of uTessellation field
	 */
	public int getUTessellation();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>uTessellation</i>.
	 * @param newValue is new value for the uTessellation field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setUTessellation(int newValue);

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>vClosed</i>.
	 * @return value of vClosed field
	 */
	public boolean getVClosed();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>vClosed</i>.
	 * @param newValue is new value for the vClosed field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setVClosed(boolean newValue);

	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>vDimension</i>.
	 * @return value of vDimension field
	 */
	public int getVDimension();

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>vDimension</i>.
	 * @param newValue is new value for the vDimension field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setVDimension(int newValue);

	/**
	 * Provide array of double results from initializeOnly MFDouble field named <i>vKnot</i>.
	 * @return value of vKnot field
	 */
	public double[] getVKnot();

	/**
	 * Assign double array to initializeOnly MFDouble field named <i>vKnot</i>.
	 * @param newValue is new value for the vKnot field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setVKnot(double[] newValue);

	/**
	 * Provide int value within allowed range of [2,infinity) from initializeOnly SFInt32 field named <i>vOrder</i>.
	 * @return value of vOrder field
	 */
	public int getVOrder();

	/**
	 * Assign int value within allowed range of [2,infinity) to initializeOnly SFInt32 field named <i>vOrder</i>.
	 * @param newValue is new value for the vOrder field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setVOrder(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>vTessellation</i>.
	 * @return value of vTessellation field
	 */
	public int getVTessellation();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>vTessellation</i>.
	 * @param newValue is new value for the vTessellation field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setVTessellation(int newValue);

	/**
	 * Provide array of double results within allowed range of (0,infinity) from inputOutput MFDouble field named <i>weight</i>.
	 * @return value of weight field
	 */
	public double[] getWeight();

	/**
	 * Assign double array within allowed range of (0,infinity) to inputOutput MFDouble field named <i>weight</i>.
	 * @param newValue is new value for the weight field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setWeight(double[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setDEF(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * @param newValue is new value for the class field.
	 * @return {@link X3DNurbsSurfaceGeometryNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public X3DNurbsSurfaceGeometryNode setCssClass(String newValue);

}
