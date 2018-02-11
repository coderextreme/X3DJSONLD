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

package org.web3d.x3d.sai.Sound;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Sound.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: The Sound node controls the 3D spatialization of sound playback by a child AudioClip or MovieTexture node. Sound intensity includes stereo support, varying according to user location and view direction in the scene.
 * <ul>
 *  <li> <i>Hint:</i> if the audio source is stereo or multi-channel, channel separation is retained during playback. </li> 
 *  <li> <i>Warning:</i> while providing sounds on the ground plane, ensure that the audible auralization ellipse is sufficiently elevated to match avatar height. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints:Audio <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Audio" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Audio</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#Sound" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/sound.html#Sound" target="blank">X3D Abstract Specification: Sound</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#Sound" target="_blank">X3D Tooltips: Sound</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Audio" target="_blank">X3D Scene Authoring Hints: Audio</a>
 */
public interface Sound extends X3DSoundNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>direction</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  direction of sound axis, relative to local coordinate system.  * <br>

	 * @return value of direction field
	 */
	public float[] getDirection();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>direction</i>.
	 * <br><br>
	 * <i>Tooltip:</i> direction of sound axis, relative to local coordinate system.
	 * @param newValue is new value for the direction field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setDirection(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>intensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Factor [0,1] adjusting loudness (decibels) of emitted sound.  * <br>

	 * @return value of intensity field
	 */
	public float getIntensity();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>intensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Factor [0,1] adjusting loudness (decibels) of emitted sound.
	 * @param newValue is new value for the intensity field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setIntensity(float newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>location</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of sound ellipsoid center, relative to local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  improve audibility by setting location='0 1.6 0' so that center height of sound ellipsoid matches typical NavigationInfo avatarSize height. </li> 
 * </ul>
	 * @return value of location field
	 */
	public float[] getLocation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>location</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of sound ellipsoid center, relative to local coordinate system. Hint: improve audibility by setting location='0 1.6 0' so that center height of sound ellipsoid matches typical NavigationInfo avatarSize height.
	 * @param newValue is new value for the location field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setLocation(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>maxBack</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Outer (zero volume) ellipsoid distance along back direction. Ensure minBack &amp;lt;= maxBack.  * <br>

	 * @return value of maxBack field
	 */
	public float getMaxBack();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>maxBack</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Outer (zero volume) ellipsoid distance along back direction. Ensure minBack &lt;= maxBack.
	 * @param newValue is new value for the maxBack field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setMaxBack(float newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>maxFront</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Outer (zero volume) ellipsoid distance along front direction. Ensure minFront &amp;lt;= maxFront.  * <br>

	 * @return value of maxFront field
	 */
	public float getMaxFront();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>maxFront</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Outer (zero volume) ellipsoid distance along front direction. Ensure minFront &lt;= maxFront.
	 * @param newValue is new value for the maxFront field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setMaxFront(float newValue);

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
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Sound setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>minBack</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Inner (full volume) ellipsoid distance along back direction. Ensure minBack &amp;lt;= maxBack.  * <br>

	 * @return value of minBack field
	 */
	public float getMinBack();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>minBack</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Inner (full volume) ellipsoid distance along back direction. Ensure minBack &lt;= maxBack.
	 * @param newValue is new value for the minBack field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setMinBack(float newValue);

	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>minFront</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Inner (full volume) ellipsoid distance along front direction. Ensure minFront &amp;lt;= maxFront.  * <br>

	 * @return value of minFront field
	 */
	public float getMinFront();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>minFront</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Inner (full volume) ellipsoid distance along front direction. Ensure minFront &lt;= maxFront.
	 * @param newValue is new value for the minFront field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setMinFront(float newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>priority</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Player hint [0,1] if needed to choose which sounds to play.  * <br>

	 * @return value of priority field
	 */
	public float getPriority();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>priority</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Player hint [0,1] if needed to choose which sounds to play.
	 * @param newValue is new value for the priority field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setPriority(float newValue);

	/**
	 * Provide X3DSoundSourceNode instance (using a properly typed node) from inputOutput SFNode field <i>source</i>.
	 * @return value of source field
	 */
	public X3DSoundSourceNode getSource(); // acceptable node types: X3DSoundSourceNode

	/**
	 * Assign X3DSoundSourceNode instance (using a properly typed node) to inputOutput SFNode field <i>source</i>.
	 * @param newValue is new value for the source field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setSource(X3DSoundSourceNode newValue); // acceptable node types: X3DSoundSourceNode

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>spatialize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether to spatialize sound playback relative to viewer.
 * <ul>
 *  <li> <i> Hint:</i>  only effective between minimum and maximum ellipsoids. </li> 
 * </ul>
	 * @return value of spatialize field
	 */
	public boolean getSpatialize();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>spatialize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether to spatialize sound playback relative to viewer. Hint: only effective between minimum and maximum ellipsoids.
	 * @param newValue is new value for the spatialize field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Sound setSpatialize(boolean newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Sound setDEF(String newValue);


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
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Sound setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link Sound} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Sound setCssClass(String newValue);

}
