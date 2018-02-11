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

package org.web3d.x3d.sai.Lighting;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Linear attenuation may occur at level 2, full support at level 3.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: SpotLight is a light source that illuminates geometry within a conical beam. Light illuminates all geometry and is normally scoped to illuminate peers and children nodes within the scene graph hierarchy Lights have no visible shape themselves and shine through occluding geometry.
 * <ul>
 *  <li> <i> Hint:</i>  HeadLight enabled on/off is controlled by NavigationInfo. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#SpotLight" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/lighting.html#SpotLight" target="blank">X3D Abstract Specification: SpotLight</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SpotLight" target="_blank">X3D Tooltips: SpotLight</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface SpotLight extends X3DLightNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>ambientIntensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] Brightness of ambient (nondirectional background) emission from the light.  * <br>

	 * @return value of ambientIntensity field
	 */
	@Override
	public float getAmbientIntensity();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>ambientIntensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] Brightness of ambient (nondirectional background) emission from the light.
	 * @param newValue is new value for the ambientIntensity field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setAmbientIntensity(float newValue);

	/**
	 * Provide array of 3-tuple float results within allowed range of [0,infinity) from inputOutput SFVec3f field named <i>attenuation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Constant, linear-distance and squared-distance dropoff factors.  * <br>

	 * @return value of attenuation field
	 */
	public float[] getAttenuation();

	/**
	 * Assign 3-tuple float array within allowed range of [0,infinity) to inputOutput SFVec3f field named <i>attenuation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Constant, linear-distance and squared-distance dropoff factors.
	 * @param newValue is new value for the attenuation field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SpotLight setAttenuation(float[] newValue);

	/**
	 * Provide float value within allowed range of (0,1.570796] from inputOutput SFFloat field named <i>beamWidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1.570796] Inner conical solid angle (in radians) where light source has uniform full intensity.
 * <ul>
 *  <li> <i>Hint:</i> beamWidth is inner angle of full intensity, cutOffAngle is outer angle of zero intensity. Therefore set beamWidth &amp;lt;= cutOffAngle. </li> 
 *  <li> <i>Warning:</i>  if beamWidth &amp;gt; cutOffAngle, then beamWidth reset to equal cutOffAngle. </li> 
 * </ul>
	 * @return value of beamWidth field
	 */
	public float getBeamWidth();

	/**
	 * Assign float value within allowed range of (0,1.570796] to inputOutput SFFloat field named <i>beamWidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1.570796] Inner conical solid angle (in radians) where light source has uniform full intensity. Hint: beamWidth is inner angle of full intensity, cutOffAngle is outer angle of zero intensity. Therefore set beamWidth &lt;= cutOffAngle. Warning: if beamWidth &gt; cutOffAngle, then beamWidth reset to equal cutOffAngle.
	 * @param newValue is new value for the beamWidth field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SpotLight setBeamWidth(float newValue);

	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>color</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] color of light, applied to colors of objects.
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of color field
	 */
	@Override
	public float[] getColor();

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>color</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] color of light, applied to colors of objects. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the color field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setColor(float[] newValue);

	/**
	 * Provide float value unit axis, angle (in radians) within allowed range of (0,1.570796] from inputOutput SFFloat field named <i>cutOffAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1.570796] Outer conical solid angle (in radians) where light source intensity becomes zero.
 * <ul>
 *  <li> <i>Hint:</i> beamWidth is inner angle of full intensity, cutOffAngle is outer angle of zero intensity. Therefore set beamWidth &amp;lt;= cutOffAngle. </li> 
 *  <li> <i>Warning:</i>  if beamWidth &amp;gt; cutOffAngle, then beamWidth reset to equal cutOffAngle. </li> 
 * </ul>
	 * @return value of cutOffAngle field
	 */
	public float getCutOffAngle();

	/**
	 * Assign float value unit axis, angle (in radians) within allowed range of (0,1.570796] to inputOutput SFFloat field named <i>cutOffAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1.570796] Outer conical solid angle (in radians) where light source intensity becomes zero. Hint: beamWidth is inner angle of full intensity, cutOffAngle is outer angle of zero intensity. Therefore set beamWidth &lt;= cutOffAngle. Warning: if beamWidth &gt; cutOffAngle, then beamWidth reset to equal cutOffAngle.
	 * @param newValue is new value for the cutOffAngle field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SpotLight setCutOffAngle(float newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>direction</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Orientation vector of light relative to local coordinate system.  * <br>

	 * @return value of direction field
	 */
	public float[] getDirection();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>direction</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation vector of light relative to local coordinate system.
	 * @param newValue is new value for the direction field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SpotLight setDirection(float[] newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>global</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  (X3D version 3.1 or later) Global lights illuminate all objects within their volume of lighting influence. Scoped lights only illuminate objects within the same transformation hierarchy.  * <br>

	 * @return value of global field
	 */
	public boolean getGlobal();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>global</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.1 or later) Global lights illuminate all objects within their volume of lighting influence. Scoped lights only illuminate objects within the same transformation hierarchy.
	 * @param newValue is new value for the global field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SpotLight setGlobal(boolean newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>intensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] Brightness of direct emission from the light.  * <br>

	 * @return value of intensity field
	 */
	@Override
	public float getIntensity();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>intensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] Brightness of direct emission from the light.
	 * @param newValue is new value for the intensity field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setIntensity(float newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>location</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Position of light relative to local coordinate system.  * <br>

	 * @return value of location field
	 */
	public float[] getLocation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>location</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of light relative to local coordinate system.
	 * @param newValue is new value for the location field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SpotLight setLocation(float[] newValue);

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
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>on</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables this light source.  * <br>

	 * @return value of on field
	 */
	@Override
	public boolean getOn();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>on</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables this light source.
	 * @param newValue is new value for the on field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setOn(boolean newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from initializeOnly SFFloat field named <i>radius</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Maximum effective distance of light relative to local light position, affected by ancestor scaling.  * <br>

	 * @return value of radius field
	 */
	public float getRadius();

	/**
	 * Assign float value within allowed range of [0,infinity) to initializeOnly SFFloat field named <i>radius</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Maximum effective distance of light relative to local light position, affected by ancestor scaling.
	 * @param newValue is new value for the radius field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SpotLight setRadius(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setDEF(String newValue);


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
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link SpotLight} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SpotLight setCssClass(String newValue);

}
