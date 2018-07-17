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

package org.web3d.x3d.sai.HAnim;

import org.web3d.x3d.sai.Core.X3DChildNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>:  (X3D version 4.0 draft) [X3DChildNode] An HAnimMotion node supports discrete frame-by-frame playback for H-Anim motion data animation. Design characteristics include integration with HAnim figure data and HAnimJoint nodes, animation control, and playback of raw motion data.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#HAnimMotion" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimSite" target="blank">X3D Abstract Specification: HAnimMotion</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimMotion" target="_blank">X3D Tooltips: HAnimMotion</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface HAnimMotion extends X3DChildNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of String results from inputOutput MFString field named <i>channels</i>.
	 * <br><br>
	 * <i>Tooltip:</i> list of number of channels for transformation, followed by transformation type of each channel of data. Each value is space or comma separated.
 * <ul>
 *  <li> <i> Hint:</i>  channels are enabled by default, unless otherwise indicated by channelsEnabled field. </li> 
 * </ul>
	 * @return value of channels field
	 */
	public String[] getChannels();

	/**
	 * Assign String array to inputOutput MFString field named <i>channels</i>.
	 * <br><br>
	 * <i>Tooltip:</i> list of number of channels for transformation, followed by transformation type of each channel of data. Each value is space or comma separated. Hint: channels are enabled by default, unless otherwise indicated by channelsEnabled field.
	 * @param newValue is new value for the channels field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setChannels(String[] newValue);

	/**
	 * Provide array of boolean results from inputOutput MFBool field named <i>channelsEnabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  boolean values for each channels indicating whether enabled.  * <br>

	 * @return value of channelsEnabled field
	 */
	public boolean[] getChannelsEnabled();

	/**
	 * Assign boolean array to inputOutput MFBool field named <i>channelsEnabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boolean values for each channels indicating whether enabled.
	 * @param newValue is new value for the channelsEnabled field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setChannelsEnabled(boolean[] newValue);

	/**
	 * Provide double value in seconds within allowed range of [0,infinity) from outputOnly SFTime field named <i>cycleTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> cycleTime sends a time event at initial starting time and at beginning of each new cycle.
 * <ul>
 *  <li> <i>Hint:</i> this event is useful for synchronization with other time-based animation objects. </li> 
 *  <li> <i>Warning:</i>  it is an error to define this transient outputOnly field in an X3D file. </li> 
 * </ul>
	 * @return value of cycleTime field
	 */
	public double getCycleTime();
	/**
	 * Provide String value from inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-provided text tooltip that tells users the expected action of this node.
 * <ul>
 *  <li> <i> Hint:</i>  many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character). </li> 
 * </ul>
	 * @return value of description field
	 */
	public String getDescription();

	/**
	 * Assign String value to inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-provided text tooltip that tells users the expected action of this node. Hint: many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character).
	 * @param newValue is new value for the description field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setDescription(String newValue);

	/**
	 * Provide double value in seconds within allowed range of [0,infinity) from outputOnly SFTime field named <i>elapsedTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) elapsedTime is computed elapsed time since the Motion object was activated and running, counting all traversed frames (as if frameIndex equaled 1) and multiplied by frameDuration, cumulative in seconds.
 * <ul>
 *  <li> <i>Warning:</i> it is an error to define this transient outputOnly field in an X3D file. </li> 
 *  <li> <i>Hint:</i>  elapsedTime is a nonnegative SFTime duration interval, not an absolute clock time. </li> 
 * </ul>
	 * @return value of elapsedTime field
	 */
	public double getElapsedTime();
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables node operation.  * <br>

	 * @return value of enabled field
	 */
	public boolean getEnabled();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables node operation.
	 * @param newValue is new value for the enabled field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setEnabled(boolean newValue);

	/**
	 * Provide int value within allowed range of [-1,infinity) from inputOutput SFInt32 field named <i>endFrame</i>.
	 * @return value of endFrame field
	 */
	public int getEndFrame();

	/**
	 * Assign int value within allowed range of [-1,infinity) to inputOutput SFInt32 field named <i>endFrame</i>.
	 * @param newValue is new value for the endFrame field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setEndFrame(int newValue);

	/**
	 * Provide int value within allowed range of [0,infinity) from outputOnly SFInt32 field named <i>frameCount</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) frameCount indicates the number of frames present in the animation, equaling the number of sets of channel data present in the values array.
 * <ul>
 *  <li> <i> Warning:</i>  it is an error to define this transient outputOnly field in an X3D file. </li> 
 * </ul>
	 * @return value of frameCount field
	 */
	public int getFrameCount();
	/**
	 * Provide double value in seconds within allowed range of (0,infinity) from inputOutput SFTime field named <i>frameDuration</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  (0,+infinity) frameDuration specifies the duration of each frame in seconds.  * <br>

	 * @return value of frameDuration field
	 */
	public double getFrameDuration();

	/**
	 * Assign double value in seconds within allowed range of (0,infinity) to inputOutput SFTime field named <i>frameDuration</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) frameDuration specifies the duration of each frame in seconds.
	 * @param newValue is new value for the frameDuration field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setFrameDuration(double newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>frameIncrement</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-infinity,+infinity) frameIncrement field controls whether playback direction is forwards or backwards, and also whether frames are skipped (e.g. subsampled replay). For a single animation step, the next frameIndex value equals (frameIndex + frameIncrement) modulo frameCount.
 * <ul>
 *  <li> <i> Hint:</i>  note that setting frameIncrement to 0 prevents automatic advancement of frameIndex and pauses animation of HAnimMotion node. </li> 
 * </ul>
	 * @return value of frameIncrement field
	 */
	public int getFrameIncrement();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>frameIncrement</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-infinity,+infinity) frameIncrement field controls whether playback direction is forwards or backwards, and also whether frames are skipped (e.g. subsampled replay). For a single animation step, the next frameIndex value equals (frameIndex + frameIncrement) modulo frameCount. Hint: note that setting frameIncrement to 0 prevents automatic advancement of frameIndex and pauses animation of HAnimMotion node.
	 * @param newValue is new value for the frameIncrement field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setFrameIncrement(int newValue);

	/**
	 * Provide int value within allowed range of [0,infinity) from inputOutput SFInt32 field named <i>frameIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) frameIndex indicates index of current frame. Note that frameIndex can be modified whether the Motion node is enabled or not, and becomes effective when the next animation cycle occurs. Thus the frameIndex value indicates the frame currently (or next) being processed.
 * <ul>
 *  <li> <i> Hint:</i>  frameIndex starts at 0 and is no greater than (frameCount - 1). Values less than 0 are reset as 0. Values greater or equal to frameCount are stored as (frameCount - 1). Thus the value of frameIndex shall be greater than or equal to zero, and less than frameCount. </li> 
 * </ul>
	 * @return value of frameIndex field
	 */
	public int getFrameIndex();

	/**
	 * Assign int value within allowed range of [0,infinity) to inputOutput SFInt32 field named <i>frameIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) frameIndex indicates index of current frame. Note that frameIndex can be modified whether the Motion node is enabled or not, and becomes effective when the next animation cycle occurs. Thus the frameIndex value indicates the frame currently (or next) being processed. Hint: frameIndex starts at 0 and is no greater than (frameCount - 1). Values less than 0 are reset as 0. Values greater or equal to frameCount are stored as (frameCount - 1). Thus the value of frameIndex shall be greater than or equal to zero, and less than frameCount.
	 * @param newValue is new value for the frameIndex field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setFrameIndex(int newValue);

	/**
	 * Provide array of String results from inputOutput MFString field named <i>joints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> joints field lists names of joints that raw motion data is to be applied to. The number and order of the names in the joints field shall match the number and order of the channels field information, and the number and order of the sets of values in the values field for each frame of the animation.
 * <ul>
 *  <li> <i>Hint:</i> values are space or comma separated. </li> 
 *  <li> <i>Hint:</i>  The joint name IGNORED shall be used for channel of motion data that is not used for any joint. </li> 
 * </ul>
	 * @return value of joints field
	 */
	public String[] getJoints();

	/**
	 * Assign String array to inputOutput MFString field named <i>joints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> joints field lists names of joints that raw motion data is to be applied to. The number and order of the names in the joints field shall match the number and order of the channels field information, and the number and order of the sets of values in the values field for each frame of the animation. Hint: values are space or comma separated. Hint: The joint name IGNORED shall be used for channel of motion data that is not used for any joint.
	 * @param newValue is new value for the joints field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setJoints(String[] newValue);

	/**
	 * Provide int value within allowed range of [-1,4] from inputOutput SFInt32 field named <i>loa</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,4] Level Of Articulation 0..4 indicates complexity and detail of joints for given humanoid skeletal hierarchy.
 * <ul>
 *  <li> <i>Hint:</i> loa value of -1 indicates that no LOA conformance is provided. </li> 
 *  <li> <i>Hint:</i>  Humanoid Animation (HAnim) Specification, Part 1 Architecture, 4.8.4 Levels of articulation, <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#LevelsOfArticulation" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#LevelsOfArticulation</a> </li> 
 * </ul>
	 * @return value of loa field
	 */
	public int getLoa();

	/**
	 * Assign int value within allowed range of [-1,4] to inputOutput SFInt32 field named <i>loa</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,4] Level Of Articulation 0..4 indicates complexity and detail of joints for given humanoid skeletal hierarchy. Hint: loa value of -1 indicates that no LOA conformance is provided. Hint: Humanoid Animation (HAnim) Specification, Part 1 Architecture, 4.8.4 Levels of articulation, http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#LevelsOfArticulation
	 * @param newValue is new value for the loa field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setLoa(int newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>loop</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  repeat indefinitely when loop=true, repeat only once when loop=false.  * <br>

	 * @return value of loop field
	 */
	public boolean getLoop();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>loop</i>.
	 * <br><br>
	 * <i>Tooltip:</i> repeat indefinitely when loop=true, repeat only once when loop=false.
	 * @param newValue is new value for the loop field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setLoop(boolean newValue);

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata(); // acceptable node types #1:X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimMotion setMetadata(X3DMetadataObject newValue); // acceptable node types #2: X3DMetadataObject

	/**
	 * Provide int value within allowed range of [0,infinity) from inputOutput SFInt32 field named <i>startFrame</i>.
	 * @return value of startFrame field
	 */
	public int getStartFrame();

	/**
	 * Assign int value within allowed range of [0,infinity) to inputOutput SFInt32 field named <i>startFrame</i>.
	 * @param newValue is new value for the startFrame field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setStartFrame(int newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>values</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  values field contains all transformation values, ordered first by frame, then by joint, and then by transformation Sets of floats in the values array matching the order listed in joints and channels fields.  * <br>

	 * @return value of values field
	 */
	public float[] getValues();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>values</i>.
	 * <br><br>
	 * <i>Tooltip:</i> values field contains all transformation values, ordered first by frame, then by joint, and then by transformation Sets of floats in the values array matching the order listed in joints and channels fields.
	 * @param newValue is new value for the values field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimMotion setValues(float[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimMotion setDEF(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimMotion setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimMotion} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimMotion setCssClass(String newValue);

}
