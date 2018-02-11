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

import org.web3d.x3d.sai.Networking.X3DUrlObject;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: AudioClip provides audio data used by parent Sound nodes.
 * <ul>
 *  <li> <i>Hint:</i> add a parent Sound node first. </li> 
 *  <li> <i>Hint:</i> utilize DEF/USE references for multiple copies of a single AudioClip sound file in order to avoid multiple-download delays, reduce memory requirements, and maintain synchronization. </li> 
 *  <li> <i>Hint:</i> authors can provide multiple audio formats for the same audio track, with each source address listed separately in the url field. </li> 
 *  <li> <i>Hint:</i> player support for .wav format is required, .midi format is recommended, other formats are optional. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints:Audio <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Audio" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Audio</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#AudioClip" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/sound.html#AudioClip" target="blank">X3D Abstract Specification: AudioClip</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#AudioClip" target="_blank">X3D Tooltips: AudioClip</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Audio" target="_blank">X3D Scene Authoring Hints: Audio</a>
 */
public interface AudioClip extends X3DSoundSourceNode, X3DUrlObject
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-provided text tooltip that tells users the expected action of this node.
 * <ul>
 *  <li> <i> Hint:</i>  many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character). </li> 
 * </ul>
	 * @return value of description field
	 */
	@Override
	public String getDescription();

	/**
	 * Assign String value to inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-provided text tooltip that tells users the expected action of this node. Hint: many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character).
	 * @param newValue is new value for the description field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setDescription(String newValue);

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>duration_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  duration_changed is length of time in seconds for one cycle of audio.  * <br>

	 * @return value of duration_changed field
	 */
	@Override
	public double getDuration();
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>elapsedTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Current elapsed time since AudioClip activated/running, cumulative in seconds, and not counting any paused time.  * <br>

	 * @return value of elapsedTime field
	 */
	@Override
	public double getElapsedTime();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  isActive true/false events are sent when playback starts/stops.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isPaused</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  isPaused true/false events are sent when AudioClip is paused/resumed.  * <br>

	 * @return value of isPaused field
	 */
	@Override
	public boolean getIsPaused();
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>loop</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  repeat indefinitely when loop=true, repeat only once when loop=false.  * <br>

	 * @return value of loop field
	 */
	@Override
	public boolean getLoop();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>loop</i>.
	 * <br><br>
	 * <i>Tooltip:</i> repeat indefinitely when loop=true, repeat only once when loop=false.
	 * @param newValue is new value for the loop field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setLoop(boolean newValue);

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
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>pauseTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When time now &amp;gt;= pauseTime, isPaused becomes true and AudioClip becomes paused. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i> Hint:</i>  usually receives a ROUTEd time value. </li> 
 * </ul>
	 * @return value of pauseTime field
	 */
	@Override
	public double getPauseTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>pauseTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When time now &gt;= pauseTime, isPaused becomes true and AudioClip becomes paused. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value.
	 * @param newValue is new value for the pauseTime field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setPauseTime(double newValue);

	/**
	 * Provide float value within allowed range of (0,infinity) from inputOutput SFFloat field named <i>pitch</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Multiplier for the rate at which sampled sound is played. Changing pitch also changes playback speed.  * <br>

	 * @return value of pitch field
	 */
	@Override
	public float getPitch();

	/**
	 * Assign float value within allowed range of (0,infinity) to inputOutput SFFloat field named <i>pitch</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Multiplier for the rate at which sampled sound is played. Changing pitch also changes playback speed.
	 * @param newValue is new value for the pitch field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setPitch(float newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>resumeTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When resumeTime becomes &amp;lt;= time now, isPaused becomes false and AudioClip becomes active. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i> Hint:</i>  usually receives a ROUTEd time value. </li> 
 * </ul>
	 * @return value of resumeTime field
	 */
	@Override
	public double getResumeTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>resumeTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When resumeTime becomes &lt;= time now, isPaused becomes false and AudioClip becomes active. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value.
	 * @param newValue is new value for the resumeTime field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setResumeTime(double newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>startTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i> Hint:</i>  usually receives a ROUTEd time value. </li> 
 * </ul>
	 * @return value of startTime field
	 */
	@Override
	public double getStartTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>startTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value.
	 * @param newValue is new value for the startTime field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setStartTime(double newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>stopTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i>Hint:</i> usually receives a ROUTEd time value. </li> 
 *  <li> <i>Warning:</i> An active TimeSensor node ignores set_cycleInterval and set_startTime events. </li> 
 *  <li> <i>Warning:</i> An active TimeSensor node ignores set_stopTime event values less than or equal to startTime. </li> 
 * </ul>
	 * @return value of stopTime field
	 */
	@Override
	public double getStopTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>stopTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value. Warning: An active TimeSensor node ignores set_cycleInterval and set_startTime events. Warning:An active TimeSensor node ignores set_stopTime event values less than or equal to startTime.
	 * @param newValue is new value for the stopTime field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setStopTime(double newValue);

	/**
	 * Provide array of String results from inputOutput MFString field named <i>url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Location and filename of sound file or stream. Support for .wav format is required, .midi format is recommended, other formats are optional.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks. <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i> can replace embedded blank(s) in url queries with %20 for each blank character. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, urls <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls</a> </li> 
 * </ul>
	 * @return value of url field
	 */
	@Override
	public String[] getUrl();

	/**
	 * Assign String array to inputOutput MFString field named <i>url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Location and filename of sound file or stream. Support for .wav format is required, .midi format is recommended, other formats are optional. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks. "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Hint: X3D Scene Authoring Hints, urls http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls
	 * @param newValue is new value for the url field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setUrl(String[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setDEF(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value). Hint:USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. Warning: do NOT include any child nodes, a DEF attribute, or any other attribute values (except for containerField) when defining a USE attribute. Warning: each USE value must match a corresponding DEF value that is defined earlier in the scene.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link AudioClip} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public AudioClip setCssClass(String newValue);

}
