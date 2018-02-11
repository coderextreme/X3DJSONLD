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

package org.web3d.x3d.sai.Navigation;


import org.web3d.x3d.sai.Core.X3DBindableNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: NavigationInfo describes the user's viewing model, user navigation-interaction modalities, and also dimensional characteristics of the user's (typically invisible) avatar.
 * <ul>
 *  <li> <i>Hint:</i> for inspection of simple objects, usability often improves with type="EXAMINE" "ANY" </li> 
 *  <li> <i>Hint:</i> NavigationInfo, Background, TextureBackground, Fog, GeoViewpoint, OrthoViewpoint and Viewpoint are bindable nodes, meaning that no more than one of each node type can be active at a given time. </li> 
 *  <li> <i>Hint:</i> NavigationInfo types '"WALK" "FLY"' support camera-to-object collision detection. </li> 
 *  <li> <i>Warning:</i> results are undefined if a bindable node (Viewpoint, OrthoViewpoint, NavigationInfo, Fog, Background, TextureBackground) is a contained child of LOD or Switch. </li> 
 *  <li> <i>Hint:</i> Regardless of viewpoint jump value at bind time, the relative viewing transformation between user's view and defined position/orientation is stored for later use when un-jumping (returning to the viewpoint when subsequent viewpoint is unbound). </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Viewpoints <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#NavigationInfo" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#NavigationInfo" target="blank">X3D Abstract Specification: NavigationInfo</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#NavigationInfo" target="_blank">X3D Tooltips: NavigationInfo</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints" target="_blank">X3D Scene Authoring Hints: Viewpoints</a>
 */
public interface NavigationInfo extends X3DBindableNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of float results within allowed range of [0,infinity) from inputOutput MFFloat field named <i>avatarSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> avatarSize triplet values are: (a) collision distance between user and geometry (near clipping plane of the view frustrum) (b) viewer height above terrain (c) tallest height viewer can WALK over.
 * <ul>
 *  <li> <i>Warning:</i> X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. </li> 
 *  <li> <i>Hint:</i> keep (visibilityLimit / avatarSize.CollisionDistance) &amp;lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). </li> 
 *  <li> <i>Hint:</i>  Aliasing <br> <a href="https://en.wikipedia.org/wiki/Aliasing" target="_blank">https://en.wikipedia.org/wiki/Aliasing</a> Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of avatarSize field
	 */
	public float[] getAvatarSize();

	/**
	 * Assign float array within allowed range of [0,infinity) to inputOutput MFFloat field named <i>avatarSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> avatarSize triplet values are: (a) collision distance between user and geometry (near clipping plane of the view frustrum) (b) viewer height above terrain (c) tallest height viewer can WALK over. Warning: X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. Hint: keep (visibilityLimit / avatarSize.CollisionDistance) &lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). Hint: Aliasing https://en.wikipedia.org/wiki/Aliasing Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the avatarSize field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfo setAvatarSize(float[] newValue);

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>bindTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Event sent reporting timestamp when node becomes active/inactive.  * <br>

	 * @return value of bindTime field
	 */
	@Override
	public double getBindTime();
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>headlight</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enable/disable directional light that always points in the direction the user is looking.  * <br>

	 * @return value of headlight field
	 */
	public boolean getHeadlight();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>headlight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enable/disable directional light that always points in the direction the user is looking.
	 * @param newValue is new value for the headlight field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfo setHeadlight(boolean newValue);

	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isBound</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Output event true gets sent when node becomes bound and activated, otherwise output event false gets sent when node becomes unbound and deactivated.
 * <ul>
 *  <li> <i> Hint:</i>  paired node operations can be established by connecting set_bind and isBound fields of corresponding bindable nodes. </li> 
 * </ul>
	 * @return value of isBound field
	 */
	@Override
	public boolean getIsBound();
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
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfo setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>speed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Default rate at which viewer travels through scene, meters/second.
 * <ul>
 *  <li> <i> Warning:</i>  default 1 m/s usually seems slow for ordinary navigation. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of speed field
	 */
	public float getSpeed();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>speed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Default rate at which viewer travels through scene, meters/second. Warning: default 1 m/s usually seems slow for ordinary navigation. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the speed field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfo setSpeed(float newValue);

	/**
	 * Provide boolean value from outputOnly SFBool field named <i>transitionComplete</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Event signaling viewpoint transition complete. Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of transitionComplete field
	 */
	public boolean getTransitionComplete();
	/**
	 * Provide double value in seconds within allowed range of [0,infinity) from inputOutput SFTime field named <i>transitionTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.1 or later) Duration of viewpoint transition in seconds.
 * <ul>
 *  <li> <i> Hint:</i>  If transitionType is "ANIMATE", transitionTime provides browser-dependent animation parameters. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of transitionTime field
	 */
	public double getTransitionTime();

	/**
	 * Assign double value in seconds within allowed range of [0,infinity) to inputOutput SFTime field named <i>transitionTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.1 or later) Duration of viewpoint transition in seconds. Hint: If transitionType is "ANIMATE", transitionTime provides browser-dependent animation parameters. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the transitionTime field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfo setTransitionTime(double newValue);

	/**
	 * Provide array of String enumeration results with quoted value(s) ["TELEPORT","LINEAR","ANIMATE",...] from inputOutput MFString field named <i>transitionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Camera transition between viewpoints. Enter one or more quoted SFString values: "ANIMATE" "TELEPORT" "LINEAR".
 * <ul>
 *  <li> <i> Hint:</i>  "ANIMATE" behavior is browser-specific, "TELEPORT" is immediate, and "LINEAR" may proceed directly through intervening objects. </li> 
 * </ul>
	 * @return value of transitionType field
	 */
	public String[] getTransitionType();

	/**
	 * Assign String enumeration array (""TELEPORT""|""LINEAR""|""ANIMATE"") with quoted value(s) ["TELEPORT","LINEAR","ANIMATE",...] to inputOutput MFString field named <i>transitionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Camera transition between viewpoints. Enter one or more quoted SFString values: "ANIMATE" "TELEPORT" "LINEAR". Hint: "ANIMATE" behavior is browser-specific, "TELEPORT" is immediate, and "LINEAR" may proceed directly through intervening objects.
	 * @param newValue is new value for the transitionType field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfo setTransitionType(String[] newValue);

	/**
	 * Provide array of String enumeration results with quoted value(s) ["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] from inputOutput MFString field named <i>type</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enter one or more quoted SFString values: "EXAMINE" "WALK" "FLY" "LOOKAT" "EXPLORE" "ANY" "NONE".
 * <ul>
 *  <li> <i>Hint:</i> for inspection of simple objects, usability often improves with type="EXAMINE" "ANY". </li> 
 *  <li> <i>Hint:</i> types WALK and FLY force strict camera-to-object collision detection. </li> 
 *  <li> <i>Hint:</i> see Collision node for further details on camera-to-object collision detection. </li> 
 *  <li> <i>Hint:</i>  MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." ] Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of type field
	 */
	public String[] getType();

	/**
	 * Assign String enumeration array (""ANY""|""WALK""|""EXAMINE""|""FLY""|""LOOKAT""|""NONE""|""EXPLORE"") with quoted value(s) ["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] to inputOutput MFString field named <i>type</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enter one or more quoted SFString values: "EXAMINE" "WALK" "FLY" "LOOKAT" "EXPLORE" "ANY" "NONE". Hint: for inspection of simple objects, usability often improves with type="EXAMINE" "ANY". Hint: types WALK and FLY force strict camera-to-object collision detection. Hint: see Collision node for further details on camera-to-object collision detection. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." ] Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the type field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfo setType(String[] newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>visibilityLimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Geometry beyond the visibilityLimit may not be rendered (far clipping plane of the view frustrum).
 * <ul>
 *  <li> <i>Hint:</i> visibilityLimit=0.0 indicates an infinite visibility limit (no far clipping plane). </li> 
 *  <li> <i>Hint:</i> keep visibilityLimit &amp;gt;= zero. </li> 
 *  <li> <i>Warning:</i> X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. </li> 
 *  <li> <i>Hint:</i> keep (visibilityLimit / avatarSize.CollisionDistance) &amp;lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). </li> 
 *  <li> <i>Hint:</i>  Aliasing <br> <a href="https://en.wikipedia.org/wiki/Aliasing" target="_blank">https://en.wikipedia.org/wiki/Aliasing</a> Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of visibilityLimit field
	 */
	public float getVisibilityLimit();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>visibilityLimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Geometry beyond the visibilityLimit may not be rendered (far clipping plane of the view frustrum). Hint: visibilityLimit=0.0 indicates an infinite visibility limit (no far clipping plane). Hint: keep visibilityLimit &gt;= zero. Warning: X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. Hint: keep (visibilityLimit / avatarSize.CollisionDistance) &lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). Hint: Aliasing https://en.wikipedia.org/wiki/Aliasing Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the visibilityLimit field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfo setVisibilityLimit(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfo setDEF(String newValue);


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
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfo setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link NavigationInfo} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfo setCssClass(String newValue);

}
