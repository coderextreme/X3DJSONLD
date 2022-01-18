<?xml version='1.0'?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:saxon="http://icl.com/saxon" saxon:trace="false">
	<!-- allowed fileEncoding values:  VRML97 (.wrl file), ClassicVRML (.x3dv file) -->
	<xsl:param name="fileEncoding"><xsl:text>VRML97</xsl:text></xsl:param>
	<xsl:param name="outputDiagnostics"><xsl:text>true</xsl:text></xsl:param>
	<xsl:param name="disableIndent"><xsl:text>false</xsl:text></xsl:param>

<!--
Copyright (c) 2000-2022 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the names of the Naval Postgraduate School (NPS)
      Modeling Virtual Environments and Simulation (MOVES) Institute
      (http://www.nps.edu and http://www.MovesInstitute.org)
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
-->
<!--***	Edit the topmost stylesheet tag on line 2 of this file to match the xmlns namespace URI for your XSL tool. ***
	W3C:
	Saxon:           <xsl:stylesheet xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>
	IBM XSLEditor:   <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform/1.0'>
	IE 5:            <xsl:stylesheet xmlns:xsl='http://www.w3.org/TR/WD-xsl'>
-->

<!--
  <head>
   <meta name="title"    		content="X3dToVrml97.xslt" />
   <meta name="creator"      		content="Don Brutzman" />
   <meta name="LatticeXvl creator"	content="Marc Jablonski" />
   <meta name="description" content="XSLT stylesheet to convert X3D files to VRML97 format, using x3d-3.0.dtd form." />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToVrml97.xslt" />
   <meta name="svn"         content="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToVrml97.xslt?view=markup" />
  </head>

Recommended tool:

-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net

- Can also be used with Apache server

Thanks to Andrew Grieve of Okino for CAD debugging and the disableIndent parameter.

-->

<!-- Problems and bugs:
  - consistent local url values for EXTERNPROTO substitutions
  - MultiTexture, TextureCoordinateGenerator, TextureBackground
  - still need to check KeySensor, StringSensor, GeoVRML attribute defaults
  - combine GeoVRML and H-Anim metadata attributes into a single string
  - ensure Double types get translated properly!
  - perform tuple checks on index arrays for contained points, normals and colors
  - check for even number of &quot; characters in url values
  - ensure index values do not exceed max allowed reference
  - GeoOrigin doesn't have geoSystem check working
  -->
        
    <xsl:variable name="x3dVersion" select="normalize-space(//X3D/@version)"/>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersion,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersion,'4')"/>

<xsl:strip-space elements="*" />
<xsl:output method="text" encoding="utf-8" media-type="model/vrml" indent="no" cdata-section-elements="Script ShaderPart ShaderProgram"/>
<!-- omit-xml-declaration="yes" -->
<!-- indent handled as a passed parameter since output-tag indent ineffective -->


<!-- ****** root:  start of file ****** -->
<xsl:template match="/">
  <!-- diagnostics:
  <xsl:message><xsl:text>Commencing X3dToVrml97.xslt</xsl:text></xsl:message>
  <xsl:message><xsl:text>$fileEncoding=</xsl:text><xsl:value-of select="$fileEncoding"/></xsl:message>
  -->
  <xsl:choose>
    <xsl:when test="$fileEncoding='ClassicVRML'">
      <!-- X3D ClassicVRML header -->
      <xsl:text>#X3D V</xsl:text>
      <xsl:choose>
        <xsl:when test="X3D/@version"><xsl:value-of select="X3D/@version"/></xsl:when>
        <xsl:otherwise><xsl:text>3.0</xsl:text></xsl:otherwise>
      </xsl:choose>
      <xsl:text> utf8&#10;</xsl:text>
      <xsl:text># X3D-to-ClassicVRML XSL translation autogenerated by X3dToVrml97.xslt&#10;# https://www.web3d.org/x3d/content/X3dToVrml97.xslt&#10;</xsl:text>
    </xsl:when>
    <xsl:otherwise>
      <!-- VRML97 header -->
      <xsl:text>#VRML V2.0 utf8&#10;# X3D-to-VRML-97 XSL translation autogenerated by X3dToVrml97.xslt&#10;# https://www.web3d.org/x3d/content/X3dToVrml97.xslt&#10;</xsl:text>
    </xsl:otherwise>
  </xsl:choose>
  <!-- note XSLT processor -->
  <xsl:text># Generated using XSLT processor: </xsl:text>
  <xsl:value-of select="system-property('xsl:vendor')"/>
  <xsl:text>&#10;</xsl:text>
  <xsl:text>&#10;</xsl:text>
  <!-- check profile against contained nodes, and also check components (if any) -->
  <xsl:call-template name="check-profile"/>
  <!-- X3D headers -->
  <xsl:apply-templates select="X3D | comment()"/>
  <!-- will need profile/components here for ClassicVRML encoding, also avoid double error checking -->
  <xsl:if test="X3D/head">
    <xsl:apply-templates select="X3D/head | comment()"/>
  </xsl:if>
  <xsl:if test="X3D/Header">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>'Header' tag illegal, use 'head' instead</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>X3D/Header</xsl:text>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:if>
  <!-- check for additional illegal attributes present in any USE node. check is performed here since some nodes are otherwise hidden.
       problem:  default attribute values appear.
  <xsl:for-each select="//*[@USE]">
      <xsl:variable name="useName"  select="@USE" />
      <xsl:if test="@*[.!='' and local-name()!='name' and local-name()!='USE' and local-name()!='containerField' and local-name()!='class']">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Illegal attribute</xsl:text>
            <xsl:if test="count(@*[.!='' and local-name()!='name' and local-name()!='USE' and local-name()!='containerField' and local-name()!='class']) > 1">
              <xsl:text>s</xsl:text>
            </xsl:if>
            <xsl:text> (</xsl:text>
            <xsl:for-each select="@*[.!='' and local-name()!='name' and local-name()!='USE' and local-name()!='containerField' and local-name()!='class']">
              <xsl:if test="position() > 1">
                <xsl:text> </xsl:text>
              </xsl:if>
              <xsl:value-of select="local-name()"/>
            </xsl:for-each>
            <xsl:text>) with </xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> USE='</xsl:text>
            <xsl:value-of select="$useName"/>
            <xsl:text>'/</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
            <xsl:text>. Only @class and @containerField attributes allowed.</xsl:text>
          </xsl:with-param>
        </xsl:call-template>
      </xsl:if>
  </xsl:for-each>
  -->
  <!--========================================-->
  <!-- check scope of HAnim nodes -->
  <xsl:for-each select="//*[starts-with(local-name(),'HAnim') and not(local-name()='HAnimHumanoid')]">
    <xsl:if test="not(ancestor::*[local-name()='HAnimHumanoid']) and not(local-name() = 'HAnimMotion') and not(local-name(..) = 'field') and not(local-name(..) = 'fieldValue')">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>HAnim node must have HAnimHumanoid ancestor</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:if test="@USE">
            <xsl:text> USE='</xsl:text>
            <xsl:value-of select="@USE"/>
            <xsl:text>'</xsl:text>
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:for-each>
  <!--========================================-->
  <xsl:call-template name="check-VRML97-externproto-insertion"/>
  <!-- continue with rest of scene, now that header and profile EXTERNPROTOs complete -->
  <xsl:apply-templates select="X3D/Scene | comment()"/>
</xsl:template>


<xsl:template name="check-VRML97-externproto-insertion">
  <!--If VRML97, insert necessary prototypes for backwards compatibility-->
  <xsl:if test="$fileEncoding!='ClassicVRML'">
  <!--========================================-->
    <!-- Insert BooleanFilter external prototype declaration if not otherwise provided -->
    <xsl:if test="(//BooleanFilter or //ProtoInstance[@name='BooleanFilter']) and not(//ExternProtoDeclare[@name='BooleanFilter']) and not(//ProtoDeclare[@name='BooleanFilter'])">
<![CDATA[
EXTERNPROTO BooleanFilter [
  # [appinfo] Selectively pass only true or false events.
  eventIn  SFBool set_boolean # [appinfo] set_boolean is the input value to be filtered.
  eventOut SFBool inputTrue   # [appinfo] inputTrue only passes a true value, when set_boolean input is true.
  eventOut SFBool inputFalse  # [appinfo] inputFalse only passes a false value, when set_boolean is false.
  eventOut SFBool inputNegate # [appinfo] inputNegate provides opposite value by negating set_boolean input.
][
      "EventUtilityPrototypes.wrl#BooleanFilt
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanFilter"
      "EventUtilityPrototypes.x3d#BooleanFilter"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanFilter"
 ]
]]>
    </xsl:if>
<!--
# CosmoPlayer/Netscape 4.8 url bug workaround:
#"file:///c:\www.web3d.org\x3d\content\examples\development\EventUtilityPrototypes.wrl#BooleanFilter"
-->
    <!--========================================-->
    <!-- Insert BooleanToggle external prototype declaration if not otherwise provided -->
    <xsl:if test="(//BooleanToggle or //ProtoInstance[@name='BooleanToggle']) and not(//ExternProtoDeclare[@name='BooleanToggle']) and not(//ProtoDeclare[@name='BooleanToggle'])">
<![CDATA[
EXTERNPROTO BooleanToggle [
  # [appinfo] Negate or reset prior boolean state, output result.
  eventIn  SFBool set_boolean    # [appinfo] If set_boolean input is true, toggle state.
  eventIn  SFBool set_toggle
  field    SFBool toggle         # [appinfo] Persistent state value that gets toggled or reset.
  eventOut SFBool toggle_changed
][
      "EventUtilityPrototypes.wrl#BooleanToggle"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanToggle"
      "EventUtilityPrototypes.x3d#BooleanToggle"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanToggle"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert BooleanTrigger external prototype declaration if not otherwise provided -->
    <xsl:if test="(//BooleanTrigger or //ProtoInstance[@name='BooleanTrigger']) and not(//ExternProtoDeclare[@name='BooleanTrigger']) and not(//ProtoDeclare[@name='BooleanTrigger'])">
<![CDATA[
EXTERNPROTO BooleanTrigger [
  # [appinfo] Convert time events to boolean true events.
  eventIn  SFTime set_triggerTime # [appinfo] set_triggerTime provides input time event, typical event sent is TouchSensor touchTime.
  eventOut SFBool triggerTrue     # [appinfo] triggerTrue outputs a true value whenever a triggerTime event is received.
][
      "EventUtilityPrototypes.wrl#BooleanTrigger"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanTrigger"
      "EventUtilityPrototypes.x3d#BooleanTrigger"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanTrigger"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert IntegerTrigger external prototype declaration if not otherwise provided -->
    <xsl:if test="(//IntegerTrigger or //ProtoInstance[@name='IntegerTrigger']) and not(//ExternProtoDeclare[@name='IntegerTrigger']) and not(//ProtoDeclare[@name='IntegerTrigger'])">
<![CDATA[
EXTERNPROTO IntegerTrigger [
  # [appinfo] Convert boolean true or time input events to integer value (suitable for Switch node).
  eventIn      SFBool	set_boolean    	# [appinfo] If set_boolean input is true, trigger output of integer value.
  eventIn      SFInt32	set_integerKey	# [appinfo] Resets value used for output when triggered later.
  exposedField SFInt32	integerKey    	# [appinfo] integerKey is value for output when triggered.
  eventOut     SFInt32	integerKey_changed # [appinfo] Reports change in integerKey value.
  eventOut     SFInt32	triggerValue 	# [appinfo] triggerValue provides integer event output matching integerKey when true set_boolean received.
][
      "EventUtilityPrototypes.wrl#IntegerTrigger"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#IntegerTrigger"
      "EventUtilityPrototypes.x3d#IntegerTrigger"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#IntegerTrigger"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert TimeTrigger external prototype declaration if not otherwise provided -->
    <xsl:if test="(//TimeTrigger or //ProtoInstance[@name='TimeTrigger']) and not(//ExternProtoDeclare[@name='TimeTrigger']) and not(//ProtoDeclare[@name='TimeTrigger'])">
<![CDATA[
EXTERNPROTO TimeTrigger [
  # [appinfo] Convert boolean true events to time events.
  eventIn      SFBool	set_boolean    # [appinfo] If set_boolean input is true, trigger output time value.
  eventOut     SFTime	triggerTime    # [appinfo] triggerTime is output time event, sent when set_boolean input is true.
][
      "EventUtilityPrototypes.wrl#TimeTrigger"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#TimeTrigger"
      "EventUtilityPrototypes.x3d#TimeTrigger"
"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#TimeTrigger"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert BooleanSequencer external prototype declaration if not otherwise provided -->
    <xsl:if test="(//BooleanSequencer or //ProtoInstance[@name='BooleanSequencer']) and not(//ExternProtoDeclare[@name='BooleanSequencer']) and not(//ProtoDeclare[@name='BooleanSequencer'])">
<![CDATA[
EXTERNPROTO BooleanSequencer [
  # Regular interpolator-style input
  eventIn      SFFloat	set_fraction	# [appinfo] typically range [0..1]
  eventIn      MFFloat	set_key
  exposedField MFFloat	key		# [appinfo] Array sequentially increasing, typically [0..1].  Must have the same number of keys as keyValues.
  eventOut     MFFloat	key_changed
  eventIn      SFString	set_keyValue
  exposedField SFString	keyValue	# [appinfo] Array of Boolean values (implemented as SFString).  Must have the same number of keys as keyValues.
  eventOut     SFString	keyValue_changed
  # Regular interpolator-style output
  eventOut     SFBool	value_changed
  # Utility methods
  eventIn      SFBool	previous
  eventIn      SFBool	next
][
      "BooleanSequencerPrototype.wrl#BooleanSequencer"
"https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.wrl#BooleanSequencer"
      "BooleanSequencerPrototype.x3d#BooleanSequencer"
"https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.x3d#BooleanSequencer"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert CoordinateInterpolator2D external prototype declaration if not otherwise provided -->
    <xsl:if test="(//CoordinateInterpolator2D or //ProtoInstance[@name='CoordinateInterpolator2D']) and not(//ExternProtoDeclare[@name='CoordinateInterpolator2D']) and not(//ProtoDeclare[@name='CoordinateInterpolator2D'])">
<![CDATA[
EXTERNPROTO CoordinateInterpolator2D [
  eventIn  SFFloat set_fraction
  eventIn      MFFloat	set_key
  exposedField MFFloat	key		# [appinfo] Array sequentially increasing, typically [0..1].  Must have the same number of keys as keyValues.
  eventOut     MFFloat	key_changed
  eventIn      MFVec2f	set_keyValue
  exposedField MFVec2f	keyValue	# [appinfo] Array of integer values.  Must have the same number of keys as keyValues.
  eventOut     MFVec2f	keyValue_changed
  # Regular interpolator-style output
  eventOut     MFVec2f value_changed
][
      "CoordinateInterpolator2dPrototype.wrl#CoordinateInterpolator2D"
"https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dPrototype.wrl#CoordinateInterpolator2D"
      "CoordinateInterpolator2dPrototype.x3d#CoordinateInterpolator2D"
"https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dPrototype.x3d#CoordinateInterpolator2D"
# CosmoPlayer/Netscape 4.8 url bug workaround:
#"file:///c|\www.web3d.org\x3d\content\examples\development\CoordinateInterpolator2dPrototype.wrl#CoordinateInterpolator2D"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert LoadSensor external prototype declaration if not otherwise provided -->
    <xsl:if test="(//LoadSensor or //ProtoInstance[@name='LoadSensor']) and not(//ExternProtoDeclare[@name='LoadSensor']) and not(//ProtoDeclare[@name='LoadSensor'])">
<![CDATA[
EXTERNPROTO LoadSensor [
  # [appinfo] LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e., descendants of X3DUrlObject), may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.
  # documentation: https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor exposedField SFBool enabled # [appinfo] Enables/disables the sensor node.
  exposedField SFTime timeOut # [appinfo] Maximum time for which the LoadSensor will monitor loading, starting from when the sensor becomes active. timeOut=0 ordinarily indicates an indefinite time out period; i.e., the LoadSensor will wait until loading has completed either with success or failure timeOut=0 causes immediate loading for this implementation.
  field MFNode watchList # [appinfo] Zero or more nodes with url fields to monitor.
  eventIn MFNode set_watchList # [appinfo] Change watchList MFNode array.
  eventOut SFBool isActive # [appinfo] isActive=true when loading begins, isActive=false when loading ends.
  eventOut SFBool isLoaded # [appinfo] isLoaded=true when loading succeeds, isLoaded=false when loading fails or timeOut reached.
  eventOut SFTime loadTime # [appinfo] loadTime event is generated when loading has successfully completed.
  eventOut SFFloat progress # [appinfo] progress [0..1] indicates fraction of loading complete.
  field SFNode metadata # [appinfo] associated Metadata node.
][
  "LoadSensorPrototype.wrl#LoadSensor"
  "https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.wrl#LoadSensor"
  "LoadSensorPrototype.x3d#LoadSensor"
  "https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d#LoadSensor"
]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert IntegerSequencer external prototype declaration if not otherwise provided -->
    <xsl:if test="(//IntegerSequencer or //ProtoInstance[@name='IntegerSequencer']) and not(//ExternProtoDeclare[@name='IntegerSequencer']) and not(//ProtoDeclare[@name='IntegerSequencer'])">
<![CDATA[
EXTERNPROTO IntegerSequencer [
  # Regular interpolator-style input
  eventIn      SFFloat	set_fraction	# [appinfo] typically range [0..1]
  eventIn      MFFloat	set_key
  exposedField MFFloat	key		# [appinfo] Array sequentially increasing, typically [0..1].  Must have the same number of keys as keyValues.
  eventOut     MFFloat	key_changed
  ### When Script node supports exposedField, then it would be better to change keyValue to exposedField.
  eventIn      MFInt32	set_keyValue
  field        MFInt32	keyValue	# [appinfo] Array of integer values.  Must have the same number of keys as keyValues.
  eventOut     MFInt32	keyValue_changed
  # Regular interpolator-style output
  eventOut     SFInt32	value_changed
  # Utility methods
  eventIn      SFBool	previous
  eventIn      SFBool	next
][
      "IntegerSequencerPrototype.wrl#IntegerSequencer"
"https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.wrl#IntegerSequencer"
      "IntegerSequencerPrototype.x3d#IntegerSequencer"
"https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.x3d#IntegerSequencer"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!-- Insert PositionInterpolator2D external prototype declaration if not otherwise provided -->
    <xsl:if test="(//PositionInterpolator2D or //ProtoInstance[@name='PositionInterpolator2D']) and not(//ExternProtoDeclare[@name='PositionInterpolator2D']) and not(//ProtoDeclare[@name='PositionInterpolator2D'])">
<![CDATA[
EXTERNPROTO PositionInterpolator2D [
  eventIn      SFFloat set_fraction
  eventIn      MFFloat	set_key
  exposedField MFFloat	key		# [appinfo] Array sequentially increasing, typically [0..1].  Must have the same number of keys as keyValues.
  eventOut     MFFloat	key_changed
  eventIn      MFVec2f	set_keyValue
  exposedField MFVec2f	keyValue	# [appinfo] Array of integer values.  Must have the same number of keys as keyValues.
  eventOut     MFVec2f	keyValue_changed
  # Regular interpolator-style output
  eventOut     SFVec2f value_changed
][
      "PositionInterpolator2dPrototype.wrl#PositionInterpolator2D"
"https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dPrototype.wrl#PositionInterpolator2D"
      "PositionInterpolator2dPrototype.x3d#PositionInterpolator2D"
"https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dPrototype.x3d#PositionInterpolator2D"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!--========================================-->
    <!-- Insert MetadataBoolean external prototype declaration if not otherwise provided -->
    <xsl:if test="(//MetadataBoolean or //ProtoInstance[@name='MetadataBoolean']) and not(//ExternProtoDeclare[@name='MetadataBoolean']) and not(//ProtoDeclare[@name='MetadataBoolean'])">
<![CDATA[
EXTERNPROTO MetadataBoolean [
  # [appinfo] MetadataBoolean contains a set of double-precision floating-point numbers in the value field.
  exposedField SFString name
  exposedField MFFloat value
  exposedField SFString reference
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "MetadataPrototypes.wrl#MetadataBoolean"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataBoolean"
  "MetadataPrototypes.x3d#MetadataBoolean"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataBoolean"
 ]
]]>
  </xsl:if>
    <!-- Insert MetadataDouble external prototype declaration if not otherwise provided -->
    <xsl:if test="(//MetadataDouble or //ProtoInstance[@name='MetadataDouble']) and not(//ExternProtoDeclare[@name='MetadataDouble']) and not(//ProtoDeclare[@name='MetadataDouble'])">
<![CDATA[
EXTERNPROTO MetadataDouble [
  # [appinfo] MetadataDouble contains a set of double-precision floating-point numbers in the value field.
  exposedField SFString name
  exposedField MFFloat value
  exposedField SFString reference
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "MetadataPrototypes.wrl#MetadataDouble"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataDouble"
  "MetadataPrototypes.x3d#MetadataDouble"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataDouble"
 ]
]]>
  </xsl:if>
  <!-- Insert MetadataFloat external prototype declaration if not otherwise provided -->
  <xsl:if test="(//MetadataFloat or //ProtoInstance[@name='MetadataFloat']) and not(//ExternProtoDeclare[@name='MetadataFloat']) and not(//ProtoDeclare[@name='MetadataFloat'])">
<![CDATA[
EXTERNPROTO MetadataFloat [
  # [appinfo] MetadataFloat contains a set of floating-point numbers in the value field.
  exposedField SFString name
  exposedField MFFloat value
  exposedField SFString reference
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "MetadataPrototypes.wrl#MetadataFloat"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataFloat"
  "MetadataPrototypes.x3d#MetadataFloat"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataFloat"
 ]
]]>
    </xsl:if>
    <!-- Insert MetadataInteger external prototype declaration if not otherwise provided -->
    <xsl:if test="(//MetadataInteger or //ProtoInstance[@name='MetadataInteger']) and not(//ExternProtoDeclare[@name='MetadataInteger']) and not(//ProtoDeclare[@name='MetadataInteger'])">
<![CDATA[
EXTERNPROTO MetadataInteger [
  # [appinfo] MetadataInteger contains a set of 32-bit integer numbers in the value field.
  exposedField SFString name
  field MFInt32 value
  eventIn MFInt32 set_value
  exposedField SFString reference
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "MetadataPrototypes.wrl#MetadataInteger"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataInteger"
  "MetadataPrototypes.x3d#MetadataInteger"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataInteger"
 ]
]]>
    </xsl:if>
    <!-- Insert MetadataSet external prototype declaration if not otherwise provided -->
    <xsl:if test="(//MetadataSet or //ProtoInstance[@name='MetadataSet']) and not(//ExternProtoDeclare[@name='MetadataSet']) and not(//ProtoDeclare[@name='MetadataSet'])">
<![CDATA[
EXTERNPROTO MetadataSet [
  # [appinfo] MetadataSet contains a set of nodes in the value field.
  exposedField SFString name
  exposedField MFNode value
  exposedField SFString reference
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "MetadataPrototypes.wrl#MetadataSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataSet"
  "MetadataPrototypes.x3d#MetadataSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataSet"
 ]
]]>
    </xsl:if>
    <!-- Insert MetadataString external prototype declaration if not otherwise provided -->
    <xsl:if test="(//MetadataString or //ProtoInstance[@name='MetadataString']) and not(//ExternProtoDeclare[@name='MetadataString']) and not(//ProtoDeclare[@name='MetadataString'])">
<![CDATA[
EXTERNPROTO MetadataString [
  # [appinfo] MetadataString contains a set of strings in the value field.
  exposedField SFString name
  exposedField MFString value
  exposedField SFString reference
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "MetadataPrototypes.wrl#MetadataString"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataString"
  "MetadataPrototypes.x3d#MetadataString"
  "https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataString"
 ]
]]>
    </xsl:if>
    <!--========================================-->
    <!--========================================-->
    <!-- Insert IndexedQuadSet external prototype declaration if not otherwise provided -->
    <xsl:if test="(//IndexedQuadSet or //ProtoInstance[@name='IndexedQuadSet']) and not(//ExternProtoDeclare[@name='IndexedQuadSet']) and not(//ProtoDeclare[@name='IndexedQuadSet'])">
<![CDATA[
EXTERNPROTO IndexedQuadSet [
  # [appinfo] The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values, the remaining vertices shall be ignored.
  # documentation: https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet
  eventIn MFInt32 set_index # [appinfo] range [0,∞) or -1
  # No specific initialization value
  exposedField SFNode color # [appinfo] [X3DColorNode]
  # Specification initialization: NULL node
  exposedField SFNode coord # [appinfo] [X3DCoordinateNode]
  # Specification initialization: NULL node
  exposedField SFNode normal # [appinfo] [X3DNormalNode]
  # Specification initialization: NULL node
  exposedField SFNode texCoord # [appinfo] [X3DTextureCoordinateNode]
  # Specification initialization: NULL node
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  field MFInt32 index # [appinfo] range [0,8) or -1
  # No specific initialization value
  exposedField SFNode metadata # [appinfo] [X3DMetadataObject]
  # Specification initialization: NULL node
][
  "CADGeometryPrototypes.wrl#IndexedQuadSet"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.wrl#IndexedQuadSet"
  "CADGeometryPrototypes.x3d#IndexedQuadSet"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.x3d#IndexedQuadSet"
]
]]>
    </xsl:if>
    <!-- Insert QuadSet external prototype declaration if not otherwise provided -->
    <xsl:if test="(//QuadSet or //ProtoInstance[@name='QuadSet']) and not(//ExternProtoDeclare[@name='QuadSet']) and not(//ProtoDeclare[@name='QuadSet'])">
<![CDATA[
EXTERNPROTO QuadSet [
  # [appinfo] The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values, the remaining vertices shall be ignored.
  # documentation: https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#QuadSet
  exposedField SFNode color # [appinfo] [X3DColorNode]
  # Specification initialization: NULL node
  exposedField SFNode coord # [appinfo] [X3DCoordinateNode]
  # Specification initialization: NULL node
  exposedField SFNode normal # [appinfo] [X3DNormalNode]
  # Specification initialization: NULL node
  exposedField SFNode texCoord # [appinfo] [X3DTextureCoordinateNode]
  # Specification initialization: NULL node
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  exposedField SFNode metadata # [appinfo] [X3DMetadataObject]
  # Specification initialization: NULL node
][
  "CADGeometryPrototypes.wrl#QuadSet"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.wrl#QuadSet"
  "CADGeometryPrototypes.x3d#QuadSet"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.x3d#QuadSet"
]
]]>
    </xsl:if>
    <!-- Insert CADAssembly external prototype declaration if not otherwise provided -->
    <xsl:if test="(//CADAssembly or //ProtoInstance[@name='CADAssembly']) and not(//ExternProtoDeclare[@name='CADAssembly']) and not(//ProtoDeclare[@name='CADAssembly'])">
<![CDATA[
EXTERNPROTO CADAssembly [
  # [appinfo] The CADAssembly node holds a set of assemblies or parts grouped together.
  eventIn MFNode addChildren
  eventIn MFNode removeChildren
  exposedField MFNode children # [appinfo] The children field can contain X3DProductStructureChildNode types. Each child will be either a sub-assembly or a part.
  # Specification initialization: NULL node
  exposedField SFString name # [appinfo] The name field documents the name of this CADAssembly.
  field SFVec3f bboxCenter # [appinfo] Bounding box center: position offset from origin of local coordinate system.
  field SFVec3f bboxSize # [appinfo] Bounding box size: automatically calculated, can be specified as an optimization or constraint.
  exposedField SFNode metadata # [appinfo] [X3DMetadataObject]
  # Specification initialization: NULL node
][
  "CADGeometryPrototypes.wrl#CADAssembly"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.wrl#CADAssembly"
  "CADGeometryPrototypes.x3d#CADAssembly"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.x3d#CADAssembly"
]
]]>
    </xsl:if>
    <!-- Insert CADFace external prototype declaration if not otherwise provided -->
    <xsl:if test="(//CADFace or //ProtoInstance[@name='CADFace']) and not(//ExternProtoDeclare[@name='CADFace']) and not(//ProtoDeclare[@name='CADFace'])">
<![CDATA[
EXTERNPROTO CADFace [
  # [appinfo] The CADFace node holds the geometry representing a face of a part.
  # documentation: https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADPart
  exposedField SFString name # [appinfo] The name field documents the name of this CADFace.
  exposedField SFNode shape # [appinfo] [X3DShapeNode | LOD]
  # Specification initialization: NULL node
  exposedField SFNode metadata # [appinfo] [X3DMetadataObject]
  # Specification initialization: NULL node
][
  "CADGeometryPrototypes.wrl#CADFace"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.wrl#CADFace"
  "CADGeometryPrototypes.x3d#CADFace"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.x3d#CADFace"
]
]]>
    </xsl:if>
    <!-- Insert CADLayer external prototype declaration if not otherwise provided -->
    <xsl:if test="(//CADLayer or //ProtoInstance[@name='CADLayer']) and not(//ExternProtoDeclare[@name='CADLayer']) and not(//ProtoDeclare[@name='CADLayer'])">
<![CDATA[
EXTERNPROTO CADLayer [
  # [appinfo] The CADLayer node defines a hierarchy of nodes used for showing layer structure.
  # documentation: https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADPart
  eventIn MFNode addChildren
  eventIn MFNode removeChildren
  exposedField MFNode children # [appinfo] The children field can contain X3DChildNode types.
  # Specification initialization: NULL node
  exposedField SFString name # [appinfo] The name field documents the name of this CADLayer.
  exposedField SFString visible # type MFBool # [appinfo] specifies whether a particular child and its sub-children are visible. If the number of values is less than the number of children, the remaining children shall be visible.
  # Specification initialization: NULL node
  field SFVec3f bboxCenter # [appinfo] Bounding box center: position offset from origin of local coordinate system.
  field SFVec3f bboxSize # [appinfo] Bounding box size: automatically calculated, can be specified as an optimization or constraint.
  exposedField SFNode metadata # [appinfo] [X3DMetadataObject]
  # Specification initialization: NULL node
][
  "CADGeometryPrototypes.wrl#CADLayer"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.wrl#CADLayer"
  "CADGeometryPrototypes.x3d#CADLayer"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.x3d#CADLayer"
]
]]>
    </xsl:if>
    <!-- Insert CADPart external prototype declaration if not otherwise provided -->
    <xsl:if test="(//CADPart or //ProtoInstance[@name='CADPart']) and not(//ExternProtoDeclare[@name='CADPart']) and not(//ProtoDeclare[@name='CADPart'])">
<![CDATA[
EXTERNPROTO CADPart [
  # [appinfo] Representing the location and faces that constitute apart
  # documentation: https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADPart
  eventIn MFNode addChildren
  eventIn MFNode removeChildren
  exposedField MFNode children # [appinfo] The children field can only contain CADFace nodes.
  # Specification initialization: NULL node
  exposedField SFString name
  exposedField SFVec3f translation
  exposedField SFRotation rotation
  exposedField SFVec3f center
  exposedField SFVec3f scale
  exposedField SFRotation scaleOrientation
  field SFVec3f bboxCenter
  field SFVec3f bboxSize
  exposedField SFNode metadata # [appinfo] [X3DMetadataObject]
  # Specification initialization: NULL node
][
  "CADGeometryPrototypes.wrl#CADPart"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.wrl#CADPart"
  "CADGeometryPrototypes.x3d#CADPart"
  "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADGeometryPrototypes.x3d#CADPart"
]
]]>
    </xsl:if>
    <!--========================================-->
    <!--========================================-->
  <!-- Insert GeoVrml EXTERNPROTO declarations, if not otherwise provided -->
  <xsl:if test="//GeoCoordinate and not(//ExternProtoDeclare[@name='GeoCoordinate']) and not(//ProtoDeclare[@name='GeoCoordinate'])">
    <xsl:text>EXTERNPROTO GeoCoordinate [&#10;</xsl:text>
    <xsl:text>  field  SFNode    geoOrigin    # NULL&#10;</xsl:text>
    <xsl:text>  field  MFString  geoSystem    # [ "GD" "WE" ]&#10;</xsl:text>
    <xsl:text>  field  MFString  point        # []&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoCoordinate.wrl#GeoCoordinate"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoCoordinate.wrl#GeoCoordinate"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.0/protos/GeoCoordinate.wrl#GeoCoordinate"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoCoordinate.wrl#GeoCoordinate"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoElevationGrid and not(//ExternProtoDeclare[@name='GeoElevationGrid']) and not(//ProtoDeclare[@name='GeoElevationGrid'])">
    <xsl:text>EXTERNPROTO GeoElevationGrid [&#10;</xsl:text>
    <xsl:text>  field         SFNode    geoOrigin         # NULL&#10;</xsl:text>
    <xsl:text>  field         MFString  geoSystem         # [ "GD" "WE" ]&#10;</xsl:text>
    <xsl:text>  field         SFString  geoGridOrigin     # "0 0 0"&#10;</xsl:text>
    <xsl:text>  field         SFInt32   xDimension        # 0&#10;</xsl:text>
    <xsl:text>  field         SFString  xSpacing          # "1.0"&#10;</xsl:text>
    <xsl:text>  field         SFInt32   zDimension        # 0&#10;</xsl:text>
    <xsl:text>  field         SFString  zSpacing          # "1.0"&#10;</xsl:text>
    <xsl:text>  field         SFFloat   yScale            # 1.0&#10;</xsl:text>
    <xsl:text>  field         MFFloat   height            # []&#10;</xsl:text>
    <xsl:text>  eventIn       SFFloat   set_yScale&#10;</xsl:text>
    <xsl:text>  eventIn       MFFloat   set_height&#10;</xsl:text>
    <xsl:text>  exposedField  SFNode    color             # NULL&#10;</xsl:text>
    <xsl:text>  exposedField  SFNode    texCoord          # NULL&#10;</xsl:text>
    <xsl:text>  exposedField  SFNode    normal            # NULL&#10;</xsl:text>
    <xsl:text>  field         SFBool    normalPerVertex   # TRUE&#10;</xsl:text>
    <xsl:text>  field         SFBool    ccw               # TRUE&#10;</xsl:text>
    <xsl:text>  field         SFBool    colorPerVertex    # TRUE&#10;</xsl:text>
    <xsl:text>  field         SFFloat   creaseAngle       # 0&#10;</xsl:text>
    <xsl:text>  field         SFBool    solid             # TRUE&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoElevationGrid.wrl#GeoElevationGrid"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoElevationGrid.wrl#GeoElevationGrid"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoElevationGrid.wrl#GeoElevationGrid"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoElevationGrid.wrl#GeoElevationGrid"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="(//GeoInline and not(//ExternProtoDeclare[@name='GeoInline']) and not(//ProtoDeclare[@name='GeoInline'])) or
  		(//Inline[@load='false']) or
  		(//ROUTE[(  @toField='load' or   @toField='set_load')     and   @toNode=//Inline/@DEF]) or
  		(//ROUTE[(@fromField='load' or @fromField='load_changed') and @fromNode=//Inline/@DEF])">
    <!-- <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
          </xsl:with-param>
        </xsl:call-template> -->
        <!-- need to add GeoVRML 1.1 InlineLoadControl support -->
    <xsl:text>&#10;### X3D Inline with load field not supported in VRML97, substituting GeoInline prototype instead.&#10;</xsl:text>
    <xsl:text>EXTERNPROTO GeoInline [&#10;</xsl:text>
    <xsl:text>  field    MFString url           # []&#10;</xsl:text>
    <xsl:text>  eventIn  MFString set_url              &#10;</xsl:text>
    <xsl:text>  eventOut MFString url_changed&#10;</xsl:text>
    <xsl:text>  field    SFBool   load          # TRUE&#10;</xsl:text>
    <xsl:text>  eventIn  SFBool   set_load&#10;</xsl:text>
    <xsl:text>  eventOut SFBool   load_changed&#10;</xsl:text>
    <xsl:text>  field    SFVec3f  bboxCenter    # 0 0 0&#10;</xsl:text>
    <xsl:text>  field    SFVec3f  bboxSize      # -1 -1 -1&#10;</xsl:text>
    <xsl:text>  eventOut MFNode   children&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.0/protos/GeoInline.wrl#GeoInline"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.0/protos/GeoInline.wrl#GeoInline"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.0/protos/GeoInline.wrl#GeoInline"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.0/protos/GeoInline.wrl#GeoInline"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoLocation and not(//ExternProtoDeclare[@name='GeoLocation']) and not(//ProtoDeclare[@name='GeoLocation'])">
    <xsl:text>EXTERNPROTO GeoLocation [&#10;</xsl:text>
    <xsl:text>  field        SFNode    geoOrigin          # NULL&#10;</xsl:text>
    <xsl:text>  field        MFString  geoSystem          # [ "GD" "WE" ]&#10;</xsl:text>
    <xsl:text>  exposedField SFString  geoCoords          # ""&#10;</xsl:text>
    <xsl:text>  field  	     MFNode    children           # []&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoLocation.wrl#GeoLocation"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoLocation.wrl#GeoLocation"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoLocation.wrl#GeoLocation"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoLocation.wrl#GeoLocation"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoLOD and not(//ExternProtoDeclare[@name='GeoLOD']) and not(//ProtoDeclare[@name='GeoLOD'])">
    <xsl:text>EXTERNPROTO GeoLOD [&#10;</xsl:text>
    <xsl:text> field     MFString rootUrl      # []&#10;</xsl:text>
    <xsl:text> field     MFNode   rootNode     # []&#10;</xsl:text>
    <xsl:text> field     MFString child1Url    # []&#10;</xsl:text>
    <xsl:text> field     MFString child2Url    # []&#10;</xsl:text>
    <xsl:text> field     MFString child3Url    # []&#10;</xsl:text>
    <xsl:text> field     MFString child4Url    # []&#10;</xsl:text>
    <xsl:text> field     SFFloat  range        # 10&#10;</xsl:text>
    <xsl:text> field     SFNode   geoOrigin    # NULL&#10;</xsl:text>
    <xsl:text> field     MFString geoSystem    # [ "GD" "WE" ]&#10;</xsl:text>
    <xsl:text> field     SFString center       # ""&#10;</xsl:text>
    <xsl:text> eventOut  MFNode   children&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoLOD.wrl#GeoLOD"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoLOD.wrl#GeoLOD"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoLOD.wrl#GeoLOD"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoLOD.wrl#GeoLOD"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoMetadata and not(//ExternProtoDeclare[@name='GeoMetadata']) and not(//ProtoDeclare[@name='GeoMetadata'])">
    <xsl:text>EXTERNPROTO GeoMetadata [&#10;</xsl:text>
    <xsl:text>  exposedField MFString url        # []&#10;</xsl:text>
    <xsl:text>  exposedField MFString summary    # []&#10;</xsl:text>
    <xsl:text>  exposedField MFNode   data       # []&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoMetadata.wrl#GeoMetadata"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoMetadata.wrl#GeoMetadata"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoMetadata.wrl#GeoMetadata"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoMetadata.wrl#GeoMetadata"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoOrigin and not(//ExternProtoDeclare[@name='GeoOrigin']) and not(//ProtoDeclare[@name='GeoOrigin'])">
    <xsl:text>EXTERNPROTO GeoOrigin [&#10;</xsl:text>
    <xsl:text> exposedField  MFString  geoSystem    # [ "GD" "WE" ]&#10;</xsl:text>
    <xsl:text> exposedField  SFString  geoCoords    # ""&#10;</xsl:text>
    <xsl:text> field         SFBool    rotateYUp    # FALSE&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoOrigin.wrl#GeoOrigin"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoOrigin.wrl#GeoOrigin"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoOrigin.wrl#GeoOrigin"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoOrigin.wrl#GeoOrigin"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoPositionInterpolator and not(//ExternProtoDeclare[@name='GeoPositionInterpolator']) and not(//ProtoDeclare[@name='GeoPositionInterpolator'])">
    <xsl:text>EXTERNPROTO GeoPositionInterpolator [&#10;</xsl:text>
    <xsl:text> field        SFNode   geoOrigin          # NULL&#10;</xsl:text>
    <xsl:text> field        MFString geoSystem          # [ "GD" "WE" ]&#10;</xsl:text>
    <xsl:text> field        MFFloat  key                # []&#10;</xsl:text>
    <xsl:text> field        MFString keyValue           # []&#10;</xsl:text>
    <xsl:text> eventIn      SFFloat  set_fraction&#10;</xsl:text>
    <xsl:text> eventOut     SFVec3f  value_changed&#10;</xsl:text>
    <xsl:text> eventOut     SFString geovalue_changed&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoPositionInterpolator.wrl#GeoPositionInterpolator"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoTouchSensor and not(//ExternProtoDeclare[@name='GeoTouchSensor']) and not(//ProtoDeclare[@name='GeoTouchSensor'])">
    <xsl:text>EXTERNPROTO GeoTouchSensor [&#10;</xsl:text>
    <xsl:text> field        SFNode   geoOrigin           # NULL&#10;</xsl:text>
    <xsl:text> field        MFString geoSystem           # [ "GD" "WE" ]&#10;</xsl:text>
    <xsl:text> exposedField SFBool   enabled             # TRUE&#10;</xsl:text>
    <xsl:text> eventOut     SFVec3f  hitNormal_changed&#10;</xsl:text>
    <xsl:text> eventOut     SFVec3f  hitPoint_changed&#10;</xsl:text>
    <xsl:text> eventOut     SFVec2f  hitTexCoord_changed&#10;</xsl:text>
    <xsl:text> eventOut     SFBool   isActive&#10;</xsl:text>
    <xsl:text> eventOut     SFBool   isOver&#10;</xsl:text>
    <xsl:text> eventOut     SFTime   touchTime&#10;</xsl:text>
    <xsl:text> eventOut     SFString hitGeoCoord_changed&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoTouchSensor.wrl#GeoTouchSensor"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoTouchSensor.wrl#GeoTouchSensor"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoTouchSensor.wrl#GeoTouchSensor"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoTouchSensor.wrl#GeoTouchSensor"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="//GeoViewpoint and not(//ExternProtoDeclare[@name='GeoViewpoint']) and not(//ProtoDeclare[@name='GeoViewpoint'])">
    <xsl:text>EXTERNPROTO GeoViewpoint [&#10;</xsl:text>
    <xsl:text> field         SFNode      geoOrigin        # NULL&#10;</xsl:text>
    <xsl:text> field         MFString    geoSystem        # ["GD" "WE"]&#10;</xsl:text>
    <xsl:text> field         SFString    position         # "0 0 100000"&#10;</xsl:text>
    <xsl:text> field         SFRotation  orientation      # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField  SFFloat     fieldOfView      # 0.7854&#10;</xsl:text>
    <xsl:text> exposedField  SFBool      headlight        # TRUE&#10;</xsl:text>
    <xsl:text> exposedField  SFBool      jump             # TRUE&#10;</xsl:text>
    <xsl:text> exposedField  MFString    navType          # ["EXAMINE","ANY"]&#10;</xsl:text>
    <xsl:text> field         SFString    description      # ""&#10;</xsl:text>
    <xsl:text> field         SFFloat     speedFactor            # 1.0&#10;</xsl:text>
    <xsl:text> eventIn       SFBool      set_bind&#10;</xsl:text>
    <xsl:text> eventIn       SFString    set_position&#10;</xsl:text>
    <xsl:text> eventIn       SFString    set_orientation&#10;</xsl:text>
    <xsl:text> eventOut      SFTime      bindTime&#10;</xsl:text>
    <xsl:text> eventOut      SFBool      isBound&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "C:/Program Files/GeoVRML/1.1/protos/GeoViewpoint.wrl#GeoViewpoint"&#10;</xsl:text>
    <xsl:text>    "file:///C|/Program Files/GeoVRML/1.1/protos/GeoViewpoint.wrl#GeoViewpoint"&#10;</xsl:text>
    <xsl:text>    "urn:web3d:geovrml:1.1/protos/GeoViewpoint.wrl#GeoViewpoint"&#10;</xsl:text>
    <xsl:text>    "http://www.geovrml.org/1.1/protos/GeoViewpoint.wrl#GeoViewpoint"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
    <!-- ================================================================================================= -->
    <!-- Insert LatticeXvl EXTERNPROTO declarations, if not otherwise provided -->
    <xsl:if test="//XvlShell and not(//ExternProtoDeclare[@name='XvlShell']) and not(//ProtoDeclare[@name='XvlShell'])">
<![CDATA[
EXTERNPROTO XvlShell [
  # Allowable children of XvlShell: a single Coordinate node (required for rendering) and a single TextureCoordinate node (optional)
  field        SFInt32	shellType
  field        SFInt32	numberOfDivisions
  field        SFNode     coord
  field        SFNode     texCoord
  field        MFFloat	vertexRound
  field        MFInt32	edgeBeginCoordIndex
  field        MFInt32	edgeEndCoordIndex
  field        MFFloat	edgeRound
  field        MFVec3f	edgeBeginVector
  field        MFVec3f	edgeEndVector
  field        MFInt32	faceCoordIndex
  field        MFInt32	faceTexCoordIndex
  field        SFString	faceEmpty # type MFBool
  field        SFString	faceHidden # type MFBool
][
  "XvlShellProtoDeclare.wrl#XvlShell"
  "https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellProtoDeclare.wrl#XvlShell"
 ]
]]>
    </xsl:if>
    <!-- ================================================================================================= -->
    <!-- H-Anim Humanoid Animation http://h-anim.org/Specifications/H-Anim2001 -->
    <!-- standard www.web3d.org EXTERNPROTO URLs are not needed, since Prototype declarations work OK...
         these can be superceded by a browser, if desired. -->
    <xsl:if test="(//HAnimDisplacer or //ProtoInstance[@name='HAnimDisplacer']) and not(//ExternProtoDeclare[@name='HAnimDisplacer']) and not(//ProtoDeclare[@name='HAnimDisplacer'])">
<![CDATA[
PROTO HAnimDisplacer [
    exposedField SFString name           ""
    exposedField MFInt32  coordIndex     [ ]
    exposedField MFVec3f  displacements  [ ]
]
{
  WorldInfo { info "null body node" }
}
]]>
    </xsl:if>
    <xsl:if test="(//HAnimHumanoid or //ProtoInstance[@name='HAnimHumanoid']) and not(//ExternProtoDeclare[@name='HAnimHumanoid']) and not(//ProtoDeclare[@name='HAnimHumanoid'])">
      <xsl:if test="(//HAnimHumanoid[@version='1.1'] or //HAnimHumanoid/humanoidBody) and (//HAnimHumanoid[@version='2.0'] or //HAnimHumanoid/skeleton or //HAnimHumanoid/skin or //HAnimHumanoid/skinCoord or //HAnimHumanoid/skinNormal)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
          <xsl:text>HAnim 1.1 and 2.0 models can't be present in same file due to HAnimHumanoid Prototype differences</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name(//HAnimHumanoid)"/>
          <xsl:with-param name="DEF"  select="//HAnimHumanoid/@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- implement either version the same way
      <xsl:choose>
        <xsl:when test="//HAnimHumanoid[@version='1.1'] or //HAnimHumanoid/humanoidBody">
          <xsl:text># PROTO version taken from http://H-Anim.org/Specifications/H-Anim1.1/#humanoid&#10;</xsl:text>
          <xsl:text># EXTERNPROTO version also available via http://www.h-anim.org/Nodes/H-Anim1.1/Humanoid.wrl#Humanoid&#10;</xsl:text>
<![CDATA[
PROTO HAnimHumanoid [
    exposedField    SFString   name                  ""
    exposedField    SFString   version               "1.1"
    exposedField    MFString   info                  [ ]
    exposedField    SFVec3f    translation           0 0 0
    exposedField    SFRotation rotation              0 0 1 0
    exposedField    SFVec3f    scale                 1 1 1
    exposedField    SFRotation scaleOrientation      0 0 1 0
    exposedField    SFVec3f    center                0 0 0
    field           SFVec3f    bboxCenter            0 0 0
    field           SFVec3f    bboxSize              -1 -1 -1
    exposedField    MFNode     humanoidBody          [ ]
    exposedField    MFNode     joints                [ ]
    exposedField    MFNode     segments              [ ]
    exposedField    MFNode     sites                 [ ]
    exposedField    MFNode     viewpoints            [ ]
]
{
  Transform {
    translation      IS translation
    rotation         IS rotation
    center           IS center
    scale            IS scale
    scaleOrientation IS scaleOrientation
    bboxCenter       IS bboxCenter
    bboxSize         IS bboxSize
    children [
      Group {
        children IS humanoidBody
      }
      Group {
        children IS viewpoints
      }
    ]
  }
}
]]>
        </xsl:when>
        <xsl:otherwise>
        </xsl:otherwise>
      </xsl:choose>
-->
        <xsl:text># PROTO version taken from http://www.h-anim.org/Models/H-Anim2001/boxman/boxman.wrl&#10;</xsl:text>
        <xsl:text># EXTERNPROTO version will also be available at http://h-anim.org/Nodes &#10;</xsl:text>
<![CDATA[
PROTO HAnimHumanoid [
   exposedField    SFString   name                  ""
   exposedField    SFString   version               "2.0"
   exposedField    SFString   humanoidVersion       ""
   exposedField    MFString   info                  [ ]
   exposedField    SFVec3f    translation           0 0 0
   exposedField    SFRotation rotation              0 0 1 0
   exposedField    SFVec3f    scale                 1 1 1
   exposedField    SFRotation scaleOrientation      0 0 1 0
   exposedField    SFVec3f    center                0 0 0
   field           SFVec3f    bboxCenter            0 0 0
   field           SFVec3f    bboxSize              -1 -1 -1
   exposedField    MFNode     skeleton              [ ]
   exposedField    MFNode     skin                  [ ]
   exposedField    MFNode     joints                [ ]
   exposedField    MFNode     segments              [ ]
   exposedField    MFNode     sites                 [ ]
   exposedField    MFNode     viewpoints            [ ]
   exposedField    SFNode     skinCoord             NULL
   exposedField    SFNode     skinNormal            NULL
]
{
   Transform {
      translation      IS translation
      rotation         IS rotation
      scale            IS scale
      scaleOrientation IS scaleOrientation
      center           IS center
      bboxCenter       IS bboxCenter
      bboxSize         IS bboxSize
      children [
         Group {
            children IS skeleton
         }
         Group {
            children IS skin
         }
         Group {
            children IS viewpoints
         }
      ]
   }
}
]]>
    </xsl:if>
    <xsl:if test="(//HAnimJoint or //ProtoInstance[@name='HAnimJoint']) and not(//ExternProtoDeclare[@name='HAnimJoint']) and not(//ProtoDeclare[@name='HAnimJoint'])">
<![CDATA[
PROTO HAnimJoint [
   exposedField     SFString     name                ""
   exposedField     MFFloat      ulimit              [ ]
   exposedField     MFFloat      llimit              [ ]
   exposedField     SFRotation   limitOrientation    0 0 1 0
   exposedField     MFInt32      skinCoordIndex      [ ]
   exposedField     MFFloat      skinCoordWeight     [ ]
   exposedField     MFFloat      stiffness           [ 0 0 0 ]
   exposedField     SFVec3f      translation         0 0 0
   exposedField     SFRotation   rotation            0 0 1 0
   exposedField     SFVec3f      scale               1 1 1
   exposedField     SFRotation   scaleOrientation    0 0 1 0
   exposedField     SFVec3f      center              0 0 0
   field            SFVec3f      bboxCenter          0 0 0
   field            SFVec3f      bboxSize            -1 -1 -1
   exposedField     MFNode       children            [ ]
   eventIn          MFNode       addChildren
   eventIn          MFNode       removeChildren
]
{
	Transform {
		translation      IS translation
		rotation         IS rotation
		scale            IS scale
		scaleOrientation IS scaleOrientation
		center           IS center
		bboxCenter       IS bboxCenter
		bboxSize         IS bboxSize
		children         IS children
		addChildren      IS addChildren
		removeChildren   IS removeChildren
   }
}
]]>
    </xsl:if>
    <xsl:if test="(//HAnimSegment or //ProtoInstance[@name='HAnimSegment']) and not(//ExternProtoDeclare[@name='HAnimSegment']) and not(//ProtoDeclare[@name='HAnimSegment'])">
<![CDATA[
PROTO HAnimSegment [
   exposedField   SFString name             ""
   exposedField   SFFloat  mass             0
   exposedField   SFVec3f  centerOfMass     0 0 0
   exposedField   MFFloat  momentsOfInertia [ 0 0 0 0 0 0 0 0 0 ]
   field          SFVec3f  bboxCenter       0 0 0
   field          SFVec3f  bboxSize         -1 -1 -1
   exposedField   MFNode   children         [ ]
   eventIn        MFNode   addChildren
   eventIn        MFNode   removeChildren
   exposedField   SFNode   coord            NULL
   exposedField   MFNode   displacers       [ ]
]
{
	Group {
		bboxCenter     IS bboxCenter
		bboxSize       IS bboxSize
		children       IS children
		addChildren    IS addChildren
		removeChildren IS removeChildren
	}
}
]]>
    </xsl:if>
    <xsl:if test="(//HAnimSite or //ProtoInstance[@name='HAnimSite']) and not(//ExternProtoDeclare[@name='HAnimSite']) and not(//ProtoDeclare[@name='HAnimSite'])">
<![CDATA[
PROTO HAnimSite [
	exposedField SFString name ""
	exposedField SFVec3f translation 0 0 0
	exposedField SFRotation rotation 0 0 1 0
	exposedField SFVec3f scale 1 1 1
	exposedField SFRotation scaleOrientation 0 0 1 0
	exposedField SFVec3f center 0 0 0
	field        SFVec3f bboxCenter 0 0 0
	field        SFVec3f bboxSize   -1 -1 -1
	exposedField MFNode children []
	eventIn MFNode addChildren
	eventIn MFNode removeChildren
]
{
	Transform {
		children IS children
		addChildren IS addChildren
		removeChildren IS removeChildren
		center IS center
		rotation IS rotation
		scale IS scale
		scaleOrientation IS scaleOrientation
		translation IS translation
	}
}
]]>
    </xsl:if>
<!--
  <xsl:if test="(//HAnimHumanoid or //ProtoInstance[@name='HAnimHumanoid']) and not(//ExternProtoDeclare[@name='HAnimHumanoid']) and not(//ProtoDeclare[@name='HAnimHumanoid'])">
    <xsl:text>EXTERNPROTO HAnimHumanoid [&#10;</xsl:text>
    <xsl:text> field           SFVec3f    bboxCenter            # 0 0 0&#10;</xsl:text>
    <xsl:text> field           SFVec3f    bboxSize              # -1 -1 -1&#10;</xsl:text>
    <xsl:text> exposedField    SFVec3f    center                # 0 0 0&#10;</xsl:text>
    <xsl:text> exposedField    MFNode     humanoidBody          # [ ]&#10;</xsl:text>
    <xsl:text> exposedField    MFString   info                  # [ ]&#10;</xsl:text>
    <xsl:text> exposedField    MFNode     joints                # [ ]&#10;</xsl:text>
    <xsl:text> exposedField    SFString   name                  # ""&#10;</xsl:text>
    <xsl:text> exposedField    SFRotation rotation              # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField    SFVec3f    scale                 # 1 1 1&#10;</xsl:text>
    <xsl:text> exposedField    SFRotation scaleOrientation      # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField    MFNode     segments              # [ ]&#10;</xsl:text>
    <xsl:text> exposedField    MFNode     sites                 # [ ]&#10;</xsl:text>
    <xsl:text> exposedField    SFVec3f    translation           # 0 0 0&#10;</xsl:text>
    <xsl:text> exposedField    SFString   version               # "1.1"&#10;</xsl:text>
    <xsl:text> exposedField    MFNode     viewpoints            # [ ]&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "NancyProtos.wrl#HAnimHumanoid"&#10;</xsl:text>
    <xsl:text>    "C:/www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimHumanoid"&#10;</xsl:text>
    <xsl:text>    "https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimHumanoid"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="(//HAnimDisplacer or //ProtoInstance[@name='HAnimDisplacer']) and not(//ExternProtoDeclare[@name='HAnimDisplacer']) and not(//ProtoDeclare[@name='HAnimDisplacer'])">
    <xsl:text>EXTERNPROTO HAnimDisplacer [&#10;</xsl:text>
    <xsl:text> exposedField MFInt32  coordIndex     # [ ]&#10;</xsl:text>
    <xsl:text> exposedField MFVec3f  displacements  # [ ]&#10;</xsl:text>
    <xsl:text> exposedField SFString name           # ""&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "NancyProtos.wrl#HAnimDisplacer"&#10;</xsl:text>
    <xsl:text>    "C:/www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimDisplacer"&#10;</xsl:text>
    <xsl:text>    "https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimDisplacer"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="(//HAnimJoint or //ProtoInstance[@name='HAnimJoint']) and not(//ExternProtoDeclare[@name='HAnimJoint']) and not(//ProtoDeclare[@name='HAnimJoint'])">
    <xsl:text>EXTERNPROTO HAnimJoint [&#10;</xsl:text>
    <xsl:text> exposedField     SFVec3f      center              # 0 0 0&#10;</xsl:text>
    <xsl:text> exposedField     MFNode       children            # []&#10;</xsl:text>
    <xsl:text> exposedField     MFFloat      llimit              # []&#10;</xsl:text>
    <xsl:text> exposedField     SFRotation   limitOrientation    # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField     SFString     name                # ""&#10;</xsl:text>
    <xsl:text> exposedField     SFRotation   rotation            # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField     SFVec3f      scale               # 1 1 1&#10;</xsl:text>
    <xsl:text> exposedField     SFRotation   scaleOrientation    # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField     MFFloat      stiffness           # [ 1 1 1 ]&#10;</xsl:text>
    <xsl:text> exposedField     SFVec3f      translation         # 0 0 0&#10;</xsl:text>
    <xsl:text> exposedField     MFFloat      ulimit              # []&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "NancyProtos.wrl#HAnimJoint"&#10;</xsl:text>
    <xsl:text>    "C:/www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimJoint"&#10;</xsl:text>
    <xsl:text>    "https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimJoint"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="(//HAnimSegment or //ProtoInstance[@name='HAnimSegment']) and not(//ExternProtoDeclare[@name='HAnimSegment']) and not(//ProtoDeclare[@name='HAnimSegment'])">
    <xsl:text>EXTERNPROTO HAnimSegment [&#10;</xsl:text>
    <xsl:text> field           SFVec3f     bboxCenter        # 0 0 0&#10;</xsl:text>
    <xsl:text> field           SFVec3f     bboxSize          # -1 -1 -1&#10;</xsl:text>
    <xsl:text> exposedField    SFVec3f     centerOfMass      # 0 0 0&#10;</xsl:text>
    <xsl:text> exposedField    MFNode      children          # [ ]&#10;</xsl:text>
    <xsl:text> exposedField    SFNode      coord             # NULL&#10;</xsl:text>
    <xsl:text> exposedField    MFNode      displacers        # [ ]&#10;</xsl:text>
    <xsl:text> exposedField    SFFloat     mass              # 0 &#10;</xsl:text>
    <xsl:text> exposedField    MFFloat     momentsOfInertia  # [ 0 0 0 0 0 0 0 0 0 ]&#10;</xsl:text>
    <xsl:text> exposedField    SFString    name              # ""&#10;</xsl:text>
    <xsl:text> eventIn         MFNode      addChildren&#10;</xsl:text>
    <xsl:text> eventIn         MFNode      removeChildren&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "NancyProtos.wrl#HAnimSegment"&#10;</xsl:text>
    <xsl:text>    "C:/www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimSegment"&#10;</xsl:text>
    <xsl:text>    "https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimSegment"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="(//HAnimSite or //ProtoInstance[@name='HAnimSite']) and not(//ExternProtoDeclare[@name='HAnimSite']) and not(//ProtoDeclare[@name='HAnimSite'])">
    <xsl:text>EXTERNPROTO HAnimSite [&#10;</xsl:text>
    <xsl:text> exposedField    SFVec3f     center           # 0 0 0&#10;</xsl:text>
    <xsl:text> exposedField    MFNode      children         # []&#10;</xsl:text>
    <xsl:text> exposedField    SFString    name             # ""&#10;</xsl:text>
    <xsl:text> exposedField    SFRotation  rotation         # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField    SFVec3f     scale            # 1 1 1&#10;</xsl:text>
    <xsl:text> exposedField    SFRotation  scaleOrientation # 0 0 1 0&#10;</xsl:text>
    <xsl:text> exposedField    SFVec3f     translation      # 0 0 0&#10;</xsl:text>
    <xsl:text> eventIn         MFNode      addChildren &#10;</xsl:text>
    <xsl:text> eventIn         MFNode      removeChildren&#10;</xsl:text>
    <xsl:text>] [&#10;</xsl:text>
    <xsl:text>    "NancyProtos.wrl#HAnimSite"&#10;</xsl:text>
    <xsl:text>    "C:/www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimSegment"&#10;</xsl:text>
    <xsl:text>    "https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyProtos.wrl#HAnimSite"&#10;</xsl:text>
    <xsl:text>  ]&#10;</xsl:text>
  </xsl:if>
-->
    <!-- ================================================================================================= -->
    <!-- ================================================================================================= -->
    <!-- Insert Rendering Component EXTERNPROTO declarations, if not otherwise provided -->
    <xsl:if test="//ColorRGBA and not(//ExternProtoDeclare[@name='ColorRGBA']) and not(//ProtoDeclare[@name='ColorRGBA'])">
<![CDATA[
EXTERNPROTO ColorRGBA [
  # [appinfo] ColorRGBA defines a set of RGBA colors.
  exposedField MFRotation color # [appinfo] locally override MFColorRGBA type (which is not supported in VRML 97) in order to downgrade to Color RGB
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#ColorRGBA"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#ColorRGBA"
  "RenderingComponentPrototypes.x3d#ColorRGBA"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#ColorRGBA"
]
]]>
    </xsl:if>
    <xsl:if test="//IndexedTriangleFanSet and not(//ExternProtoDeclare[@name='IndexedTriangleFanSet']) and not(//ProtoDeclare[@name='IndexedTriangleFanSet'])">
<![CDATA[
EXTERNPROTO IndexedTriangleFanSet [
  # [appinfo] IndexedTriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  field MFInt32 index
  eventIn MFInt32 set_index
  exposedField SFNode color # [appinfo] Color, ColorRGBA node only
  exposedField SFNode coord # [appinfo] Coordinate node only
  exposedField SFNode normal # [appinfo] Normal node only
  exposedField SFNode texCoord # [appinfo] TextureCoordinate node only
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#IndexedTriangleFanSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleFanSet"
  "RenderingComponentPrototypes.x3d#IndexedTriangleFanSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleFanSet"
]
]]>
    </xsl:if>
    <xsl:if test="//IndexedTriangleSet and not(//ExternProtoDeclare[@name='IndexedTriangleSet']) and not(//ProtoDeclare[@name='IndexedTriangleSet'])">
<![CDATA[
EXTERNPROTO IndexedTriangleSet [
  # [appinfo] IndexedTriangleSet represents a 3D shape composed of a collection of individual triangles.
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  field MFInt32 index
  eventIn MFInt32 set_index
  exposedField SFNode color # [appinfo] Color, ColorRGBA node only
  exposedField SFNode coord # [appinfo] Coordinate node only
  exposedField SFNode normal # [appinfo] Normal node only
  exposedField SFNode texCoord # [appinfo] TextureCoordinate node only
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#IndexedTriangleSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleSet"
  "RenderingComponentPrototypes.x3d#IndexedTriangleSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleSet"
]
]]>
    </xsl:if>
    <xsl:if test="//IndexedTriangleStripSet and not(//ExternProtoDeclare[@name='IndexedTriangleStripSet']) and not(//ProtoDeclare[@name='IndexedTriangleStripSet'])">
<![CDATA[
EXTERNPROTO IndexedTriangleStripSet [
  # [appinfo] IndexedTriangleStripSet represents a 3D shape composed of strips of triangles.
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  field MFInt32 index
  eventIn MFInt32 set_index
  exposedField SFNode color # [appinfo] Color, ColorRGBA node only
  exposedField SFNode coord # [appinfo] Coordinate node only
  exposedField SFNode normal # [appinfo] Normal node only
  exposedField SFNode texCoord # [appinfo] TextureCoordinate node only
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#IndexedTriangleStripSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleStripSet"
  "RenderingComponentPrototypes.x3d#IndexedTriangleStripSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleStripSet"
]
]]>
    </xsl:if>
    <xsl:if test="//LineSet and not(//ExternProtoDeclare[@name='LineSet']) and not(//ProtoDeclare[@name='LineSet'])">
<![CDATA[
EXTERNPROTO LineSet [
  # [appinfo] LineSet represents a 3D geometry formed by constructing polylines from 3D vertices.
  exposedField MFInt32 vertexCount
  exposedField SFNode color # [appinfo] Color, ColorRGBA node only
  exposedField SFNode coord # [appinfo] Coordinate node only
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#LineSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#LineSet"
  "RenderingComponentPrototypes.x3d#LineSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#LineSet"
]
]]>
    </xsl:if>
    <xsl:if test="//TriangleFanSet and not(//ExternProtoDeclare[@name='TriangleFanSet']) and not(//ProtoDeclare[@name='TriangleFanSet'])">
<![CDATA[
EXTERNPROTO TriangleFanSet [
  # [appinfo] TriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.
  exposedField MFInt32 fanCount
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  exposedField SFNode color # [appinfo] Color, ColorRGBA node only
  exposedField SFNode coord # [appinfo] Coordinate node only
  exposedField SFNode normal # [appinfo] Normal node only
  exposedField SFNode texCoord # [appinfo] TextureCoordinate node only
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#TriangleFanSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleFanSet"
  "RenderingComponentPrototypes.x3d#TriangleFanSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleFanSet"
]
]]>
    </xsl:if>
    <xsl:if test="//TriangleSet and not(//ExternProtoDeclare[@name='TriangleSet']) and not(//ProtoDeclare[@name='TriangleSet'])">
<![CDATA[
EXTERNPROTO TriangleSet [
  # [appinfo] TriangleSet represents a 3D shape that represents a collection of individual triangles.
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  exposedField SFNode color # [appinfo] Color, ColorRGBA node only
  exposedField SFNode coord # [appinfo] Coordinate node only
  exposedField SFNode normal # [appinfo] Normal node only
  exposedField SFNode texCoord # [appinfo] TextureCoordinate node only
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#TriangleSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleSet"
  "RenderingComponentPrototypes.x3d#TriangleSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleSet"
]
]]>
    </xsl:if>
    <xsl:if test="//TriangleStripSet and not(//ExternProtoDeclare[@name='TriangleStripSet']) and not(//ProtoDeclare[@name='TriangleStripSet'])">
<![CDATA[
EXTERNPROTO TriangleStripSet [
  # [appinfo] TriangleStripSet represents a 3D shape composed of strips of triangles.
  exposedField MFInt32 stripCount
  field SFBool ccw
  field SFBool colorPerVertex
  field SFBool normalPerVertex
  field SFBool solid
  exposedField SFNode color # [appinfo] Color, ColorRGBA node only
  exposedField SFNode coord # [appinfo] Coordinate node only
  exposedField SFNode normal # [appinfo] Normal node only
  exposedField SFNode texCoord # [appinfo] TextureCoordinate node only
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "RenderingComponentPrototypes.wrl#TriangleStripSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleStripSet"
  "RenderingComponentPrototypes.x3d#TriangleStripSet"
  "https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleStripSet"
]
]]>
    </xsl:if>
    <!-- ================================================================================================= -->
    <!-- ================================================================================================= -->
    <!-- Insert Geometry2D Component EXTERNPROTO declarations, if not otherwise provided -->
    <xsl:if test="//Arc2D and not(//ExternProtoDeclare[@name='Arc2D']) and not(//ProtoDeclare[@name='Arc2D'])">
<![CDATA[
EXTERNPROTO Arc2D [
  field SFFloat startAngle
  field SFFloat endAngle
  field SFFloat radius
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#Arc2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Arc2D"
  "Geometry2dComponentPrototypes.x3d#Arc2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Arc2D"
]
]]>
    </xsl:if>
    <xsl:if test="//ArcClose2D and not(//ExternProtoDeclare[@name='ArcClose2D']) and not(//ProtoDeclare[@name='ArcClose2D'])">
<![CDATA[
EXTERNPROTO ArcClose2D [
  field SFFloat startAngle
  field SFFloat endAngle
  field SFFloat radius
  field SFString closureType
  field SFBool solid
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#ArcClose2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2D"
  "Geometry2dComponentPrototypes.x3d#ArcClose2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2D"
]
]]>
    </xsl:if>
    <xsl:if test="//Circle2D and not(//ExternProtoDeclare[@name='Circle2D']) and not(//ProtoDeclare[@name='Circle2D'])">
<![CDATA[
EXTERNPROTO Circle2D [
  field SFFloat radius
  field SFBool solid
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#Circle2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Circle2D"
  "Geometry2dComponentPrototypes.x3d#Circle2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Circle2D"
]
]]>
    </xsl:if>
    <xsl:if test="//Disk2D and not(//ExternProtoDeclare[@name='Disk2D']) and not(//ProtoDeclare[@name='Disk2D'])">
<![CDATA[
EXTERNPROTO Disk2D [
  field SFFloat innerRadius
  field SFFloat outerRadius
  field SFBool solid
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#Disk2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Disk2D"
  "Geometry2dComponentPrototypes.x3d#Disk2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Disk2D"
]
]]>
    </xsl:if>
    <xsl:if test="//Polyline2D and not(//ExternProtoDeclare[@name='Polyline2D']) and not(//ProtoDeclare[@name='Polyline2D'])">
<![CDATA[
EXTERNPROTO Polyline2D [
  field MFVec2f lineSegments
  field SFBool solid
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#Polyline2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polyline2D"
  "Geometry2dComponentPrototypes.x3d#Polyline2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polyline2D"
]
]]>
    </xsl:if>
    <xsl:if test="//Polypoint2D and not(//ExternProtoDeclare[@name='Polypoint2D']) and not(//ProtoDeclare[@name='Polypoint2D'])">
<![CDATA[
EXTERNPROTO Polypoint2D [
  field MFVec2f point
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#Polypoint2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polypoint2D"
  "Geometry2dComponentPrototypes.x3d#Polypoint2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polypoint2D"
]
]]>
    </xsl:if>
    <xsl:if test="//Rectangle2D and not(//ExternProtoDeclare[@name='Rectangle2D']) and not(//ProtoDeclare[@name='Rectangle2D'])">
<![CDATA[
EXTERNPROTO Rectangle2D [
  field SFVec2f size
  field SFBool solid
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#Rectangle2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2D"
  "Geometry2dComponentPrototypes.x3d#Rectangle2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2D"
]
]]>
    </xsl:if>
    <xsl:if test="//TriangleSet2D and not(//ExternProtoDeclare[@name='TriangleSet2D']) and not(//ProtoDeclare[@name='TriangleSet2D'])">
<![CDATA[
EXTERNPROTO TriangleSet2D [
  field MFVec2f vertices
  field SFBool solid
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "Geometry2dComponentPrototypes.wrl#TriangleSet2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#TriangleSet2D"
  "Geometry2dComponentPrototypes.x3d#TriangleSet2D"
  "https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#TriangleSet2D"
]
]]>
    </xsl:if>
    <!-- ================================================================================================= -->
    <!-- ================================================================================================= -->
    <!-- Insert NURBS EXTERNPROTO declarations, if not otherwise provided -->
    <xsl:if test="//Contour2D and not(//ExternProtoDeclare[@name='Contour2D']) and not(//ProtoDeclare[@name='Contour2D'])">
<![CDATA[
EXTERNPROTO Contour2D [
  # [appinfo] Contour2D node groups a set of curve segments (either NurbsCurve2D or ContourPolyline2D nodes) to a composite contour, in consecutive order according to the topology of the contour. The children shall form a closed loop with the first point of the first child repeated as the last point of the last child and the last point of a segment repeated as the first point of the consecutive one.
  # documentation: https://www.web3d.org/technicalinfo/specifications/ISO_IEC_19775/Part01/components/nurbs.html#Contour2D
  eventIn MFNode addChildren # [appinfo] [NurbsCurve|ContourPolyline2D]
  eventIn MFNode removeChildren # [appinfo] [NurbsCurve|ContourPolyline2D]
  field MFNode children # [appinfo] [NurbsCurve|ContourPolyline2D], default []
  eventIn MFNode set_children
  eventOut MFNode children_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#Contour2D"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#Contour2D"
  "NurbsPrototypes.x3d#Contour2D"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#Contour2D"
]
]]>
    </xsl:if>
    <xsl:if test="//ContourPolyline2D and not(//ExternProtoDeclare[@name='ContourPolyline2D']) and not(//ProtoDeclare[@name='ContourPolyline2D'])">
<![CDATA[
EXTERNPROTO ContourPolyline2D [
  field MFVec2f point # [appinfo] range (-∞,∞), default []
  eventIn MFVec2f set_point
  eventOut MFVec2f point_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#ContourPolyline2D"
  "../../NurbsPrototypes.wrl#ContourPolyline2D"
  "../../../NurbsPrototypes.wrl#ContourPolyline2D"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#ContourPolyline2D"
  "NurbsPrototypes.x3d#ContourPolyline2D"
  "../../NurbsPrototypes.x3d#ContourPolyline2D"
  "../../../NurbsPrototypes.x3d#ContourPolyline2D"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#ContourPolyline2D"
]
]]>
    </xsl:if>
    <xsl:if test="//CoordinateDouble and not(//ExternProtoDeclare[@name='CoordinateDouble']) and not(//ProtoDeclare[@name='CoordinateDouble'])">
<![CDATA[
EXTERNPROTO CoordinateDouble [
  field MFVec3f point # [appinfo] range (-∞,∞), default []
  # Substitute MFVec3f for MFVec3d to provide VRML 97 support
  eventIn MFVec3f set_point
  eventOut MFVec3f point_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#CoordinateDouble"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#CoordinateDouble"
  "NurbsPrototypes.x3d#CoordinateDouble"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#CoordinateDouble"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsCurve and not(//ExternProtoDeclare[@name='NurbsCurve']) and not(//ProtoDeclare[@name='NurbsCurve'])">
<![CDATA[
EXTERNPROTO NurbsCurve [
  field SFNode controlPoint # [appinfo] [X3DCoordinateNode], default []
  field SFInt32 tessellation # [appinfo] range (-∞,∞), default 0
  field MFFloat weight # [appinfo] range (0,∞), default []
  field SFBool closed # [appinfo] default FALSE
  field MFFloat knot # [appinfo] range (-∞,∞), default []
  field SFInt32 order # [appinfo] range [2,∞), default 3
  eventIn SFNode set_controlPoint
  eventOut SFNode controlPoint_changed
  eventIn SFInt32 set_tessellation
  eventOut SFInt32 tessellation_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsCurve"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsCurve"
  "NurbsPrototypes.x3d#NurbsCurve"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsCurve"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsCurve2D and not(//ExternProtoDeclare[@name='NurbsCurve2D']) and not(//ProtoDeclare[@name='NurbsCurve2D'])">
<![CDATA[
EXTERNPROTO NurbsCurve2D [
  field MFVec2f controlPoint # [appinfo] range (-∞,∞), default []
  # Substitute MFVec2f for MFVec2d to provide VRML 97 support
  field SFInt32 tessellation # [appinfo] range (-∞,∞), default 0
  field MFFloat weight # [appinfo] range (0,∞), default []
  field MFFloat knot # [appinfo] range (-∞,∞), default []
  field SFInt32 order # [appinfo] range [2,∞), default 3
  field SFBool closed # [appinfo] default FALSE
  eventIn MFVec2f set_controlPoint
  eventOut MFVec2f controlPoint_changed
  eventIn SFInt32 set_tessellation
  eventOut SFInt32 tessellation_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsCurve2D"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsCurve2D"
  "NurbsPrototypes.x3d#NurbsCurve2D"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsCurve2D"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsOrientationInterpolator and not(//ExternProtoDeclare[@name='NurbsOrientationInterpolator']) and not(//ProtoDeclare[@name='NurbsOrientationInterpolator'])">
<![CDATA[
EXTERNPROTO NurbsOrientationInterpolator [
  eventIn SFFloat set_fraction # [appinfo] range (-∞,∞)
  field SFNode controlPoint # [appinfo] [X3DCoordinateNode], default []
  # Coordinate or CoordinateDouble can be used here. Ensure inclusion of containerField="coord" attribute.
  field MFFloat knot # [appinfo] range (-∞,∞), default []
  field SFInt32 order # [appinfo] range (2,∞), default 3
  field MFFloat weight # [appinfo] range (-∞,∞), default []
  eventOut SFRotation value_changed
  eventIn SFNode set_controlPoint
  eventOut SFNode controlPoint_changed
  eventIn MFFloat set_knot
  eventOut MFFloat knot_changed
  eventIn SFInt32 set_order
  eventOut SFInt32 order_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsOrientationInterpolator"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsOrientationInterpolator"
  "NurbsPrototypes.x3d#NurbsOrientationInterpolator"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsOrientationInterpolator"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsPatchSurface and not(//ExternProtoDeclare[@name='NurbsPatchSurface']) and not(//ProtoDeclare[@name='NurbsPatchSurface'])">
<![CDATA[
EXTERNPROTO NurbsPatchSurface [
  field SFNode controlPoint # [appinfo] [X3DCoordinateNode], default []
  field SFNode texCoord # [appinfo] [X3DTextureCoordinateNode|NurbsTextureCoordinate], default []
  field SFInt32 uTessellation # [appinfo] range (-∞,∞), default 0
  field SFInt32 vTessellation # [appinfo] range (-∞,∞), default 0
  field MFFloat weight # [appinfo] range (0,∞), default []
  field SFBool solid # [appinfo] default TRUE
  field SFBool uClosed # [appinfo] default FALSE
  field SFInt32 uDimension # [appinfo] range [0,∞), default 0
  field MFFloat uKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 uOrder # [appinfo] range [2,∞), default 3
  field SFBool vClosed # [appinfo] default FALSE
  field SFInt32 vDimension # [appinfo] range [0,∞), default 0
  field MFFloat vKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 vOrder # [appinfo] range [2,∞), default 3
  eventIn SFNode set_controlPoint
  eventOut SFNode controlPoint_changed
  eventIn SFNode set_texCoord
  eventOut SFNode texCoord_changed
  eventIn SFInt32 set_uTessellation
  eventOut SFInt32 uTessellation_changed
  eventIn SFInt32 set_vTessellation
  eventOut SFInt32 vTessellation_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsPatchSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsPatchSurface"
  "NurbsPrototypes.x3d#NurbsPatchSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsPatchSurface"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsPositionInterpolator and not(//ExternProtoDeclare[@name='NurbsPositionInterpolator']) and not(//ProtoDeclare[@name='NurbsPositionInterpolator'])">
<![CDATA[
EXTERNPROTO NurbsPositionInterpolator [
  eventIn SFFloat set_fraction # [appinfo] range (-∞,∞)
  field SFNode controlPoint # [appinfo] [X3DCoordinateNode], default []
  # Coordinate or CoordinateDouble can be used here. Ensure inclusion of containerField="coord" attribute.
  field MFFloat knot # [appinfo] range (-∞,∞), default []
  field SFInt32 order # [appinfo] range (2,∞), default 3
  field MFFloat weight # [appinfo] range (-∞,∞), default []
  eventOut SFVec3f value_changed
  eventIn SFNode set_controlPoint
  eventOut SFNode controlPoint_changed
  eventIn MFFloat set_knot
  eventOut MFFloat knot_changed
  eventIn SFInt32 set_order
  eventOut SFInt32 order_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsPositionInterpolator"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsPositionInterpolator"
  "NurbsPrototypes.x3d#NurbsPositionInterpolator"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsPositionInterpolator"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsSet and not(//ExternProtoDeclare[@name='NurbsSet']) and not(//ProtoDeclare[@name='NurbsSet'])">
<![CDATA[
EXTERNPROTO NurbsSet [
  eventIn MFNode addGeometry # [appinfo] [NurbsPatchSurface]
  eventIn MFNode removeGeometry # [appinfo] [NurbsPatchSurface]
  field MFNode geometry # [appinfo] [NurbsPatchSurface], default []
  field SFFloat tessellationScale # [appinfo] range (0,∞), default 1.0
  field SFVec3f bboxCenter # [appinfo] range (-∞,∞), default [0 0 0]
  field SFVec3f bboxSize # [appinfo] range [0,∞); [-1 -1 -1], default [-1 -1 -1]
  eventIn MFNode set_geometry
  eventOut MFNode geometry_changed
  eventIn SFFloat set_tessellationScale
  eventOut SFFloat tessellationScale_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsSet"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSet"
  "NurbsPrototypes.x3d#NurbsSet"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSet"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsSurfaceInterpolator and not(//ExternProtoDeclare[@name='NurbsSurfaceInterpolator']) and not(//ProtoDeclare[@name='NurbsSurfaceInterpolator'])">
<![CDATA[
EXTERNPROTO NurbsSurfaceInterpolator [
  eventIn SFVec2f set_fraction # [appinfo] range (-∞,∞)
  field SFNode controlPoint # [appinfo] [X3DCoordinateNode], default []
  field MFFloat weight # [appinfo] range (-∞,∞), default []
  eventOut SFVec3f position_changed
  eventOut SFVec3f normal_changed
  field SFInt32 uDimension # [appinfo] range [0,∞), default 0
  field MFFloat uKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 uOrder # [appinfo] range [2,∞), default 3
  field SFInt32 vDimension # [appinfo] range [0,∞), default 0
  field MFFloat vKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 vOrder # [appinfo] range [2,∞), default 3
  eventIn SFNode set_controlPoint
  eventOut SFNode controlPoint_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsSurfaceInterpolator"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSurfaceInterpolator"
  "NurbsPrototypes.x3d#NurbsSurfaceInterpolator"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSurfaceInterpolator"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsSweptSurface and not(//ExternProtoDeclare[@name='NurbsSweptSurface']) and not(//ProtoDeclare[@name='NurbsSweptSurface'])">
<![CDATA[
EXTERNPROTO NurbsSweptSurface [
  field SFNode crossSectionCurve # [appinfo] [X3DNurbsControlCurveNode], default []
  field SFNode trajectoryCurve # [appinfo] [NurbsCurve], default []
  field SFBool ccw # [appinfo] default TRUE
  field SFBool solid # [appinfo] default TRUE
  eventIn SFNode set_crossSectionCurve
  eventOut SFNode crossSectionCurve_changed
  eventIn SFNode set_trajectoryCurve
  eventOut SFNode trajectoryCurve_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsSweptSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSweptSurface"
  "NurbsPrototypes.x3d#NurbsSweptSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSweptSurface"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsSwungSurface and not(//ExternProtoDeclare[@name='NurbsSwungSurface']) and not(//ProtoDeclare[@name='NurbsSwungSurface'])">
<![CDATA[
EXTERNPROTO NurbsSwungSurface [
  field SFNode profileCurve # [appinfo] [X3DNurbsControlCurveNode], default []
  field SFNode trajectoryCurve # [appinfo] [X3DNurbsControlCurveNode], default []
  field SFBool ccw # [appinfo] default TRUE
  field SFBool solid # [appinfo] default TRUE
  eventIn SFNode set_profileCurve
  eventOut SFNode profileCurve_changed
  eventIn SFNode set_trajectoryCurve
  eventOut SFNode trajectoryCurve_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsSwungSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSwungSurface"
  "NurbsPrototypes.x3d#NurbsSwungSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSwungSurface"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsTextureCoordinate and not(//ExternProtoDeclare[@name='NurbsTextureCoordinate']) and not(//ProtoDeclare[@name='NurbsTextureCoordinate'])">
<![CDATA[
EXTERNPROTO NurbsTextureCoordinate [
  field MFVec2f controlPoint # [appinfo] range (-∞,∞), default []
  field MFFloat weight # [appinfo] range (0,∞), default []
  field SFInt32 uDimension # [appinfo] range [0,∞), default 0
  field MFFloat uKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 uOrder # [appinfo] range [2,∞), default 3
  field SFInt32 vDimension # [appinfo] range [0,∞), default 0
  field MFFloat vKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 vOrder # [appinfo] range [2,∞), default 3
  eventIn MFVec2f set_controlPoint
  eventOut MFVec2f controlPoint_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsTextureCoordinate"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsTextureCoordinate"
  "NurbsPrototypes.x3d#NurbsTextureCoordinate"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsTextureCoordinate"
]
]]>
    </xsl:if>
    <xsl:if test="//NurbsTrimmedSurface and not(//ExternProtoDeclare[@name='NurbsTrimmedSurface']) and not(//ProtoDeclare[@name='NurbsTrimmedSurface'])">
<![CDATA[
EXTERNPROTO NurbsTrimmedSurface [
  # No attributes, node-type children and events only.
  eventIn MFNode addTrimmingContour # [appinfo] [Contour2D]
  eventIn MFNode removeTrimmingContour # [appinfo] [Contour2D]
  field SFNode controlPoint # [appinfo] [X3DCoordinateNode], default []
  field SFNode texCoord # [appinfo] [X3DTextureCoordinateNode|NurbsTextureCoordinate], default []
  field MFNode trimmingContour # [appinfo] [Contour2D], default []
  field SFInt32 uTessellation # [appinfo] range (-∞,∞), default 0
  field SFInt32 vTessellation # [appinfo] range (-∞,∞), default 0
  field MFFloat weight # [appinfo] range (0,∞), default []
  field SFBool solid # [appinfo] default TRUE
  field SFBool uClosed # [appinfo] default FALSE
  field SFInt32 uDimension # [appinfo] range [0,∞), default 0
  field MFFloat uKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 uOrder # [appinfo] range [2,∞), default 3
  field SFBool vClosed # [appinfo] default FALSE
  field SFInt32 vDimension # [appinfo] range [0,∞), default 0
  field MFFloat vKnot # [appinfo] range (-∞,∞), default []
  field SFInt32 vOrder # [appinfo] range [2,∞), default 3
  eventIn SFNode set_controlPoint
  eventOut SFNode controlPoint_changed
  eventIn SFNode set_texCoord
  eventOut SFNode texCoord_changed
  eventIn MFNode set_trimmingContour
  eventOut MFNode trimmingContour_changed
  eventIn SFInt32 set_uTessellation
  eventOut SFInt32 uTessellation_changed
  eventIn SFInt32 set_vTessellation
  eventOut SFInt32 vTessellation_changed
  eventIn MFFloat set_weight
  eventOut MFFloat weight_changed
  exposedField SFNode metadata # [appinfo] Metadata node only
][
  "NurbsPrototypes.wrl#NurbsTrimmedSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsTrimmedSurface"
  "NurbsPrototypes.x3d#NurbsTrimmedSurface"
  "https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsTrimmedSurface"
]
]]>
    </xsl:if>
    <!-- ================================================================================================= -->
    <!-- DIS-Java-VRML https://www.web3d.org/WorkingGroups/vrtp/dis-java-vrml -->
    <xsl:if test="(//EspduTransform or //ProtoInstance[@name='EspduTransform']) and not(//ExternProtoDeclare[@name='EspduTransform'] or //ProtoDeclare[@name='EspduTransform'])">
<![CDATA[
EXTERNPROTO EspduTransform [
  # [appinfo] EspduTransformTrace provides 3D trace values for a corresponding EspduTransorm, usually as a child so that it stays local to an entity's position. EspduTransformTrace compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene.
  # experimental
  eventOut SFString # SFVec3d
  geoCoords_changed # [appinfo] Double precision output for 64-bit Espdu translation, usable by GeoLocation nodes.
  # Standard Transform fields
  eventIn MFNode addChildren # [appinfo] Adding a node to the children field will add that node to the EspduTransform's set of children. Warning: adding any node to the EspduTransform's children field that is already in that child list is illegal. Warning: adding any node to the EspduTransform's children that is an ancestor of that grouping is illegal.
  eventIn MFNode removeChildren # [appinfo] The removeChildren event removes nodes from the EspduTransform's children field. Any nodes in the removeChildren event that are not in the EspduTransform's children list are ignored.
  exposedField MFNode children # [appinfo] Children nodes within translation and rotation coordinate system of EspduTransform. Hint: XML encoding can include child node(s) directly.
  exposedField SFVec3f translation # [appinfo] Position of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.
  exposedField SFRotation rotation # [appinfo] Orientation of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.
  exposedField SFVec3f center # [appinfo] Translation offset from origin of local coordinate system.
  exposedField SFVec3f scale # [appinfo] Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.
  exposedField SFRotation scaleOrientation # [appinfo] Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.
  field SFVec3f bboxCenter # [appinfo] Bounding box center: position offset from origin of local coordinate system.
  field SFVec3f bboxSize # [appinfo] Bounding box size: automatically calculated, can be specified as an optimization or constraint.
  # Entity identity
  exposedField SFString marking # [appinfo] 0..11 character label for entity.
  exposedField SFInt32 siteID # [appinfo] [0,65535] EntityID: unique ID for that site.
  exposedField SFInt32 applicationID # [appinfo] [0,65535] EntityID: application ID, unique ID for application at that site.
  exposedField SFInt32 entityID # [appinfo] [0,65535] EntityID: unique ID for entity within that application.
  # Networking configuration parameters
  exposedField SFString address # [appinfo] multicast address, or else "localhost" listens to local defaultBridge
  exposedField SFInt32 port # [appinfo] [0,65535] multicast port, or else listen to local defaultBridge
  exposedField SFString multicastRelayHost # [appinfo] Host name of multicast relay server to provide alternative connectivity if local native multicast traffic not heard.
  exposedField SFInt32 multicastRelayPort # [appinfo] Connection port on multicast relay server.
  exposedField SFString networkMode # [appinfo] networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)
  eventOut SFBool isStandAlone # [appinfo] Whether networkMode standAlone (ignore network but still respond to local events) is true/false
  eventOut SFBool isMaster # [appinfo] Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false
  eventOut SFBool isRemote # [appinfo] Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false
  exposedField SFTime readInterval # [appinfo] seconds between read updates
  exposedField SFTime writeInterval # [appinfo] seconds between write updates
  eventOut SFBool isActive # [appinfo] Indicates if the node has received a DIS message (isActive=true) or not (isActive=false). Since DIS entities can be considered inactive after some period of time (typically five seconds) either event may be received by listening nodes.
  eventOut SFTime timestamp # [appinfo] DIS timestamp in VRML units
  field SFBool rtpHeaderExpected # [appinfo] whether RTP header is expected to be prepended to DIS packet
  eventOut SFBool isRtpHeaderHeard # [appinfo] whether RTP header was found prepended to DIS packet
  # Further identification
  exposedField SFInt32 forceID # [appinfo] [0,255]
  exposedField SFInt32 entityKind # [appinfo] [0,255]
  exposedField SFInt32 entityDomain # [appinfo] [0,255]
  exposedField SFInt32 entityCountry # [appinfo] [0,65535]
  exposedField SFInt32 entityCategory # [appinfo] [0,255]
  exposedField SFInt32 entitySubCategory # [appinfo] [0,255]
  exposedField SFInt32 entitySpecific # [appinfo] [0,255]
  exposedField SFInt32 entityExtra # [appinfo] [0,255]
  exposedField SFVec3f linearVelocity
  exposedField SFVec3f linearAcceleration
  exposedField SFInt32 deadReckoning # [appinfo] Dead reckoning algorithm being used to project position/orientation with velocities/accelerations.
  # Collision PDU events
  eventOut SFBool isCollided
  eventOut SFTime collideTime
  eventOut SFInt32 eventApplicationID # [appinfo] [0,65535]
  eventOut SFInt32 eventSiteID # [appinfo] [0,65535]
  eventOut SFInt32 eventEntityID # [appinfo] [0,65535]
  eventOut SFInt32 collisionType # [appinfo] [0,255]
  eventOut SFInt32 eventNumber # [appinfo] [0,65535]
  # Fire, Detonate PDU events
  exposedField SFBool fired1
  exposedField SFBool fired2
  eventOut SFTime firedTime
  exposedField SFVec3f munitionStartPoint
  exposedField SFVec3f munitionEndPoint
  exposedField SFInt32 munitionApplicationID # [appinfo] [0,65535]
  exposedField SFInt32 munitionSiteID # [appinfo] [0,65535]
  exposedField SFInt32 munitionEntityID # [appinfo] [0,65535]
  exposedField SFInt32 fireMissionIndex # [appinfo] [0,65535]
  exposedField SFInt32 warhead # [appinfo] [0,65535]
  exposedField SFInt32 fuse # [appinfo] [0,65535]
  exposedField SFInt32 munitionQuantity # [appinfo] [0,65535]
  exposedField SFInt32 firingRate # [appinfo] [0,65535]
  exposedField SFFloat firingRange
  eventOut SFBool isDetonated
  eventOut SFTime detonateTime
  eventOut SFVec3f detonationLocation
  eventOut SFVec3f detonationRelativeLocation
  eventOut SFInt32 detonationResult
  # Articulation parameters are extra blocks of information, appended one by one to end of regular Espdu.
  exposedField SFInt32 articulationParameterCount # [appinfo] range [0,78]. Indicates the number of appended parameters that are being used to describe articulation of various segments of the entity model.
  exposedField MFInt32 articulationParameterDesignatorArray # [appinfo] range [0,255]. The Parameter Type Designator entries in the articulationParameterDesignatorArray indicate if the the parameter record is for an articulated or attached part. It is represented by an 8-bit enumeration.
  exposedField MFInt32 articulationParameterChangeIndicatorArray # [appinfo] range [0,255]. The Change Indicator entries in the articulationChangeIndicatorArray indicate the change of any parameter for the associated articulated part. This is specified by an 8-bit unsigned integer. The value is initially set to zero for each exercise and is sequentially incremented by one for each change in the articulation parameters. The proper indicator is updated automatically by an X3D DIS implementation upon receipt of a set_articulationParameterValue event.
  exposedField MFInt32 articulationParameterIdPartAttachedToArray # [appinfo] range [0,65535]. The ID - Part Attached To entries in the articulationParameterIdPartAttachedToArray identify the articulated part to which this articulation parameter is attached. The value is specified by a 16-bit unsigned integer, and is set to zero if the articulated part is attached directly to the entity.
  exposedField MFInt32 articulationParameterTypeArray # [appinfo] range [0,255]. The Parameter Type entries in the articulationParameterTypeArray are specified by 32-bit enumeration values.
  exposedField MFFloat articulationParameterArray # [appinfo] The Parameter Value entries in the articulationParameterArray are specified by a 64-bit field. The definition of the 64 bits is determined based on the type of parameter indicated above.
  eventIn SFFloat set_articulationParameterValue0
  eventIn SFFloat set_articulationParameterValue1
  eventIn SFFloat set_articulationParameterValue2
  eventIn SFFloat set_articulationParameterValue3
  eventIn SFFloat set_articulationParameterValue4
  eventIn SFFloat set_articulationParameterValue5
  eventIn SFFloat set_articulationParameterValue6
  eventIn SFFloat set_articulationParameterValue7
  eventOut SFFloat articulationParameterValue0_changed
  eventOut SFFloat articulationParameterValue1_changed
  eventOut SFFloat articulationParameterValue2_changed
  eventOut SFFloat articulationParameterValue3_changed
  eventOut SFFloat articulationParameterValue4_changed
  eventOut SFFloat articulationParameterValue5_changed
  eventOut SFFloat articulationParameterValue6_changed
  eventOut SFFloat articulationParameterValue7_changed
][
  "EspduTransformPrototypes.wrl#EspduTransform"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.wrl#EspduTransform"
  "EspduTransformPrototypes.x3d#EspduTransform"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d#EspduTransform"
]
]]>
    </xsl:if>
    <xsl:if test="(//ReceiverPdu or //ProtoInstance[@name='ReceiverPdu']) and not(//ExternProtoDeclare[@name='ReceiverPdu'] or //ProtoDeclare[@name='ReceiverPdu'])">
<![CDATA[
EXTERNPROTO ReceiverPdu [
  exposedField SFInt32 whichGeometry # [appinfo] set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry
  field SFVec3f bboxCenter # [appinfo] Bounding box center: position offset from origin of local coordinate system.
  field SFVec3f bboxSize # [appinfo] Bounding box size: automatically calculated, can be specified as an optimization or constraint.
  # Initialization fields
  exposedField SFString networkMode # [appinfo] networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)
  eventOut SFBool isStandAlone # [appinfo] Whether networkMode standAlone (ignore network but still respond to local events) is true/false
  eventOut SFBool isMaster # [appinfo] Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false
  eventOut SFBool isRemote # [appinfo] Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false
  field SFTime readInterval
  field SFTime writeInterval
  field SFInt32 applicationID
  field SFInt32 entityID
  field SFInt32 siteID
  field SFString address
  field SFInt32 port
  field SFString multicastRelayHost
  field SFInt32 multicastRelayPort
  field SFBool rtpHeaderExpected # [appinfo] whether RTP header is expected to be prepended to DIS packet
  eventOut SFBool isRtpHeaderHeard # [appinfo] whether RTP header was found prepended to DIS packet
  field SFBool trace
  # Generic events
  eventOut SFBool active
  eventOut SFTime timestamp
  # RadioCommunicationsFamily events
  eventOut SFInt32 radioID
  # ReceiverPdu fields
  eventOut SFFloat receivedPower
  eventOut SFInt32 receiverState
  eventOut SFInt32 transmitterSiteID
  eventOut SFInt32 transmitterApplicationID
  eventOut SFInt32 transmitterEntityID
  eventOut SFInt32 transmitterRadioID
][
  "RadioCommunicationsPrototypes.wrl#ReceiverPdu"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#ReceiverPdu"
  "RadioCommunicationsPrototypes.x3d#ReceiverPdu"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#ReceiverPdu"
]
]]>
    </xsl:if>
    <xsl:if test="(//SignalPdu or //ProtoInstance[@name='SignalPdu']) and not(//ExternProtoDeclare[@name='SignalPdu'] or //ProtoDeclare[@name='SignalPdu'])">
<![CDATA[
EXTERNPROTO SignalPdu [
  # set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry
  exposedField SFInt32 whichGeometry
  field SFVec3f bboxCenter # [appinfo] Bounding box center: position offset from origin of local coordinate system.
  field SFVec3f bboxSize # [appinfo] Bounding box size: automatically calculated, can be specified as an optimization or constraint.
  # Initialization fields
  exposedField SFString networkMode # [appinfo] networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)
  eventOut SFBool isStandAlone # [appinfo] Whether networkMode standAlone (ignore network but still respond to local events) is true/false
  eventOut SFBool isMaster # [appinfo] Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false
  eventOut SFBool isRemote # [appinfo] Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false
  field SFTime readInterval
  field SFTime writeInterval
  field SFInt32 siteID
  field SFInt32 applicationID
  field SFInt32 entityID
  field SFString address
  field SFInt32 port
  field SFString multicastRelayHost
  field SFInt32 multicastRelayPort
  field SFBool rtpHeaderExpected # [appinfo] whether RTP header is expected to be prepended to DIS packet
  eventOut SFBool isRtpHeaderHeard # [appinfo] whether RTP header was found prepended to DIS packet
  field SFBool trace
  # Generic events
  eventOut SFBool active
  eventOut SFTime timestamp
  # RadioCommunicationsFamily events
  eventOut SFInt32 radioID
  # SignalPdu fields
  eventOut SFInt32 encodingScheme
  eventOut SFInt32 tdlType
  eventOut SFInt32 sampleRate
  eventOut SFInt32 samples
  eventOut SFInt32 dataLength
  eventOut SFInt32 data00
  eventOut SFInt32 data01
  eventOut SFInt32 data02
  eventOut SFInt32 data03
  eventOut SFInt32 data04
  eventOut SFInt32 data05
  eventOut SFInt32 data06
  eventOut SFInt32 data07
  eventOut SFInt32 data08
  eventOut SFInt32 data09
  eventOut SFInt32 data10
][
  "RadioCommunicationsPrototypes.wrl#SignalPdu"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#SignalPdu"
  "RadioCommunicationsPrototypes.x3d#SignalPdu"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#SignalPdu"
]
]]>
    </xsl:if>
    <xsl:if test="(//TransmitterPdu or //ProtoInstance[@name='TransmitterPdu']) and not(//ExternProtoDeclare[@name='TransmitterPdu'] or //ProtoDeclare[@name='TransmitterPdu'])">
<![CDATA[
EXTERNPROTO TransmitterPdu [
  # set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry
  exposedField SFInt32 whichGeometry
  field SFVec3f bboxCenter # [appinfo] Bounding box center: position offset from origin of local coordinate system.
  field SFVec3f bboxSize # [appinfo] Bounding box size: automatically calculated, can be specified as an optimization or constraint.
  # Initialization fields
  exposedField SFString networkMode # [appinfo] networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)
  eventOut SFBool isStandAlone # [appinfo] Whether networkMode standAlone (ignore network but still respond to local events) is true/false
  eventOut SFBool isMaster # [appinfo] Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false
  eventOut SFBool isRemote # [appinfo] Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false
  field SFTime readInterval
  field SFTime writeInterval
  field SFInt32 siteID
  field SFInt32 applicationID
  field SFInt32 entityID
  field SFString address
  field SFInt32 port
  field SFString multicastRelayHost
  field SFInt32 multicastRelayPort
  field SFBool rtpHeaderExpected # [appinfo] whether RTP header is expected to be prepended to DIS packet
  eventOut SFBool isRtpHeaderHeard # [appinfo] whether RTP header was found prepended to DIS packet
  field SFBool trace
  # Generic events
  eventOut SFBool active
  eventOut SFTime timestamp
  # RadioCommunicationsFamily events
  eventOut SFInt32 radioID
  # TransmitterPdu fields
  eventOut SFVec3f antennaLocation
  eventOut SFInt32 antennaPatternLength
  eventOut SFInt32 antennaPatternType
  eventOut SFInt32 cryptoKeyID
  eventOut SFInt32 cryptoSytem
  eventOut SFInt32 frequency
  eventOut SFInt32 inputSource
  eventOut SFInt32 lengthOfModulationParameters
  eventOut SFInt32 modulationTypeDetail
  eventOut SFInt32 modulationTypeMajor
  eventOut SFInt32 modulationTypeSpreadSpectrum
  eventOut SFInt32 modulationTypeSystem
  eventOut SFInt32 power
  eventOut SFInt32 radioEntityTypeCategory
  eventOut SFInt32 radioEntityTypeCountry
  eventOut SFInt32 radioEntityTypeDomain
  eventOut SFInt32 radioEntityTypeKind
  eventOut SFInt32 radioEntityTypeNomenclature
  eventOut SFInt32 radioEntityTypeNomenclatureVersion
  eventOut SFVec3f relativeAntennaLocation
  eventOut SFInt32 transmitFrequencyBandwidth
  eventOut SFInt32 transmitState
][
  "RadioCommunicationsPrototypes.wrl#TransmitterPdu"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#TransmitterPdu"
  "RadioCommunicationsPrototypes.x3d#TransmitterPdu"
  "https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#TransmitterPdu"
]
]]>
    </xsl:if>
    <!--========================================-->
  </xsl:if>
</xsl:template>


<!-- ****** X3D:  convert the X3D tag to VRML 3.0 header, recurse ****** -->
<xsl:template match="X3D">
  <xsl:if test="$fileEncoding!='ClassicVRML'">
    <xsl:text># [X3D] VRML V</xsl:text>
    <xsl:choose>
      <xsl:when test="@version"><xsl:value-of select="@version"/></xsl:when>
      <xsl:otherwise><xsl:text>3.0</xsl:text></xsl:otherwise>
    </xsl:choose>
  <xsl:text> utf8&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="(@version='') or not(@version)">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>X3D version is required and must be set (3.0, 3.1, 3.2 etc.)</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@profile">
    <xsl:if test="$fileEncoding!='ClassicVRML'"><xsl:text># </xsl:text></xsl:if>
    <xsl:text>PROFILE </xsl:text>
    <xsl:value-of select="@profile"/>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
  <!-- unable to check for schema attributes present, since they are namespace-sensitive -->
  <!-- handle all attributes, which may be in a different namespace (e.g. schema) -->
  <xsl:for-each select="@*">
    <xsl:choose>
      <xsl:when test="local-name()='profile'">
        <!-- handled separately -->
      </xsl:when>
      <xsl:otherwise>
        <xsl:text># [X3D] </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>=</xsl:text>
        <xsl:value-of select="."/>
        <xsl:text>&#10;</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:for-each>
</xsl:template>


<!-- ****** component:  comment the component tag, recurse ****** -->
<xsl:template match="component">
  <xsl:if test="$fileEncoding!='ClassicVRML'"><xsl:text># </xsl:text></xsl:if>
  <xsl:text>COMPONENT </xsl:text>
  <xsl:value-of select="@name"/>
  <xsl:if test="@level">
  	<xsl:text>:</xsl:text>
  	<xsl:value-of select="@level"/>
  </xsl:if>
  <xsl:text>&#10;</xsl:text>
  <xsl:if test="not(
  	(@name='Core') or
  	(@name='CADGeometry') or
  	(@name='CubeMapTexturing') or
  	(@name='DIS') or
  	(@name='EnvironmentalEffects') or
  	(@name='EnvironmentalSensor') or
  	(@name='EventUtilities') or
  	(@name='Geometry2D') or
  	(@name='Geometry3D') or
  	(@name='Geospatial') or
  	(@name='Grouping') or
  	(@name='H-Anim') or
  	(@name='HAnim') or
  	(@name='Interpolation') or
  	(@name='KeyDeviceSensor') or
  	(@name='Lighting') or
  	(@name='Navigation') or
  	(@name='Networking') or
  	(@name='NURBS') or
  	(@name='PointingDeviceSensor') or
  	(@name='Rendering') or
  	(@name='Scripting') or
  	(@name='Shaders') or
  	(@name='Shape') or
  	(@name='Sound') or
  	(@name='Text') or
  	(@name='Texturing') or
  	(@name='Texturing3D') or
  	(@name='Time') or
  	(@name='VolumeRendering'))">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>illegal &lt;component name='</xsl:text>
        <xsl:value-of select="@name"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="not((@level='1') or (@level='2') or (@level='3') or (@level='4') or (@level='5'))">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>illegal level value:  &lt;component name='</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>' level='</xsl:text>
        <xsl:value-of select="@level"/>
        <xsl:text>'/&gt; (allowed range of values: 1..5)</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:apply-templates/>
</xsl:template>


<!-- ****** head:  comment the head tag, recurse ****** -->
<xsl:template match="head">
  <xsl:text># [head]</xsl:text>
  <xsl:text>&#10;</xsl:text>
  <xsl:text>&#10;</xsl:text>
  <xsl:apply-templates/>
  <xsl:if test="not(meta/@name='title' and meta[@name='title']/@content) and not(meta/@name='filename' and meta[@name='filename']/@content)">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>Recommended:  add &lt;meta name='title' content='...' /&gt; for documentation</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="not(meta/@name='description' and meta[@name='description']/@content)">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>Recommended:  add &lt;meta name='description' content='...' /&gt; for documentation</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="not(meta/@name='created' and meta[@name='created']/@content) and not(meta/@name='imported') and not(meta/@name='translated')">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>Recommended:  add &lt;meta name='created' /&gt; date content for documentation</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(meta/@name='imported') and not(meta[@name='imported']/@content)">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>Recommended:  add &lt;meta name='imported' /&gt; date content for documentation</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(meta/@name='translated') and not(meta[@name='translated']/@content)">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>Recommended:  add &lt;meta name='translated' /&gt; date content for documentation</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="not(meta/@name='modified' and meta[@name='modified']/@content) and not(meta/@name='revised' and meta[@name='revised']/@content) and not(meta/@name='generated')">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>Recommended:  add &lt;meta name='modified' /&gt; date content for documentation</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="count(meta[@name='url']) > 1">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>more than one &lt;meta name='url' content='...' /&gt; found, which can lead to catalog-generation problems</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <!-- may need verbose mode for catalog testing, this is too obtrusive
  <xsl:if test="not(meta/@name='url' and meta[@name='url']/@content)">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>Recommended:  add &lt;meta name='url' content='...' /&gt; for documentation</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  -->
</xsl:template>

<!-- ****** unit: https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#UNITStatement ****** -->
<xsl:template match="unit">
  <xsl:if test="$fileEncoding!='ClassicVRML'"><xsl:text># </xsl:text></xsl:if>
  <xsl:text>UNIT </xsl:text>
  <xsl:value-of select="@category"/>
  <xsl:text> </xsl:text>
  <xsl:value-of select="@name"/>
  <xsl:text> </xsl:text>
  <xsl:value-of select="@conversionFactor"/>
  <xsl:text>&#10;</xsl:text>
</xsl:template>

<!-- ****** meta:  comment the meta tag's name and content ****** -->
<xsl:template match="meta">
  <xsl:if test="$fileEncoding!='ClassicVRML'"><xsl:text># </xsl:text></xsl:if>
  <xsl:text>META &quot;</xsl:text>
  <xsl:value-of select="@name"/>
  <xsl:text>&quot; &quot;</xsl:text>
  <!-- having trouble translating line breaks properly, thus changing them to spaces (which avoids runtime errors, at least).  also comment tag and escape \"double quotes\".  -->
  <xsl:call-template name="escape-quotes-recurse">
      <xsl:with-param name="inputValue" select="translate(@content,'&#10;',' ')"/>
  </xsl:call-template>
  <xsl:variable name="metaName"><xsl:value-of select="@name"/></xsl:variable>
  <xsl:variable name="metaContent"><xsl:value-of select="../meta[@name=$metaName]/@content"/></xsl:variable>
  <xsl:text>&quot;&#10;</xsl:text>
  <xsl:if test="(@name='url' and (contains(@content,'.wrl') and not(contains(@content,'.x3d'))))">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='url' /&gt; content ends with .wrl rather than .x3d</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(@name='identifier' and ../meta[@name='title']/@content and not(contains(@content,../meta[@name='title']/@content)))">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='identifier'/&gt; title doesn't match &lt;meta name='title' content='</xsl:text>
        <xsl:value-of select="../meta[@name='title']/@content"/>
        <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(@name='title' or @name='name' or @name='identifier' or @name='url') and (contains($metaContent,'/.x3d') or ($metaContent='.x3d'))">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>.x3d is not a valid file name for </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='</xsl:text>
        <xsl:value-of select="$metaName"/>
        <xsl:text> content='</xsl:text>
        <xsl:value-of select="$metaContent"/>
        <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='url' and (contains(@content, 'https://www.web3d.org/x3d/content/examples/Savage/') or contains(@content, 'https://www.web3d.org/x3d/content/examples/Savage/'))">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='url'/&gt; website location incorrect, should be 'https://savage.nps.edu/Savage' rather than content='</xsl:text>
        <xsl:value-of select="@content"/>
        <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='error'">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='error' content='</xsl:text>
        <xsl:value-of select="@content"/>
        <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='warning'">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='warning' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='hint'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='hint' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='info'">
    <xsl:call-template name="output-info">
      <xsl:with-param name="infoString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='info' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- check for use of proper Dublin Core metadata terminology -->
  <xsl:if test="@name='author'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>preferred Dublin Core Metadata Terms are name='creator' or name='contributor' (vice author) </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='author' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='copyright'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>preferred Dublin Core Metadata Term is name='rights' (vice copyright) </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='copyright' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='keywords'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>preferred Dublin Core Metadata Term is name='subject' (vice keywords) </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='keywords' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='movie'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>preferred Dublin Core Metadata Term is name='MovingImage' (vice movie) </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='movie' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='filename'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>preferred Dublin Core Metadata Term is name='title' (vice filename) </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='filename' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='revised'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>preferred Dublin Core Metadata Term is name='modified' (vice revised) </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='revised' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@name='url'">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>preferred Dublin Core Metadata Term is name='identifier' (vice url) </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;meta name='url' content='</xsl:text>
        <xsl:value-of select="@content"/>
          <xsl:text>'/&gt;</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- check quotes are matched since unterminated VRML string values cause big problems.  report error but do not append correcting quote.  -->
  <xsl:call-template name="count-quotes">
    <xsl:with-param name="inputValue" select="@content"/>
  </xsl:call-template>
</xsl:template>


<!-- ****** Scene:  comment the Scene tag, recurse ****** -->
<xsl:template match="Scene"><xsl:text>&#10;# [Scene] ========== ========== ==========&#10;&#10;</xsl:text>
  <xsl:if test="not(//NavigationInfo)">
    <xsl:text>NavigationInfo { type [ "EXAMINE" "ANY" ] } ###  Default X3D NavigationInfo&#10;&#10;</xsl:text>
  </xsl:if>
  <xsl:apply-templates>
    <xsl:with-param name="indent"><xsl:text>0</xsl:text></xsl:with-param>
  </xsl:apply-templates>
</xsl:template>


<!-- ****** recurse through each of the tree node elements, including ProtoInstance ****** -->
<xsl:template match="*">
  <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
  <!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
  <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
  <!-- figure out node type for ProtoDeclared ProtoInstance, ExternProtoDeclared ProtoInstance and internal DTD declaration tag definitions -->
  <xsl:variable name="nodeName" select="./@name" />
  <xsl:variable name="nodeName2" select="local-name()" />
  <xsl:variable name="parentNodeName" select="../@name" />
  <xsl:variable name="parentNodeName2" select="local-name(..)" />
  <!-- ProtoDeclared ProtoInstance -->
  <xsl:variable name="nodeType" select="local-name(//ProtoDeclare[@name=$nodeName or @name=$nodeName2]/ProtoBody/*[local-name()!='ProtoDeclare'][1])" />
  <xsl:variable name="parentType" select="local-name(//ProtoDeclare[@name=$parentNodeName]/ProtoBody/*[local-name()!='ProtoDeclare'][1])" />
  <!-- ExternProtoDeclared ProtoInstance -->
  <xsl:variable name="EPnodeType" select="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/@nodeType" /> <!--  -->
  <xsl:variable name="EPparentType" select="//ExternProtoDeclare[@name=$parentNodeName or @name=$parentNodeName2]/@nodeType" />
  <!-- debug diagnosis statements -->
  <!--   <xsl:text># parentNodeName </xsl:text><xsl:value-of select="$parentNodeName"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># parentNodeName2 </xsl:text><xsl:value-of select="$parentNodeName2"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># nodeName </xsl:text><xsl:value-of select="$nodeName"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># nodeName2 </xsl:text><xsl:value-of select="$nodeName2"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:if test="$nodeName"><xsl:text># $nodeName </xsl:text><xsl:value-of select="$nodeName"/><xsl:text>&#10;</xsl:text></xsl:if> -->
  <!--   <xsl:text># local-name() </xsl:text><xsl:value-of select="local-name()"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># nodeType </xsl:text><xsl:value-of select="$nodeType"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># parentType </xsl:text><xsl:value-of select="$parentType"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># EPnodeType </xsl:text><xsl:value-of select="$EPnodeType"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># EPparentType </xsl:text><xsl:value-of select="$EPparentType"/><xsl:text>&#10;</xsl:text> -->
  <!--   <xsl:text># @nodeType </xsl:text><xsl:value-of select="@nodeType"/><xsl:text>&#10;</xsl:text> -->
  <!-- if this is a non-(PROTO/field/fieldValue) child node, first output appropriate VRML 97 'field' name -->
  <xsl:if test="(local-name(..)!='Scene' and
                 local-name(../..)!='ProtoDeclare' and
                 local-name(..)!='field' and
                 local-name(..)!='fieldValue')">
    <xsl:choose>
      <!-- first check for (and allow) LoadSensor watchList nodes, without outputting a containerField wrapper -->
      <xsl:when test="(local-name()='Anchor'           or $nodeType='Anchor'            or $EPnodeType='Anchor'            or @nodeType='Anchor'	or
      		       local-name()='AudioClip'        or $nodeType='AudioClip'         or $EPnodeType='AudioClip'         or @nodeType='AudioClip'	or
      		       local-name()='GeoInline'        or $nodeType='GeoInline'         or $EPnodeType='GeoInline'         or @nodeType='GeoInline'	or
      		       local-name()='Inline'           or $nodeType='Inline'            or $EPnodeType='Inline'            or @nodeType='Inline'	or
      		       local-name()='ImageTexture'     or $nodeType='ImageTexture'      or $EPnodeType='ImageTexture'      or @nodeType='ImageTexture'	or
      		       local-name()='MovieTexture'     or $nodeType='MovieTexture'      or $EPnodeType='MovieTexture'      or @nodeType='MovieTexture'	or
      		       local-name()='Script'           or $nodeType='Script'            or $EPnodeType='Script'            or @nodeType='Script'	or
      		       local-name()='ProtoInstance'    or $nodeType='ProtoInstance'     or $EPnodeType='ProtoInstance'     or @nodeType='ProtoInstance')
                  and (local-name(..)='LoadSensor'     or $parentType='LoadSensor'      or $EPparentType='LoadSensor'      or ../@nodeType='LoadSensor')   ">
      	<!-- appears to be a valid watchList node --></xsl:when>
      <!-- 4-way node-type tests:  native VRML node, ProtoDeclared ProtoInstance, ExternProtoDeclared ProtoInstance, or internal DTD declaration by content -->
      <xsl:when test="local-name()='Appearance'        or $nodeType='Appearance'        or $EPnodeType='Appearance'        or @nodeType='Appearance'       "><xsl:text>appearance </xsl:text></xsl:when>
      <xsl:when test="local-name()='AudioClip'         or $nodeType='AudioClip'         or $EPnodeType='AudioClip'         or @nodeType='AudioClip'        "><xsl:text>source </xsl:text></xsl:when>
      <xsl:when test="local-name()='Box'               or $nodeType='Box'               or $EPnodeType='Box'               or @nodeType='Box'              "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Color'             or $nodeType='Color'             or $EPnodeType='Color'             or @nodeType='Color'            "><xsl:text>color </xsl:text></xsl:when>
      <xsl:when test="local-name()='ColorRGBA'         or $nodeType='ColorRGBA'         or $EPnodeType='ColorRGBA'         or @nodeType='ColorRGBA'        "><xsl:text>color </xsl:text></xsl:when>
      <xsl:when test="((local-name()='Coordinate'      or $nodeType='Coordinate'        or $EPnodeType='Coordinate'        or @nodeType='Coordinate'       or
	                local-name()='CoordinateDouble' or $nodeType='CoordinateDouble' or $EPnodeType='CoordinateDouble'  or @nodeType='CoordinateDouble' or
	                local-name()='GeoCoordinate'   or $nodeType='GeoCoordinate'     or $EPnodeType='GeoCoordinate'     or @nodeType='GeoCoordinate') and not(@containerField='skinCoord'))">
           <!--
           <xsl:message>
             <xsl:text>controlPoint test... </xsl:text>
             <xsl:value-of select="local-name(..)"/>
             <xsl:text> </xsl:text>
             <xsl:value-of select="starts-with(local-name(..),'Nurbs')"/>
           </xsl:message>
           -->
	   <xsl:choose>
	     <xsl:when test="starts-with(local-name(..),'Nurbs')">
	   	<xsl:text>controlPoint </xsl:text>
	     </xsl:when>
	     <xsl:otherwise>
	   	<xsl:text>coord </xsl:text>
	     </xsl:otherwise>
	   </xsl:choose>
      </xsl:when>
      <xsl:when test="(local-name()='Contour2D'         or $nodeType='Contour2D'         or $EPnodeType='Contour2D'         or @nodeType='Contour2D')
      			and local-name(..)='NurbsTrimmedSurface' and not(preceding-sibling::*[local-name()='Contour2D'])">
      	<xsl:text>trimmingContour [&#10;</xsl:text>
      	<xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
      </xsl:when>
      <xsl:when test="local-name()='Cone'              or $nodeType='Cone'              or $EPnodeType='Cone'              or @nodeType='Cone'             "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Cylinder'          or $nodeType='Cylinder'          or $EPnodeType='Cylinder'          or @nodeType='Cylinder'         "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='ElevationGrid'     or $nodeType='ElevationGrid'     or $EPnodeType='ElevationGrid'     or @nodeType='ElevationGrid' or
	              local-name()='GeoElevationGrid'  or $nodeType='GeoElevationGrid'  or $EPnodeType='GeoElevationGrid'  or @nodeType='GeoElevationGrid' "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Extrusion'         or $nodeType='Extrusion'         or $EPnodeType='Extrusion'         or @nodeType='Extrusion'        "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='FontStyle'         or $nodeType='FontStyle'         or $EPnodeType='FontStyle'         or @nodeType='FontStyle'        "><xsl:text>fontStyle </xsl:text></xsl:when>
      <xsl:when test="local-name()='ImageTexture'      or $nodeType='ImageTexture'      or $EPnodeType='ImageTexture'      or @nodeType='ImageTexture'     "><xsl:text>texture </xsl:text></xsl:when>
      <xsl:when test="local-name()='IndexedFaceSet'    or $nodeType='IndexedFaceSet'    or $EPnodeType='IndexedFaceSet'    or @nodeType='IndexedFaceSet'   "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='IndexedQuadSet'    or $nodeType='IndexedQuadSet'    or $EPnodeType='IndexedQuadSet'    or @nodeType='IndexedQuadSet'   "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='QuadSet'           or $nodeType='QuadSet'           or $EPnodeType='QuadSet'           or @nodeType='QuadSet'          "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='IndexedLineSet'    or $nodeType='IndexedLineSet'    or $EPnodeType='IndexedLineSet'    or @nodeType='IndexedLineSet'   "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Material'          or $nodeType='Material'          or $EPnodeType='Material'          or @nodeType='Material'         "><xsl:text>material </xsl:text></xsl:when>
      <xsl:when test="(local-name()='MovieTexture'     or $nodeType='MovieTexture'      or $EPnodeType='MovieTexture'      or @nodeType='MovieTexture')
                  and (local-name(..)='Appearance'     or $parentType='Appearance'      or $EPparentType='Appearance'      or ../@nodeType='Appearance' or
                       local-name(..)='texture')   "><xsl:text>texture </xsl:text></xsl:when>
      <xsl:when test="(local-name()='MovieTexture'     or $nodeType='MovieTexture'      or $EPnodeType='MovieTexture'      or @nodeType='MovieTexture')
                  and (local-name(..)='Sound'          or $parentType='Sound'           or $EPparentType='Sound'           or ../@nodeType='Sound'      or
                       local-name(..)='source')   "><xsl:text>source </xsl:text></xsl:when>
      <xsl:when test="((local-name()='Normal'          or $nodeType='Normal'            or $EPnodeType='Normal'            or @nodeType='Normal') and not(@containerField='skinNormal'))"><xsl:text>normal </xsl:text></xsl:when>
      <xsl:when test="local-name()='PixelTexture'      or $nodeType='PixelTexture'      or $EPnodeType='PixelTexture'      or @nodeType='PixelTexture'     "><xsl:text>texture </xsl:text></xsl:when>
      <xsl:when test="local-name()='PointSet'          or $nodeType='PointSet'          or $EPnodeType='PointSet'          or @nodeType='PointSet'         "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Sphere'            or $nodeType='Sphere'            or $EPnodeType='Sphere'            or @nodeType='Sphere'           "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Text'              or $nodeType='Text'              or $EPnodeType='Text'              or @nodeType='Text'             "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='TextureCoordinate' or $nodeType='TextureCoordinate' or $EPnodeType='TextureCoordinate' or @nodeType='TextureCoordinate'"><xsl:text>texCoord </xsl:text></xsl:when>
      <xsl:when test="local-name()='TextureTransform'  or $nodeType='TextureTransform'  or $EPnodeType='TextureTransform'  or @nodeType='TextureTransform' "><xsl:text>textureTransform </xsl:text></xsl:when>
      <xsl:when test="local-name()='XvlShell'          or $nodeType='XvlShell'          or $EPnodeType='XvlShell'          or @nodeType='XvlShell'         "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Arc2D'             or $nodeType='Arc2D'             or $EPnodeType='Arc2D'             or @nodeType='Arc2D'            "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='ArcClose2D'        or $nodeType='ArcClose2D'        or $EPnodeType='ArcClose2D'        or @nodeType='ArcClose2D'       "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Circle2D'          or $nodeType='Circle2D'          or $EPnodeType='Circle2D'          or @nodeType='Circle2D'         "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Disk2D'            or $nodeType='Disk2D'            or $EPnodeType='Disk2D'            or @nodeType='Disk2D'           "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Polyline2D'        or $nodeType='Polyline2D'        or $EPnodeType='Polyline2D'        or @nodeType='Polyline2D'       "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Polypoint2D'       or $nodeType='Polypoint2D'       or $EPnodeType='Polypoint2D'       or @nodeType='Polypoint2D'      "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='Rectangle2D'       or $nodeType='Rectangle2D'       or $EPnodeType='Rectangle2D'       or @nodeType='Rectangle2D'      "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='TriangleSet2D'     or $nodeType='TriangleSet2D'     or $EPnodeType='TriangleSet2D'     or @nodeType='TriangleSet2D'    "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='IndexedTriangleFanSet'   or $nodeType='IndexedTriangleFanSet'   or $EPnodeType='IndexedTriangleFanSet'   or @nodeType='IndexedTriangleFanSet'  "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='IndexedTriangleSet'      or $nodeType='IndexedTriangleSet'      or $EPnodeType='IndexedTriangleSet'      or @nodeType='IndexedTriangleSet'     "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='IndexedTriangleStripSet' or $nodeType='IndexedTriangleStripSet' or $EPnodeType='IndexedTriangleStripSet' or @nodeType='IndexedTriangleStripSet'"><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='LineSet'          or $nodeType='LineSet'          or $EPnodeType='LineSet'          or @nodeType='LineSet'             "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='TriangleFanSet'   or $nodeType='TriangleFanSet'   or $EPnodeType='TriangleFanSet'   or @nodeType='TriangleFanSet'      "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='TriangleSet'      or $nodeType='TriangleSet'      or $EPnodeType='TriangleSet'      or @nodeType='TriangleSet'         "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='TriangleStripSet' or $nodeType='TriangleStripSet' or $EPnodeType='TriangleStripSet' or @nodeType='TriangleStripSet'    "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='NurbsPatchSurface'   or $nodeType='NurbsPatchSurface'   or $EPnodeType='NurbsPatchSurface'   or @nodeType='NurbsPatchSurface'    "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='NurbsSweptSurface'   or $nodeType='NurbsSweptSurface'   or $EPnodeType='NurbsSweptSurface'   or @nodeType='NurbsSweptSurface'    "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='NurbsSwungSurface'   or $nodeType='NurbsSwungSurface'   or $EPnodeType='NurbsSwungSurface'   or @nodeType='NurbsSwungSurface'    "><xsl:text>geometry </xsl:text></xsl:when>
      <xsl:when test="local-name()='NurbsTrimmedSurface' or $nodeType='NurbsTrimmedSurface' or $EPnodeType='NurbsTrimmedSurface' or @nodeType='NurbsTrimmedSurface'  "><xsl:text>geometry </xsl:text></xsl:when>
      <!-- regular VRML nodes not needing a preceding field name -->
      <!-- (split following test to avoid overflowing lotusxml/Xalan string buffer) -->
      <xsl:when test="
         contains(local-name(), 'Interpolator') or contains($nodeType, 'Interpolator') or contains($EPnodeType, 'Interpolator') or contains(@nodeType, 'Interpolator') or
         contains(local-name(), 'Sequencer')    or contains($nodeType, 'Sequencer')    or contains($EPnodeType, 'Sequencer')    or contains(@nodeType, 'Sequencer')    or
         contains(local-name(), 'Light')        or contains($nodeType, 'Light')        or contains($EPnodeType, 'Light')        or contains(@nodeType, 'Light')        or
         contains(local-name(), 'Sensor')       or contains($nodeType, 'Sensor')       or contains($EPnodeType, 'Sensor')       or contains(@nodeType, 'Sensor')       or
         local-name()='NavigationInfo' or $nodeType='NavigationInfo' or $EPnodeType='NavigationInfo' or @nodeType='NavigationInfo' or
         local-name()='Anchor'        or $nodeType='Anchor'        or $EPnodeType='Anchor'        or @nodeType='Anchor'        or
         local-name()='Background'    or $nodeType='Background'    or $EPnodeType='Background'    or @nodeType='Background'    or
         local-name()='Billboard'     or $nodeType='Billboard'     or $EPnodeType='Billboard'     or @nodeType='Billboard'     or
         local-name()='Collision'     or $nodeType='Collision'     or $EPnodeType='Collision'     or @nodeType='Collision'     or
         local-name()='Fog'           or $nodeType='Fog'           or $EPnodeType='Fog'           or @nodeType='Fog'           or
         local-name()='Group'         or $nodeType='Group'         or $EPnodeType='Group'         or @nodeType='Group'         or
         local-name()='StaticGroup'   or $nodeType='StaticGroup'   or $EPnodeType='StaticGroup'   or @nodeType='StaticGroup'">
         <!-- appears to be a valid node, no warning required --></xsl:when>
      <xsl:when test="
         local-name()='Inline'        or $nodeType='Inline'        or $EPnodeType='Inline'        or @nodeType='Inline'        or
         local-name()='LOD'           or $nodeType='LOD'           or $EPnodeType='LOD'           or @nodeType='LOD'           or
         local-name()='Script'        or $nodeType='Script'        or $EPnodeType='Script'        or @nodeType='Script'        or
         local-name()='Shape'         or $nodeType='Shape'         or $EPnodeType='Shape'         or @nodeType='Shape'         or
         local-name()='Sound'         or $nodeType='Sound'         or $EPnodeType='Sound'         or @nodeType='Sound'         or
         local-name()='Switch'        or $nodeType='Switch'        or $EPnodeType='Switch'        or @nodeType='Switch'        or
         local-name()='Transform'     or $nodeType='Transform'     or $EPnodeType='Transform'     or @nodeType='Transform'     or
         local-name()='Viewpoint'     or $nodeType='Viewpoint'     or $EPnodeType='Viewpoint'     or @nodeType='Viewpoint'     or
         local-name()='WorldInfo'     or $nodeType='WorldInfo'     or $EPnodeType='WorldInfo'     or @nodeType='WorldInfo'">
         <!-- appears to be a valid node, no warning required --></xsl:when>
      <!-- need NURBS nodes here??? -->
      <xsl:when test="
         local-name()='HAnimDisplacer'      or $nodeType='HAnimDisplacer'      or $EPnodeType='HAnimDisplacer'      or @nodeType='HAnimDisplacer'     or
         local-name()='HAnimHumanoid'       or $nodeType='HAnimHumanoid'       or $EPnodeType='HAnimHumanoid'       or @nodeType='HAnimHumanoid'      or
         local-name()='HAnimJoint'          or $nodeType='HAnimJoint'          or $EPnodeType='HAnimJoint'          or @nodeType='HAnimJoint'         or
         local-name()='HAnimSegment'        or $nodeType='HAnimSegment'        or $EPnodeType='HAnimSegment'        or @nodeType='HAnimSegment'       or
         local-name()='HAnimSite'           or $nodeType='HAnimSite'           or $EPnodeType='HAnimSite'           or @nodeType='HAnimSite'          or
         local-name()='EspduTransform' or $nodeType='EspduTransform' or $EPnodeType='EspduTransform' or @nodeType='EspduTransform'	or
         local-name()='ReceiverPdu'    or $nodeType='ReceiverPdu'    or $EPnodeType='ReceiverPdu'    or @nodeType='ReceiverPdu'	or
         local-name()='SignalPdu'      or $nodeType='SignalPdu'      or $EPnodeType='SignalPdu'      or @nodeType='SignalPdu'	or
         local-name()='TransmitterPdu' or $nodeType='TransmitterPdu' or $EPnodeType='TransmitterPdu' or @nodeType='TransmitterPdu'">
         <!-- appears to be a valid node, no warning required --></xsl:when>
      <xsl:when test="$nodeType">
         <!-- appears to be a valid prototype or native tag node, output nodeType as field name -->
         <!-- <xsl:text># $nodeType&#10;</xsl:text> -->
         <xsl:value-of select="$nodeType"/><xsl:text> </xsl:text>
      </xsl:when>
      <xsl:when test="$EPnodeType">
         <!-- appears to be a valid prototype or native tag node, output nodeType as field name -->
         <!-- <xsl:text># $EPnodeType&#10;</xsl:text> -->
         <xsl:value-of select="$EPnodeType"/><xsl:text> </xsl:text>
      </xsl:when>
      <!-- check if need explicit checks for GeoSpatial subnodes -->
      <xsl:when test="local-name()='GeoOrigin'">
         <xsl:text>geoOrigin </xsl:text>
      </xsl:when>
      <xsl:when test="local-name()='IS'">
        <xsl:if test="not(ancestor::ProtoDeclare)">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>IS/connect definition found outside of ProtoDeclare </xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(..)"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <!--  how to check nested ProtoInterface inside encapsulating ProtoDeclare? -->
        <!-- ensure that IS tag follows all field tags for Script, since DTD check insufficient for Script mixed content model -->
        <xsl:if test="local-name(..)='Script' and following-sibling::*[local-name()='field']">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>IS/connect tags must follow field tag</xsl:text>
              <xsl:if test="count(following-sibling::*[local-name()='field']) > 1">
                <xsl:text>s for Script node</xsl:text>
              </xsl:if>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(..)"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
         <!-- otherwise OK, handled elsewhere, ignore -->
      </xsl:when>
      <xsl:when test="local-name()='connect'">
        <xsl:variable name="nodeField"  select="@nodeField"/>
        <xsl:variable name="protoField" select="@protoField"/>
        <!-- check for missing attributes - also caught by DTD -->
        <xsl:if test="not(@nodeField)">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>IS/connect/@nodeField missing</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(../..)"/>
            <xsl:with-param name="DEF"  select="../../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:if test="not(@protoField)">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>IS/connect/@protoField missing</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(../..)"/>
            <xsl:with-param name="DEF"  select="../../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <!-- check for mismatches/missing/mispelling -->
        <xsl:if test="@protoField and not(ancestor::ProtoDeclare/ProtoInterface/field[@name=$protoField])">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>IS/connect/@protoField='</xsl:text>
              <xsl:value-of select="@protoField"/>
              <xsl:text>' does not match any of containing ProtoDeclare/ProtoInterface/field/@name definitions</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(../..)"/>
            <xsl:with-param name="DEF"  select="../../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:if test="local-name(../..)='Script'">
          <xsl:if test="@nodeField and not(../../field[@name=$nodeField])">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>IS/connect/@nodeField='</xsl:text>
                <xsl:value-of select="@nodeField"/>
                <xsl:text>' does not match any any corresponding Script/field/@name definitions</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node" select="local-name(../..)"/>
              <xsl:with-param name="DEF"  select="../../@DEF"/>
            </xsl:call-template>
          </xsl:if>
        </xsl:if>
        <!-- still within connect; check IS/connect/@nodefield inside ProtoInstance -->
        <xsl:if test="local-name(../..)='ProtoInstance'">
          <xsl:variable name="protoName"  select="../../@name"/>
          <xsl:variable name="ancestorName"   select="local-name(//*[(local-name()='ProtoDeclare' or local-name()='ExternProtoDeclare')][@name=$protoName])"/>
          <!-- <xsl:message>
            <xsl:text>ProtoInstance </xsl:text>
            <xsl:value-of select="$protoName"/>
            <xsl:text> has ancestor </xsl:text>
            <xsl:value-of select="$ancestorName"/>
          </xsl:message>
          <xsl:message>
            <xsl:text>$nodeField=</xsl:text>
            <xsl:value-of select="$nodeField"/>
          </xsl:message> -->
          <xsl:choose>
            <xsl:when test="@nodeField and (../../fieldValue[@name=$nodeField])">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:text>IS/connect/@nodeField='</xsl:text>
                  <xsl:value-of select="@nodeField"/>
                  <xsl:text>' cannot be initialized via fieldValue when IS/connect is defined</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(../..)"/>
                  <xsl:text> </xsl:text>
                  <xsl:value-of select="../../@name"/>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="@nodeField and (preceding::ProtoDeclare[@name=$protoName]) and not(preceding::ProtoDeclare[@name=$protoName]/ProtoInterface/field[@name=$nodeField])">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:text>ProtoInstance </xsl:text>
                  <xsl:value-of select="$protoName"/>
                  <xsl:text> IS/connect/@nodeField='</xsl:text>
                  <xsl:value-of select="@nodeField"/>
                  <xsl:text>' does not match corresponding ProtoDeclare/ProtoInterface/field/@name definition</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(../..)"/>
                  <xsl:text> </xsl:text>
                  <xsl:value-of select="../../@name"/>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="@nodeField and (preceding::ExternProtoDeclare[@name=$protoName]) and not(preceding::ExternProtoDeclare[@name=$protoName]/field[@name=$nodeField])">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:text>ProtoInstance IS/connect/@nodeField='</xsl:text>
                  <xsl:value-of select="@nodeField"/>
                  <xsl:text>' does not match corresponding ExternProtoDeclare/field/@name definition</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(../..)"/>
                  <xsl:text> </xsl:text>
                  <xsl:value-of select="../../@name"/>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="@nodeField and (preceding::ProtoDeclare[@name=$protoName]/ProtoInterface/field[@name=$nodeField])">
              <!-- <xsl:text> # found ProtoDeclare match, looks good, all done &#10;</xsl:text> -->
            </xsl:when>
<!-- preceding:: bug in Saxon :( prevents stricter test here -->
<!--        <xsl:when test="@nodeField and (preceding::ExternProtoDeclare[@name=$protoName]/field[@name=$nodeField])"> -->
            <xsl:when test="@nodeField and (         //ExternProtoDeclare[@name=$protoName]/field[@name=$nodeField])">
              <!-- <xsl:text> # found ExternProtoDeclare match, looks good, all done &#10;</xsl:text> -->
            </xsl:when>
            <!-- otherwise -->
            <xsl:when test="@nodeField">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:text>IS/connect/@nodeField='</xsl:text>
                  <xsl:value-of select="@nodeField"/>
                  <xsl:text>' does not match corresponding ancestor </xsl:text>
                  <xsl:if test="$ancestorName"><xsl:value-of select="$ancestorName"/></xsl:if>
                  <xsl:text> field/@name definitions</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(../..)"/>
                  <xsl:text> </xsl:text>
                  <xsl:value-of select="../../@name"/>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../../@DEF"/>
              </xsl:call-template>
            </xsl:when>
          </xsl:choose>
        </xsl:if>
        <!-- only single IS connection to ancestor ProtoDeclare field interface -->
        <xsl:if test="not(local-name(../..)='Script') and not(local-name(../..)='ProtoInstance')">
          <xsl:if test="preceding-sibling::*[@nodeField=$nodeField]">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>duplicate IS/connect not allowed for @nodeField='</xsl:text>
                <xsl:value-of select="@nodeField"/>
                <xsl:text>'</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node" select="local-name(../..)"/>
              <xsl:with-param name="DEF"  select="../../@DEF"/>
            </xsl:call-template>
          </xsl:if>
        </xsl:if>
        <!-- check for IS/connect X3D fields not supported in VRML97 -->
        <xsl:if test="@nodeField='description' and (local-name(../..)='CylinderSensor' or local-name(../..)='PlaneSensor' or local-name(../..)='SphereSensor' or local-name(../..)='TouchSensor')">
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:text>IS/connect ignored for nodeField='</xsl:text>
              <xsl:value-of select="@nodeField"/>
              <xsl:text>' since not a supported field in VRML97 for parent </xsl:text>
              <xsl:value-of select="local-name(../..)"/>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(../..)"/>
            <xsl:with-param name="DEF"  select="../../@DEF"/>
          </xsl:call-template>
          <xsl:text> ### </xsl:text>
        </xsl:if>
        <!-- now output translation, Script fields handled in-stride elsewhere -->
        <xsl:if test="local-name(../..)!='Script'">
          <xsl:value-of select="@nodeField"/>
          <xsl:text> IS </xsl:text>
          <xsl:value-of select="@protoField"/>
          <xsl:text>&#10;</xsl:text>
        </xsl:if>
      </xsl:when>
      <xsl:when test="local-name(..)='Collision' and local-name()='proxy'">
         <!-- no need to print rootNode out, just caught to avoid printing a warning -->
         </xsl:when>
      <xsl:when test="local-name(..)='GeoLOD' and local-name()='rootNode'">
         <!-- no need to print rootNode out, just caught to avoid printing a warning -->
         </xsl:when>
      <xsl:when test="local-name(..)='HAnimHumanoid' and (local-name()='humanoidBody' or local-name()='skeleton' or local-name()='skin' or
					             local-name()='skinCoord'      or local-name()='skinNormal')">
         <!-- no need to print humanoidBody out, just caught to avoid printing a warning -->
         </xsl:when>
      <xsl:when test="((local-name()='Coordinate'       or $nodeType='Coordinate'        or $EPnodeType='Coordinate'        or @nodeType='Coordinate') and (local-name(..)='skinCoord')) or
	              ((local-name()='CoordinateDouble' or $nodeType='CoordinateDouble'  or $EPnodeType='CoordinateDouble'  or @nodeType='CoordinateDouble') and (local-name(..)='skinCoord')) or
	              ((local-name()='Normal'           or $nodeType='Normal'            or $EPnodeType='Normal'            or @nodeType='Normal') and not(local-name(..)='skinNormal'))">
         <!-- appears to be a valid node, no warning required --></xsl:when>
      <xsl:when test="@nodeType">
         <!-- appears to be a valid prototype or native tag node, output nodeType as field name -->
         <!-- <xsl:text># @nodeType&#10;</xsl:text> -->
         <xsl:value-of select="@nodeType"/><xsl:text> </xsl:text>
      </xsl:when>
      <xsl:when test="starts-with(local-name(),'Metadata')">
      	<xsl:choose>
          <xsl:when test="@containerField='value'">
             <!-- no container field required for value [ ] array of Metadata nodes under MetadataSet, handled elsewhere -->
          </xsl:when>
          <xsl:when test="(starts-with(local-name(..),'Metadata') or
          		   local-name(..)='ColorRGBA' or local-name(..)='CoordinateDouble')
          			and (@containerField='metadata' or @containerField='' or not(@containerField=''))">
             <xsl:text>metadata </xsl:text>
          </xsl:when>
          <!-- this works for metadata node as one of children nodes, but not beneath other nodes without children fields (yet) -->
          <xsl:otherwise>
             <xsl:text># metadata&#10;</xsl:text>
             <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
      	  </xsl:otherwise>
      	</xsl:choose>
      	<!-- check MetadataNode attribute-value-validation -->
      	<xsl:variable name="MetadataID">
      		<xsl:value-of select="concat('&lt;',local-name())"/>
      		<xsl:if test="@DEF">
      		  <xsl:text> DEF=&quot;</xsl:text>
      		  <xsl:value-of select="@DEF"/>
      		  <xsl:text>&quot;</xsl:text>
      		</xsl:if>
      		<xsl:value-of select="concat(' name=&quot;',@name,'&quot; containerField=&quot;',@containerField,'&quot;/&gt;')"/>
      		<xsl:text> value</xsl:text>
      	</xsl:variable>
      	<xsl:choose>
          <xsl:when test="(local-name()='MetadataDouble')">
            <xsl:call-template name="attribute-value-validation">
              <xsl:with-param name="name"><xsl:value-of select="$MetadataID"/></xsl:with-param>
              <xsl:with-param name="type"><xsl:text>MFDouble</xsl:text></xsl:with-param>
              <xsl:with-param name="value"><xsl:value-of select="@value"/></xsl:with-param>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name()='MetadataFloat')">
            <xsl:call-template name="attribute-value-validation">
              <xsl:with-param name="name"><xsl:value-of select="$MetadataID"/></xsl:with-param>
              <xsl:with-param name="type"><xsl:text>MFFloat</xsl:text></xsl:with-param>
              <xsl:with-param name="value"><xsl:value-of select="@value"/></xsl:with-param>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name()='MetadataInteger')">
            <xsl:call-template name="attribute-value-validation">
              <xsl:with-param name="name"><xsl:value-of select="$MetadataID"/></xsl:with-param>
              <xsl:with-param name="type"><xsl:text>MFInt32</xsl:text></xsl:with-param>
              <xsl:with-param name="value"><xsl:value-of select="@value"/></xsl:with-param>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name()='MetadataString')">
            <xsl:call-template name="attribute-value-validation">
              <xsl:with-param name="name"><xsl:value-of select="$MetadataID"/></xsl:with-param>
              <xsl:with-param name="type"><xsl:text>MFString</xsl:text></xsl:with-param>
              <xsl:with-param name="value"><xsl:value-of select="@value"/></xsl:with-param>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name()='MetadataSet') and (count(*[(@containerField='metadata' or @containerField='')]) > 1)">
            <xsl:call-template name="output-warning">
              <xsl:with-param name="warningString">
                <xsl:text>MetadataSet has more than one contained-child Metadata nodes with default @containerField='metadata'. </xsl:text>
                <xsl:for-each select="*[(@containerField='metadata' or @containerField='')]">
                    <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                    <xsl:value-of select="local-name()" />
                    <xsl:text> containerField='</xsl:text>
                    <xsl:value-of select="@containerField" />
                    <xsl:text>' name='</xsl:text>
                    <xsl:value-of select="@name" />
                    <xsl:text>' /&gt;</xsl:text>
                </xsl:for-each>
                <xsl:text>.  Reset appropriate top-level child node(s) that are part of the set to have @containerField='value'.</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node" select="local-name()"/>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name()='MetadataSet') and (*[@containerField='metadata' or @containerField='']) and not(*[@containerField='value'])">
            <xsl:call-template name="output-warning">
              <xsl:with-param name="warningString">
                <xsl:text>MetadataSet has contained-child Metadata node with @containerField='metadata' but no child nodes with @containerField='value'. </xsl:text>
                <xsl:text>MetadataSet has more than one contained-child Metadata nodes with default @containerField='metadata'.</xsl:text>
                <xsl:for-each select="*[(@containerField='metadata' or @containerField='')]">
                    <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                    <xsl:value-of select="local-name()" />
                    <xsl:text> containerField='</xsl:text>
                    <xsl:value-of select="@containerField" />
                    <xsl:text>' name='</xsl:text>
                    <xsl:value-of select="@name" />
                    <xsl:text>' /&gt;</xsl:text>
                </xsl:for-each>
                <xsl:text>.  Reset appropriate top-level child node(s) that are part of the set to have @containerField='value'.</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node" select="local-name()"/>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name()='MetadataSet') and not(*) and not(comment())">
            <xsl:call-template name="output-warning">
              <xsl:with-param name="warningString">
                <xsl:text>MetadataSet has no contained-children Metadata node(s)</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node" select="local-name()"/>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- this MetadataSet test appears superfluous and should be covered via XML validation -->
          <xsl:when test="(local-name()='MetadataSet') and *[not(starts-with(local-name(),'Metadata') or local-name()='IS')]">
            <xsl:call-template name="output-warning">
              <xsl:with-param name="warningString">
                <xsl:text>MetadataSet contains child that is not a Metadata node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node" select="local-name()"/>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:when>
      	</xsl:choose>
      </xsl:when>
      <!-- move containerField tests to top? -->
      <xsl:when test="@containerField!='children'">
         <xsl:value-of select="@containerField"/><xsl:text> </xsl:text>
      </xsl:when>
      <xsl:when test="@containerField='children'">
         <!-- no action required, children [ ... ] handled by parent -->
      </xsl:when>
      <!-- otherwise report likely error condition on this EXTERNPROTO / internal-declaration node as pseudo fieldname
      <xsl:otherwise>
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>nodeType unknown for </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:if test="../@name">
              <xsl:text> </xsl:text>
              <xsl:value-of select="../@name" />
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:otherwise> -->
    </xsl:choose>
  </xsl:if>
  <!-- Metadata nodes not available under all nodes in VRML97 -->
  <xsl:variable name="LeafNodeMetadataChildFound" 
    select="*[starts-with(local-name(),'Metadata')] and ($fileEncoding!='ClassicVRML')
       and not (starts-with(local-name(),'Metadata') or
            contains(local-name(),'Sequencer') or
            contains(local-name(),'Trigger') or
            contains(local-name(),'Filter') or
            contains(local-name(),'MultiTexture') or
            contains(local-name(),'Pdu') or
            contains(local-name(),'Properties') or
            contains(local-name(),'Triangle') or
            contains(local-name(),'2D') or
            starts-with(local-name(),'Geo') or
            starts-with(local-name(),'HAnim') or
            starts-with(local-name(),'Nurbs') or
            (local-name()='Group') or
            (local-name()='StaticGroup') or
            (local-name()='Transform') or
            (local-name()='Anchor') or
            (local-name()='Billboard') or
            (local-name()='Collision') or
            (local-name()='ColorRGBA') or
            (local-name()='CoordinateDouble') or
            (local-name()='KeySensor') or
            (local-name()='LineSet') or
            (local-name()='StringSensor') or
            (local-name()='TextureBackground') or
            (local-name()='TextureCoordinate') or
            (local-name()='TextureCoordinateGenerator') or
            (local-name()='StringSensor') or
            (local-name()='XvlShell'))"/>
        <!-- reduce quantity of overzealous warnings about moving child Metadata nodes to follow -->
        <xsl:variable name='precedingLeafNodeMetadataChildFound' select="(count(preceding::*/*[starts-with(local-name(),'Metadata')]) > 0)"/>
        <xsl:variable name='followingLeafNodeMetadataChildFound' select="(count(following::*/*[starts-with(local-name(),'Metadata')]) > 0)"/>
        <!-- debug
        <xsl:if test="$LeafNodeMetadataChildFound and not($precedingLeafNodeMetadataChildFound)">
            <xsl:message>
                <xsl:text>*** LeafNodeMetadataChildFound=</xsl:text><xsl:value-of select="$LeafNodeMetadataChildFound"/>
                <xsl:text>, current node=</xsl:text><xsl:value-of select="local-name()"/>
                <xsl:text>, precedingLeafNodeMetadataChildFound=</xsl:text><xsl:value-of select="$precedingLeafNodeMetadataChildFound"/>
                <xsl:text>, followingLeafNodeMetadataChildFound=</xsl:text><xsl:value-of select="$followingLeafNodeMetadataChildFound"/>
            </xsl:message>
        </xsl:if> -->
  <!-- DEF node name -->
  <xsl:if test="@DEF"><xsl:text>DEF </xsl:text><xsl:value-of select="@DEF"/><xsl:text> </xsl:text></xsl:if>
  <xsl:variable name="DEF" select="@DEF"/>
  <!-- output node name itself:  ensure not proxy; then output USE, or ProtoInstance name, or actual node name -->
  <xsl:choose>
    <xsl:when test="local-name()='proxy'"><!-- ignore, handled a few steps down --></xsl:when>
    <xsl:when test="local-name()='IS' or local-name()='connect'"><!-- ignore, handled elsewhere --></xsl:when>
    <!-- USE is no longer a valid node name -->
    <!-- <xsl:when test="(local-name()='USE' and @node)"> -->
      <!-- don't forget the bloody wrapper tags!  children handled separately.  this section will need to be generalized for compact tagset form, or else have USE preclude wrapper-tag ignoring. -->
      <!-- output wrapper tag (except for children tag) -->
    <!--
      <xsl:if test="local-name(..)='appearance' or local-name(..)='choice' or local-name(..)='color' or local-name(..)='coord' or
		local-name(..)='fontStyle' or local-name(..)='geometry' or local-name(..)='level' or local-name(..)='material' or local-name(..)='normal' or
		local-name(..)='source' or local-name(..)='texCoord' or local-name(..)='texture' or local-name(..)='textureTransform' or local-name(..)='sites'">
	<xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
	<xsl:value-of select="local-name(..)"/><xsl:text> </xsl:text>
      </xsl:if>
      <xsl:text>USE </xsl:text><xsl:value-of select="@node"/>
      <xsl:text>&#10;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name()='USE')">
      <xsl:text>USE __??__</xsl:text>
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>node=&quot;DEFname&quot; not provided for USE</xsl:text>
          </xsl:with-param>
        </xsl:call-template>
    </xsl:when>
    -->
    <!-- node with USE defined -->
    <xsl:when test="@USE and (ancestor::*/@DEF = @USE)">
      <xsl:text>USE </xsl:text><xsl:value-of select="@USE"/>
      <xsl:choose>
        <xsl:when test="(local-name(..)='field') and (local-name(../..)='Script')">
        <!-- no warning, this is an acceptable practice
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:text>Directed acyclic graph (DAG) reference:  Script field refers to Script node itself via &lt;Script USE='</xsl:text>
              <xsl:value-of select="@USE"/>
              <xsl:text>'/&gt;</xsl:text>
            </xsl:with-param>
          </xsl:call-template>
        -->
        </xsl:when>
        <xsl:otherwise>
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Directed acyclic graph (DAG) error:  USE node not allowed inside definition of DEF parent, for </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text> DEF/USE=</xsl:text>
              <xsl:value-of select="@USE"/>
            </xsl:with-param>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:when>
    <xsl:when test="@USE and *">
      <xsl:text>USE </xsl:text><xsl:value-of select="@USE"/>
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>no embedded-child node content allowed inside USE, for </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> USE=</xsl:text>
            <xsl:value-of select="@USE"/>
          </xsl:with-param>
        </xsl:call-template>
    </xsl:when>
    <xsl:when test="@USE">
      <xsl:text>USE </xsl:text>
      <xsl:value-of select="@USE"/>
      <xsl:text>&#10;</xsl:text>
      <!-- check for erroneous node-type reference.  could be augmented to track back to originating ProtoDeclare if ProtoInstance. -->
      <xsl:variable name="useName"  select="@USE" />
      <xsl:if test="not(//*[@DEF=$useName])">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>No DEF node found for </xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> USE='</xsl:text>
            <xsl:value-of select="$useName"/>
            <xsl:text>'/</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
          </xsl:with-param>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="(//*[@DEF=$useName]) and not(preceding::*[@DEF=$useName])">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>DEF node follows </xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> USE='</xsl:text>
            <xsl:value-of select="$useName"/>
            <xsl:text>'/</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
            <xsl:text> node, DEF must appear first</xsl:text>
          </xsl:with-param>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="(local-name()!='ProtoInstance') and preceding::*[(@DEF=$useName) and (local-name()!=$nodeName2)]">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>mismatched node type for </xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
            <xsl:value-of select="local-name(preceding::*[@DEF=$useName])"/>
            <xsl:text> DEF='</xsl:text>
            <xsl:value-of select="preceding::*[@DEF=$useName]/@DEF"/>
            <xsl:text>'/</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
            <xsl:text> and </xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> USE='</xsl:text>
            <xsl:value-of select="@USE"/>
            <xsl:text>'/</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
          </xsl:with-param>
        </xsl:call-template>
      </xsl:if>
      <xsl:variable name="useParentProtoName"  select="ancestor::*[local-name()='ProtoDeclare']/@name" />
      <!-- <xsl:text> # $useParentProtoName ='</xsl:text><xsl:value-of select="$useParentProtoName"/><xsl:text>&#10;</xsl:text> -->
      <xsl:if test="$useParentProtoName and not(//ProtoDeclare[@name=$useParentProtoName]/ProtoBody//*[@DEF=$useName])">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> USE='</xsl:text>
            <xsl:value-of select="@USE"/>
            <xsl:text>'/</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
            <xsl:text> refers to DEF node outside of parent ProtoDeclare </xsl:text>
            <xsl:value-of select="$useParentProtoName"/>
          </xsl:with-param>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <xsl:when test="local-name()='ProtoInstance'">
      <xsl:variable name="containerField">
        <xsl:choose>
          <xsl:when test="@containerField">
            <xsl:value-of select="@containerField"/>
          </xsl:when>
          <xsl:when test="//ProtoDeclare[@name=$nodeName]">
            <!-- note that containerField might not be defined in ProtoDeclare -->
            <xsl:value-of select="//ProtoDeclare[@name=$nodeName]/field[@name='containerField']/@value"/>
          </xsl:when>
          <!-- can't deduce containerField from ExternProtoDeclare, even if containerField declared, because no initialization value is allowed in field declaration -->
          <xsl:when test="fieldValue[@name='containerField']/@value">
            <xsl:value-of select="fieldValue[@name='containerField']/@value"/>
          </xsl:when>
          <xsl:otherwise>
            <!-- no other possibilities, will assume default 'children' and the 'children [ ]' array output is handled by parent, and so leave empty -->
          </xsl:otherwise>
        </xsl:choose>
      </xsl:variable>
      <!-- debug <xsl:message><xsl:text>ProtoInstance </xsl:text><xsl:value-of select="$nodeName"/><xsl:text> $containerField=</xsl:text><xsl:value-of select="$containerField"/></xsl:message> -->
      <!-- <xsl:text> ### output containerField &#10;</xsl:text> -->
      <!-- @containerField output handled previously -->
      <xsl:if test="not(@containerField)">
        <xsl:value-of select="$containerField"/>
      </xsl:if>
      <xsl:text> </xsl:text>
      <xsl:value-of select="@name"/>
      <xsl:text> {&#10;</xsl:text>
      <xsl:if test="not(//ProtoDeclare[@name=$nodeName]) and not(//ExternProtoDeclare[@name=$nodeName])">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>ProtoInstance </xsl:text>
            <xsl:value-of select="@name" />
            <xsl:text> has no matching ProtoDeclare or ExternProtoDeclare</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:text>ProtoInstance </xsl:text>
            <xsl:value-of select="@name" />
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- cue if suspicious default ProtoInstance containerField encountered -->
      <!-- add leaf-node parents where only allowed child is metadata -->
      <xsl:if test="$containerField='children' or $containerField='' or not($containerField)">
        <xsl:choose>
         <xsl:when test="local-name(..)='Scene' or local-name(..)='ProtoBody' or local-name(..)='Anchor' or local-name(..)='Billboard' or local-name(..)='Group' or local-name(..)='StaticGroup' or contains(local-name(..),'LOD') or local-name(..)='Switch' or local-name(..)='Transform' or local-name(..)='EspduTransform'
 or local-name(..)='GeoLocation' or local-name(..)='GeoLOD' or local-name(..)='HAnimJoint' or local-name(..)='HAnimSegment' or local-name(..)='HAnimSite' or local-name(..)='Contour2D'">
           <!-- no action required, default is acceptable for parent grouping node -->
         </xsl:when>
         <!-- test for local-parent field, or else local-grandparent ProtoInstance with local-parent fieldValue-->
         <xsl:when test="local-name(..)='field' or local-name(..)='fieldValue'">
           <!-- no action required,  since field/@name and fieldValue/@name is required by XML and serves as containerField value-->
         </xsl:when>
         <!-- test for local-parent Metadata* node-->
         <xsl:when test="starts-with(local-name(..),'Metadata')">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>ProtoInstance </xsl:text>
                <xsl:value-of select="@name" />
                <xsl:text> has </xsl:text>
                <xsl:if test="$containerField='' or not($containerField)">
                  <xsl:text>default </xsl:text>
                </xsl:if>
                <xsl:text>containerField='children' which is not appropriate for parent </xsl:text>
                <xsl:value-of select="local-name(..)" />
                <xsl:text> node.  Allowed containerField </xsl:text>
                <xsl:choose>
                  <xsl:when test="local-name(..)='MetadataSet'">
                    <xsl:text>entries are metadata or value (for contained set of nodes)</xsl:text>
                  </xsl:when>
                  <xsl:otherwise>
                    <xsl:text>value is metadata</xsl:text>
                  </xsl:otherwise>
                </xsl:choose>
                <xsl:text>.</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:text>ProtoInstance </xsl:text>
                <xsl:value-of select="@name" />
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
         </xsl:when>
          <xsl:when test="local-name(..)='Appearance' or local-name(..)='Shape' or contains(local-name(..),'Sound') or local-name(..)='MultiTexture' or local-name(..)='MultiTextureCoordinate' or local-name(..)='MultiTextureTransform'
 or local-name(..)='ElevationGrid' or local-name(..)='IndexedFaceSet' or local-name(..)='IndexedQuadSet' or local-name(..)='QuadSet' or local-name(..)='IndexedTriangleFanSet' or local-name(..)='IndexedTriangleSet' or local-name(..)='IndexedTriangleStripSet' or local-name(..)='TriangleFanSet' or local-name(..)='TriangleSet' or local-name(..)='TriangleStripSet' or local-name(..)='IndexedLineSet' or local-name(..)='LineSet' or local-name(..)='LoadSensor' or local-name(..)='PointSet'
 or local-name(..)='Text' or local-name(..)='HAnimHumanoid' or local-name(..)='NurbsSet' or local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator' or local-name(..)='NurbsSurfaceInterpolator' or local-name(..)='NurbsPatchSurface' or local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsSwungSurface' or local-name(..)='NurbsTrimmedSurface'">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>ProtoInstance </xsl:text>
                <xsl:value-of select="@name" />
                <xsl:text> has </xsl:text>
                <xsl:if test="$containerField='' or not($containerField)">
                  <xsl:text>default </xsl:text>
                </xsl:if>
                <xsl:text>containerField='children' which is not appropriate for parent </xsl:text>
                <xsl:value-of select="local-name(..)" />
                <xsl:text> node.  Allowed containerField values are </xsl:text>
                <xsl:choose>
                  <xsl:when test="local-name(..)='Appearance'">
                    <xsl:text>fillProperties, lineProperties, material, metadata, texture, textureTransform</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='Shape'">
                    <xsl:text>appearance, geometry, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='Sound'">
                    <xsl:text>source, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='MultiTexture'">
                    <xsl:text>texture, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='MultiTextureCoordinate'">
                    <xsl:text>texCoord, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='MultiTextureTransform'">
                    <xsl:text>textureTransform, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='ElevationGrid'">
                    <xsl:text>color, normal, texCoord, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='IndexedFaceSet' or local-name(..)='IndexedQuadSet' or local-name(..)='QuadSet' or local-name(..)='IndexedTriangleFanSet' or local-name(..)='IndexedTriangleSet' or local-name(..)='IndexedTriangleStripSet' or local-name(..)='TriangleFanSet' or local-name(..)='TriangleSet' or local-name(..)='TriangleStripSet'">
                    <xsl:text>color, coord, normal, texCoord, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='IndexedLineSet' or local-name(..)='LineSet' or local-name(..)='PointSet'">
                    <xsl:text>color, coord, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='LoadSensor'">
                    <xsl:text>watchList, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='Text'">
                    <xsl:text>fontStyle, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='HAnimHumanoid'">
                    <xsl:text>joints, metadata, segments, sites, skeleton, segments, skin, skinCoord, skinNormal, viewpoints</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='NurbsSet'">
                    <xsl:text>geometry, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator' or local-name(..)='NurbsSurfaceInterpolator'">
                    <xsl:text>controlPoint, metadata</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='NurbsPatchSurface'">
                    <xsl:text>controlPoint, metadata, texCoord</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='NurbsSweptSurface'">
                    <xsl:text>crossSectionCurve, metadata, trajectoryCurve</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='NurbsSwungSurface'">
                    <xsl:text>metadata, profileCurve, trajectoryCurve</xsl:text>
                  </xsl:when>
                  <xsl:when test="local-name(..)='NurbsTrimmedSurface'">
                    <xsl:text>controlPoint, metadata, texCoord, trimmingContour</xsl:text>
                  </xsl:when>
                </xsl:choose>
                <xsl:text>.</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:text>ProtoInstance </xsl:text>
                <xsl:value-of select="@name" />
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- only remaining missing cases should be Metadata nodes -->
          <xsl:otherwise>
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>ProtoInstance </xsl:text>
                <xsl:value-of select="@name" />
                <xsl:if test="starts-with(@name,'Metadata')">
                   <xsl:text> appears to be a Metadata node, and</xsl:text>
                </xsl:if>
                <xsl:text> has </xsl:text>
                <xsl:if test="$containerField='' or not($containerField)">
                  <xsl:text>default </xsl:text>
                </xsl:if>
                <xsl:text>containerField='children' which is not appropriate for parent </xsl:text>
                <xsl:value-of select="local-name(..)" />
                <xsl:text> node.  Allowed containerField value is metadata.</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:text>ProtoInstance </xsl:text>
                <xsl:value-of select="@name" />
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:otherwise>
        </xsl:choose>
      </xsl:if>
    </xsl:when>
    <xsl:when test="local-name()='Color'">
      <xsl:text>Color {&#10;</xsl:text>
    </xsl:when>
    <!-- handle MFNode fields in supported profiles -->
    <xsl:when test="(local-name(..)='GeoLOD'       and @containerField='rootNode') or
                    (local-name(..)='HAnimSegment' and @containerField='displacers')">
      <xsl:value-of select="@containerField"/>
      <xsl:choose>
        <xsl:when test="*">
          <xsl:text> [&#10;</xsl:text> <!-- # MFNode fields -->
        </xsl:when>
        <xsl:otherwise>
          <xsl:text> NULL&#10;</xsl:text>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:when>
    <!-- take care of IS attribute definitions for SFNode/MFNode-type field declarations inside ProtoDeclarations -->
    <xsl:when test="@DEF and ancestor::*[local-name()='ProtoDeclare'] and not(local-name()='ProtoDeclare')">
      <xsl:value-of select="local-name ()"/>
      <xsl:text> {&#10;</xsl:text>
      <!-- pattern-match variables -->
      <xsl:variable name="DEFname" select="@DEF" />
      <!-- <xsl:variable name="fieldName" select="local-name()" /> -->
      <!-- <xsl:variable name="matchName" select="concat(@DEF,'.',local-name())" /> -->
      <!-- <xsl:text> # $DEFname   </xsl:text><xsl:value-of select="$DEFname"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # $fieldName </xsl:text><xsl:value-of select="$fieldName"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # $matchName </xsl:text><xsl:value-of select="$matchName"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # ancestor PROTO field </xsl:text><xsl:value-of select="local-name(ancestor::*[local-name()='ProtoDeclare'])"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # ProtoDeclare ancestor &quot;</xsl:text><xsl:value-of select="ancestor::*[local-name()='ProtoDeclare']/@name"/><xsl:text>&quot; found&#10;</xsl:text> -->
      <xsl:if test="local-name()!='Script'">
        <xsl:for-each select="ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field">
          <!-- <xsl:text> # node rule: @IS </xsl:text><xsl:value-of select="@IS"/><xsl:text>&#10;</xsl:text> -->
          <!-- <xsl:text> # (starts-with(@IS,concat($DEFname, '.')) </xsl:text><xsl:value-of select="starts-with(@IS,concat($DEFname, '.'))"/><xsl:text>&#10;</xsl:text> -->
          <!-- <xsl:text> # concat($DEFname, '.') </xsl:text><xsl:value-of select="concat($DEFname, '.')"/><xsl:text>&#10;</xsl:text> -->
          <!-- <xsl:text> # @type </xsl:text><xsl:value-of select="@type"/><xsl:text>&#10;</xsl:text> -->
          <!-- <xsl:text> # substring-after(@IS,'.') </xsl:text><xsl:value-of select="substring-after(@IS,'.')"/><xsl:text>&#10;</xsl:text> -->
          <xsl:if test="starts-with(@IS,concat($DEFname, '.')) or contains(@IS,concat(' ',$DEFname, '.'))">
             <!-- this choose rule seems to work when extracting appropriate substring when multiple IS references occur... -->
             <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
             <xsl:choose>
               <xsl:when test="contains(substring-after(@IS,concat($DEFname, '.')),' ')">
                 <xsl:value-of select="substring-before(substring-after(@IS,concat($DEFname, '.')),' ')"/>
               </xsl:when>
               <xsl:otherwise>
                 <xsl:value-of select="substring-after(@IS,concat($DEFname, '.'))"/>
               </xsl:otherwise>
             </xsl:choose>
             <xsl:text> IS </xsl:text>
             <xsl:value-of select="@name"/> <!-- this is @name of ProtoDeclare/ProtoInterface/field -->
             <xsl:text>&#10;</xsl:text>
          </xsl:if>
        </xsl:for-each>
      </xsl:if>
    </xsl:when>
    <!-- take care of wrapper tags (type SFNode/MFNode) defined in ProtoDeclare or ExternProtoDeclare -->
    <xsl:when test="(//ProtoDeclare[@name=$parentNodeName or @name=$parentNodeName2]/ProtoInterface/field[@name=$nodeName and @type='SFNode']) or
                    (//ExternProtoDeclare[@name=$parentNodeName or @name=$parentNodeName2]/field[@name=$nodeName and @type='SFNode'])">
      <xsl:value-of select="local-name ()"/><xsl:text> </xsl:text>
    </xsl:when>
    <xsl:when test="(//ProtoDeclare[@name=$parentNodeName or @name=$parentNodeName2]/ProtoInterface/field[(@name=$nodeName or @name=$nodeName2) and @type='MFNode']) or
                    (//ExternProtoDeclare[@name=$parentNodeName or @name=$parentNodeName2]/field[(@name=$nodeName or @name=$nodeName2) and @type='MFNode'])">
      <xsl:value-of select="local-name ()"/><xsl:text> [</xsl:text>
    </xsl:when>
    <!-- handle StaticGroup -->
    <xsl:when test="local-name()='StaticGroup'">
      <xsl:text>Group { ### StaticGroup&#10;</xsl:text>
      <xsl:if test="child::*[@DEF or @USE]">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>no modifiable node content allowed inside StaticGroup, be careful to not ROUTE values to [</xsl:text>
            <xsl:for-each select="child::*[@DEF]">
              <xsl:text>DEF='</xsl:text>
              <xsl:value-of select="@DEF"/>
              <xsl:text>' </xsl:text>
            </xsl:for-each>
            <xsl:for-each select="child::*[@USE]">
              <xsl:text>USE='</xsl:text>
              <xsl:value-of select="@USE"/>
              <xsl:text>' </xsl:text>
            </xsl:for-each>
            <xsl:text>]</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF" select="@DEF"/>
        </xsl:call-template>
        <!-- also look for ROUTEd value, that is an error -->
        <xsl:for-each select="child::*[@DEF or @USE]">
          <!-- output DEF nodes first to ensure available for USE nodes.  questionable practice since it may reorder author's scene. -->
          <xsl:variable name="childNodeLabel">
            <xsl:choose>
              <xsl:when test="@DEF"><xsl:value-of select="@DEF"/></xsl:when>
              <xsl:when test="@USE"><xsl:value-of select="@USE"/></xsl:when>
            </xsl:choose>
          </xsl:variable>
          <xsl:if test="//ROUTE[(@toNode=$childNodeLabel) or (@fromNode=$childNodeLabel)]">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>no modifiable node content allowed inside StaticGroup, do not ROUTE values to node </xsl:text>
                <xsl:value-of select="$childNodeLabel"/>
              </xsl:with-param>
              <xsl:with-param name="DEF" select="$childNodeLabel"/>
            </xsl:call-template>
          </xsl:if>
        </xsl:for-each>
      </xsl:if>
    </xsl:when>
    <!-- handle GeoInline substitution for Inline with load -->
    <xsl:when test="local-name()='Inline' and
    			((@load='false') or
  			 (//ROUTE[(  @toField='load' or   @toField='set_load')     and   @toNode=$DEF]) or
  			 (//ROUTE[(@fromField='load' or @fromField='load_changed') and @fromNode=$DEF]))">
      <xsl:text>GeoInline { ### X3D Inline&#10;</xsl:text>
            <xsl:call-template name="output-warning">
              <xsl:with-param name="warningString">
                <xsl:text>X3D Inline field 'load' is not a legal VRML97 field, converting to VRML97 GeoInline (with load/unload control) instead.</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF" select="@DEF"/>
            </xsl:call-template>
    </xsl:when>
    <!-- not a proxy or a USE NodeDefName or a ProtoInstance:  so just output current node name and opening { -->
    <xsl:otherwise>
      <xsl:value-of select="local-name ()"/>
      <xsl:text> {&#10;</xsl:text> <!-- # *** otherwise clause -->
    </xsl:otherwise>
  </xsl:choose>
  <!-- ensure GeoOrigin handled before children, so that final close bracket ] doesn't encompass it -->
  <xsl:if test="(contains(local-name(),'Geo') or contains($nodeType,'Geo') or contains($EPnodeType,'Geo') or (@containerField='geoOrigin') or contains(nodeType,'Geo'))
  	and (GeoOrigin) and not(local-name()='GeoOrigin') ">
    <!-- <xsl:text># GeoOrigin found for </xsl:text><xsl:value-of select="local-name()"/><xsl:text>&#10;</xsl:text> -->
    <xsl:apply-templates select="GeoOrigin | comment()">
       <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:if>
  <!-- ensure GeoLOD/rootNode handled before children, so that final close bracket ] doesn't encompass it.  Note GeoLOD children is outputOnly event. -->
  <xsl:if test="local-name()='GeoLOD' and *[not(local-name()='GeoOrigin')]">
    <!-- <xsl:text>&#10;# rootNode found for </xsl:text><xsl:value-of select="local-name()"/><xsl:text>&#10;</xsl:text> -->
    <xsl:text>  rootNode</xsl:text>
    <xsl:apply-templates select="*[not(local-name()='GeoOrigin')] | comment()">
       <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:if>
  <!-- match each of the attributes next, put this after children in case a referencing USE is employed -->
  <!-- get fields and sibling comment() nodes -->
  <xsl:apply-templates select="field | comment()[following-sibling::field]">
       <xsl:with-param name="indent" select="$indent + 2"/>
  </xsl:apply-templates>
  <!-- apply attributes, but watch out for special HAnimHumanoid attributes -->
  <xsl:choose>
    <xsl:when test="local-name()='HAnimHumanoid'">
      <xsl:apply-templates select="@*[local-name(.)='DEF' or local-name(.)='USE' or local-name(.)='bboxCenter' or local-name(.)='bboxSize' or local-name(.)='center' or local-name(.)='class' or local-name(.)='containerField' or local-name(.)='info' or local-name(.)='name' or local-name(.)='rotation' or local-name(.)='scale' or local-name(.)='scaleOrientation' or local-name(.)='translation' or local-name(.)='version']">
         <xsl:with-param name="indent" select="$indent + 2"/>
      </xsl:apply-templates>
      <xsl:if test="not(@USE)">
        <xsl:text>  info [ </xsl:text>
        <xsl:for-each select="@*[ not(local-name(.)='DEF' or local-name(.)='USE' or local-name(.)='bboxCenter' or local-name(.)='bboxSize' or local-name(.)='center' or local-name(.)='class' or local-name(.)='containerField' or local-name(.)='info' or local-name(.)='name' or local-name(.)='rotation' or local-name(.)='scale' or local-name(.)='scaleOrientation' or local-name(.)='translation' or local-name(.)='version')]">
             <!-- @info collects attribute=value metadata pairs -->
             <xsl:text>&quot;</xsl:text>
             <xsl:value-of select="local-name(.)"/>
             <xsl:text>=</xsl:text>
             <xsl:value-of select="."/>
             <xsl:text>&quot; </xsl:text>
        </xsl:for-each>
        <xsl:text>]&#10;</xsl:text>
      </xsl:if>
    </xsl:when>
    <xsl:otherwise>
      <xsl:apply-templates select="@*">
         <xsl:with-param name="indent" select="$indent + 2"/>
      </xsl:apply-templates>
    </xsl:otherwise>
  </xsl:choose>
  <!-- not working :(  <xsl:apply-templates select="fieldValue[not(@USE) and not(descendant-or-self::*/@USE)]"/> -->
  <!-- a check for implicit attributes in the matching IS tokens is needed here... -->
  <!-- check if this node has children, if so add appropriate VRML97 child-node indicator -->
  <!-- TODO:  'or' or | ? -->
  <xsl:if test="* | comment()">
    <!-- first handle any IS connections, which appear as first child tags if present -->
    <xsl:if test="IS">
      <!-- <xsl:text>&#10;# [xsl:apply-templates select="IS"]&#10;</xsl:text> -->
      <xsl:apply-templates select="IS | comment()">
        <xsl:with-param name="indent" select="$indent + 2"/>
      </xsl:apply-templates>
    </xsl:if>
    <xsl:choose>
      <!-- 4-way node-type tests:  native VRML node, ProtoDeclared ProtoInstance, ExternProtoDeclared ProtoInstance, or internal DTD declaration by content -->
      <xsl:when test="local-name()='Collision'">
        <xsl:if test="count(*[@containerField='proxy']) > 1">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>More than one containerField='proxy' child found inside Collision node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(.)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <!-- proxy test & output -->
        <xsl:choose>
          <!-- if author put proxy first, keep it there.  might have DEF inside for later USE -->
          <xsl:when test="*[@containerField='proxy' and (position()=1 or not(descendant-or-self::*/@USE))]">
            <xsl:text> proxy&#10;</xsl:text>
            <xsl:apply-templates select="*[@containerField='proxy']">
              <xsl:with-param name="indent" select="$indent + 4"/>
            </xsl:apply-templates>
            <xsl:if test="*[@containerField!='proxy' or not(@containerField)] | comment()">
              <xsl:text> children [&#10;</xsl:text>
              <xsl:apply-templates select="*[@containerField!='proxy' or not(@containerField)] | comment()">
                <xsl:with-param name="indent" select="$indent + 4"/>
              </xsl:apply-templates>
              <xsl:text> ]&#10;</xsl:text>
            </xsl:if>
          </xsl:when>
          <!-- backup proxy test, put proxy after children in case a referencing USE is employed -->
          <xsl:when test="*[@containerField='proxy']">
            <xsl:if test="*[@containerField!='proxy' or not(@containerField)] | comment()">
              <xsl:text> children [&#10;</xsl:text>
              <xsl:apply-templates select="*[@containerField!='proxy' or not(@containerField)] | comment()">
                <xsl:with-param name="indent" select="$indent + 4"/>
              </xsl:apply-templates>
              <xsl:text> ]&#10;</xsl:text>
            </xsl:if>
            <xsl:text> proxy&#10;</xsl:text>
            <xsl:apply-templates select="*[@containerField='proxy']">
              <xsl:with-param name="indent" select="$indent + 4"/>
            </xsl:apply-templates>
          </xsl:when>
          <!-- otherwise no proxy -->
          <xsl:when test="*[not(@containerField='proxy') and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
            <xsl:text> children [&#10;</xsl:text>
            <xsl:apply-templates select="*[not(@containerField='proxy') and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
              <xsl:with-param name="indent" select="$indent + 4"/>
            </xsl:apply-templates>
            <xsl:text> ]&#10;</xsl:text>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <xsl:when test="((local-name()='Anchor'    or $nodeType='Anchor'    or $EPnodeType='Anchor'    or @nodeType='Anchor'    or
                        local-name()='Billboard' or $nodeType='Billboard' or $EPnodeType='Billboard' or @nodeType='Billboard' or
                        local-name()='Group'     or $nodeType='Group'     or $EPnodeType='Group'     or @nodeType='Group'     or
                        local-name()='StaticGroup'      or $nodeType='StaticGroup' or $EPnodeType='StaticGroup'  or @nodeType='StaticGroup'     or
                        local-name()='Transform' or $nodeType='Transform' or $EPnodeType='Transform' or @nodeType='Transform' or
                        local-name()='Contour2D' or $nodeType='Contour2D' or $EPnodeType='Contour2D' or @nodeType='Contour2D' or
                        local-name()='CADAssembly' or $nodeType='CADAssembly' or $EPnodeType='CADAssembly' or @nodeType='CADAssembly' or
                        local-name()='CADLayer' or $nodeType='CADLayer' or $EPnodeType='CADLayer' or @nodeType='CADLayer' or
                        local-name()='CADPart' or $nodeType='CADPart' or $EPnodeType='CADPart' or @nodeType='CADPart' or
                        local-name()='EspduTransform' 	or $nodeType='EspduTransform' or $EPnodeType='EspduTransform' or @nodeType='EspduTransform' or
                        local-name()='GeoLocation'	or $nodeType='GeoLocation' or $EPnodeType='GeoLocation' or @nodeType='GeoLocation' or
                        local-name()='GeoLOD'		or $nodeType='GeoLOD' or $EPnodeType='GeoLOD' or @nodeType='GeoLOD' or
                        local-name()='HAnimJoint'	or $nodeType='HAnimJoint' or $EPnodeType='HAnimJoint' or @nodeType='HAnimJoint' or
                        local-name()='NurbsSet' 	or $nodeType='NurbsSet' or $EPnodeType='NurbsSet' or @nodeType='NurbsSet' or
                        local-name()='ReceiverPdu'	or $nodeType='ReceiverPdu' or $EPnodeType='ReceiverPdu' or @nodeType='ReceiverPdu' or
                        local-name()='HAnimSegment'	or $nodeType='HAnimSegment' or $EPnodeType='HAnimSegment' or @nodeType='HAnimSegment' or
                        local-name()='SignalPdu'	or $nodeType='SignalPdu' or $EPnodeType='SignalPdu' or @nodeType='SignalPdu' or
                        local-name()='HAnimSite'	or $nodeType='HAnimSite' or $EPnodeType='HAnimSite' or @nodeType='HAnimSite' or
                        local-name()='TransmitterPdu'	or $nodeType='TransmitterPdu' or $EPnodeType='TransmitterPdu' or @nodeType='TransmitterPdu')
                       and (children or *[local-name()!='fieldValue' and local-name()!='GeoOrigin' and local-name()!='IS'])
                       and not(local-name()='LoadSensor')
                      )
                      or children">
        <!-- debug <xsl:message><xsl:value-of select="local-name()"/><xsl:text> grouping node, processing...</xsl:text></xsl:message> -->
        <xsl:choose>
          <!-- consider various child and prototype cases, must work unwrapped or wrapped -->
          <xsl:when test="fieldValue[@name='children']/*">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>children [</xsl:text>
            <xsl:text> # found fieldValue[@name='children']/* </xsl:text> <!-- -->
            <xsl:text>&#10;</xsl:text>
            <xsl:apply-templates select="fieldValue[@name='children']/*">
              <xsl:with-param name="indent" select="$indent + 4"/>
            </xsl:apply-templates>
          </xsl:when>
          <!-- unwrapped children -->
          <xsl:when test="*[local-name()!='fieldValue' and local-name()!='GeoOrigin' and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
            <!-- debug <xsl:message><xsl:value-of select="local-name()"/><xsl:text> node, processing unwrapped children...</xsl:text></xsl:message> -->
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>children [</xsl:text>
            <!-- <xsl:text> # unwrapped children</xsl:text> -->
            <xsl:text>&#10;</xsl:text>
            <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='GeoOrigin' and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
              <xsl:with-param name="indent" select="$indent + 6"/>
            </xsl:apply-templates>
          </xsl:when>
          <!-- wrapped children -->
          <xsl:when test="children/*[local-name()!='proxy']">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>children [&#10;</xsl:text>
            <xsl:apply-templates select="children/*[local-name()!='proxy'and local-name()!='ROUTE']">
              <xsl:with-param name="indent" select="$indent + 6"/>
            </xsl:apply-templates>
          </xsl:when>
          <xsl:when test="children">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>children NULL&#10;</xsl:text>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <xsl:when test="(local-name()='CADFace'       or $nodeType='CADFace'       or $EPnodeType='CADFace'       or @nodeType='CADFace')
                      and (*)">
        <xsl:if test="*[(local-name() != 'LOD') and (local-name() != 'Shape') and (local-name() != 'Transform')]">
          <!-- no ROUTE children allowed -->
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>CADFace has illegal child </xsl:text>
              <xsl:value-of select="local-name(*[1])"/>
              <xsl:text>, only a single Shape, LOD or Transform node is allowed</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text> node</xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text>, parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../@DEF"/>
              <xsl:text>'</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
        <xsl:text>shape&#10;</xsl:text>
        <xsl:apply-templates select="*"><!-- ignore: [not(@containerField) or @containerField='children' or @containerField='watchList'] -->
          <xsl:with-param name="indent" select="$indent + 4"/>
        </xsl:apply-templates>
      </xsl:when>
      <xsl:when test="(local-name()='LoadSensor'       or $nodeType='LoadSensor'       or $EPnodeType='LoadSensor'       or @nodeType='LoadSensor')
                      and (boolean(*) or boolean(fieldValue[@name='watchList']/*))">
        <xsl:choose>
          <!-- no ROUTE children allowed -->
          <xsl:when test="*"><!-- ignore: [not(@containerField) or @containerField='children' or @containerField='watchList'] -->
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>watchList [&#10;</xsl:text>
            <xsl:apply-templates select="*"><!-- ignore: [not(@containerField) or @containerField='children' or @containerField='watchList'] -->
              <xsl:with-param name="indent" select="$indent + 4"/>
            </xsl:apply-templates>
          </xsl:when>
          <!-- ProtoInstance children -->
          <xsl:when test="fieldValue[@name='watchList']/*">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>watchList [&#10;</xsl:text>
            <xsl:apply-templates select="fieldValue[@name='watchList']/*">
              <xsl:with-param name="indent" select="$indent + 2"/>
            </xsl:apply-templates>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <xsl:when test="((local-name()='LOD')       or ($nodeType='LOD')       or ($EPnodeType='LOD')       or (@nodeType='LOD'))
                      and (boolean(level/*) or boolean(*[(local-name()!='fieldValue') and (local-name()!='ROUTE') and (local-name()!='IS')]))">
        <xsl:choose>
          <xsl:when test="level/*">
            <xsl:call-template name="print-indent">
              <xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>level [&#10;</xsl:text>
            <xsl:apply-templates select="level">
              <xsl:with-param name="indent" select="$indent + 2"/>
            </xsl:apply-templates>
          </xsl:when>
          <xsl:when test="level">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>level NULL&#10;</xsl:text>
            <xsl:apply-templates select="level">
              <xsl:with-param name="indent" select="$indent + 2"/>
            </xsl:apply-templates>
          </xsl:when>
          <!-- unwrapped children -->
          <xsl:when test="*[local-name()!='fieldValue' and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:choose>
              <xsl:when test="($fileEncoding='VRML97')">
                <xsl:text>level [&#10;</xsl:text>
              </xsl:when>
              <xsl:otherwise>
                <xsl:text>children [&#10;</xsl:text>
              </xsl:otherwise>
            </xsl:choose>
            <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
              <xsl:with-param name="indent" select="$indent + 4"/>
            </xsl:apply-templates>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <xsl:when test="(local-name()='Switch'    or $nodeType='Switch'    or $EPnodeType='Switch'    or @nodeType='Switch')
                      and (boolean(choice/*) or boolean(*[local-name()!='fieldValue']))">
        <xsl:choose>
          <xsl:when test="choice/*">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>choice [&#10;</xsl:text>
            <xsl:apply-templates select="choice">
              <xsl:with-param name="indent" select="$indent + 2"/>
            </xsl:apply-templates>
          </xsl:when>
          <xsl:when test="choice">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:text>choice NULL&#10;</xsl:text>
            <xsl:apply-templates select="choice">
              <xsl:with-param name="indent" select="$indent + 2"/>
            </xsl:apply-templates>
          </xsl:when>
          <!-- unwrapped children -->
          <xsl:when test="*[local-name()!='fieldValue' and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
            <xsl:choose>
              <xsl:when test="($fileEncoding='VRML97')">
                <xsl:text>choice [&#10;</xsl:text>
              </xsl:when>
              <xsl:otherwise>
                <xsl:text>children [&#10;</xsl:text>
              </xsl:otherwise>
            </xsl:choose>
            <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='ROUTE' and local-name()!='IS'] | comment()">
              <xsl:with-param name="indent" select="$indent + 4"/>
            </xsl:apply-templates>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <!-- ensure HAnimHumanoid child nodes handled after children fields, so that USE values are available -->
      <xsl:when test="local-name()='HAnimHumanoid' ">
        <xsl:if test="HAnimJoint[@containerField='skeleton']"> <!-- originally humanoidBody -->
          <xsl:text>skeleton [&#10;</xsl:text>
          <xsl:apply-templates select="HAnimJoint[@containerField='skeleton']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
          <xsl:text>]&#10;</xsl:text>
        </xsl:if>
        <!-- note that joints, segments and sites should be USE nodes.  skin Shapes will USE preceding skinCoord, skinNormal definitions. -->
        <xsl:if test="HAnimJoint[@containerField='joints']">
          <xsl:text>joints [&#10;</xsl:text>
          <xsl:apply-templates select="HAnimJoint[@containerField='joints']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
          <xsl:text>]&#10;</xsl:text>
        </xsl:if>
        <xsl:if test="HAnimSegment[@containerField='segments']">
          <xsl:text>segments [&#10;</xsl:text>
          <xsl:apply-templates select="HAnimSegment[@containerField='segments']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
          <xsl:text>]&#10;</xsl:text>
        </xsl:if>
        <xsl:if test="HAnimSite[@containerField='sites']">
          <xsl:text>sites [&#10;</xsl:text>
          <xsl:apply-templates select="HAnimSite[@containerField='sites']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
          <xsl:text>]&#10;</xsl:text>
        </xsl:if>
        <xsl:if test="*[contains(local-name(),'Coordinate')][@containerField='skinCoord']">
          <xsl:apply-templates select="*[contains(local-name(),'Coordinate')][@containerField='skinCoord']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
        </xsl:if>
        <xsl:if test="Normal[@containerField='skinNormal']">
          <xsl:text>skinNormal </xsl:text>
          <xsl:apply-templates select="Normal[@containerField='skinNormal']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
        </xsl:if>
        <xsl:if test="*[@containerField='skin']">
          <xsl:text>skin [&#10;</xsl:text>
          <xsl:apply-templates select="*[@containerField='skin']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
          <xsl:text>]&#10;</xsl:text>
        </xsl:if>
        <xsl:if test="Viewpoint[@containerField='viewpoints']">
          <xsl:text>viewpoints [&#10;</xsl:text>
          <xsl:apply-templates select="Viewpoint[@containerField='viewpoints']"><xsl:with-param name="indent" select="$indent + 2"/></xsl:apply-templates>
          <xsl:text>]&#10;</xsl:text>
        </xsl:if>
        <!-- warn that joints, segments and sites should be USE nodes -->
        <xsl:for-each select="*[(local-name()='HAnimJoint'   and @containerField='joints')  or
        			(local-name()='HAnimSegment' and @containerField='segment') or
        			(local-name()='HAnimJoint'   and @containerField='sites')][not(@USE) or @USE='']">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>HAnimHumanoid </xsl:text>
              <xsl:value-of select="@containerField"/>
              <xsl:text> </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text> must have USE value</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text>node </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:if test="@DEF">
                <xsl:text> DEF='</xsl:text>
                <xsl:value-of select="@DEF"/>
                <xsl:text>'</xsl:text>
              </xsl:if>
              <xsl:text>, parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:if test="../@DEF">
                <xsl:text> DEF='</xsl:text>
                <xsl:value-of select="../@DEF"/>
                <xsl:text>'</xsl:text>
              </xsl:if>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:for-each>
        <!-- errors/warnings for nonconformant containerField children -->
        <xsl:for-each select="HAnimJoint[not(@containerField='skeleton' or @containerField='joints' or @containerField='children')]">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>HAnimJoint has illegal containerField='</xsl:text>
              <xsl:value-of select="@containerField"/>
              <xsl:text>' (allowed values: skeleton, joints)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text>node </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF"/>
              <xsl:text>', parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../@DEF"/>
              <xsl:text>'</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:for-each>
        <xsl:for-each select="HAnimSegment[not(@containerField='segments' or @containerField='children')]">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>HAnimSegment has illegal containerField='</xsl:text>
              <xsl:value-of select="@containerField"/>
              <xsl:text>' (allowed value: segments)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text> node</xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text>, parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../@DEF"/>
              <xsl:text>'</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:for-each>
        <xsl:for-each select="HAnimSite[not(@containerField='sites' or @containerField='viewpoints' or @containerField='children')]">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>HAnimSite has illegal containerField='</xsl:text>
              <xsl:value-of select="@containerField"/>
              <xsl:text>' (allowed values: sites or viewpoints)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text> node</xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text>, parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../@DEF"/>
              <xsl:text>'</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:for-each>
        <xsl:if test="Normal[not(@containerField='skinNormal')]">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Normal has illegal containerField='</xsl:text>
              <xsl:value-of select="@containerField"/>
              <xsl:text>' (allowed value: skinNormal)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text>node </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text>, parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../@DEF"/>
              <xsl:text>'</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:for-each select="Viewpoint[not(@containerField='viewpoints' or @containerField='skin')]">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Viewpoint has illegal containerField='</xsl:text>
              <xsl:value-of select="@containerField"/>
              <xsl:text>' (allowed values: viewpoints, skin)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text>node </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text>, parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../@DEF"/>
              <xsl:text>'</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:for-each>
        <xsl:for-each select="*[local-name()!='Coordinate' and local-name()!='Normal' and local-name()!='Viewpoint' and not(starts-with(local-name(),'Metadata'))
        			and not(starts-with(local-name(),'HAnim'))][not(@containerField='skin')]">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>node </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text> has illegal containerField='</xsl:text>
              <xsl:value-of select="@containerField"/>
              <xsl:text>' (allowed value: skin)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text>node </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text>, parent </xsl:text>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../@DEF"/>
              <xsl:text>'</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
          </xsl:call-template>
        </xsl:for-each>
      </xsl:when>
      <xsl:when test="$LeafNodeMetadataChildFound">
         <!-- Metadata case:  no need to process children within a leaf node, handled later -->
      </xsl:when>
      <xsl:otherwise>
        <!-- recurse on non-proxy, non-ROUTE, non-fieldValue, non-children, non-level, non-range child nodes -->
        <!-- debug <xsl:message><xsl:value-of select="local-name()"/><xsl:text> node, recursing on children...</xsl:text></xsl:message> -->
        <xsl:apply-templates select="*[(local-name()!='ROUTE' and local-name()!='IS'
             and local-name()!='field' and local-name()!='fieldValue'
             and local-name()!='children' and local-name()!='level' and local-name()!='choice'
             and local-name()!='GeoOrigin'
             and local-name(..)!='HAnimHumanoid' and local-name()!='HAnimHumanoid'
             and not(starts-with(local-name(),'Metadata') and @containerField='value'))]">
           <xsl:with-param name="indent" select="$indent + 2"/>
        </xsl:apply-templates>
      </xsl:otherwise>
    </xsl:choose>
    <!-- check if this is a parent grouping node (and not a USE) then add children close ] -->
    <!-- 4-way node-type tests:  native VRML node, ProtoDeclared ProtoInstance, ExternProtoDeclared ProtoInstance, or internal DTD declaration by content -->
    <xsl:variable name="otherChildrenFoundTest1" select="not(@USE) and
               ((local-name()='GeoLocation'    or $nodeType='GeoLocation'    or $EPnodeType='GeoLocation'    or @nodeType='GeoLocation' or
                 local-name()='GeoLOD'         or $nodeType='GeoLOD'         or $EPnodeType='GeoLOD'         or @nodeType='GeoLOD' or
                 local-name()='HAnimJoint'          or $nodeType='HAnimJoint'          or $EPnodeType='HAnimJoint'          or @nodeType='HAnimJoint' or
                 local-name()='HAnimSegment'        or $nodeType='HAnimSegment'        or $EPnodeType='HAnimSegment'        or @nodeType='HAnimSegment' or
                 local-name()='HAnimSite'           or $nodeType='HAnimSite'           or $EPnodeType='HAnimSite'           or @nodeType='HAnimSite' or
                 local-name()='EspduTransform' or $nodeType='EspduTransform' or $EPnodeType='EspduTransform' or @nodeType='EspduTransform' or
                 local-name()='Contour2D' or $nodeType='Contour2D' or $EPnodeType='Contour2D' or @nodeType='Contour2D' or
                 local-name()='CADAssembly' or $nodeType='CADAssembly' or $EPnodeType='CADAssembly' or @nodeType='CADAssembly' or
                 local-name()='CADLayer' or $nodeType='CADLayer' or $EPnodeType='CADLayer' or @nodeType='CADLayer' or
                 local-name()='CADPart' or $nodeType='CADPart' or $EPnodeType='CADPart' or @nodeType='CADPart' or
                 local-name()='NurbsSet'         or $nodeType='NurbsSet' or $EPnodeType='NurbsSet' or @nodeType='NurbsSet' or
                 local-name()='ReceiverPdu'        or $nodeType='ReceiverPdu' or $EPnodeType='ReceiverPdu' or @nodeType='ReceiverPdu' or
                 local-name()='SignalPdu'          or $nodeType='SignalPdu' or $EPnodeType='SignalPdu' or @nodeType='SignalPdu' or
                 local-name()='TransmitterPdu'     or $nodeType='TransmitterPdu' or $EPnodeType='TransmitterPdu' or @nodeType='TransmitterPdu')
                 and *[local-name()!='GeoOrigin'])
                "/>
    <xsl:variable name="otherChildrenFoundTest2" select="not(@USE) and
               (((local-name(..)='GeoLOD'        and @containerField='rootNode') or
                 (local-name(..)='HAnimSegment'  and @containerField='displacers') or
                 (local-name(..)='HAnimHumanoid' and (@containerField='humanoidBody' or @containerField='skeleton' or @containerField='skin'))
                ) and * )
                "/>
    <!-- <xsl:text> # $otherChildrenFoundTest1 </xsl:text><xsl:value-of select="$otherChildrenFoundTest1"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text> # $otherChildrenFoundTest2 </xsl:text><xsl:value-of select="$otherChildrenFoundTest2"/><xsl:text>&#10;</xsl:text> -->
    <xsl:if test="not(@USE) and
              ((((local-name()='Anchor'        or $nodeType='Anchor'         or $EPnodeType='Anchor'         or @nodeType='Anchor'      or
                 local-name()='Billboard'      or $nodeType='Billboard'      or $EPnodeType='Billboard'      or @nodeType='Billboard'   or
                 local-name()='Group'          or $nodeType='Group'          or $EPnodeType='Group'          or @nodeType='Group'       or
                 local-name()='StaticGroup'    or $nodeType='StaticGroup'    or $EPnodeType='StaticGroup'    or @nodeType='StaticGroup' or
                 local-name()='Transform'      or $nodeType='Transform'      or $EPnodeType='Transform'      or @nodeType='Transform'   or
                 local-name()='Inline'         or $nodeType='Inline'         or $EPnodeType='Inline'         or @nodeType='Inline' 	or
                 $otherChildrenFoundTest1 or
                 $otherChildrenFoundTest2)
                 and (boolean(children/*) or boolean(*[local-name()!='fieldValue' and local-name()!='GeoOrigin' and local-name()!='ROUTE' and local-name()!='IS']))
                      and not(local-name()='ProtoInstance' and @name='HAnimHumanoid')))
                 or
               ((local-name()='LOD'       or $nodeType='LOD'       or $EPnodeType='LOD'       or @nodeType='LOD')
                 and (boolean(level/*)  or boolean(*[local-name()!='fieldValue' and local-name()!='ROUTE' and local-name()!='IS'])))
                 or
               ((local-name()='Switch'    or $nodeType='Switch'    or $EPnodeType='Switch'    or @nodeType='Switch')
                 and (boolean(choice/*) or boolean(*[local-name()!='fieldValue' and local-name()!='ROUTE' and local-name()!='IS'])))
                 or
               ((local-name()='LoadSensor'    or $nodeType='LoadSensor'    or $EPnodeType='LoadSensor')
                 and (boolean(*) or boolean(fieldValue[@name='watchList']/*)))
                 or
               (//ProtoDeclare[@name=$parentNodeName or @name=$parentNodeName2]/ProtoInterface/field[(@name=$nodeName or @name=$nodeName2) and @type='MFNode'])
                 or
               (//ExternProtoDeclare[@name=$parentNodeName or @name=$parentNodeName2]/field[(@name=$nodeName or @name=$nodeName2) and @type='MFNode']))
                 or
               (local-name()='NurbsTrimmedSurface'         or $nodeType='NurbsTrimmedSurface'         or $EPnodeType='NurbsTrimmedSurface')
                ">
      <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
      <xsl:text>]</xsl:text>
      <!-- <xsl:text> # local-name()=</xsl:text><xsl:value-of select="local-name()"/> -->
      <xsl:text>&#10;</xsl:text>
    </xsl:if>
  </xsl:if>
  <!-- process any child ROUTEs after ] close right bracket -->
  <xsl:apply-templates select="ROUTE">
    <xsl:with-param name="indent" select="$indent"/>
  </xsl:apply-templates>
  <!-- output fieldValues that contain @USE last in case USEd nodes are referenced in adjacent siblings. -->
  <xsl:apply-templates select="fieldValue"> <!-- [@name!='children'] -->
    <xsl:with-param name="indent" select="$indent + 2"/>
  </xsl:apply-templates>
  <!-- contained content for Script node is scripting code and output as part of url, following regular @url (if any) -->
  <xsl:if test="(local-name()='Script')"><!-- ignore $EPnodeType='Script' or $nodeType='Script' since it may represent something else -->
    <xsl:variable name="url" select="@url"/>
    <!-- ensure inputOnly events have a corresponding Script method in contained ecmascript: source -->
    <xsl:if test="contains(@url,'ecmascript:') or contains(normalize-space(string(.)),'ecmascript:')">
      <xsl:for-each select="field[@accessType='inputOnly']">
        <xsl:if test="not(contains(normalize-space(../@url),concat('function ',@name,' '))) and
                      not(contains(normalize-space(../@url),concat('function ',@name,'('))) and
                      not(contains(normalize-space(../.),   concat('function ',@name,' '))) and
                      not(contains(normalize-space(../.),   concat('function ',@name,'(')))">
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:value-of select="@accessType" />
              <xsl:text> field '</xsl:text>
              <xsl:value-of select="@name" />
              <xsl:text>' has no input-event method definition 'function </xsl:text>
              <xsl:value-of select="@name" />
              <xsl:text> (</xsl:text>
              <xsl:value-of select="@type" />
              <xsl:text>Value, timestamp) { }' in contained ecmascript: code</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(..)"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
      </xsl:for-each>
      <xsl:for-each select="field[(@accessType='outputOnly') or (@accessType='initializeOnly')]">
        <xsl:if test="(contains(normalize-space(../@url),concat('function ',@name,' '))) or
                      (contains(normalize-space(../@url),concat('function ',@name,'('))) or
                      (contains(normalize-space(../.),   concat('function ',@name,' '))) or
                      (contains(normalize-space(../.),   concat('function ',@name,'(')))">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:value-of select="@accessType" />
              <xsl:text> field '</xsl:text>
              <xsl:value-of select="@name" />
              <xsl:text>' has an illegal inputOnly-event definition 'function </xsl:text>
              <xsl:value-of select="@name" />
              <xsl:text> () { }' in contained ecmascript: code</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(..)"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
      </xsl:for-each>
      <xsl:variable name="mungedScriptFilter">
        <xsl:text>=.,:;()[]{}-+/*@#$%^&quot;&apos;&gt;&lt;&amp;~|</xsl:text>
      </xsl:variable>
      <!-- <xsl:message><xsl:value-of select="$mungedScriptFilter" /><xsl:text> length=</xsl:text><xsl:value-of select="string-length($mungedScriptFilter)" /></xsl:message> -->
      <xsl:for-each select="field[(@accessType='initializeOnly')]">
        <!-- translate delimiting tokens to whitespace in order to isolate field name in contained Script -->
        <!-- <xsl:message>
              <xsl:value-of select="concat(normalize-space(translate(../.,   $mungedScriptFilter,'                             ')),' ')" />
        </xsl:message>
        -->
        <xsl:if test=" not(contains(concat(normalize-space(translate(../@url,$mungedScriptFilter,'                             ')),' '),concat(' ', @name,' '))) and
                       not(contains(concat(normalize-space(translate(../.,   $mungedScriptFilter,'                             ')),' '),concat(' ', @name,' ')))">
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:value-of select="local-name(..)" />
              <xsl:text> </xsl:text>
              <xsl:value-of select="@accessType" />
              <xsl:text> field '</xsl:text>
              <xsl:value-of select="@name" />
              <xsl:text>' is not referenced in contained ecmascript: code</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(..)"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
      </xsl:for-each>
      <!-- note: must exclude == tests, and add conditions for subscripts[i][j], for this test to work thoroughly -->
      <xsl:for-each select="field[@accessType='outputOnly']">
        <xsl:if test="not(contains(normalize-space(../@url),concat(' ',@name,' =')))  and
                      not(contains(normalize-space(../@url),concat(' ',@name, '=')))  and
                      not(contains(normalize-space(../.),   concat(' ',@name,' =')))  and
                      not(contains(normalize-space(../.),   concat(' ',@name, '=')))  and
                      not(contains(normalize-space(../@url),concat(' ',@name,' =='))) and
                      not(contains(normalize-space(../@url),concat(' ',@name, '=='))) and
                      not(contains(normalize-space(../.),   concat(' ',@name,' =='))) and
                      not(contains(normalize-space(../.),   concat(' ',@name, '=='))) and
                      not(contains(normalize-space(../@url),concat(' ',@name,' ['))) and
                      not(contains(normalize-space(../@url),concat(' ',@name, '['))) and
                      not(contains(normalize-space(../.),   concat(' ',@name,' ['))) and
                      not(contains(normalize-space(../.),   concat(' ',@name, '[')))">
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:value-of select="local-name(..)" />
              <xsl:text> </xsl:text>
              <xsl:value-of select="@accessType" />
              <xsl:text> field '</xsl:text>
              <xsl:value-of select="@name" />
              <xsl:text>' has no assignment statement such as '</xsl:text>
              <xsl:value-of select="@name" />
              <xsl:if test="starts-with(@type,'MF')">
                <xsl:text>[someIndex]</xsl:text>
              </xsl:if>
              <xsl:text>=(some</xsl:text>
              <xsl:value-of select="@type" />
              <xsl:text>Expression);' in contained ecmascript: code</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="local-name(..)"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
      </xsl:for-each>
      <xsl:if test="contains(normalize-space(@url),' print (') or contains(normalize-space(@url),' print(') or
                    contains(normalize-space(string(.)),   ' print (') or contains(normalize-space(string(.)),   ' print(')">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>print(...) function should be Browser.print(...) </xsl:text>
            <xsl:text> in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="contains(normalize-space(@url),' var ') or
                    contains(normalize-space(string(.)),   ' var ') ">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> </xsl:text>
            <xsl:text>'var' declarations of variables are not persistent</xsl:text>
            <xsl:text> in contained ecmascript: code, values are lost after each call.  Use &lt;field&gt; definitions instead.</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="(contains(translate(@url,' ',''),'functioninitialize(') and not(contains(translate(@url,' ',''),'functioninitialize()'))) or
                    (contains(translate(.   ,' ',''),'functioninitialize(') and not(contains(translate(.   ,' ',''),'functioninitialize()'))) ">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>function initialize() method signature cannot include any passed parameters.</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- count brackets, parentheses and quote marks -->
      <!-- { } -->
      <xsl:variable name="countLeftSquigglyBracketsUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,'{',''))"/>
      </xsl:variable>
      <xsl:variable name="countLeftSquigglyBracketsCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),'{',''))"/>
      </xsl:variable>
      <xsl:variable name="countRightSquigglyBracketsUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,'}',''))"/>
      </xsl:variable>
      <xsl:variable name="countRightSquigglyBracketsCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),'}',''))"/>
      </xsl:variable>
      <!-- [ ] -->
      <xsl:variable name="countLeftSquareBracketsUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,'[',''))"/>
      </xsl:variable>
      <xsl:variable name="countLeftSquareBracketsCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),'[',''))"/>
      </xsl:variable>
      <xsl:variable name="countRightSquareBracketsUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,']',''))"/>
      </xsl:variable>
      <xsl:variable name="countRightSquareBracketsCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),']',''))"/>
      </xsl:variable>
      <!-- ( ) -->
      <xsl:variable name="countLeftParenthesesUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,'(',''))"/>
      </xsl:variable>
      <xsl:variable name="countLeftParenthesesCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),'(',''))"/>
      </xsl:variable>
      <xsl:variable name="countRightParenthesesUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,')',''))"/>
      </xsl:variable>
      <xsl:variable name="countRightParenthesesCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),')',''))"/>
      </xsl:variable>
      <!-- ' " -->
      <xsl:variable name="apos">
        <xsl:text>'</xsl:text>
      </xsl:variable>
      <xsl:variable name="countSingleQuoteUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,$apos,''))"/>
      </xsl:variable>
      <xsl:variable name="countSingleQuoteCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),$apos,''))"/>
      </xsl:variable>
      <xsl:variable name="countDoubleQuoteUrl">
        <xsl:value-of select="string-length($url) - string-length(translate(@url,'&#34;',''))"/>
      </xsl:variable>
      <xsl:variable name="countDoubleQuoteCDATA">
        <xsl:value-of select="string-length(string(.)) - string-length(translate(string(.),'&#34;',''))"/>
      </xsl:variable>
<!--
      <xsl:message>
            <xsl:text>$countLeftSquigglyBracketsCDATA=</xsl:text>
            <xsl:value-of select="$countLeftSquigglyBracketsCDATA"/>
      </xsl:message>
      <xsl:message>
            <xsl:text>$countRightSquigglyBracketsCDATA=</xsl:text>
            <xsl:value-of select="$countRightSquigglyBracketsCDATA"/>
      </xsl:message>
      <xsl:message>
            <xsl:text>$countSingleQuoteCDATA=</xsl:text>
            <xsl:value-of select="$countSingleQuoteCDATA"/>
      </xsl:message>
      <xsl:message>
            <xsl:text>$countDoubleQuoteCDATA=</xsl:text>
            <xsl:value-of select="$countDoubleQuoteCDATA"/>
      </xsl:message>
-->
      <xsl:if test="($countLeftSquigglyBracketsUrl != $countRightSquigglyBracketsUrl)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched squiggly brackets {</xsl:text>
            <xsl:value-of select="$countLeftSquigglyBracketsUrl"/>
            <xsl:text> left, </xsl:text>
            <xsl:value-of select="$countRightSquigglyBracketsUrl"/>
            <xsl:text> right</xsl:text>
            <xsl:text>} in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countLeftSquigglyBracketsCDATA != $countRightSquigglyBracketsCDATA)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched squiggly brackets {</xsl:text>
            <xsl:value-of select="$countLeftSquigglyBracketsCDATA"/>
            <xsl:text> left, </xsl:text>
            <xsl:value-of select="$countRightSquigglyBracketsCDATA"/>
            <xsl:text> right</xsl:text>
            <xsl:text>} in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countLeftSquareBracketsUrl != $countRightSquareBracketsUrl)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched square brackets [</xsl:text>
            <xsl:value-of select="$countLeftSquareBracketsUrl"/>
            <xsl:text> left, </xsl:text>
            <xsl:value-of select="$countRightSquareBracketsUrl"/>
            <xsl:text> right</xsl:text>
            <xsl:text>] in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countLeftSquareBracketsCDATA != $countRightSquareBracketsCDATA)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched square brackets [</xsl:text>
            <xsl:value-of select="$countLeftSquareBracketsCDATA"/>
            <xsl:text> left, </xsl:text>
            <xsl:value-of select="$countRightSquareBracketsCDATA"/>
            <xsl:text> right</xsl:text>
            <xsl:text>] in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countLeftParenthesesUrl != $countRightParenthesesUrl)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched parentheses (</xsl:text>
            <xsl:value-of select="$countLeftParenthesesUrl"/>
            <xsl:text> left, </xsl:text>
            <xsl:value-of select="$countRightParenthesesUrl"/>
            <xsl:text> right</xsl:text>
            <xsl:text>) in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countLeftParenthesesCDATA != $countRightParenthesesCDATA)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched parentheses (</xsl:text>
            <xsl:value-of select="$countLeftParenthesesCDATA"/>
            <xsl:text> left, </xsl:text>
            <xsl:value-of select="$countRightParenthesesCDATA"/>
            <xsl:text> right</xsl:text>
            <xsl:text>) in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countSingleQuoteUrl mod 2) != 0">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched (i.e. odd number of) 'single quote' marks </xsl:text>
            <xsl:text> in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countSingleQuoteCDATA mod 2) != 0">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched (i.e. odd number of) 'single quote' marks </xsl:text>
            <xsl:text> in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countDoubleQuoteUrl mod 2) != 0">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched  (i.e. odd number of) "double quote" marks </xsl:text>
            <xsl:text> in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="($countDoubleQuoteCDATA mod 2) != 0">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>mismatched  (i.e. odd number of) "double quote" marks </xsl:text>
            <xsl:text> in contained ecmascript: code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(.)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:if>
    <!-- done with bracket and parentheses checks -->
    <xsl:if test="not(@USE) and ((normalize-space(@url)='' or normalize-space(@url)=' ') and (normalize-space(string(.))='' or normalize-space(string(.))=' '))">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Script node has neither url nor contained code in CDATA section</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
    </xsl:if>
    <xsl:choose>
      <xsl:when test="starts-with(normalize-space(@url),'javascript:') or starts-with(normalize-space(string(.)),'javascript:')">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Script code language identifier must begin with 'ecmascript:' for X3D (rather than 'javascript:' for VRML97).</xsl:text>
            <xsl:if test="$fileEncoding!='ClassicVRML'">
              <xsl:text> Conversion of 'ecmascript:' to 'javascript:' is performed automatically when translating from X3D to VRML97.</xsl:text>
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:when>
      <xsl:when test="(contains(@url,'.class')) or (contains(@url,'.jar')) or (contains(@url,'.js'))">
        <!-- no action required, refers to external Java class or external javascript (ecmascript) -->
      </xsl:when>
      <xsl:when test="(@url and not(contains(@url,'ecmascript:')))">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>X3D Script code must begin with 'ecmascript:' header.</xsl:text>
            <xsl:if test="$fileEncoding!='ClassicVRML'">
              <xsl:text> Conversion of 'ecmascript:' to 'javascript:' is performed automatically when translating from X3D to VRML97.</xsl:text>
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:when>
    </xsl:choose>
    <xsl:if test="@url and (starts-with(normalize-space(@url),'ecmascript:') or starts-with(normalize-space(@url),'javascript:')
    			    or normalize-space(string(.)))">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>Note that Script node includes both url and CDATA section of contained code</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
    </xsl:if>
    <xsl:if test="not(normalize-space(string(.))) and (starts-with(normalize-space(@url),'ecmascript:') or starts-with(normalize-space(@url),'javascript:'))">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>Instead of using Script url to hold</xsl:text>
            <xsl:choose>
              <xsl:when test="starts-with(normalize-space(@url),'ecmascript:')">
              	<xsl:text> ecmascript:</xsl:text>
              </xsl:when>
              <xsl:when test="starts-with(normalize-space(@url),'javascript:')">
              	<xsl:text> ecmascript:</xsl:text>
              </xsl:when>
            </xsl:choose>
            <xsl:text> code, place contained source code in Script child CDATA section</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
    </xsl:if>
    <xsl:if test="@directOutput='true' and not((field/@type='SFNode') or (field/@type='MFNode'))">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>Script attribute directOutput='true' only appropriate when field(s) of type SFNode/MFNode provided for direct access</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
    </xsl:if>
    <xsl:if test="not(@directOutput='true') and ((field/@type='SFNode') or (field/@type='MFNode'))">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>Script attribute directOutput='true' usually needed when field(s) of type SFNode/MFNode are present.  directOutput false means Script is not allowed to modify referenced nodes.</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
    </xsl:if>
    <xsl:text>&#10;	url [ </xsl:text>
    <!-- first is url value(s), presented first so that external (possibly updated) code takes precedence -->
    <xsl:choose>
      <!-- wrap url in quote marks when needed -->
      <xsl:when test="@url and not(starts-with(normalize-space(@url),'&quot;'))">
        <xsl:text>&quot;</xsl:text>
        <xsl:value-of select="@url" />
        <xsl:text>&quot;</xsl:text>
        <xsl:text>&#10;</xsl:text>
      </xsl:when>
      <!-- url quote marks not needed -->
      <xsl:when test="@url">
        <xsl:value-of select="@url" />
        <xsl:text>&#10;</xsl:text>
      </xsl:when>
    </xsl:choose>
    <!-- next is contained code -->
    <xsl:if test="not(normalize-space(string(.))='')">
      <xsl:if test="not(starts-with(normalize-space(string(.)),'&quot;'))">
        <xsl:text>&quot;</xsl:text>
      </xsl:if>
      <!-- CosmoPlayer url must start immediately with 'javascript:' or else it fails.  Update to handle other script language source when supported. -->
      <xsl:choose>
        <xsl:when test="$fileEncoding='ClassicVRML'">
          <xsl:text>ecmascript:</xsl:text>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>javascript:</xsl:text>
        </xsl:otherwise>
      </xsl:choose>
             <!-- 'Browser.' is stripped from 'Browser.print' entries.  Only output warning first time. -->
             <xsl:if test="contains(string(.),'Browser.print')">
               <xsl:text> // ### X3D Browser.print() not supported by all VRML97 viewers, instead simply using print()&#10;</xsl:text>
             </xsl:if>
      <!-- output script code -->
      <xsl:for-each select="text()">
        <xsl:choose>
           <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and preceding::field"></xsl:when><!--<xsl:text>// stripped LF before field&#10;</xsl:text> -->
           <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and following::field"></xsl:when><!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
           <xsl:when test="substring-before(.,'ecmascript:') or 'e'=substring-before(.,'cmascript:')">
             <xsl:call-template name="strip-Browser-print-prefix-recurse">
           	<xsl:with-param name="inputValue">
           	  <xsl:value-of select="substring-after(.,'ecmascript:')" disable-output-escaping="yes"/>
           	</xsl:with-param>
                <xsl:with-param name="indent" select="$indent"/>
             </xsl:call-template>
           </xsl:when>
           <xsl:when test="substring-before(.,'javascript:') or 'j'=substring-before(.,'avascript:')">
             <xsl:call-template name="strip-Browser-print-prefix-recurse">
           	<xsl:with-param name="inputValue">
           	  <xsl:value-of select="substring-after(.,'javascript:')" disable-output-escaping="yes"/>
           	</xsl:with-param>
                <xsl:with-param name="indent" select="$indent"/>
             </xsl:call-template>
           </xsl:when>
           <xsl:otherwise>
             <xsl:call-template name="strip-Browser-print-prefix-recurse">
           	<xsl:with-param name="inputValue">
           	  <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
           	</xsl:with-param>
                <xsl:with-param name="indent" select="$indent"/>
             </xsl:call-template>
           </xsl:otherwise><!--translate(,'javascript:','')-->
        </xsl:choose>
      </xsl:for-each>
      <xsl:text>&#10;</xsl:text>
      <xsl:if test="not(starts-with(normalize-space(string(.)),'&quot;'))">
        <xsl:text>&quot;</xsl:text>
      </xsl:if>
    </xsl:if>
    <xsl:text> ]&#10;</xsl:text>
  </xsl:if>
  <!-- Metadata nodes not available under all nodes in VRML97 -->
  <xsl:if test="$LeafNodeMetadataChildFound and not($precedingLeafNodeMetadataChildFound)">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>Metadata nodes are not supported as a child of current node </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text> in VRML97 encoding.  The child </xsl:text>
        <xsl:value-of select="local-name(*[starts-with(local-name(),'Metadata')][1])"/>
        <xsl:text> node has been moved to immediately follow the parent </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>.</xsl:text>
        <xsl:if test="$followingLeafNodeMetadataChildFound">
            <xsl:text> Additional Metadata* leaf node(s) follow that are similarly adjusted.</xsl:text>
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:if test="@DEF">
          <xsl:text> DEF=&quot;</xsl:text>
          <xsl:value-of select="@DEF"/>
          <xsl:text>&quot;</xsl:text>
        </xsl:if>
        <xsl:if test="@name">
          <xsl:text> name=&quot;</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text>&quot;</xsl:text>
        </xsl:if>
        <xsl:if test="@title">
          <xsl:text> title=&quot;</xsl:text>
          <xsl:value-of select="@title"/>
          <xsl:text>&quot;</xsl:text>
        </xsl:if>
        <xsl:text>/&gt; with parent </xsl:text>
        <xsl:value-of select="local-name(..)"/>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
    <!-- close node here, rather than later -->
    <xsl:text>}&#10; ### closing node early, pushing metadata node afterwards as peer instead&#10;</xsl:text>
    <xsl:apply-templates select="* | comment()"/>
    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
  </xsl:if>
  <!-- special handling for MetadataSet -->
  <!-- <xsl:text>## ** special handling for MetadataSet...&#10;</xsl:text> -->
  <xsl:if test="(local-name()='MetadataSet') and comment()">
    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
    <xsl:apply-templates select="comment()"/>
  </xsl:if>
  <!-- handled elsewhere
  <xsl:if test="local-name()='MetadataSet' and (*[not(@containerField='value')])">
    <xsl:call-template name="print-indent"><xsl:with-param name="indent + 2" select="$indent"/></xsl:call-template>
    <xsl:text> metadata </xsl:text>
    <xsl:apply-templates select="*[not(@containerField='value')]">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
  -->
  <xsl:if test="local-name()='MetadataSet' and (*[@containerField='value'])">
    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
    <xsl:text>value [&#10;</xsl:text>
    <xsl:apply-templates select="*[@containerField='value']">
      <xsl:with-param name="indent" select="$indent + 4"/>
    </xsl:apply-templates>
    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent + 2"/></xsl:call-template>
    <xsl:text>]&#10;</xsl:text>
  </xsl:if>
  <!-- if not a USE or proxy, then add node close } -->
  <xsl:if test="not(@USE) and not(local-name()='USE') and not(local-name()='proxy') and not($LeafNodeMetadataChildFound) and
  	not(local-name(..)='GeoLOD'        and @containerField='rootNode') and
  	not(local-name(..)='HAnimSegment'  and @containerField='displacers') and
  	not(local-name(..)='HAnimHumanoid' and (local-name()='skinCoord'    or local-name()='skinNormal')) and
  	not(local-name(..)='HAnimHumanoid' and (local-name()='humanoidBody' or local-name()='skeleton' or local-name()='skin' or local-name()='skinCoord' or local-name()='skinNormal')) and
  	not(local-name(.) ='IS') and
  	not(local-name(..)='IS'  and local-name()='connect')">
    <!-- <xsl:text># local-name()=</xsl:text><xsl:value-of select="local-name()"/><xsl:text>&#10;</xsl:text> -->
    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
    <xsl:text>}&#10;</xsl:text>
  </xsl:if>
  <!-- combination-node checks -->
  <xsl:if test="(local-name(..)='ElevationGrid') and (local-name(.)='Color')">
    <xsl:variable name="normalizeSpaceValue">
      <!-- remove commas, which are treated as whitespace in VRML attributes -->
      <xsl:value-of select="normalize-space(translate(@color,',',' '))"/>
    </xsl:variable>
    <xsl:variable name="nonSpaceValue" select="translate($normalizeSpaceValue,' ','')"/>
    <xsl:variable name="tupleCount">
      <xsl:choose>
        <xsl:when test="$nonSpaceValue">
          <xsl:value-of select="(string-length($normalizeSpaceValue) - string-length($nonSpaceValue)) + 1"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>0</xsl:text>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>
    <xsl:if test="(../@colorPerVertex='false') and ((number(../@xDimension)-1)*(number(../@zDimension)-1) > ($tupleCount div 3))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Insufficient colors (colorPerVertex='false' means 1 color per quad) in </xsl:text>
          <xsl:value-of select="local-name(.)"/>
          <xsl:text> for parent </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, need (xDimension-1=</xsl:text>
          <xsl:value-of select="number(../@xDimension)-1"/>
          <xsl:text>)*(zDimension-1=</xsl:text>
          <xsl:value-of select="number(../@zDimension)-1"/>
          <xsl:text>)= size </xsl:text>
          <xsl:value-of select="(number(../@xDimension)-1)*(number(../@zDimension)-1)"/>
          <xsl:text> > ($tupleCount div 3)=</xsl:text>
          <xsl:value-of select="($tupleCount div 3)"/>
          <xsl:text> color values</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name(.)"/>
          <xsl:text> node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="(../@colorPerVertex='true' or not(../@colorPerVertex)) and @color and ((number(../@xDimension))*(number(../@zDimension)) > ($tupleCount div 3))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Insufficient colors (colorPerVertex='true') in </xsl:text>
          <xsl:value-of select="local-name(.)"/>
          <xsl:text> for parent </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, need (xDimension=</xsl:text>
          <xsl:value-of select="number(../@xDimension)"/>
          <xsl:text>)*(zDimension=</xsl:text>
          <xsl:value-of select="number(../@zDimension)"/>
          <xsl:text>)= size </xsl:text>
          <xsl:value-of select="(number(../@xDimension))*(number(../@zDimension))"/>
          <xsl:text> > ($tupleCount div 3)=</xsl:text>
          <xsl:value-of select="($tupleCount div 3)"/>
          <xsl:text> color values</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name(.)"/>
          <xsl:text> node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <xsl:if test="(local-name()='Anchor' or local-name()='AudioClip' or local-name()='CylinderSensor' or local-name()='PlaneSensor' or local-name()='SphereSensor' or local-name()='TouchSensor' or local-name()='Viewpoint') and (not(@description) and not(normalize-space(@description)='') and not(@USE) and not(IS/connect/@nodeField='description'))">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>need description attribute, such as </xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
        <xsl:value-of select="local-name()" />
        <xsl:text> description='</xsl:text>
        <xsl:choose>
          <xsl:when test="local-name()='Anchor' and contains(@url,'#')">
            <xsl:text>select to change viewpoints</xsl:text>
          </xsl:when>
          <xsl:when test="local-name()='Anchor' and contains(@parameter,'target=')">
            <xsl:text>select to load a separate window</xsl:text>
          </xsl:when>
          <xsl:when test="local-name()='Anchor'">
            <xsl:text>select to load a separate scene</xsl:text>
          </xsl:when>
          <xsl:when test="local-name()='AudioClip'">
            <xsl:text>sound file description</xsl:text>
          </xsl:when>
          <xsl:when test="local-name()='CylinderSensor' or local-name()='SphereSensor'">
            <xsl:text>click and drag to rotate</xsl:text>
          </xsl:when>
          <xsl:when test="local-name()='PlaneSensor'">
            <xsl:text>click and drag to move object</xsl:text>
          </xsl:when>
          <xsl:when test="local-name()='TouchSensor'">
            <xsl:text>touch to activate</xsl:text>
          </xsl:when>
          <xsl:when test="local-name()='Viewpoint'">
            <xsl:text>new viewpoint</xsl:text>
          </xsl:when>
          <xsl:otherwise>
            <xsl:text>...hint for user goes here...</xsl:text>
          </xsl:otherwise>
        </xsl:choose>
        <xsl:text>'</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[/>]]></xsl:text>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(local-name()='Anchor' or local-name()='AudioClip' or local-name()='CylinderSensor' or local-name()='PlaneSensor' or local-name()='SphereSensor' or local-name()='TouchSensor' or local-name()='Viewpoint') and (contains(@description,'_') and not(contains(@description,' ')))">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text>description attribute can contain whitespace instead of _underscore_ characters:  description='</xsl:text>
        <xsl:value-of select="@description" />
        <xsl:text>'</xsl:text>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- Bindable node behavior not guaranteed as a USE node -->
  <xsl:if test="(local-name()='Viewpoint' or local-name()='Background' or local-name()='TextureBackground' or local-name()='Fog' or local-name()='LocalFog' or local-name()='NavigationInfo') and (@USE!='') and (local-name(..)!='field')">
      <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:value-of select="local-name()" />
              <xsl:text> is bindable, avoid copying as a USE node</xsl:text>
       </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name()" />
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
  </xsl:if>
  <!-- Viewpoint hiding is OK under a ViewpointGroup node -->
  <xsl:if test="not(local-name()='Viewpoint' and (ancestor::*[(local-name()='ProtoInstance' and @name='ViewpointGroup') or local-name()='ViewpointGroup']))">
    <!-- Bindable node behavior not guaranteed under a LOD node -->
    <xsl:if test="(local-name()='Viewpoint' or local-name()='Background' or local-name()='TextureBackground' or local-name()='Fog' or local-name()='LocalFog' or local-name()='NavigationInfo') and (ancestor::*[local-name()='LOD'])">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:value-of select="local-name()" />
          <xsl:text> behavior not guaranteed as child (or descendant) of LOD node</xsl:text>
          <xsl:if test="ancestor::*[local-name()='LOD']/@DEF">
            <xsl:text> [LOD DEF='</xsl:text>
            <xsl:value-of select="ancestor::*[local-name()='LOD']/@DEF" />
            <xsl:text>'] </xsl:text>
          </xsl:if>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <!-- Bindable node behavior not guaranteed under a Switch node -->
    <xsl:if test="(local-name()='Viewpoint' or local-name()='Background' or local-name()='TextureBackground' or local-name()='Fog' or local-name()='LocalFog' or local-name()='NavigationInfo') and (ancestor::*[local-name()='Switch'])">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:value-of select="local-name()" />
          <xsl:text> behavior not guaranteed as child (or descendant) of Switch node</xsl:text>
          <xsl:if test="ancestor::*[local-name()='Switch']/@DEF">
            <xsl:text> [Switch DEF='</xsl:text>
            <xsl:value-of select="ancestor::*[local-name()='Switch']/@DEF" />
            <xsl:text>']</xsl:text>
          </xsl:if>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- Check Filter Interpolator, Sensor Sequencer Toggle and Trigger nodes for existing ROUTEs in and out -->
  <!-- input checks for all of these nodes except Sensors -->
  <xsl:if test="contains(local-name(),'Filter') or contains(local-name(),'Interpolator') or contains(local-name(),'Sequencer') or contains(local-name(),'Toggle') or contains(local-name(),'Trigger')">
    <!-- avoid warnings when not helpful. note TouchSensor description is often used as a tooltip without corresponding event routing. -->
    <xsl:if test="not(//ROUTE[@toNode=$DEF]) and not(local-name()='BiquadFilter') and not((local-name(..)='field') or (local-name(..)='fieldValue')) and not(IS) and not(@USE) and not ((local-name(..)='TouchSensor') and (string-length(../@DEF) = 0))">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>no ROUTE found for </xsl:text>
          <xsl:value-of select="local-name()" />
          <xsl:text> input  </xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- output checks -->
  <xsl:if test="contains(local-name(),'Filter') or contains(local-name(),'Interpolator') or contains(local-name(),'Sensor') or contains(local-name(),'Sequencer') or contains(local-name(),'Toggle') or contains(local-name(),'Trigger')">
    <!-- TouchSensor might be used solely for popup tooltip -->
    <xsl:if test="not(//ROUTE[@fromNode=$DEF]) and not((local-name(..)='field') or (local-name(..)='fieldValue')) and not(IS) and not(@USE) and not((local-name()='TouchSensor') and (string-length(@description) > 0))">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>no ROUTE found for </xsl:text>
          <xsl:value-of select="local-name()" />
          <xsl:text> output </xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- Background node translation and scaling not affected by ancestor Transform (rotation modifications are honored) -->
  <xsl:variable name="ParentTransform" select="ancestor::*[local-name()='Transform']"/>
  <xsl:if test="(local-name()='Background') or (local-name()='TextureBackground') or (local-name()='PointLight') or (local-name()='SpotLight')">
    <xsl:if test="$ParentTransform[(@translation and @translation!='' and @translation!='0 0 0') or (@scale and @scale!='' and @scale!='1 1 1')]">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:value-of select="local-name()" />
          <xsl:choose>
              <xsl:when test="(local-name()='Background') or (local-name()='TextureBackground')">
                  <xsl:text> node not affected by translation or scaling of parent &lt;Transform</xsl:text>
              </xsl:when>
              <xsl:when test="(local-name()='PointLight') or (local-name()='SpotLight')">
                  <xsl:text> node location and radius are affected by translation and scaling of parent-hierarchy &lt;Transform</xsl:text>
              </xsl:when>
          </xsl:choose>
          <xsl:if test="$ParentTransform/@DEF">
            <xsl:text> DEF='</xsl:text>
            <xsl:value-of select="$ParentTransform/@DEF" />
            <xsl:text>'</xsl:text>
          </xsl:if>
          <xsl:if test="$ParentTransform/@translation">
            <xsl:text> translation='</xsl:text>
            <xsl:value-of select="$ParentTransform/@translation" />
            <xsl:text>'</xsl:text>
          </xsl:if>
          <xsl:if test="$ParentTransform/@scale">
            <xsl:text> scale='</xsl:text>
            <xsl:value-of select="$ParentTransform/@scale" />
            <xsl:text>' </xsl:text>
          </xsl:if>
          <xsl:text>/&gt;</xsl:text>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- Check for improper containerField - see abstract spec Table 10.4 -->
  <xsl:if test="((local-name(..)='Anchor' or local-name(..)='Billboard' or local-name(..)='Group' or local-name(..)='LOD' or local-name(..)='NurbsSet' or local-name(..)='Scene' or local-name(..)='Switch' or local-name(..)='Transform') and not(@containerField='children' or @containerField='' or not(@containerField)))
  		and not(starts-with(local-name(),'Geo'))
  		and not(starts-with(local-name(),'Metadata') and (@containerField='metadata' or @containerField='value' or @containerField='' or not(@containerField)))">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="local-name()" />
        <xsl:text> containerField='</xsl:text>
        <xsl:value-of select="@containerField" />
        <xsl:text>' is illegal, </xsl:text>
        <xsl:choose>
          <xsl:when test="starts-with(local-name(),'Metadata')">
            <xsl:text>use 'metadata' instead</xsl:text>
          </xsl:when>
          <xsl:otherwise>
            <xsl:text>use 'children' instead</xsl:text>
          </xsl:otherwise>
        </xsl:choose>
        <xsl:if test="../@DEF">
          <xsl:text> [parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="../@DEF" />
          <xsl:text>'] </xsl:text>
        </xsl:if>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(starts-with(local-name(),'Metadata') and not(@containerField='metadata' or @containerField='value' or @containerField='' or not(@containerField)))">
    <!-- TODO this warning is questionable -->
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="local-name()" />
        <xsl:text> containerField='</xsl:text>
        <xsl:value-of select="@containerField" />
        <xsl:text>' is illegal as child of </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:text> node, use 'metadata'</xsl:text>
        <xsl:if test="local-name(..)='MetadataSet'">
          <xsl:text> or 'value'</xsl:text>
        </xsl:if>
        <xsl:text> instead</xsl:text>
        <xsl:if test="../@DEF">
          <xsl:text> [parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="../@DEF" />
          <xsl:text>'] </xsl:text>
        </xsl:if>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- CAD hierarchy checks -->
  <xsl:if test="starts-with(local-name(),'CAD') and
                (local-name()='CADFace' and local-name(..)!='CADPart') or
                (local-name()='CADPart' and local-name(..)!='CADAssembly')">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="local-name()" />
        <xsl:text> has improper parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:text>, note that normal CAD hierarchy is CADAssembly/CADPart/CADFace</xsl:text>
        <xsl:if test="../@DEF">
          <xsl:text> [parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="../@DEF" />
          <xsl:text>'] </xsl:text>
        </xsl:if>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- NURBS checks -->
  <xsl:if test="starts-with(local-name(),'Coordinate') and starts-with(local-name(..),'Nurbs') and not(@containerField='controlPoint')">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="local-name()" />
        <xsl:text> containerField='</xsl:text>
        <xsl:value-of select="@containerField" />
        <xsl:text>' is illegal, use containerField='controlPoint'</xsl:text>
        <xsl:text> instead for a Coordinate node within a NURBS node</xsl:text>
        <xsl:if test="../@DEF">
          <xsl:text> [parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="../@DEF" />
          <xsl:text>'] </xsl:text>
        </xsl:if>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- better testing needed to ensure these checks work -->
  <xsl:variable name="containerFieldTest1"
  	select="((local-name(..)='Appearance') and not(@containerField='shaders' or @containerField='material' or @containerField='texture' or @containerField='textureTransform' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='Contour2D') and not(@containerField='children' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='ElevationGrid') and not(@containerField='attrib' or @containerField='fogCoord' or @containerField='color' or @containerField='normal' or @containerField='texCoord' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='GeoCoordinate' or local-name(..)='GeoPositionInterpolator' or local-name(..)='GeoTouchSensor' or local-name(..)='GeoViewpoint') and not(@containerField='geoOrigin' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='GeoElevationGrid') and not(@containerField='geoOrigin' or @containerField='color' or @containerField='normal' or @containerField='texCoord' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='GeoLOD') and not(@containerField='geoOrigin' or @containerField='children' or @containerField='rootNode' or @containerField='' or not(@containerField)))"/>
  <xsl:variable name="containerFieldTest2"
  	select="((local-name(..)='IndexedFaceSet' or local-name(..)='IndexedTriangleFanSet' or local-name(..)='IndexedTriangleSet'or local-name(..)='IndexedTriangleStripSet' 
  				or local-name(..)='TriangleFanSet' or local-name(..)='TriangleSet' or local-name(..)='TriangleStripSet') and not(@containerField='attrib' or @containerField='fogCoord' or @containerField='color' or @containerField='coord' or @containerField='normal' or @containerField='texCoord' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='IndexedLineSet' or local-name(..)='PointSet') and not(@containerField='color' or @containerField='coord' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator') and not(@containerField='controlPoint' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='NurbsPatchSurface') and not(@containerField='controlPoint' or @containerField='texCoord' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='NurbsSurfaceInterpolator') and not(@containerField='controlPoint' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='NurbsSet') and not(@containerField='geometry' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsSwungSurface') and not(@containerField='crossSectionCurve' or @containerField='trajectoryCurve' or @containerField='' or not(@containerField)))"/>
  <xsl:variable name="containerFieldTest3"
  	select="((local-name(..)='MovieTexture') and not(@containerField='texture' or @containerField='source' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='Shape') and not(@containerField='appearance' or @containerField='geometry' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='Sound') and not(@containerField='source' or @containerField='' or not(@containerField))) or
  	        ((local-name(..)='Text') and not(@containerField='fontStyle' or @containerField='' or not(@containerField))) or
  	        (starts-with(local-name(..),'Metadata') and not(@containerField='metadata' or @containerField='' or not(@containerField)))"/>
  <xsl:if test="($containerFieldTest1 or $containerFieldTest2 or $containerFieldTest3) and not(starts-with(local-name(),'Metadata'))">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="local-name()" />
        <xsl:text> containerField='</xsl:text>
        <xsl:value-of select="@containerField" />
        <xsl:text>' is illegal value</xsl:text>
        <xsl:if test="../@DEF">
          <xsl:text> [parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="../@DEF" />
          <xsl:text>'] </xsl:text>
        </xsl:if>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- test occurs earlier
  <xsl:if test="local-name()='GeoInline'">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>GeoInline is not a legal X3D node, replace with X3D Inline.  Using VRML97 GeoInline prototype instead.</xsl:text>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
  </xsl:if>
  -->
  <!-- duplicate url not a problem for Script, or for AudioClip that modifies parameters, or for Anchor links to Viewpoint #bookmark -->
  <xsl:if test="(string-length(string(@url)) > 0) and not(local-name()='Script') and not(local-name()='AudioClip') and not(local-name()='Anchor')">
    <xsl:variable name="url" select="normalize-space(string(@url))" />
<!--<xsl:variable name="DEF" select="normalize-space(@DEF)" />-->
    <xsl:variable name="currentParentProtoName"  select="ancestor::*[local-name()='ProtoDeclare']/@name" />
    <!-- <xsl:message><xsl:text>$currentParentProtoName =</xsl:text><xsl:value-of select="$currentParentProtoName"/><xsl:text>&#10;</xsl:text></xsl:message> -->
    <xsl:if test="preceding::*[normalize-space(@url)=$url] | following::*[normalize-space(@url)=$url]">
      <xsl:variable name="otherParentProtoName">
        <xsl:choose>
          <!-- not finding parent ProtoDeclare of other node properly...
          <xsl:when test="preceding::*[normalize-space(@url)=$url]">
            <xsl:variable name="precedingNode" select="preceding::*[normalize-space(@url)=$url]" />
            <xsl:value-of select="ancestor::$precedingNode[local-name()='ProtoDeclare']/@name" />
          </xsl:when> -->
          <!-- TODO:  fix these rules -->
          <xsl:when test="preceding::ProtoDeclare[*][normalize-space(@url)=$url]">
            <xsl:value-of select="preceding::ProtoDeclare[*][normalize-space(@url)=$url]/@name" />
          </xsl:when>
          <xsl:when test="following::ProtoDeclare[*][normalize-space(@url)=$url]">
            <xsl:value-of select="following::ProtoDeclare[*][normalize-space(@url)=$url]/@name" />
          </xsl:when>
        </xsl:choose>
      </xsl:variable>
      <!--<xsl:message><xsl:text>$otherParentProtoName    =</xsl:text><xsl:value-of select="$otherParentProtoName"/><xsl:text>&#10;</xsl:text></xsl:message>  -->
      <!-- no error if in different ProtoDeclare namespace(s) -->
      <xsl:if test="($currentParentProtoName=$otherParentProtoName) or (not($currentParentProtoName) and not($otherParentProtoName))">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>duplicate node found with identical url='</xsl:text>
            <xsl:value-of select="$url" />
            <xsl:text>'</xsl:text>
            <xsl:if test="$currentParentProtoName">
              <xsl:text> (within </xsl:text>
              <xsl:value-of select="$currentParentProtoName" />
              <xsl:text> namespace)</xsl:text>
            </xsl:if>
         </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name()" />
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:if>
  </xsl:if>
  <xsl:if test="
  	 ((string-length(normalize-space(string(@url)))       &gt; 0) and not(contains(string(@url),      'http://') or contains(string(@url),     'https://'))) or 
  	 ((string-length(normalize-space(string(@frontUrl)))  &gt; 0) and not(contains(string(@frontUrl), 'http://') or contains(string(@frontUrl), 'https://'))) or
  	 ((string-length(normalize-space(string(@backUrl)))   &gt; 0) and not(contains(string(@backUrl),  'http://') or contains(string(@backUrl),  'https://'))) or
  	 ((string-length(normalize-space(string(@topUrl)))    &gt; 0) and not(contains(string(@topUrl),   'http://') or contains(string(@topUrl),   'https://'))) or
  	 ((string-length(normalize-space(string(@bottomUrl))) &gt; 0) and not(contains(string(@bottomUrl),'http://') or contains(string(@bottomUrl),'https://'))) or
  	 ((string-length(normalize-space(string(@leftUrl)))   &gt; 0) and not(contains(string(@leftUrl),  'http://') or contains(string(@leftUrl),  'https://'))) or
  	 ((string-length(normalize-space(string(@rightUrl)))  &gt; 0) and not(contains(string(@rightUrl), 'http://') or contains(string(@rightUrl), 'https://')))">
    <!-- avoid Anchor links with local viewpoints/bookmarks or embedded scripts -->
    <xsl:if test="not(local-name()='Anchor' and (starts-with(@url,'#') or contains(@url,'&quot;#'))) and
    		  not(contains(@url,'ecmascript:')) and not(contains(@url,'javascript:')) and not(contains(@url,'ecmascript:')) and not(contains(@url,'http://')) and not(contains(@url,'https://')) and not(contains(@url,'ftp://')) and not(contains(@url,'mailto:'))">
<!--    		  not(local-name(..)='Background') and -->
      <xsl:variable name="url" select="normalize-space(@url)" />
      <xsl:call-template name="output-hint">
        <xsl:with-param name="hintString">
          <xsl:text>For best scene portability, append alternate online address for revised </xsl:text>
          <xsl:if test="not(local-name()='Background')">
            <xsl:text>url=' </xsl:text>
            <xsl:text>"</xsl:text>
            <xsl:value-of select="translate($url,'&quot;','')" />
            <xsl:text>" "</xsl:text>
            <xsl:choose>
              <xsl:when test="(//meta[@name='identifier']/@content) and (//meta[@name='title']/@content) and contains(//meta[@name='identifier']/@content,//meta[@name='title']/@content)">
                <xsl:value-of select="substring-before(//meta[@name='identifier']/@content,//meta[@name='title']/@content)" />
              </xsl:when>
              <xsl:when test="(//meta[@name='url']/@content) and (//meta[@name='title']/@content) and contains(//meta[@name='url']/@content,//meta[@name='title']/@content)">
                <xsl:value-of select="substring-before(//meta[@name='url']/@content,//meta[@name='title']/@content)" />
              </xsl:when>
              <xsl:otherwise>
                <xsl:text>http://...address.../</xsl:text>
              </xsl:otherwise>
            </xsl:choose>
            <xsl:value-of select="translate($url,'&quot;','')" />
            <xsl:text>" '</xsl:text>
          </xsl:if>
          <xsl:if test="(local-name()='Background')">
              <xsl:text>fields:</xsl:text>
              <xsl:if test="(@frontUrl  and (string-length(normalize-space(@frontUrl))  &gt; 0) and not(contains(@frontUrl, 'http://') or contains(@frontUrl, 'https://')))">
                <xsl:text> frontUrl</xsl:text>
              </xsl:if>
              <xsl:if test="(@backUrl  and (string-length(normalize-space(@backUrl))  &gt; 0) and not(contains(@backUrl, 'http://') or contains(@backUrl, 'https://')))">
                <xsl:text> backUrl</xsl:text>
              </xsl:if>
              <xsl:if test="(@leftUrl  and (string-length(normalize-space(@leftUrl))  &gt; 0) and not(contains(@leftUrl, 'http://') or contains(@leftUrl, 'https://')))">
                <xsl:text> leftUrl</xsl:text>
              </xsl:if>
              <xsl:if test="(@rightUrl  and (string-length(normalize-space(@rightUrl))  &gt; 0) and not(contains(@rightUrl, 'http://') or contains(@rightUrl, 'https://')))">
                <xsl:text> rightUrl</xsl:text>
              </xsl:if>
              <xsl:if test="(@topUrl  and (string-length(normalize-space(@topUrl))  &gt; 0) and not(contains(@topUrl, 'http://') or contains(@topUrl, 'https://')))">
                <xsl:text> topUrl</xsl:text>
              </xsl:if>
              <xsl:if test="(@bottomUrl  and (string-length(normalize-space(@bottomUrl))  &gt; 0) and not(contains(@bottomUrl, 'http://') or contains(@bottomUrl, 'https://')))">
                <xsl:text> bottomUrl</xsl:text>
              </xsl:if>
          </xsl:if>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- check for duplicated child nodes under Appearance (since DTD and schema content models no longer guarantees singletons) -->
  <xsl:if test="(local-name()='Appearance')">
    <xsl:if         test="count(Material) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one Material node provided as child of Appearance:  </xsl:text>
          <xsl:for-each select="Material">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="TextureNodeList" select="*[local-name()='Composed3DTexture' or local-name()='ComposedCubeMapTexture' or local-name()='GeneratedCubeMapTexture' or local-name()='ImageTexture' or local-name()='ImageTexture3D' or local-name()='ImageCubeMapTexture' or local-name()='MovieTexture' or local-name()='MultiTexture' or local-name()='PixelTexture' or local-name()='Pixel3DTexture']"/>
    <xsl:if         test="count($TextureNodeList) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one Texture node provided as child of Appearance:  </xsl:text>
           <xsl:for-each select="$TextureNodeList">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="TextureTransformNodeList" select="*[local-name()='MultiTextureTransform' or local-name()='TextureMatrixTransform' or local-name()='TextureTransform' or local-name()='TextureTransform3D']"/>
    <xsl:if test="count($TextureTransformNodeList) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one TextureTransform node provided as child of Appearance:  </xsl:text>
          <xsl:for-each select="$TextureTransformNodeList">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- check for duplicated child nodes under X3DComposedGeometryNodes (since DTD and schema content models no longer guarantees singletons) -->   
  <xsl:if test="(local-name()='ElevationGrid' or local-name()='IndexedFaceSet' or local-name()='IndexedQuadSet' or local-name()='IndexedTriangleFanSet'  or local-name()='IndexedTriangleSet'  or local-name()='IndexedTriangleStripSet' or local-name()='QuadSet' or local-name()='TriangleFanSet' or local-name()='TriangleSet' or local-name()='TriangleStripSet')">
    <xsl:variable name="ColorNodeList" select="*[local-name()='Color' or local-name()='ColorRGBA']"/>
    <xsl:if test="count($ColorNodeList) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one Color/ColorRGBA node provided as child of </xsl:text>
          <xsl:value-of select="local-name()" />
          <xsl:text>:  </xsl:text>
          <xsl:for-each select="$ColorNodeList">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="CoordNodeList" select="*[local-name()='Coordinate' or local-name()='CoordinateDouble' or local-name()='GeoCoordinate']"/>
    <xsl:if test="count($CoordNodeList) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one Coordinate/CoordinateDouble/GeoCoordinate node provided as child of </xsl:text>
          <xsl:value-of select="local-name()" />
          <xsl:text>:  </xsl:text>
          <xsl:for-each select="$CoordNodeList">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="FogCoordNodeList" select="*[local-name()='FogCoordinate']"/>
    <xsl:if test="count($FogCoordNodeList) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one FogCoordinate node provided as child of </xsl:text>
          <xsl:value-of select="local-name()" />
          <xsl:text>:  </xsl:text>
          <xsl:for-each select="$FogCoordNodeList">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="NormalNodeList" select="*[local-name()='Normal']"/>
    <xsl:if test="count($NormalNodeList) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one Normal node provided as child of </xsl:text>
          <xsl:value-of select="local-name()" />
          <xsl:text>:  </xsl:text>
          <xsl:for-each select="$NormalNodeList">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="TexCoordNodeList" select="*[local-name()='TextureCoordinate' or local-name()='TextureCoordinate3D' or local-name()='TextureCoordinate4D' or local-name()='TextureCoordinateGenerator' or local-name()='MultiTextureCoordinate' or local-name()='NurbsTextureCoordinate']"/>
    <xsl:if test="count($TexCoordNodeList) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>More than one TextureCoordinate node provided as child of </xsl:text>
          <xsl:value-of select="local-name()" />
          <xsl:text>:  </xsl:text>
          <xsl:for-each select="$TexCoordNodeList">
            <xsl:text> &lt;</xsl:text>
            <xsl:value-of select="local-name()" />
            <xsl:if test="@DEF">
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="@DEF" />
              <xsl:text>'</xsl:text>
            </xsl:if>
            <xsl:text>/&gt;</xsl:text>
          </xsl:for-each>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name()" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- finally all done translating this node -->
</xsl:template>


<!-- ****** recurse through each of the attributes ****** -->
<xsl:template match="@*">
  <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
    <!-- check for common errors -->
    <xsl:if test="local-name()='url' and (contains(string(.),'/.x3d') or contains(string(.),'&quot;.x3d&quot;') or (string(.)='.x3d'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>.x3d is not a valid file name (</xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>')</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="local-name()='url' and (contains(string(.),'/.x3dv') or contains(string(.),'&quot;.x3dv&quot;') or (string(.)='.x3dv'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>.x3dv is not a valid file name (</xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>')</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="local-name()='url' and (contains(string(.),'/.x3db') or contains(string(.),'&quot;.x3db&quot;') or (string(.)='.x3db'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>.x3db is not a valid file name (</xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>')</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="local-name()='IS'">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>IS attribute no longer legal X3D (</xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>')</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="(local-name(..)='field') and (local-name()='USE')">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>USE attribute in field definition is no longer legal X3D (</xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>')</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="(local-name(..)='Collision') and (local-name()='collide')">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>'collide' field in Collision node is no longer legal X3D, use 'enabled' instead.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="(local-name(..)='EspduTransform' or contains(local-name(..),'Pdu')) and starts-with(local-name(),'trace')">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:value-of select="local-name()" />
          <xsl:text> is not a legal attribute</xsl:text>
       </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <!-- no values allowed for fields with accessType inputOnly, outputOnly -->
    <xsl:if test="(string-length(string(.)) > 0) and
    		 ((starts-with(local-name(),'set_')) or
    		  (contains(local-name(),'_changed')) or
    		  (local-name()='bindTime') or
    		  (local-name()='isBound') or
    		  (contains(local-name(..),'Sensor')	and (local-name()='isActive' or local-name()='enterTime' or local-name()='exitTime')) or
    		  (contains(local-name(..),'Sequencer')	and (local-name()='previous' or local-name()='next')) or
    		  (local-name(..)='AudioClip'		and (local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused')) or
    		  (local-name(..)='BooleanFilter'	and (contains(local-name(),'input'))) or
    		  (local-name(..)='BooleanTrigger'	and (local-name()='triggerTrue')) or
    		  (local-name(..)='Collision'		and (local-name()='collideTime')) or
    		  (local-name(..)='IntegerTrigger'	and (local-name()='triggerValue')) or
    		  (local-name(..)='KeySensor'		and (contains(local-name(),'key') or contains(local-name(),'Key'))) or
    		  (local-name(..)='LoadSensor'		and (local-name()='isLoaded' or local-name()='loadTime' or local-name()='progress')) or
    		  (local-name(..)='MovieTexture'	and (local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused')) or
    		  (local-name(..)='StringSensor'	and (local-name()='enteredText' or local-name()='finalText')) or
    		  (local-name(..)='TimeSensor'		and (local-name()='cycleTime' or local-name()='time' or local-name()='elapsedTime' or local-name()='isPaused')) or
    		  (local-name(..)='TimeTrigger'		and (local-name()='triggerTime')) or
    		  (local-name(..)='TouchSensor'		and (local-name()='isOver' or local-name()='touchTime')))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>cannot assign values to inputOnly/outputOnly fields (</xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>')</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>node </xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text>, attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
  <!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
  
        <!-- eliminate default attribute values, otherwise they will all appear in output  -->
        <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3dom.xslt X3dUnwrap.xslt X3dWrap.xslt X3dToJson.xslt X3dToPython.xslt and X3dToTurtle.xslt -->
        <!-- check values with/without .0 suffix since these are string checks and autogenerated/DOM output might have either -->
        <!-- do not check ProtoInstance fields or natively defined nodes, since they might have different user-defined defaults -->
        <!-- tool-bug workaround:  split big boolean queries into pieces to avoid overloading the Xalan/lotusxml query buffer -->
        <xsl:variable name="notImplicitEvent1"
                      select="not(local-name(..)='AudioClip'	and	(local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='isActive')) and
                      not(contains(local-name(..),'Interpolator') and (local-name()='set_fraction' or local-name()='value_changed')) and
                      not(contains(local-name(..),'Sequencer')    and (local-name()='set_fraction' or local-name()='value_changed' or local-name()='previous' or local-name()='next')) and
                      not(((local-name(..)='Background') or (local-name(..)='TextureBackground')) and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound')) and
                      not(local-name(..)='Collision' and (local-name()='isActive' or local-name()='collideTime')) and
                      not(local-name(..)='CylinderSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='rotation' or local-name()='trackPoint_changed')) and
                      not(local-name(..)='ElevationGrid'	and	local-name()='set_height') and
                      not((local-name(..)='Extrusion') and starts-with(local-name(),'set_')) and
                      not(((local-name(..)='IndexedFaceSet') or contains(local-name(..),'TriangleFanSet') or contains(local-name(..),'TriangleSet') or contains(local-name(..),'TriangleStripSet') or contains(local-name(..),'QuadSet')) and starts-with(local-name(),'set_') and contains(local-name(),'ndex')) and
                      not(local-name(..)='IndexedLineSet' and	 local-name()='lineWidth') and
                      not(local-name(..)='MovieTexture' and	(local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='isActive')) and
                      not(local-name(..)='NavigationInfo' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound'))
                      " />
        <xsl:variable name="notImplicitEvent2"
                      select="not(local-name(..)='PointSet'	and	 local-name()='pointSize') and
                      not(local-name(..)='PlaneSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='translation_changed' or local-name()='trackPoint_changed')) and
                      not(local-name(..)='ProximitySensor' and (local-name()='isActive' or local-name()='position' or local-name()='orientation' or
                      local-name()='enterTime' or local-name()='exitTime')) and
                      not(local-name(..)='SphereSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint_changed')) and
                      not(local-name(..)='TimeSensor'	and	(local-name()='isActive' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='cycleTime' or local-name()='set_fraction' or
                      local-name()='time')) and
                      not(local-name(..)='TouchSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='hitNormal_changed' or
                      local-name()='touchTime' or local-name()='hitPoint_changed' or local-name()='hitTexCoord_changed')) and
                      not(local-name(..)='Viewpoint'	  and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine')) and
                      not(local-name(..)='GeoViewpoint' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine'))
                      " />
        <xsl:variable name="notImplicitEvent3"
                      select="not(local-name(..)='BooleanTrigger'	and	(local-name()='set_triggerTime' or local-name()='triggerTrue')) and
                      not(local-name(..)='IntegerTrigger'	and	(local-name()='set_boolean' or local-name()='triggerValue'))
                      " />
        <xsl:variable name="notDefaultFieldValue1"
                      select="not( local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) and
                      not( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) and
                      not( local-name()='bboxDisplay' and string(.)='false') and
                      not( local-name()='castShadow' and string(.)='true') and
                      not( local-name()='channelCountMode' and string(.)='max') and
                      not( local-name()='channelInterpretation' and string(.)='speakers') and
                      not( local-name()='detune' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='enabled' and string(.)='true') and
                      not( local-name()='gain' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='load' and string(.)='true') and
                      not( local-name()='loop' and string(.)='false') and
                      not( local-name()='farDistance'  and (string(.)='-1' or string(.)='-1.0')) and
                      not( local-name()='nearDistance' and (string(.)='-1' or string(.)='-1.0')) and
                      not( local-name()='pitch' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='startTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='qualityFactor'  and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='autoRefresh' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='autoRefreshTimeLimit' and (string(.)='3600' or string(.)='3600.0')) and
                      not( local-name()='tailTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='shadows' and string(.)='false') and
                      not( local-name()='shadowIntensity' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='visible' and string(.)='true') and
                      not( local-name(..)='AudioClip'	and
                      ((local-name()='loop' and string(.)='false') or
                      (local-name()='pitch' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')))) and
                      not( (local-name(..)='Appearance') and ((local-name()='alphaMode' and (string(.)='AUTO')) or (local-name()='alphaCutoff' and (string(.)='0.5' or string(.)='.5')))) and
                      not( ((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) and
                      not( local-name(..)='BooleanToggle' and local-name()='toggle' and string(.)='false') and
                      not( local-name(..)='Box'	and ((local-name()='size' and (string(.)='2 2 2' or string(.)='2.0 2.0 2.0')) or (local-name()='solid' and string(.)='true'))) and
                      not( local-name(..)='Collision'	and local-name()='enabled' and string(.)='true') and
                      not( local-name(..)='Cone' and	
                      ((local-name()='bottomRadius' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='height' and (string(.)='2' or string(.)='2.0')) or
                      (local-name()='side' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='bottom' and string(.)='true')))"/>
        <xsl:variable name="notDefaultFieldValue1a"
                      select="not( local-name(..)='Cylinder' and
                      ((local-name()='height' and (string(.)='2' or string(.)='2.0')) or
                      (local-name()='radius' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='bottom' and string(.)='true') or
                      (local-name()='side' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='top' and string(.)='true'))) and
                      not( local-name(..)='CylinderSensor' and
                      ((local-name()='autoOffset' and string(.)='true') or
                      (local-name()='axisRotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='diskAngle' and string(.)='0.26179167') or
                      (local-name()='offset' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxAngle' and (string(.)='-1' or string(.)='-1.0')) or
                      (local-name()='minAngle' and (string(.)='0' or string(.)='0.0'))))" />
        <xsl:variable name="notDefaultFieldValue2"
                      select="not( local-name(..)='DirectionalLight' and
                      ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='direction' and (string(.)='0 0 -1' or string(.)='0.0 0.0 -1.0')) or
                      (local-name()='global' and string(.)='false') or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='on' and string(.)='true'))) and
                      not((local-name(..)='ElevationGrid' or local-name(..)='GeoElevationGrid') and
                      ((local-name()='ccw' and string(.)='true') or
                      (local-name()='colorPerVertex' and string(.)='true') or
                      (local-name()='normalPerVertex' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='xDimension' and (string(.)='2')) or
                      (local-name()='xSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='zDimension' and (string(.)='2')) or
                      (local-name()='zSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='yScale' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='height' and (string(.)='0 0 0 0' or string(.)='0.0 0.0 0.0 0.0')) or
                      (local-name()='geoGridOrigin' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Extrusion'	and
                      ((local-name()='beginCap' and string(.)='true') or
                      (local-name()='ccw' and string(.)='true') or
                      (local-name()='convex' and string(.)='true') or
                      (local-name()='endCap' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='scale' and (string(.)='1 1' or string(.)='1.0 1.0')) or
                      (local-name()='crossSection' and string(.)='1 1, 1 -1, -1 -1, -1 1, 1 1') or
                      (local-name()='crossSection' and string(.)='1 1 1 -1 -1 -1 -1 1 1 1') or
                      (local-name()='spine' and string(.)='0 0 0, 0 1 0') or
                      (local-name()='spine' and string(.)='0 0 0 0 1 0')))" />
        <xsl:variable name="notDefaultFieldValue3"
                      select="not(contains(local-name(..),'Fog') and 	((local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='visibilityRange' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='fogType' and string(.)='LINEAR'))) and
                      not(contains(local-name(..),'FontStyle')	and
                      ((local-name()='horizontal' and string(.)='true') or
                      (local-name()='leftToRight' and string(.)='true') or
                      (local-name()='topToBottom' and string(.)='true') or
                      (local-name()='size' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='spacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='pointSize' and (string(.)='12' or string(.)='12.0')) or
                      (local-name()='family' and string(.)='&quot;SERIF&quot;') or
                      (local-name()='justify' and string(.)='&quot;BEGIN&quot;') or
                      (local-name()='style' and string(.)='PLAIN'))) and
                      not( local-name(..)='ImageTexture' and
                      ((local-name()='repeatS' and string(.)='true') or
                      (local-name()='repeatT' and string(.)='true'))) and
                      not( local-name(..)='IndexedFaceSet' and
                      ((local-name()='ccw' and string(.)='true') or
                      (local-name()='colorPerVertex' and string(.)='true') or
                      (local-name()='convex' and string(.)='true') or
                      (local-name()='normalPerVertex' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='IndexedLineSet' and local-name()='colorPerVertex' and string(.)='true') and
                      not( local-name(..)='Inline' and ((local-name()='load' and string(.)='true') or (local-name()='global' and string(.)='false'))) and
                      not( local-name(..)='LoadSensor' and
                      ((local-name()='enabled' and string(.)='true') or
                      (local-name()='timeOut' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='LOD'	and	((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='forceTransitions' and string(.)='false'))) and
                      not(((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
                      ((local-name()='ambientIntensity' and string(.)='0.2') or
                      (local-name()='diffuseColor' and string(.)='0.8 0.8 0.8') or
                      (local-name()='emissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='metallic' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='normalScale' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='occlusionStrength' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='roughness' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='shininess' and string(.)='0.2') or
                      (local-name()='specularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='TwoSidedMaterial'	and
                      ((local-name()='backAmbientIntensity' and string(.)='0.2') or
                      (local-name()='backDiffuseColor' and string(.)='0.8 0.8 0.8') or
                      (local-name()='backEmissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='backShininess' and string(.)='0.2') or
                      (local-name()='separateBackColor' and string(.)='false') or
                      (local-name()='backSpecularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='backTransparency' and (string(.)='0' or string(.)='0.0')))) and
                      not(ends-with(local-name(..),'Material')	and
                      ((ends-with(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
                      (local-name()='baseColor' and ((string(.)='1 1 1') or (string(.)='1. 1. 1.') or (string(.)='1.0 1.0 1.0'))) or
                      (ends-with(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
                      (local-name()='emissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='metallic' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='normalScale' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='occlusionStrength' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='roughness' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='transparency' and (string(.)='0' or string(.)='0.0'))))" />
        <xsl:variable name="notDefaultFieldValue4"
                      select="not( local-name(..)='MovieTexture' and
                      ((local-name()='loop' and string(.)='false') or
                      (local-name()='speed' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='repeatS' and string(.)='true') or
                      (local-name()='repeatT' and string(.)='true'))) and
                      not( local-name(..)='NavigationInfo' and
                      ((local-name()='avatarSize' and string(.)='0.25 1.6 0.75') or
                      (local-name()='headlight' and string(.)='true') or
                      (local-name()='speed' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='transitionTime' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='transitionType' and (string(.)='&quot;LINEAR&quot;')) or
					  (local-name()='type' and (string(.)='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
                      (local-name()='visibilityLimit' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PixelTexture' and
                      ((local-name()='repeatS' and string(.)='true') or
                      (local-name()='repeatT' and string(.)='true') or
                      (local-name()='image' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='PlaneSensor' and
                      ((local-name()='autoOffset' and string(.)='true') or
					  (local-name()='axisRotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='maxPosition' and (string(.)='-1 -1' or string(.)='-1.0 -1.0')) or
                      (local-name()='minPosition' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      (local-name()='offset' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( ((local-name(..)='PointLight') or (local-name(..)='EnvironmentLight')) and
                      ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0'))or
                      (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='global' and string(.)='true') or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='on' and string(.)='true') or
                      (local-name()='radius' and (string(.)='100' or string(.)='100.0'))))" />
        <xsl:variable name="notDefaultFieldValue5"
                      select="not(ends-with(local-name(..),'ProximitySensor') and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='enabled' and string(.)='true'))) and
                      not( local-name(..)='Script' and ((local-name()='directOutput' and string(.)='false') or
                      (local-name()='mustEvaluate' and string(.)='false'))) and
                      not( local-name(..)='Sound' and ((local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='priority' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxBack' and (string(.)='10' or string(.)='10.0')) or
                      (local-name()='maxFront' and (string(.)='10' or string(.)='10.0')) or
                      (local-name()='minBack' and (string(.)='1' or string(.)='1.0'))  or
                      (local-name()='minFront' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='spatialize' and string(.)='true'))) and
                      not( local-name(..)='Sphere' and ((local-name()='radius' and (string(.)='1' or string(.)='1.0')) or (local-name()='solid' and string(.)='true'))) and
                      not( local-name(..)='SphereSensor' and
                      ((local-name()='autoOffset' and string(.)='true') or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='offset' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0')) and
                      not( local-name(..)='Switch' and ../IS/connect[@nodeField='whichChoice'])))" />
        <!-- Switch whichChoice='-1' is very significant and somewhat counterintuitive/nonobvious, so otherwise show it. -->
        <!--	  and not( local-name(..)='Switch' and  local-name()='whichChoice' and (string(.)='-1' or string(.)='-1.0')) -->
        <xsl:variable name="notDefaultFieldValue6"
                      select="not( local-name(..)='SpotLight'	and
                      ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                      (local-name()='beamWidth' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854'))) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='cutOffAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
                      (local-name()='direction' and (string(.)='0 0 -1' or string(.)='0.0 0.0 -1.0')) or
                      (local-name()='global' and string(.)='true') or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='on' and string(.)='true') or
                      (local-name()='radius' and (string(.)='100' or string(.)='100.0')))) and
                      not( local-name(..)='Text'   and ((local-name()='maxExtent' and (string(.)='0' or string(.)='0.0')) or (local-name()='solid' and (string(.)='false')))) and
                      not( local-name(..)='TextureTransform' and
                      ((local-name()='center' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      (local-name()='rotation' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='scale' and (string(.)='1 1' or string(.)='1.0 1.0')) or
                      (local-name()='translation' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
                      not( local-name(..)='TextureTransform3D' and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='TextureTransformMatrix3D' and
                      ((local-name()='matrix' and (string(.)='1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1' or string(.)='1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0'))))" />
        <xsl:variable name="notDefaultFieldValue7"
                      select="not( local-name(..)='TimeSensor' and
                      ((local-name()='cycleInterval' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='loop' and string(.)='false'))) and
                      not(contains(local-name(..),'TouchSensor') and
                      local-name()='enabled' and string(.)='true') and
                      not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
					  (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='Viewpoint' and
                      (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854')))) and
                      not( local-name(..)='OrthoViewpoint' and
                      (local-name()='fieldOfView' and ((string(.)='-1 -1 1 1') or (string(.)='-1.0 -1.0 1.0 1.0')))) and
                      not( contains(local-name(..),'Viewpoint') and
                      ((local-name()='centerOfRotation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854'))) or
                      (local-name()='jump' and string(.)='true') or
                      (local-name()='viewAll' and string(.)='false') or
                      ((local-name()='nearClippingPlane' or local-name()='farClippingPlane') and ((string(.)='-1') or (string(.)='-1.') or (string(.)='-1.0'))) or
                      (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='retainUserOffsets' and (string(.)='false')) or
                      (local-name()='position' and (string(.)='0 0 10' or string(.)='0.0 0.0 10.0')))) and
                      not( local-name(..)='VisibilitySensor' and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='enterTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='exitTime'  and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='isActive' and string(.)='false')))" />
        <xsl:variable name="notDefaultFieldValue8"
                      select="not( local-name(..)='FillProperties' and
                      ((local-name()='filled' and string(.)='true') or
                      (local-name()='hatched' and string(.)='true') or
                      (local-name()='hatchStyle' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='hatchColor' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')))) and
                      not( local-name(..)='LineProperties' and
                      ((local-name()='applied' and string(.)='true') or
                      (local-name()='linetype' and (string(.)='1')) or
                      (local-name()='linewidthScaleFactor' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PointProperties' and
                      ((local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                      (starts-with(local-name(),'pointSize') and (string(.)='1' or string(.)='1.0')))) and
                      not( local-name(..)='ClipPlane' and
                      ((local-name()='enabled' and string(.)='true') or
                      (local-name()='plane' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0')))) and
                      not( local-name(..)='ViewpointGroup' and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='displayed' and string(.)='true') or
                      (local-name()='retainUserOffsets' and string(.)='false') or
                      (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue9"
                      select="not( local-name(..)='MultiTexture' and
                      ((local-name()='alpha' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')))) and
                      not( contains(local-name(..),'Texture') and
                      ((local-name() = 'mapping') and (string-length(string(.)) = 0))) and
                      not( contains(local-name(..),'Texture') and
                      ((local-name() = 'mapping') and (string-length(string(.)) = 0))) and
                      not( local-name(..)='TextureCoordinateGenerator' and
                      ((local-name()='mode' and string(.)='SPHERE'))) and
                      not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                      ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and string(.)='false')) and
                      not( local-name(..)='PixelTexture3D' and
                      (local-name()='image' and (string(.)='0 0 0 0'))) and
                      not( local-name(..)='IntegerTrigger' and
                      ((local-name()='integerKey' and string(.)='-1'))) and
                      not( local-name(..)='LayerSet' and
                      ((local-name()='activeLayer' and string(.)='0') or
                       (local-name()='order' and string(.)='0'))) and
                      not(contains(local-name(..),'PickSensor') and
                      ((local-name()='enabled' and string(.)='true') or
                       (local-name()='intersectionType' and string(.)='BOUNDS') or
                       (local-name()='matchCriterion' and string(.)='MATCH_ANY') or
                       (local-name()='objectType' and string(.)='&quot;ALL&quot;') or
                       (local-name()='sortOrder' and string(.)='CLOSEST'))) and
                      not( local-name(..)='ParticleSystem' and
                      ((local-name()='createParticles' and string(.)='true') or
                       (local-name()='enabled' and string(.)='true') or
                       (local-name()='geometryType' and string(.)='QUAD') or
                       (local-name()='lifetimeVariation' and string(.)='0.25') or
                       (local-name()='maxParticles' and string(.)='200') or
                       (local-name()='particleLifetime' and string(.)='5') or
                       (local-name()='particleSize' and string(.)='0.02 0.02'))) and
                      not( local-name(..)='PickableGroup' and
                      ((local-name()='objectType' and string(.)='&quot;ALL&quot;') or
                       (local-name()='pickable' and string(.)='true'))) and
                      not(local-name(..)='StringSensor' and
                      ((local-name()='deletionAllowed' or local-name()='enabled') and (string(.)='true'))) and
                      not( local-name(..)='TransformSensor' and
                      ((local-name()='enabled' and string(.)='true') or
                       (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='GeneratedCubeMapTexture' and
                      ((local-name()='update' and string(.)='NONE') or
                       (local-name()='size' and string(.)='128'))) and
                      not(local-name(..)='MovieTexture' and
                      ((local-name()='pitch' or local-name()='1') and (string(.)='1.0'))) and
                      not(contains(local-name(..),'Emitter') and
                      ((local-name()='angle' and string(.)='0.7854') or
                       (local-name()='direction' and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                       (local-name()='mass' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='position' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='speed' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='surfaceArea' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='variation' and string(.)='0.25') or
                       (local-name()='internal' and string(.)='true') or
                       (local-name()='coordIndex' or local-name()='-1'))) and
                      not(local-name(..)='Contact' and
                      ((local-name()='minBounceSpeed' and (string(.)='0' or string(.)='0.0')))) and
                      not(contains(local-name(..),'Layer') and
                      ((local-name()='isPickable' and string(.)='true'))) and
                      not(contains(local-name(..),'Layout') and
                      ((local-name()='offset' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                       (local-name()='size'   and (string(.)='1 1' or string(.)='1.0 1.0')) or
                       (local-name()='align' and string(.)='&quot;CENTER&quot; &quot;CENTER&quot;') or
                       (local-name()='offsetUnits' and string(.)='&quot;WORLD&quot; &quot;WORLD&quot;') or
                       (local-name()='scaleMode' and string(.)='&quot;NONE&quot; &quot;NONE&quot;') or
                       (local-name()='sizeUnits' and string(.)='&quot;WORLD&quot; &quot;WORLD&quot;'))) and
                      not( local-name(..)='TextureProperties' and
                      ((local-name()='anisotropicDegree' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='borderColor' and (string(.)='0 0 0 0' or string(.)='0.0 0.0 0.0 0.0')) or
                       (local-name()='borderWidth' and (string(.)='0' or string(.)='0.0')) or
                       (starts-with(local-name(),'boundaryMode') and string(.)='REPEAT') or
                       (local-name()='generateMipMaps' and string(.)='false') or
                       (local-name()='magnificationFilter' and string(.)='FASTEST') or
                       (local-name()='minificationFilter'  and string(.)='FASTEST') or
                       (local-name()='textureCompression'  and string(.)='FASTEST') or
                       (local-name()='texturePriority' and (string(.)='0' or string(.)='0.0')))) and
                      not(local-name(..)='Viewport' and
                      ((local-name()='clipBoundary' and (string(.)='0 1 0 1' or string(.)='0.0 1.0 0.0 1.0')))) and
                      not( local-name(..)='KeySensor' and
                      ((local-name()='enabled' and string(.)='true'))) and
                      not(starts-with(local-name(..),'TextureProjector') and
                       ((local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='location'  and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                        (local-name()='upVector' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='farDistance'  and (string(.)='10' or string(.)='10.0')) or
                        (local-name()='nearDistance' and (string(.)='1'  or string(.)='1.0')) or
                        (local-name()='global' and string(.)='true') or
                        (local-name()='on' and string(.)='true'))) and
                      not( local-name(..)='TextureProjectorParallel' and
                      ((local-name()='fieldOfView' and (string(.)='-1 -1 1 1' or string(.)='-1.0 -1.0 1.0 1.0')))) and
                      not( local-name(..)='TextureProjectorPerspective' and
                       ((local-name()='upVector' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854')))))" />
        <xsl:variable name="notDefaultFieldValue10"
                      select="not( local-name(..)='AcousticProperties' and
                      ((local-name()='containerField' and string(.)='acousticProperties') or
                      (local-name()='absorption' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='diffuse' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='refraction' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='specular' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Analyser' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequencyBinCount' and (string(.)='1024' or string(.)='1024.0')) or
                      (local-name()='fftSize' and (string(.)='2048' or string(.)='2048.0')) or
                      (local-name()='minDecibels' and (string(.)='-100' or string(.)='-100.0')) or
                      (local-name()='maxDecibels' and (string(.)='-30' or string(.)='-30.0')) or
                      (local-name()='smoothingTimeConstant' and (string(.)='.8' or string(.)='0.8')))) and
                      not( local-name(..)='BufferAudioSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='bufferDuration' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='type' and (string(.)='lowpass')) or
                      (local-name()='loopStart' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='loopEnd' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='numberOfChannels' and string(.)='0') or
                      (local-name()='playbackRate' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='sampleRate' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='AudioDestination' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='maxChannelCount' and (string(.)='2')))) and   
                      not( local-name(..)='BiquadFilter' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequency' and (string(.)='350' or string(.)='350.0')) or
                      (local-name()='qualityFactor' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='type' and (string(.)='lowpass')))) and
                      not( local-name(..)='ChannelMerger' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='ChannelSelector' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='channelSelection' and (string(.)='0')))) and
                      not( local-name(..)='ChannelSplitter' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='Convolver' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='normalize' and (string(.)='false')))) and
                      not( local-name(..)='Delay' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='delayTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxDelayTime' and (string(.)='1' or string(.)='1.0')))) and
                      not( local-name(..)='DynamicsCompressor' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='attack' and (string(.)='0.003' or string(.)='.003')) or
                      (local-name()='gain' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='knee' and (string(.)='30' or string(.)='30.0')) or
                      (local-name()='ratio' and (string(.)='12' or string(.)='12.0')) or
                      (local-name()='release' and (string(.)='.25' or string(.)='0.25')) or
                      (local-name()='threshold' and (string(.)='-24' or string(.)='-24.0')))) and
                      not( local-name(..)='Gain' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='ListenerPointSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='dopplerEnabled' and (string(.)='false')) or
                      (local-name()='interauralDistance' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='position' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='trackCurrentView' and (string(.)='false')))) and
                      not( local-name(..)='MicrophoneSource' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='OscillatorSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PeriodicWave' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='type' and (string(.)='square')))) and
                      not( local-name(..)='SpatialSound' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='coneInnerAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterGain' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                      (local-name()='distanceModel' and (string(.)='inverse')) or
                      (local-name()='dopplerEnabled' and (string(.)='false')) or
                      (local-name()='enableHRTF' and (string(.)='false')) or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='maxDistance' and (string(.)='10000' or string(.)='10000.0')) or
                      (local-name()='priority' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='referenceDistance' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='rolloffFactor' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='spatialize' and (string(.)='true')))) and
                      not( local-name(..)='StreamAudioDestination' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='StreamAudioSource' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='WaveShaper' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='oversample' and (string(.)='none'))))" />
        <xsl:variable name="notDefaultContainerField1"
                      select="not((local-name()='containerField' and string(.)='children')	and
                      (contains(local-name(..),'Interpolator') or
                      contains(local-name(..),'Light') or
                      contains(local-name(..),'Sensor') or
                      local-name(..)='Anchor' or
                      local-name(..)='Background' or
                      local-name(..)='Billboard' or
                      local-name(..)='Collision' or
                      local-name(..)='Fog' or
                      local-name(..)='Group' or
                      local-name(..)='Inline' or
                      local-name(..)='LOD' or
                      local-name(..)='NavigationInfo' or
                      local-name(..)='Script' or
                      local-name(..)='Shape' or
                      local-name(..)='Sound' or
                      local-name(..)='Switch' or
                      local-name(..)='TextureBackground' or
                      starts-with(local-name(..),'TextureProjector') or
                      local-name(..)='Transform' or
                      local-name(..)='Viewpoint' or
                      local-name(..)='WorldInfo' or
                      local-name(..)='ProtoInstance')) and
                      not((local-name()='containerField' and string(.)='geometry')	and
                      (local-name(..)='Box' or
                      local-name(..)='Cone' or
                      local-name(..)='Cylinder' or
                      local-name(..)='ElevationGrid' or
                      local-name(..)='GeoElevationGrid' or
                      local-name(..)='Extrusion' or
                      local-name(..)='IndexedFaceSet' or
                      local-name(..)='IndexedLineSet' or
                      local-name(..)='PointSet' or
                      local-name(..)='Sphere' or
                      local-name(..)='Text' or
                      local-name(..)='XvlShell'))" />
        <xsl:variable name="notDefaultContainerField2"
                      select="not((local-name()='containerField' and string(.)='source')   and (local-name(..)='AudioClip')) and
                      not((local-name()='containerField' and string(.)='appearance')	   and (local-name(..)='Appearance')) and
                      not((local-name()='containerField' and string(.)='material')         and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))) and
                      not((local-name()='containerField' and string(.)='color')            and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                      not((local-name()='containerField' and string(.)='coord')            and ((local-name(..)='Coordinate') or (local-name(..)='CoordinateDouble') or (local-name(..)='GeoCoordinate'))) and
                      not((local-name()='containerField' and string(.)='normal')           and (local-name(..)='Normal')) and
                      not((local-name()='containerField' and string(.)='texture')          and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
                      not((local-name()='containerField' and string(.)='fontStyle')        and (local-name(..)='FontStyle')) and
                      not((local-name()='containerField' and string(.)='texCoord')         and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
                      not((local-name()='containerField' and string(.)='textureTransform') and (local-name(..)='TextureTransform'))" />
        <xsl:variable name="notDefaultContainerField3"
                      select="not((local-name()='containerField' and string(.)='geometry') and
                      ((local-name(..)='Arc2D') or (local-name(..)='ArcClose2D') or (local-name(..)='Circle2D') or (local-name(..)='Disk2D') or (local-name(..)='Polyline2D') or (local-name(..)='Polypoint2D') or (local-name(..)='Rectangle2D') or (local-name(..)='TriangleSet2D') or contains(local-name(..),'QuadSet'))) and
                      not((local-name()='containerField' and string(.)='voxels')	and
                      ((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))) and
                      not((local-name()='containerField' and string(.)='renderStyle')	and
                      ((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')))" />
        <xsl:variable name="notDefaultCAD"
                      select="not((local-name(..)='CADAssembly' or local-name(..)='CADFace' or local-name(..)='CADLayer') and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not(local-name(..)='CADPart' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
					   (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultDIS1"
                      select="not((local-name(..)='EspduTransform' or contains(local-name(..),'Pdu')) and
                      ((starts-with(local-name(),'is')) or
                      (local-name()='address' and (string(.)='localhost')) or
                      (local-name()='enabled' and (string(.)='true')) or
                      (local-name()='networkMode' and (string(.)='standAlone')) or
                      (local-name()='rtpHeaderExpected' and (string(.)='false')) or
                      (local-name()='readInterval'  and (string(.)='.1' or string(.)='0.1')) or
                      (local-name()='writeInterval'  and (string(.)='1' or string(.)='1.0')) or
                      (((local-name()='applicationID') or (local-name()='munitionApplicationID') or (local-name()='whichGeometry')) and (string(.)='1')) or
                      ((contains(local-name(),'ntityID') or contains(local-name(),'iteID') or (local-name()='applicationID')) and (string(.)='0')) or
                      ((local-name()='port' or local-name()='multicastRelayPort' or local-name()='fireMissionIndex') and (string(.)='0'))))" />
        <!-- ='' ='1' '' geoCoords='0 0 0' geoSystem='"GD" "WE"' '1' munitionSiteID='0' ='' '0' '0' -->
        <xsl:variable name="notDefaultDIS2"
                      select="not(local-name(..)='EspduTransform' and
                      ((((local-name()='collisionType') or (local-name()='detonationResult')) and (string(.)='0')) or
                      (((local-name()='detonationLocation') or (local-name()='detonationRelativeLocation'))  and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='eventApplicationID'  and (string(.)='1')) or
                      (((local-name()='eventEntityID') or (local-name()='eventNumber') or (local-name()='eventSiteID'))  and (string(.)='0')) or
                      ((local-name()='fired1' or local-name()='fired2') and (string(.)='false')) or
                      (local-name()='deadReckoning'  and (string(.)='0')) or
                      ((local-name()='articulationParameterCount' or local-name()='entityCategory' or local-name()='entitySubcategory' or local-name()='entityCountry' or local-name()='entityDomain' or local-name()='entityExtra' or local-name()='entityKind' or local-name()='entitySpecific' or local-name()='eventApplicationID' or local-name()='firingRange' or local-name()='firingRate' or local-name()='fuse' or local-name()='warhead' or local-name()='forceID' or local-name()='munitionQuantity' or local-name()='munitionApplicationID') and (string(.)='0')) or
                      ((local-name()='linearVelocity' or local-name()='linearAcceleration' or local-name()='munitionStartPoint' or local-name()='munitionEndPoint') and (string(.)='0 0 0'))))" />
        <xsl:variable name="notDefaultDIS3"
                      select="not(local-name(..)='ReceiverPdu' and
                      (((local-name()='radioID' or local-name()='receiverState' or starts-with(local-name(),'transmitter')) and (string(.)='0')) or
                      (local-name()='receiverPower'  and (string(.)='0' or string(.)='0.0')))) and
                      not(local-name(..)='SignalPdu' and
                      (((local-name()='radioID' or local-name()='encodingScheme' or local-name()='tdlType' or local-name()='sampleRate' or local-name()='samples' or local-name()='dataLength') and (string(.)='0')))) and
                      not(local-name(..)='TransmitterPdu' and
                      (((local-name()='radioID' or starts-with(local-name(),'antennaPattern') or starts-with(local-name(),'crypto') or local-name()='frequency' or local-name()='inputSource' or local-name()='lengthOfModulationParameters' or starts-with(local-name(),'modulationType') or starts-with(local-name(),'radioEntityType') or local-name()='transmitFrequencyBandwidth' or local-name()='transmitState') and (string(.)='0')) or
                      (local-name()='power'  and (string(.)='0' or string(.)='0.0')) or
                      ((contains(local-name(),'antennaLocation') and (string(.)='0 0 0')))))" />
        <xsl:variable name="notDefaultDIS4"
                      select="not(local-name(..)='DISEntityManager' and
                      (((local-name()='applicationID') and (string(.)='0')) or
                      (local-name()='address' and (string(.)='localhost')) or
                      ((local-name()='port' or local-name()='siteID') and (string(.)='0')))) and
                      not(local-name(..)='DISEntityTypeMapping' and 
                      ((local-name()='containerField') and (string(.)='mapping')) or
                      ((local-name()='category' or local-name()='country' or local-name()='domain' or local-name()='extra' or local-name()='kind' or local-name()='specific' or local-name()='subcategory') and (string(.)='0')))" />
        <xsl:variable name="notDefaultGeo"
                      select="not((starts-with(local-name(..),'Geo') or (local-name(..)='EspduTransform') or contains(local-name(..),'Pdu')) and 
                      ((local-name()='geoCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='geoCoords' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not(local-name(..)='GeoLOD' 	  and 
                      ((local-name()='range' and (string(.)='10' or string(.)='10.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not(local-name(..)='GeoViewpoint' and
                      ((local-name()='speedFactor' and (string(.)='1' or string(.)='1.0')) or
						(local-name()='headlight' and (string(.)='true')) or
						(local-name()='jump' and (string(.)='true')) or
                        (local-name()='viewAll' and string(.)='false') or
                        ((local-name()='nearClippingPlane' or local-name()='farClippingPlane') and ((string(.)='-1') or (string(.)='-1.') or (string(.)='-1.0'))) or
						(local-name()='navType' and (string(.)='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
						(local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						(local-name()='position' and (string(.)='0 0 100000' or string(.)='0.0 0.0 100000.0')) or
                        (local-name()='fieldOfView' and (string(.)='0.785398' or string(.)='.785398' or string(.)='0.7854' or string(.)='.7854')) or
                        (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not((local-name(..)='GeoCoordinate' or local-name(..)='GeoOrigin') and
                      ((local-name()='rotateYUp' and (string(.)='false')) or
                      (local-name()='containerField' and (string(.)='geoOrigin')) or
                      (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;'))))" />
        <xsl:variable name="isHAnim1" select="$isX3D3 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)]"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] and not($isHAnim1 = true())"/>
        <xsl:variable name="notDefaultHAnim1"
                      select="not( local-name(..)='HAnimJoint' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='limitOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='stiffness' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSegment' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                       (local-name()='centerOfMass' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='mass' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='momentsOfInertia' and
                        (string(.)='0 0 0 0 0 0 0 0 0' or string(.)='0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSite' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultHAnim2"
                      select="not( local-name(..)='HAnimHumanoid' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='jointBindingPositions' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='jointBindingRotations' and (string(.)='0 0 1 0' or string(.)='0 1 0 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0.0 1.0 0.0 0.0')) or
                       (local-name()='jointBindingScales' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='loa' and (string(.)='-1')) or
                       (local-name()='version' and (($isHAnim1 = true() and (string(.)='1.0' or (string-length(string(.)) = 0))) or ($isHAnim2 = true() and string(.)='2.0'))) or
                       (local-name()='skeletalConfiguration' and (string(.)='BASIC')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimDisplacer' and
                      ((local-name()='containerField' and (string(.)='displacers')) or
                       (local-name()='weight' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='HAnimMotion' and
                      ((local-name()='containerField' and (string(.)='motions')) or
                       (local-name()='frameDuration' and (string(.)='0.1' or string(.)='.1')) or
                       (local-name()='frameIncrement' and (string(.)='1')) or
                       ((local-name()='frameIndex' or local-name()='startFrame' or local-name()='endFrame') and (string(.)='0')) or
                       (local-name()='loa' and (string(.)='-1'))))" />
        <xsl:variable name="notDefaultNurbs"
                      select="not((local-name(..)='NurbsCurve' or local-name(..)='NurbsCurve2D') and
                      ((local-name()='tessellation' and (string(.)='0')) or
                      (local-name()='closed' and (string(.)='false')) or
                      (local-name()='order' and (string(.)='3')))) and
                      not(local-name(..)='NurbsSet' and
                      ((local-name()='tessellationScale' and (string(.)='1' or string(.)='1.0')) or 
                      (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator') and
                      ((local-name()='order' and (string(.)='3' or string(.)='3.0')))) and
                      not((local-name(..)='NurbsSurface' or local-name(..)='NurbsPatchSurface' or local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsTextureSurface' or local-name(..)='NurbsTrimmedSurface') and
                      ((local-name()='uTessellation' and (string(.)='0')) or
                      (local-name()='vTessellation' and (string(.)='0')) or
                      (local-name()='uDimension' and (string(.)='0')) or
                      (local-name()='vDimension' and (string(.)='0')) or
                      (local-name()='uOrder' and (string(.)='3')) or
                      (local-name()='vOrder' and (string(.)='3')) or
                      (local-name()='ccw' and (string(.)='true')) or
                      (local-name()='solid' and (string(.)='true')) or
                      ((local-name()='uClosed' or local-name()='vClosed') and (string(.)='false')))) and
                      not((local-name(..)='NurbsSurfaceInterpolator' or local-name(..)='NurbsTextureCoordinate') and
                      ((local-name()='uDimension' and (string(.)='0')) or
                      (local-name()='vDimension' and (string(.)='0')) or
                      (local-name()='uOrder' and (string(.)='3')) or
                      (local-name()='vOrder' and (string(.)='3')))) and
                      not((local-name(..)='NurbsCurve' or local-name(..)='NurbsSwungSurface') and
                      ((local-name()='ccw' or local-name()='solid') and (string(.)='true'))) and
                      not((contains(local-name(..),'SplinePositionInterpolator') or local-name(..)='SplineScalarInterpolator' or local-name(..)='SquadOrientationInterpolator') and
                      ((local-name()='closed' or local-name()='normalizeVelocity') and (string(.)='false')))" />
        <xsl:variable name="notDefaultGeometry2D"
                      select="not((local-name(..)='Arc2D' or local-name(..)='ArcClose2D') and
                      ((local-name()='startAngle' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='endAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
                       (local-name()='radius' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='solid' and (string(.)='false')))) and
                      not(local-name(..)='Circle2D' and
                      ((local-name()='radius' and (string(.)='1' or string(.)='1.0')))) and
                      not(local-name(..)='Disk2D' and
                      ((local-name()='innerRadius' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='outerRadius' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='solid' and (string(.)='false')))) and
                      not((local-name(..)='Rectangle2D') and
                      ((local-name()='size' and ((string(.)='2 2') or (string(.)='2.0 2.0'))) or
                       (local-name()='solid' and (string(.)='false')))) and
                      not((local-name(..)='TriangleSet2D') and
                      ((local-name()='solid' and (string(.)='false')) or
                       (local-name()='closureType' and (string(.)='PIE'))))" />
        <xsl:variable name="notDefaultVolume"
                      select="not(((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))	and
                      ((local-name()='dimensions' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or 
                      (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      ((local-name()='contourStepSize' or local-name()='surfaceTolerance') and (string(.)='0' or string(.)='0.0'))) and
                      not(((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')) and
                      (local-name()='enabled' and string(.)='true')) and
                      not((local-name(..)='BlendedVolumeStyle')	and
                      (((local-name()='weightConstant1' or local-name()='weightConstant2') and (string(.)='.5' or string(.)='0.5')) or
                       ((local-name()='weightFunction1' or local-name()='weightFunction2') and (string(.)='CONSTANT')))) and
                      not((local-name(..)='BoundaryEnhancementVolumeStyle')	and
                      (((local-name()='boundaryOpacity') and (string(.)='.9' or string(.)='0.9')) or
                       ((local-name()='opacityFactor') and (string(.)='2' or string(.)='2.0')) or
                       ((local-name()='retainedOpacity') and (string(.)='.2' or string(.)='0.2')))) and
                      not((local-name(..)='CartoonVolumeStyle')	and
                      (((local-name()='colorSteps') and (string(.)='4')) or
                       ((local-name()='orthogonalColor') and (string(.)='1 1 1 1' or string(.)='1.0 1.0 1.0 1.0')) or
                       ((local-name()='parallelColor') and (string(.)='0 0 0 1' or string(.)='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='EdgeEnhancementVolumeStyle')	and
                      (((local-name()='gradientThreshold') and (string(.)='.4' or string(.)='0.4')) or
                       ((local-name()='edgeColor') and (string(.)='0 0 0 1' or string(.)='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      (((local-name()='surfaceTolerance') and (string(.)='0' or string(.)='0.0')))) and
                      not((local-name(..)='ProjectionVolumeStyle')	and
                      (((local-name()='intensityThreshold') and (string(.)='0' or string(.)='0.0')) or
                       ((local-name()='type') and (string(.)='MAX')))) and
                      not((local-name(..)='ShadedVolumeStyle')	and
                      (((local-name()='lighting' or local-name()='shadows') and (string(.)='false')) or
                       ((local-name()='phaseFunction') and (string(.)='Henyey-Greenstein')))) and
                      not((local-name(..)='SilhouetteEnhancementVolumeStyle')	and
                      (((local-name()='silhouetteBoundaryOpacity') and (string(.)='0' or string(.)='0.0')) or
                       ((local-name()='silhouetteRetainedOpacity') and (string(.)='1' or string(.)='1.0')) or
                       ((local-name()='silhouetteSharpness') and (string(.)='.5' or string(.)='0.5')))) and
                      not((local-name(..)='ToneMappedVolumeStyle')	and
                      (((local-name()='colorSteps') and (string(.)='4')) or
                       ((local-name()='coolColor') and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')) or
                       ((local-name()='warmColor') and (string(.)='1 1 0 0' or string(.)='1.0 1.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFollower"
                      select="not(contains(local-name(..),'Chaser') and
                      ((local-name()='duration' and (string(.)='1' or string(.)='1.0')))) and
                      not(contains(local-name(..),'Damper') and
                      ((local-name()='tau' and (string(.)='.3' or string(.)='0.3')) or
                      (local-name()='tolerance' and (string(.)='-1' or string(.)='-1.0')) or
                      (local-name()='order ' and (string(.)='3')))) and
                      not(contains(local-name(..),'Damper') and
                      (local-name()='order' and (string(.)='3'))) and
                      not((local-name(..)='ColorChaser' or local-name(..)='ColorDamper') and
                      ((local-name()='initialDestination' and (string(.)='.8 .8 .8' or string(.)='0.8 0.8 0.8')) or
                      (local-name()='initialValue' and (string(.)='.8 .8 .8' or string(.)='0.8 0.8 0.8')))) and
                      not((local-name(..)='CoordinateChaser' or local-name(..)='CoordinateDamper' or local-name(..)='PositionChaser' or local-name(..)='PositionDamper') and
                      ((local-name()='initialDestination' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='initialValue' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not((local-name(..)='PositionChaser2D' or local-name(..)='PositionDamper2D') and
                      ((local-name()='initialDestination' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      (local-name()='initialValue' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
                      not((local-name(..)='OrientationChaser' or local-name(..)='OrientationDamper') and
                      ((local-name()='initialDestination' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')) or
                      (local-name()='initialValue' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')))) and
                      not((local-name(..)='ScalarChaser' or local-name(..)='ScalarDamper') and
                      ((local-name()='initialDestination' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='initialValue' and (string(.)='0' or string(.)='0.0'))))" />
        <xsl:variable name="notDefaultShader"
                      select="not((local-name(..)='FloatVertexAttribute') and
                      ((local-name()='numComponents' and (string(.)='4')))) and
                      not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and
                      ((local-name()='type' and (string(.)='VERTEX'))))" />
        <xsl:variable name="notDefaultRigidBodyPhysics"
                      select="not((local-name(..)='CollidableOffset' or local-name(..)='CollidableShape') and
                      (((local-name()='enabled') and (string(.)='true')) or
                      ((local-name()='rotation') and (string(.)='0 0 1 0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0.0 0.0 1.0 0.0')) or
                      ((local-name()='translation') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='bboxCenter')	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='bboxSize')	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='CollisionSpace') and
                      ((local-name()='enabled' and (string(.)='true')) or
                      (local-name()='useGeometry' and (string(.)='false')) or
                      (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='BallJoint' or local-name(..)='DoubleAxisHingeJoint' or local-name(..)='MotorJoint' or local-name(..)='SingleAxisHingeJoint' or local-name(..)='SliderJoint' or local-name(..)='UniversalJoint') and
                      ((local-name()='forceOutput')	and	(string(.)='&quot;NONE&quot;'))) and
                      not((local-name(..)='BallJoint') and
                      ((local-name()='anchorPoint')	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))) and
                      not((local-name(..)='BoundedPhysicsModel') and
                      ((local-name()='enabled')	and	(string(.)='true'))) and
                      not((local-name(..)='ForcePhysicsModel') and
                      ((local-name()='enabled')	and	(string(.)='true')) or
                      (local-name()='force'	and	(string(.)='0 -9.8 0' or string(.)='0.0 -9.8 0.0'))) and
                      not((local-name(..)='WindPhysicsModel') and
                      ((local-name()='enabled')	and	(string(.)='true')) or
                      (local-name()='gustiness'	and	(string(.)='0.1')) or
                      (local-name()='speed'	and	(string(.)='0.1')) or
                      (local-name()='turbulence'	and	(string(.)='0' or string(.)='0.0')) or
                      (local-name()='direction'	and	(string(.)='1 0 0' or string(.)='1.0 0.0 0.0'))) and
                      not((local-name(..)='CollisionCollection') and
                      (((local-name()='appliedParameters') and (string(.)='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='enabled') and (string(.)='true')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipFactors' or local-name()='surfaceSpeed') and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      ((local-name()='minBounceSpeed') and (string(.)='.1' or string(.)='0.1')) or
                      ((local-name()='softnessConstantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='CollisionSensor') and
                      (local-name()='enabled' and string(.)='true')) and
                      not((local-name(..)='Contact') and
                      (((local-name()='appliedParameters') and (string(.)='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce' or local-name()='depth' or local-name()='minbounceSpeed') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='contactNormal') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipCoefficients' or local-name()='surfaceSpeed') and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      ((local-name()='frictionDirection') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='position') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='softnessConstantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='DoubleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='desiredAngularVelocity1' or local-name()='desiredAngularVelocity2' or local-name()='maxTorque1' or local-name()='maxTorque2' or local-name()='stop1Bounce' or local-name()='suspensionForce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='maxAngle1') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle1') and (string(.)='-3.1416' or string(.)='-3.14159' or string(.)='-3.141593' or string(.)='-3.1415926' or string(.)='-3.14159263' or string(.)='-3.141592653')) or
                      ((local-name()='stop1Bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stop1ConstantForceMix') and (string(.)='.001' or string(.)='0.001')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='suspensionErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='MotorJoint') and
                      (((local-name()='axis1Angle' or local-name()='axis2Angle' or local-name()='axis3Angle' or local-name()='axis1Torque' or local-name()='axis2Torque' or local-name()='axis3Torque' or local-name()='stop1Bounce' or local-name()='stop2Bounce' or local-name()='stop3Bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection' or local-name()='stop3ErrorCorrection') and (string(.)='.8' or string(.)='0.8')) or
                      ((local-name()='motor1Axis' or local-name()='motor2Axis' or local-name()='motor3Axis') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='enabledAxes') and (string(.)='1')) or
                      ((local-name()='autoCalc') and (string(.)='false')))) and
                      not((local-name(..)='RigidBody') and
                      (((local-name()='angularDampingFactor') and (string(.)='.001' or string(.)='0.001')) or
                      ((local-name()='angularVelocity' or local-name()='centerOfMass' or local-name()='finiteRotationAxis' or local-name()='linearVelocity' or local-name()='position') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='finiteRotationAxis') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='mass') and (string(.)='1' or string(.)='1.0')) or
                      ((local-name()='enabled' or local-name()='useGlobalGravity') and (string(.)='true')) or
                      ((local-name()='autoDamp' or local-name()='autoDisable' or local-name()='fixed' or local-name()='useFiniteRotation') and (string(.)='false')) or
                      ((local-name()='inertia') and (string(.)='1 0 0 0 1 0 0 0 1' or string(.)='1.0 0 0 0 1.0 0 0 0 1.0' or string(.)='1.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 1.0')) or
                      ((local-name()='linearDampingFactor') and (string(.)='.001' or string(.)='0.001')) or
                      ((local-name()='orientation') and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')))) and
                      not((local-name(..)='RigidBodyCollection') and
                      (((local-name()='autoDisable' or local-name()='preferAccuracy') and (string(.)='false')) or
                      ((local-name()='enabled') and (string(.)='true')) or
                      ((local-name()='constantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                      ((local-name()='contactSurfaceThickness' or local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='errorCorrection') and (string(.)='.8' or string(.)='0.8')) or
                      ((local-name()='gravity') and (string(.)='0 -9.8 0' or string(.)='0.0 -9.8 0.0')) or
                      ((local-name()='iterations') and (string(.)='10')) or
                      ((local-name()='maxCorrectionSpeed') and (string(.)='-1' or string(.)='-1.0')))) and
                      not((local-name(..)='SingleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='maxAngle') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle') and (string(.)='-3.1416' or string(.)='-3.14159' or string(.)='-3.141593' or string(.)='-3.1415926' or string(.)='-3.14159263' or string(.)='-3.141592653')) or
                      ((local-name()='stopBounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stopErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='SliderJoint') and
                      (((local-name()='axis') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='maxSeparation' or local-name()='stopErrorCorrection') and (string(.)='1' or string(.)='1.0')) or
                      ((local-name()='minSeparation' or local-name()='sliderForce' or local-name()='stopBounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stopErrorCorrection') and (string(.)='1' or string(.)='1.0')))) and
                      not((local-name(..)='UniversalJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='stop1Bounce' or local-name()='stop2Bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection') and (string(.)='.8' or string(.)='0.8'))))" />
        <xsl:variable name="notFieldSpace"
                      select="not(local-name(..)='field'  and	(local-name()='space' or local-name()='xml:space')) and
                      not(local-name(..)='Script' and	(local-name()='space' or local-name()='xml:space'))" />
  <xsl:variable name="notDefaultLatticeXvl"
	select="not( local-name(..)='XvlShell' and
						((local-name()='shellType' and string(.)='LATTICE_MESH') or
						 (local-name()='numberOfDivisions' and string(.)='4')))" />
  <!-- avoid outputting:  DEF, any fields whatsoever if USE found, ProtoInstance name, new VRML field,
        hint attribute, implicitly specified VRML97 eventIns/eventOuts, missing values or default values -->
  <xsl:variable name="notDefaultValue"
	select="not(local-name()='DEF') and
                not(local-name()='nodeType') and
                not(local-name()='containerField') and
                not(local-name()='USE') and
                not(string(.)='') and
                not(local-name(..)='ProtoInstance' and local-name()='name') and
                not( local-name(..)='IndexedLineSet' and local-name()='lineWidth') and
                not(local-name(..)='USE' and local-name()='node') and
                $notImplicitEvent1 and
                $notImplicitEvent2 and
                $notImplicitEvent3 and
                $notDefaultFieldValue1 and
                $notDefaultFieldValue1a and
                $notDefaultFieldValue2 and
                $notDefaultFieldValue3 and
                $notDefaultFieldValue4 and
                $notDefaultFieldValue5 and
                $notDefaultFieldValue6 and
                $notDefaultFieldValue7 and
                $notDefaultFieldValue8 and
                $notDefaultFieldValue9 and
                $notDefaultFieldValue10 and
                $notDefaultCAD         and
                $notDefaultDIS1        and
                $notDefaultDIS2        and
                $notDefaultDIS3        and
                $notDefaultDIS4        and
                $notDefaultGeo         and
                $notDefaultHAnim1      and
                $notDefaultHAnim2      and
                $notDefaultNurbs       and
                $notDefaultGeometry2D  and
                $notDefaultVolume      and
                $notDefaultFollower    and
                $notDefaultShader      and
                $notDefaultRigidBodyPhysics and
                $notDefaultContainerField1  and
                $notDefaultContainerField2  and
                $notDefaultContainerField3  and
                not(local-name()='containerField' and string(.)='') and
                not(local-name()='class' and string(.)='') and
                $notFieldSpace and
                not(contains(local-name(),'set_')) and
                not(contains(local-name(),'_changed')) and
                $notDefaultLatticeXvl  and
                not((local-name(..)='Script' or local-name(..)='field') and (local-name()='xml:space' or local-name()='space')) and
                not((local-name(..)='Script') and local-name()='url') and
                not((local-name(..)='connect') and (local-name()='protoField' or local-name()='nodeField'))"/>
  <xsl:if test="$notDefaultValue or ((local-name()='name') and not(local-name(..)='ProtoInstance'))">
    <!-- valid field found by the preceding checks, now output accordingly -->
    <xsl:call-template name="print-indent">
      <xsl:with-param name="indent" select="$indent"/>
    </xsl:call-template>
    <!-- must filter out any default non-blank attribute values for this test to be effective with SAXON -->
    <xsl:if test="(../@USE and not(local-name()='USE'))">
      <!-- <xsl:text>USE </xsl:text><xsl:value-of select="@USE"/>   .. used if located in node template -->
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>No additional/overriding attribute values (</xsl:text>
          <xsl:value-of select="local-name()"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>') allowed with USE node </xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> USE='</xsl:text>
          <xsl:value-of select="../@USE"/>
          <xsl:text>'/</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <!-- <xsl:text> # attribute </xsl:text><xsl:value-of select="local-name()"/><xsl:text>&#10;</xsl:text> -->
    <!-- take care of IS attribute definitions for non-node fields inside ProtoDeclarations -->
    <xsl:variable name="PROTOdeclareAncestorName" select="ancestor::*[local-name()='ProtoDeclare']/@name" />
    <!-- <xsl:if test="$PROTOdeclareAncestorName"><xsl:text> # ProtoDeclare ancestor &quot;</xsl:text><xsl:value-of select="$PROTOdeclareAncestorName"/><xsl:text>&quot; found&#10;</xsl:text></xsl:if> -->
    <xsl:variable name="DEFname" select="../@DEF" />
    <xsl:variable name="fieldName" select="local-name()" />
    <xsl:variable name="matchName" select="concat(../@DEF,'.',local-name())" />
    <!-- <xsl:text> # $DEFname </xsl:text><xsl:value-of select="$DEFname"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text> # $fieldName </xsl:text><xsl:value-of select="$fieldName"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text> # $matchName </xsl:text><xsl:value-of select="$matchName"/><xsl:text>&#10;</xsl:text> -->
    <xsl:variable name="PROTOdeclareAncestorField" select="ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field" />
    <!-- <xsl:if test="$PROTOdeclareAncestorField"><xsl:text> # ProtoDeclare ancestor field &quot;</xsl:text><xsl:value-of select="$PROTOdeclareAncestorField"/><xsl:text>&quot; found&#10;</xsl:text></xsl:if> -->
    <!-- figure out node type for ProtoDeclared ProtoInstance, ExternProtoDeclared ProtoInstance and internal DTD declaration tag definitions -->
    <xsl:variable name="nodeName" select="../@name" />
    <xsl:variable name="nodeName2" select="local-name(..)" />
    <xsl:variable name="parentNodeName" select="../../@name" />
    <!-- ProtoDeclared ProtoInstance -->
    <xsl:variable name="nodeType" select="local-name(//ProtoDeclare[@name=$nodeName or @name=$nodeName2]/node()[local-name()!='field'][local-name()!='ProtoDeclare'][1])" />
    <xsl:variable name="parentType" select="local-name(//ProtoDeclare[@name=$parentNodeName]/node()[local-name()!='field'][local-name()!='ProtoDeclare'][1])" />
    <!-- ExternProtoDeclared ProtoInstance -->
    <xsl:variable name="EPnodeName" select="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/@name" />
    <xsl:variable name="EPnodeType" select="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/@nodeType" />
    <xsl:variable name="EPfieldType" select="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/field[@name=$fieldName]/@type" />
    <!-- debug diagnosis statements -->
    <!-- <xsl:if test="$nodeName"><xsl:text># $nodeName </xsl:text><xsl:value-of select="$nodeName"/><xsl:text>&#10;</xsl:text></xsl:if> -->
    <!-- <xsl:text># nodeName </xsl:text><xsl:value-of select="$nodeName"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># nodeName2 </xsl:text><xsl:value-of select="$nodeName2"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># local-name() </xsl:text><xsl:value-of select="local-name()"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># local-name(..) </xsl:text><xsl:value-of select="local-name(..)"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># EPnodeName </xsl:text><xsl:value-of select="$EPnodeName"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># parentNodeName </xsl:text><xsl:value-of select="$parentNodeName"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># nodeType </xsl:text><xsl:value-of select="$nodeType"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># parentType </xsl:text><xsl:value-of select="$parentType"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># EPnodeType </xsl:text><xsl:value-of select="$EPnodeType"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># EPparentType </xsl:text><xsl:value-of select="$EPparentType"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># EPfieldType </xsl:text><xsl:value-of select="$EPfieldType"/><xsl:text>&#10;</xsl:text> -->
    <xsl:variable name="BooleansTypes"
		select="($nodeType  ='MFBool')  or ($EPnodeType='MFBool') or
			((local-name(..)='XvlShell'          or $nodeType='XvlShell'         or $EPnodeType='XvlShell') and
      				   (local-name()='faceEmpty' or local-name()='faceHidden'))  or
			((local-name(..)='BooleanSequencer'  or $nodeType='BooleanSequencer' or $EPnodeType='BooleanSequencer') and
      				   (local-name()='keyValue'))" />
    <xsl:variable name="MFtypes"
		select="($nodeType  ='MFColor')    or ($nodeType  ='MFFloat') or ($nodeType  ='MFInt32') or
			($nodeType  ='MFRotation') or ($nodeType  ='MFTime')  or ($nodeType  ='MFVec2f') or ($nodeType  ='MFVec3f') or
			($EPnodeType='MFColor')    or ($EPnodeType='MFFloat') or ($EPnodeType='MFInt32') or
			($EPnodeType='MFRotation') or ($EPnodeType='MFTime')  or ($EPnodeType='MFVec2f') or ($EPnodeType='MFVec3f')" />
    <xsl:variable name="ExtensionMFtypes"
		select="
                      ((local-name(..)='GeoElevationGrid'	or $nodeType='GeoElevationGrid'	or $EPnodeType='GeoElevationGrid') and
      				    local-name()='height') or
        	      ((local-name(..)='GeoPositionInterpolator' or $nodeType='GeoPositionInterpolator' or $EPnodeType='GeoPositionInterpolator') and
      				    local-name()='key') or
        	      ((local-name(..)='HAnimJoint'                   or $nodeType='HAnimJoint'           or $EPnodeType='HAnimJoint') and
      				   (local-name()='llimit' or local-name()='stiffness' or local-name()='ulimit')) or
        	      ((local-name(..)='HAnimSegment'                 or $nodeType='HAnimSegment'         or $EPnodeType='HAnimSegment') and
      				    (local-name()='momentsOfInertia') or ($EPnodeType='MFVec3f')) or
      		      ((local-name(..)='HAnimJoint'		or $nodeType='HAnimJoint' or $EPnodeType='HAnimJoint') and
      				    (local-name()='skinCoordIndex' or local-name()='skinCoordWeight')) or
		      ((local-name(..)='ContourPolyline2D'		or $nodeType='ContourPolyline2D' or $EPnodeType='ContourPolyline2D') and
      				    (local-name()='point')) or
		      ((starts-with(local-name(..),'Nurbs')		or starts-with($nodeType,'Nurbs') or starts-with($EPnodeType,'Nurbs')) and
      				    (local-name()='controlPoint') or (local-name()='weight') or (local-name()='knot') or (local-name()='uKnot') or (local-name()='vKnot')) or
		      ((local-name(..)='XvlShell'	or $nodeType='XvlShell'	or $EPnodeType='XvlShell') and
      				   (local-name()='vertexRound'	or local-name()='edgeBeginCoordIndex'	or local-name()='edgeEndCoordIndex'	or local-name()='edgeRound'	or
      				    local-name()='edgeBeginVector'	or local-name()='edgeEndVector'	or local-name()='faceCoordIndex'	or local-name()='faceTexCoordIndex'))" />
    <xsl:variable name="Geometry2d3dMFtypes"
		select="
                      ((local-name(..)='Polyline2D'		or $nodeType='Polyline2D' or $EPnodeType='Polyline2D') and
      				    (local-name()='lineSegments')) or
		      ((local-name(..)='Polypoint2D'		or $nodeType='Polypoint2D' or $EPnodeType='Polypoint2D') and
      				    (local-name()='point')) or
		      ((local-name(..)='TriangleSet2D'		or $nodeType='TriangleSet2D' or $EPnodeType='TriangleSet2D') and
      				    (local-name()='vertices')) or
		      ((local-name(..)='IndexedTriangleFanSet'	or $nodeType='IndexedTriangleFanSet' or $EPnodeType='IndexedTriangleFanSet' or
      			local-name(..)='IndexedTriangleSet'	or $nodeType='IndexedTriangleSet' or $EPnodeType='IndexedTriangleSet' or
      			local-name(..)='IndexedTriangleStripSet' or $nodeType='IndexedTriangleStripSet' or $EPnodeType='IndexedTriangleStripSet') and
      				    (local-name()='index')) or
		      ((local-name(..)='LineSet'		or $nodeType='LineSet' or $EPnodeType='LineSet') and
      				    (local-name()='vertexCount')) or
		      ((local-name(..)='TriangleFanSet'		or $nodeType='TriangleFanSet' or $EPnodeType='TriangleFanSet') and
      				    (local-name()='fanCount')) or
		      ((local-name(..)='TriangleStripSet'	or $nodeType='TriangleStripSet' or $EPnodeType='TriangleStripSet') and
      				    (local-name()='stripCount'))" />
    <xsl:variable name="ColorCoordinateMFtypes"
		select="
                      ((local-name(..)='Color'    		or $nodeType='Color'    	or $EPnodeType='Color' or
      		        local-name(..)='ColorRGBA'    		or $nodeType='ColorRGBA'    	or $EPnodeType='ColorRGBA') and
      				    local-name()='color') or
                      ((local-name(..)='Coordinate'		or $nodeType='Coordinate'	or $EPnodeType='Coordinate' or
                        local-name(..)='CoordinateDouble'	or $nodeType='CoordinateDouble'	or $EPnodeType='CoordinateDouble') and
      				    local-name()='point')" />
    <xsl:variable name="GeoSpatialSFStringTypes"
		select="
        	      ((local-name(..)='GeoMetadata'		or $nodeType='GeoMetadata'    	or $EPnodeType='GeoMetadata') and
      				    not(local-name()='url') and not(local-name()='data') and not(local-name()='summary')) or
        	      ((local-name(..)='GeoViewpoint'		or $nodeType='GeoViewpoint'    	or $EPnodeType='GeoViewpoint') and
      				    (local-name()='description'))" />
    <xsl:variable name="GeoSpatialSFVec3dTypes"
		select="((local-name(..)='GeoElevationGrid'	or $nodeType='GeoElevationGrid'	or $EPnodeType='GeoElevationGrid') and
      				    (local-name()='geoGridOrigin' or local-name()='xSpacing' or local-name()='zSpacing')) or
        	      ((local-name(..)='GeoLocation'		or $nodeType='GeoLocation'    	or $EPnodeType='GeoLocation') and
      				    local-name()='geoCoords') or
        	      ((local-name(..)='GeoLOD'			or $nodeType='GeoLOD'    	or $EPnodeType='GeoLOD') and
      				    local-name()='center') or
        	      ((local-name(..)='GeoOrigin'		or $nodeType='GeoOrigin'    	or $EPnodeType='GeoOrigin') and
      				    local-name()='geoCoords') or
        	      ((local-name(..)='GeoPositionInterpolator' or $nodeType='GeoPositionInterpolator' or $EPnodeType='GeoPositionInterpolator') and
      				    local-name()='geoValue') or
        	      ((local-name(..)='GeoTouchSensor'		or $nodeType='GeoTouchSensor'	or $EPnodeType='GeoTouchSensor') and
      				    (local-name()='hitNormal' or local-name()='hitGeoCoord' or local-name()='hitTexCoord')) or
        	      ((local-name(..)='GeoViewpoint'		or $nodeType='GeoViewpoint'    	or $EPnodeType='GeoViewpoint') and
      				    (local-name()='position'))" />
    <xsl:variable name="GeoSpatialMFStringTypes"
		select="((local-name(..)='GeoCoordinate'	or $nodeType='GeoCoordinate'    or $EPnodeType='GeoCoordinate') and
      				    (local-name()='geoSystem')) or
        	      ((local-name(..)='GeoElevationGrid'	or $nodeType='GeoElevationGrid'	or $EPnodeType='GeoElevationGrid') and
      				    local-name()='geoSystem') or
        	      ((local-name(..)='GeoInline'		or $nodeType='GeoInline'    	or $EPnodeType='GeoInline') and
      				    local-name()='url') or
        	      ((local-name(..)='GeoLocation'		or $nodeType='GeoLocation'    	or $EPnodeType='GeoLocation') and
      				    local-name()='geoSystem') or
        	      ((local-name(..)='GeoLOD'			or $nodeType='GeoLOD'    	or $EPnodeType='GeoLOD') and
      				    (contains(local-name(),'Url') or local-name()='geoSystem')) or
        	      ((local-name(..)='GeoMetadata'		or $nodeType='GeoMetadata'    	or $EPnodeType='GeoMetadata') and
      				    (local-name()='url' or local-name()='summary')) or
        	      ((local-name(..)='GeoOrigin'		or $nodeType='GeoOrigin'    	or $EPnodeType='GeoOrigin') and
      				    local-name()='geoSystem') or
        	      ((local-name(..)='GeoPositionInterpolator' or $nodeType='GeoPositionInterpolator' or $EPnodeType='GeoPositionInterpolator') and
      				    (local-name()='geoSystem')) or
        	      ((local-name(..)='GeoTouchSensor'		or $nodeType='GeoTouchSensor'	or $EPnodeType='GeoTouchSensor') and
      				    local-name()='geoSystem') or
        	      ((local-name(..)='GeoViewpoint'		or $nodeType='GeoViewpoint'	or $EPnodeType='GeoViewpoint') and
      				    (local-name()='geoSystem' or local-name()='navType'))" />
    <xsl:variable name="GeoSpatialMFVec3dTypes"
		select="((local-name(..)='GeoCoordinate'	or $nodeType='GeoCoordinate'    or $EPnodeType='GeoCoordinate') and
      				    (local-name()='point')) or
        	      ((local-name(..)='GeoPositionInterpolator' or $nodeType='GeoPositionInterpolator' or $EPnodeType='GeoPositionInterpolator') and
      				    (local-name()='keyValue'))" />
    <xsl:variable name="HAnimSFStringTypes"
		select="((local-name(..)='HAnimJoint'	or $nodeType='HAnimJoint'	or $EPnodeType='HAnimJoint') and
      				     local-name()='name') or
        	      ((local-name(..)='HAnimSegment'		or $nodeType='HAnimSegment'    	or $EPnodeType='HAnimSegment') and
      				     local-name()='name') or
        	      ((local-name(..)='HAnimSite'			or $nodeType='HAnimSite'    	or $EPnodeType='HAnimSite') and
      				     local-name()='name') or
        	      ((local-name(..)='HAnimDisplacer'		or $nodeType='HAnimDisplacer'    	or $EPnodeType='HAnimDisplacer') and
      				     local-name()='name') or
        	      ((local-name(..)='HAnimHumanoid'		or $nodeType='HAnimHumanoid'    	or $EPnodeType='HAnimHumanoid') and
      				    (local-name()='name' or local-name()='version'))" />
    <xsl:variable name="HAnimMFStringTypes"
		select="((local-name(..)='HAnimHumanoid'	or $nodeType='HAnimHumanoid'    or $EPnodeType='HAnimHumanoid') and
      				     local-name()='info')" />
    <xsl:variable name="DisJavaVrmlSFStringTypes"
		select="((local-name(..)='EspduTransform'	or $nodeType='EspduTransform'	or $EPnodeType='EspduTransform' or
		          local-name(..)='ReceiverPdu'		or $nodeType='ReceiverPdu'	or $EPnodeType='ReceiverPdu'	or
		          local-name(..)='SignalPdu'		or $nodeType='SignalPdu'	or $EPnodeType='SignalPdu'	or
		          local-name(..)='TransmitterPdu'	or $nodeType='TransmitterPdu'	or $EPnodeType='TransmitterPdu') and
      			     (local-name()='marking' or local-name()='address' or local-name()='networkMode' or local-name()='multicastRelayHost' or local-name()='address'))" />
    <!-- this step is necessary due to lack of MFBool/Booleans type in VRML97 -->
    <xsl:variable name="LatticeXvlConversionFields"
		select="((local-name(..)='XvlShell'	or $nodeType='XvlShell'	or $EPnodeType='XvlShell') and
      				   (local-name()='shellType'))" />
    <xsl:variable name="tokenCount">
      <xsl:call-template name="tokenCount">
        <xsl:with-param name="parameter" select="."/>
      </xsl:call-template>
    </xsl:variable>
    <!-- output attribute value -->
    <xsl:if test="($fileEncoding!='ClassicVRML')">
      <xsl:choose>
        <!-- Background transparency not supported in VRML97 -->
        <xsl:when test="contains(local-name(..),'Background') and (local-name()='transparency')">
              <xsl:text> # </xsl:text>
        </xsl:when>
        <!-- LOD forceTransitions not supported in VRML97 -->
        <xsl:when test="contains(local-name(..),'LOD') and (local-name()='forceTransitions')">
              <xsl:text> # </xsl:text>
        </xsl:when>
        <!-- Light global not supported in VRML97 -->
        <xsl:when test="contains(local-name(..),'Light') and (local-name()='global')">
              <xsl:text> # </xsl:text>
        </xsl:when>
        <!-- some sensor descriptions not supported in VRML97 -->
        <xsl:when test="(local-name(..)='TouchSensor' or local-name(..)='CylinderSensor' or local-name(..)='PlaneSensor' or local-name(..)='SphereSensor') and (local-name()='description')">
              <xsl:text> # </xsl:text>
        </xsl:when>
      </xsl:choose>
    </xsl:if>
    <xsl:choose>
      <xsl:when test="(local-name()='class') or (local-name()='id') or (local-name()='style') or (local-name()='xml:lang') or (local-name()='lang')">
        <xsl:text>### </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>='</xsl:text>
        <xsl:value-of select="."/>
        <xsl:text>'&#10;</xsl:text>
      </xsl:when>
      <xsl:when test="local-name()='USE' or ../@USE">
        <!-- no output required, trapped in order to test for additional attributes -->
      </xsl:when>
      <xsl:when test="local-name()='containerField'">
        <!-- no action required in current approach, may modify for generality -->
      </xsl:when>
      <xsl:when test="(local-name()='solid') and ($fileEncoding='VRML97') and (string(.)='false') and ((local-name(..)='Box') or (local-name(..)='Cone') or (local-name(..)='Cylinder') or (local-name(..)='Sphere'))">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> solid="false"/&gt; (double-sided rendering of geometry primitive) not defined in VRML97 encoding, solid field ignored</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name(.)"/>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:when>
      <xsl:when test="(local-name()='solid') and ($fileEncoding='VRML97') and (string(.)='true') and (local-name(..)='Text')">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> solid="true" /&gt; single-sided rendering) not defined in VRML97 encoding, solid field ignored</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name(.)"/>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:when>
      <!-- take care of SFString fields by wrapping &quot; quotation marks &quot; -->
      <xsl:when test="((local-name(..)='Anchor'     or $nodeType='Anchor'	or $EPnodeType='Anchor') and
      				    local-name()='description') or
                      ((local-name(..)='AudioClip'  or $nodeType='AudioClip'	or $EPnodeType='AudioClip') and
      				    local-name()='description') or
                      ((local-name(..)='Fog'        or $nodeType='Fog'		or $EPnodeType='Fog') and
      				    local-name()='fogType')     or
                      ((local-name(..)='FontStyle'  or $nodeType='FontStyle'	or $EPnodeType='FontStyle') and
      				   (local-name()='language' or local-name()='style'))       or
                      ((local-name(..)='TouchSensor'  or $nodeType='TouchSensor' or $EPnodeType='TouchSensor') and
      				    local-name()='description') or
                      (contains(local-name(..),'Sensor') and
      				    local-name()='description') or
                      ((local-name(..)='Viewpoint'  or $nodeType='Viewpoint'	or $EPnodeType='Viewpoint') and
      				    local-name()='description') or
                      ((local-name(..)='WorldInfo'  or $nodeType='WorldInfo'	or $EPnodeType='WorldInfo') and
      				    local-name()='title') or
      		      (local-name(..)='ArcClose2D' and
      				   (local-name()='closureType')) or
      		      (starts-with(local-name(..),'Metadata') and
      				   (local-name()='name' or local-name()='reference')) or
      		      (starts-with(local-name(..),'CAD') and
      				   (local-name()='name')) or
      		      $GeoSpatialSFStringTypes or
      		      $HAnimSFStringTypes or
      		      $DisJavaVrmlSFStringTypes or
        	      ($nodeType    = 'MFString') or
        	      ($EPnodeType  = 'MFString') or
        	      ($EPfieldType = 'MFString') or
        	      ($nodeType    = 'MFBool') or
        	      ($EPnodeType  = 'MFBool') or
        	      ($EPfieldType = 'MFBool') or
        	      ($BooleansTypes)
                     ">
        <!-- some SFString value checks -->
        <xsl:if test="(local-name()='fogType' or local-name()='style') and ($tokenCount > 1)">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>illegal number of tokens (</xsl:text>
              <xsl:value-of select="$tokenCount"/>
              <xsl:text>), maximum allowed = 1</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> attribute </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:if test="(local-name(..)='ArcClose2D') and (local-name()='closureType') and not(string(.)='PIE' or string(.)='CHORD' or string(.)='')">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>illegal ArcClose2D closureType='</xsl:text>
              <xsl:value-of select="."/>
              <xsl:text>' (must be 'PIE' or 'CHORD')</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> attribute </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:choose>
          <!-- output SFString.  wrap quotes if string-length 0 -->
          <xsl:when test="not(.)"><xsl:value-of select="local-name()"/><xsl:text> &quot;&quot;&#10;</xsl:text></xsl:when>
          <!-- output SFString.  no need to wrap quotes -->
          <xsl:when test="starts-with(normalize-space(string(.)),'&quot;')"><xsl:value-of select="local-name()"/><xsl:text> </xsl:text><xsl:value-of select="." /><xsl:text>&#10;</xsl:text></xsl:when>
          <xsl:when test='starts-with(.,"&apos;")'><xsl:value-of select="local-name()"/><xsl:text> &quot;</xsl:text><xsl:value-of select="." /><xsl:text>&quot;&#10;</xsl:text></xsl:when>
          <!-- output SFString with wrapped quotes since it doesn't have any-->
          <xsl:otherwise><xsl:value-of select="local-name()"/><xsl:text> &quot;</xsl:text><xsl:value-of select="." /><xsl:text>&quot;&#10;</xsl:text></xsl:otherwise>
        </xsl:choose>
      </xsl:when>
      <!-- take care of some special MFString types by adding enclosing &quot; &quot; marks -->
      <xsl:when test="((local-name(..)='FontStyle'		or $nodeType='FontStyle'    	or $EPnodeType='FontStyle') and
      				   (local-name()='family' or local-name()='justify')) or
                      ((local-name(..)='NavigationInfo'	or $nodeType='NavigationInfo'	or $EPnodeType='NavigationInfo') and
      				   (local-name()='type' or local-name()='transitionType')) or
      		      (local-name(..)='MetadataString' and
      				   (local-name()='value'))">
        <xsl:if test="(local-name()='justify') and ($tokenCount > 2)">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>illegal number of tokens (</xsl:text>
              <xsl:value-of select="$tokenCount"/>
              <xsl:text>), maximum allowed = 2</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> attribute </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:if test="(local-name()='justify')">
          <xsl:variable name="quotedJustify">
              <xsl:value-of select="normalize-space(string(.))"/>
          </xsl:variable>
          <xsl:variable name="quotedJustifyTestDoublets">
              <xsl:value-of select="
			 ($quotedJustify='&quot;FIRST&quot; &quot;FIRST&quot;')		or ($quotedJustify='&quot;FIRST&quot; &quot;BEGIN&quot;')	or ($quotedJustify='&quot;FIRST&quot; &quot;MIDDLE&quot;')	or ($quotedJustify='&quot;FIRST&quot; &quot;END&quot;')	or
			 ($quotedJustify='&quot;BEGIN&quot; &quot;FIRST&quot;')		or ($quotedJustify='&quot;BEGIN&quot; &quot;BEGIN&quot;')	or ($quotedJustify='&quot;BEGIN&quot; &quot;MIDDLE&quot;')	or ($quotedJustify='&quot;BEGIN&quot; &quot;END&quot;')	or
			 ($quotedJustify='&quot;MIDDLE&quot; &quot;FIRST&quot;')	or ($quotedJustify='&quot;MIDDLE&quot; &quot;BEGIN&quot;')	or ($quotedJustify='&quot;MIDDLE&quot; &quot;MIDDLE&quot;')	or ($quotedJustify='&quot;MIDDLE&quot; &quot;END&quot;') or
			 ($quotedJustify='&quot;END&quot; &quot;FIRST&quot;')		or ($quotedJustify='&quot;END&quot; &quot;BEGIN&quot;')		or ($quotedJustify='&quot;END&quot; &quot;MIDDLE&quot;')	or ($quotedJustify='&quot;END&quot; &quot;END&quot;')"/>
          </xsl:variable>
          <xsl:if test="not(($quotedJustify='')	or
			 ($quotedJustify='&quot;FIRST&quot;') or
			 ($quotedJustify='&quot;BEGIN&quot;') or
			 ($quotedJustify='&quot;MIDDLE&quot;') or
			 ($quotedJustify='&quot;END&quot;') or
			 ($quotedJustifyTestDoublets))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>illegal FontStyle field, justify='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>' (allowed enumerant values are &quot;FIRST&quot; &quot;BEGIN&quot; &quot;MIDDLE&quot; &quot;END&quot;)</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> attribute </xsl:text>
                <xsl:value-of select="local-name(.)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:if>
        </xsl:if>
        <xsl:if test="(local-name(..)='NavigationInfo') and (local-name()='transitionType') and not(contains(string(.),'ANIMATE') or contains(string(.),'LINEAR') or contains(string(.),'TELEPORT') or string(.)='')">
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:text>nonstandard NavigationInfo transitionType='</xsl:text>
              <xsl:value-of select="."/>
              <xsl:text>' (usually includes &quot;ANIMATE&quot; or &quot;LINEAR&quot; or &quot;TELEPORT&quot;)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> attribute </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
          <xsl:call-template name="print-indent">
            <xsl:with-param name="indent" select="$indent"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:if test="not($fileEncoding='ClassicVRML')">
          <xsl:choose>
            <!-- NavigationInfo transitionType not supported in VRML97 -->
            <xsl:when test="(local-name(..)='NavigationInfo') and (local-name()='transitionType')">
              <xsl:text> # </xsl:text>
            </xsl:when>
            <!-- Viewpoint centerOfRotation not supported in VRML97 -->
            <xsl:when test="(local-name(..)='Viewpoint') and (local-name()='centerOfRotation')">
              <xsl:text> # </xsl:text>
            </xsl:when>
          </xsl:choose>
        </xsl:if>
        <xsl:choose>
          <!-- output MFString.  wrap quotes if string-length 0 -->
          <xsl:when test="not(.)"><xsl:value-of select="local-name()"/><xsl:text> [ &quot;&quot; ]&#10;</xsl:text></xsl:when>
          <!-- output MFString.  don't modify quotes if some are there already -->
          <xsl:when test="contains(string(.),'&quot;')">
            <xsl:value-of select="local-name()"/><xsl:text> [ </xsl:text><xsl:value-of select="concat(normalize-space(translate(string(.),',',' ')),' ')" /><xsl:text> ] &#10;</xsl:text>
          </xsl:when> <!-- ### quotes found... -->
          <!-- output MFString with wrapped quotes around token values -->
          <xsl:otherwise>
            <xsl:value-of select="local-name()"/>
            <!-- <xsl:text> ### inputString sent: &quot;</xsl:text><xsl:value-of select="concat(normalize-space(translate(string(.),'&quot;,','  ')),' ')"/><xsl:text>&quot;&#10;</xsl:text> -->
            <xsl:text> [</xsl:text>
            <xsl:call-template name="wrap-quotes-around-tokens">
              <xsl:with-param name="inputValue" select="concat(normalize-space(translate(string(.),'&quot;,','  ')),' ')"/>
            </xsl:call-template>
            <xsl:text> ]&#10;</xsl:text> <!-- ### inserted quotes around tokens... -->
          </xsl:otherwise>
        </xsl:choose>
      </xsl:when>
      <!-- take care of MFString types by wrapping [ ]
           (if necessary, ensure contained SFString elements wrapped overall in &quot; &quot;) -->
      <xsl:when test="((local-name(..)='Anchor'		or $nodeType='Anchor'		or $EPnodeType='Anchor') and
      				   (local-name()='parameter' or local-name()='url')) or
                      ((local-name(..)='AudioClip'	or $nodeType='AudioClip'	or $EPnodeType='AudioClip') and
      				    local-name()='url') or
                      ((local-name(..)='Background'	or $nodeType='Background'	or $EPnodeType='Background') and
      				    contains(local-name(),'Url'))	or
                      ((local-name(..)='ImageTexture'	or $nodeType='ImageTexture'	or $EPnodeType='ImageTexture') and
      				    local-name()='url') or
                      ((local-name(..)='Inline'		or $nodeType='Inline'		or $EPnodeType='Inline') and
      				    local-name()='url') or
                      ((local-name(..)='MovieTexture'	or $nodeType='MovieTexture'	or $EPnodeType='MovieTexture') and
      				    local-name()='url') or
                      ((local-name(..)='Script'		or $nodeType='Script'		or $EPnodeType='Script') and
      				    local-name()='url') or
                      ((local-name(..)='Text'		or $nodeType='Text'		or $EPnodeType='Text') and
      				    local-name()='string') or
                      ((local-name(..)='WorldInfo'	or $nodeType='WorldInfo'    	or $EPnodeType='WorldInfo' or
      		        local-name(..)='HAnimHumanoid'		or $nodeType='HAnimHumanoid'    or $EPnodeType='HAnimHumanoid') and
      				    local-name()='info') or
      				    	$GeoSpatialMFStringTypes or
      				    	($GeoSpatialSFVec3dTypes and ($fileEncoding='ClassicVRML')) or
      				    	($GeoSpatialMFVec3dTypes and ($fileEncoding='ClassicVRML')) or
      				    	$HAnimMFStringTypes or
        				($nodeType    = 'MFString') or
        				($EPnodeType  = 'MFString') or
        				($EPfieldType = 'MFString')">
        <xsl:if test="(local-name(..)='Inline') and (local-name()='url')
                      and not(contains(string(.),'.x3d')) and not(contains(string(.),'.x3dv')) and not(contains(string(.),'.x3db')) and not(contains(string(.),'.wrl')) and not(contains(string(.),'.wrz'))">
          <xsl:call-template name="output-warning">
            <!-- warning (rather than error) since the url resource might be querying a network resource -->
            <xsl:with-param name="warningString">
              <xsl:text>Inline url does not refer to an X3D scene (file extension .x3d .x3dv .x3db .wrl .wrz)</xsl:text>
              <xsl:if test="contains(string(.),'http://') or contains(string(.),'https://') or contains(string(.),'ftp://') or contains(string(.),'sftp://')">
                <xsl:text> Perhaps network resource might nevertheless return an X3D scene?</xsl:text>
              </xsl:if>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text disable-output-escaping="yes">&lt;Inline </xsl:text>
              <xsl:if test="../@DEF">
                <xsl:text>Inline name='</xsl:text>
                <xsl:value-of select="../@DEF" />
                <xsl:text>' </xsl:text>
              </xsl:if>
              <xsl:text>url='</xsl:text>
              <xsl:value-of select="." />
              <xsl:text disable-output-escaping="yes">'&gt;</xsl:text>
            </xsl:with-param>
          </xsl:call-template>
        </xsl:if>
        <!-- <xsl:message><xsl:text>MFString </xsl:text><xsl:value-of select="../@DEF"/><xsl:text> </xsl:text><xsl:value-of select="local-name(..)"/><xsl:text> </xsl:text><xsl:value-of select="local-name()"/><xsl:text>='</xsl:text><xsl:value-of select="."/><xsl:text>'</xsl:text></xsl:message> -->
        <xsl:choose>
          <xsl:when test="(local-name()='geoSystem') and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;')"><xsl:value-of select="local-name()"/><xsl:text> [ &quot;GDC&quot; ]&#10;</xsl:text></xsl:when>
          <!-- output MFString.  wrap quotes if string-length 0 -->
          <xsl:when test="not(.)"><xsl:value-of select="local-name()"/><xsl:text> [ &quot;&quot; ]&#10;</xsl:text></xsl:when>
          <!-- output MFVec3d as MFString -->
          <!-- concat(normalize-space(translate(@value,'&quot;,','  ')),' ') -->
          <xsl:when test="$GeoSpatialSFVec3dTypes and ($fileEncoding='VRML97')">
            <xsl:value-of select="local-name()"/>
            <xsl:text> </xsl:text>
            <xsl:call-template name="wrap-quotes-around-triplets">
              <xsl:with-param name="inputValue" select="." />
            </xsl:call-template>
            <xsl:text>&#10;</xsl:text>
          </xsl:when>
          <xsl:when test="$GeoSpatialMFVec3dTypes and ($fileEncoding='VRML97')">
            <xsl:value-of select="local-name()"/>
            <xsl:text> [ </xsl:text>
            <xsl:call-template name="wrap-quotes-around-triplets">
              <xsl:with-param name="inputValue" select="." />
            </xsl:call-template>
            <xsl:text> ]&#10;</xsl:text>
          </xsl:when>
          <xsl:when test="$GeoSpatialSFVec3dTypes and ($fileEncoding='ClassicVRML')">
            <xsl:value-of select="local-name()"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>&#10;</xsl:text>
          </xsl:when>
          <xsl:when test="$GeoSpatialMFVec3dTypes and ($fileEncoding='ClassicVRML')">
            <xsl:value-of select="local-name()"/>
            <xsl:text> [ </xsl:text>
            <xsl:value-of select="."/>
            <xsl:text> ]&#10;</xsl:text>
          </xsl:when>
          <!-- output MFString.  no need to wrap quotes -->
          <xsl:when test="starts-with(normalize-space(string(.)),'&quot;')"><xsl:value-of select="local-name()"/><xsl:text> [ </xsl:text><xsl:value-of select="." /><xsl:text> ]&#10;</xsl:text></xsl:when>
          <xsl:when test='starts-with(.,"&apos;")'><xsl:value-of select="local-name()"/><xsl:text> [ &quot;</xsl:text><xsl:value-of select="." /><xsl:text>&quot; ]&#10;</xsl:text></xsl:when>
          <!-- handle HAnimHumanoid info embedded attribute="value" constructs -->
          <xsl:when test="contains(string(.),'=&quot;') or contains(normalize-space(string(.)),'= &quot;')">
          	<!-- <xsl:message><xsl:text>... found it</xsl:text></xsl:message> -->
          	<xsl:value-of select="local-name()"/>
          	<xsl:text> [ &quot;</xsl:text>
          	<xsl:call-template name="escape-quotes-recurse">
          	  <xsl:with-param name="inputValue" select="translate(string(.),'&#10;',' ')"/>
          	</xsl:call-template>
          	<xsl:text>&quot; ]&#10;</xsl:text>
          </xsl:when>
          <!-- output MFString with wrapped quotes since it doesn't have any-->
          <xsl:otherwise><xsl:value-of select="local-name()"/><xsl:text> [ &quot;</xsl:text><xsl:value-of select="." /><xsl:text>&quot; ]&#10;</xsl:text></xsl:otherwise>
        </xsl:choose>
      </xsl:when>
      <!-- take care of other MF field types by wrapping [ ] -->
      <xsl:when test="(contains(local-name(..),'Interpolator') and contains(local-name(),'key')) or
                      (contains(local-name(..),'Sequencer')    and contains(local-name(),'key')) or
                      ( local-name(..)='Background'		or $nodeType='Background'	or $EPnodeType='Background') or
                      ((local-name(..)='ElevationGrid'		or $nodeType='ElevationGrid'	or $EPnodeType='ElevationGrid') and
      				    local-name()='height') or
                      ((local-name(..)='Extrusion'		or $nodeType='Extrusion'	or $EPnodeType='Extrusion') and
      				   (local-name()='crossSection' or local-name()='orientation' or local-name()='scale' or local-name()='spine')) or
                      ((local-name(..)='IndexedQuadSet'		or $nodeType='IndexedQuadSet'	or $EPnodeType='IndexedQuadSet') and
      				    local-name()='index') or
                      ((local-name(..)='IndexedFaceSet'		or $nodeType='IndexedFaceSet'	or $EPnodeType='IndexedFaceSet') and
      				    contains(local-name(),'Index')) or
                      ((local-name(..)='IndexedLineSet'		or $nodeType='IndexedLineSet'	or $EPnodeType='IndexedLineSet') and
      				    contains(local-name(),'Index')) or
                      ((local-name(..)='LOD'			or $nodeType='LOD'		or $EPnodeType='LOD') and
      				    local-name()='range') or
                      ((local-name(..)='NavigationInfo'		or $nodeType='NavigationInfo'	or $EPnodeType='NavigationInfo') and
      				    local-name()='avatarSize') or
                      ((local-name(..)='Normal'			or $nodeType='Normal'		or $EPnodeType='Normal') and
      				    local-name()='vector') or
                      ((local-name(..)='Text'			or $nodeType='Text'		or $EPnodeType='Text') and
      				    local-name()='length') or
                      ((local-name(..)='TextureCoordinate'	or $nodeType='TextureCoordinate' or $EPnodeType='TextureCoordinate') and
      				    local-name()='point') or
      		      ((local-name(..)='MetadataDouble' or local-name(..)='MetadataFloat' or local-name(..)='MetadataInteger') and local-name()='value') or
      				  $ExtensionMFtypes or
      				  $Geometry2d3dMFtypes or
      				  $ColorCoordinateMFtypes or
        			  $MFtypes
                     ">
        <!-- could put traps here to eliminate default-valued fields -->
        <!-- ?? is a local construct needed here to check and wrap quotes around individual string elements in MFString, if content didn't comply?? -->
        <xsl:value-of select="local-name()"/><xsl:text> [ </xsl:text>
        <xsl:value-of select="."/>
        <!-- watch out for illegal embedded VRML comments hiding ] bracket -->
        <xsl:if test="contains(string(.),'#')"><xsl:text>&#10;</xsl:text></xsl:if>
        <xsl:text> ]&#10;</xsl:text>
      </xsl:when>
      <!-- take care of LatticeXvl fields that require conversion -->
      <xsl:when test="$LatticeXvlConversionFields">
	    <xsl:choose>
		  <xsl:when test="local-name()='shellType'">
		    <!-- currently the only non-default choice is "POLYGON-MESH" (0). -->
		    <xsl:value-of select="local-name()"/>
		    <xsl:text> 0&#10;</xsl:text>
		  </xsl:when>
		</xsl:choose>
      </xsl:when>
      <!-- take care of IDREF, IDREFS for node referrals -->
      <xsl:when test="((local-name(..)='GeoMetadata' or $nodeType='GeoMetadata' or $EPnodeType='GeoMetadata') and
      			 local-name()='data') or
        		($nodeType    = 'MFNode') or
        		($EPnodeType  = 'MFNode') or
        		($EPfieldType = 'MFNode')
                     ">
        <!-- need to loop through each IDREF'ed node name, also add separate IDREF case -->
        <xsl:value-of select="local-name()"/><xsl:text> [ USE </xsl:text><xsl:value-of select="."/><xsl:text> ]&#10;</xsl:text>
      </xsl:when>
      <!-- take care of boolean value capitalization - watch out, no discrimination! -->
      <xsl:when test="local-name(..)='Collision' and local-name()='enabled' and ($fileEncoding='VRML97')">
        <xsl:choose>
          <xsl:when test="string(.)='true'">
            <xsl:text>collide TRUE&#10;</xsl:text>
          </xsl:when>
          <xsl:when test="string(.)='false'">
            <xsl:text>collide FALSE&#10;</xsl:text>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <xsl:when test="local-name(..)='PixelTexture' and local-name()='image'">
        <!-- image data can be very long, ensure no buffer overruns on output -->
        <xsl:text>image&#10;</xsl:text><xsl:value-of select="translate(normalize-space(string(.)),' ','&#10;')" />
      </xsl:when>
      <xsl:when test="string(.)='true'">
        <xsl:value-of select="local-name()"/><xsl:text> TRUE&#10;</xsl:text>
      </xsl:when>
      <xsl:when test="string(.)='false'">
        <xsl:value-of select="local-name()"/><xsl:text> FALSE&#10;</xsl:text>
      </xsl:when>
      <!-- default field output is merely standalone value(s), if there is an error it should be flagged -->
      <xsl:otherwise>
        <xsl:if test=".">
          <xsl:value-of select="local-name()"/><xsl:text> </xsl:text><xsl:value-of select="."/><xsl:text>&#10;</xsl:text>
        </xsl:if>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:if>
  <!-- attribute value validation - - - - - - - - - - - - - - - - - - -  -->
  <!-- check quotes are matched since unterminated VRML string values cause big problems.  report error but do not append correcting quote.  -->
  <xsl:call-template name="count-quotes">
    <xsl:with-param name="inputValue" select="."/>
  </xsl:call-template>
  <!-- exclude SFString/MFString attributes before testing other attributes -->
  <xsl:if test="$notDefaultValue and
                (local-name()!='name') and
                local-name()!='url' and
                not(contains(string(.),'Url')) and
                local-name()!='string' and
                local-name()!='appinfo' and
                local-name()!='documentation' and
                local-name()!='description' and
                not(local-name(..)='Anchor' and local-name()='parameter') and
                not(local-name(..)='FontStyle' and local-name()='language') and
                not(starts-with(local-name(..),'Metadata') and local-name()='reference') and
                not(starts-with(local-name(..),'MetadataString') and local-name()='value') and
                not((local-name(..)='WorldInfo' or local-name(..)='HAnimHumanoid') and (local-name()='info' or local-name()='title'))">
    <!-- test for embedded vrml contents in attribute contents -->
    <xsl:if test="contains(string(.),'#')">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> </xsl:text>
          <xsl:value-of select="local-name(.)"/>
          <xsl:text>='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>'</xsl:text>
          <xsl:text> has embedded VRML comments (anything following a # symbol) that may get mangled by XML and hide data!  Recommendation:  use separate XML comments, instead of failure-prone VRML comments embedded in attribute fields.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> attribute </xsl:text>
          <xsl:value-of select="local-name(.)"/>
          <xsl:text> node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="local-name()='containerField' and local-name(../..)='Collision' and count(../@containerField[string(.)='proxy']) > 1">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>only 1 containerField="proxy" allowed for Collision</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="attributeName" select="local-name()"/>
    <xsl:variable name="parentElementName" select="local-name(..)"/>
    <xsl:variable name="prototypeName" select="../../@name"/>
    <xsl:variable name="fieldValueName" select="../@name"/>
    <xsl:variable name="normalizeSpaceValue">
      <xsl:choose>
        <!-- GeoSpatial profile coordinates are encoded as String/Strings, need to become Doubles in future version -->
        <xsl:when test="starts-with($attributeName,'geo') or starts-with($parentElementName,'Geo')">
          <xsl:value-of select="normalize-space(translate(string(.),',&quot;','  '))"/>
        </xsl:when>
        <!-- remove commas, which are treated as whitespace in VRML attributes -->
        <xsl:otherwise>
          <xsl:value-of select="normalize-space(translate(string(.),',',' '))"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>
    <xsl:variable name="blankedValue" select="concat(' ',$normalizeSpaceValue,' ')"/>
    <xsl:variable name="nonSpaceValue" select="translate($normalizeSpaceValue,' ','')"/>
    <xsl:variable name="tupleCount">
      <xsl:choose>
        <xsl:when test="$nonSpaceValue">
          <xsl:value-of select="(string-length($normalizeSpaceValue) - string-length($nonSpaceValue)) + 1"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>0</xsl:text>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:variable>
    <!-- debug
    <xsl:message>
      <xsl:text>$attributeName=</xsl:text><xsl:value-of select="$attributeName"/><xsl:text>, </xsl:text>
      <xsl:text>$parentElementName=</xsl:text><xsl:value-of select="$parentElementName"/><xsl:text>, </xsl:text>
      <xsl:text>$prototypeName=</xsl:text><xsl:value-of select="$prototypeName"/><xsl:text>, </xsl:text>
      <xsl:text>$fieldValueName=</xsl:text><xsl:value-of select="$fieldValueName"/><xsl:text>, </xsl:text>
      <xsl:text>$tupleCount=</xsl:text><xsl:value-of select="$tupleCount"/><xsl:text>, </xsl:text>
      <xsl:text>$normalizeSpaceValue=</xsl:text><xsl:value-of select="$normalizeSpaceValue"/>
    </xsl:message> -->
	<!-- Note:  these rules are adapted from X3dToVrml97.xslt X3dToJson.xslt X3dToJava.xslt X3dToES5.xslt etc. so be sure to apply any updates in all stylesheets -->
    <!-- begin logic to choose appropriately typed test -->
    <xsl:choose>
      <!-- SFBool -->
      <xsl:when test="	($attributeName='ccw') or
      			($attributeName='convex') or
      			($attributeName='colorPerVertex') or
                        ($attributeName='bboxDisplay')  or
      			($attributeName='enabled') or
			($attributeName='dopplerEnabled')  or
			($attributeName='enableHRTF')  or
      			($attributeName='global') or
      			($attributeName='normalPerVertex') or
      			($attributeName='on') or
			($attributeName='load')     or
			($attributeName='loop') or
      			($attributeName='solid') or
      			($parentElementName='AudioClip' and $attributeName='loop') or
			($parentElementName='BooleanToggle' and $attributeName='toggle') or
      			($parentElementName='Collision' and $attributeName='enabled') or
      			($parentElementName='Cone' and ($attributeName='side' or $attributeName='bottom')) or
      			($parentElementName='Cylinder' and ($attributeName='side' or $attributeName='bottom' or $attributeName='top')) or
      			($parentElementName='CylinderSensor' and $attributeName='autoOffset') or
      			($parentElementName='Extrusion' and ($attributeName='beginCap' or $attributeName='endCap')) or
      			($parentElementName='FontStyle' and ($attributeName='horizontal' or $attributeName='leftToRight' or $attributeName='topToBottom')) or
      			($parentElementName='ImageTexture' and ($attributeName='repeatS' or $attributeName='repeatT')) or
			(contains($parentElementName,'Texture3D') and starts-with($attributeName,'repeat')) or
      			($parentElementName='ListenerPointSource' and $attributeName='trackCurrentView')  or
			($parentElementName='LOD' and ($attributeName='forceTransitions')) or
      			($parentElementName='MovieTexture' and ($attributeName='repeatS' or $attributeName='repeatT' or $attributeName='loop')) or
      			($parentElementName='PixelTexture' and ($attributeName='repeatS' or $attributeName='repeatT')) or
      			($parentElementName='NavigationInfo' and $attributeName='headlight') or
      			($parentElementName='PlaneSensor' and $attributeName='autoOffset') or
      			($parentElementName='SphereSensor' and $attributeName='autoOffset') or
      			($parentElementName='Script' and ($attributeName='directOutput' or $attributeName='mustEvaluate')) or
      			($parentElementName='Sound' and $attributeName='spatialize') or
      			($parentElementName='TimeSensor' and $attributeName='loop') or
      			(contains($parentElementName,'Viewpoint') and $attributeName='jump') or
      			($parentElementName='GeoInline' and $attributeName='load') or
      			($parentElementName='GeoOrigin' and $attributeName='rotateYUp') or
      			($parentElementName='GeoViewpoint' and $attributeName='headlight') or
      			($parentElementName='NurbsPatchSurface' and $attributeName='closedSurface')">
        <xsl:choose>
          <xsl:when test="(local-name()='forceTransitions')">
            <xsl:if test="(//X3D/@version='3.0') or ($fileEncoding='VRML97')">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Backwards compatibility note: LOD forceTransitions only allowed for X3D 3.1 or greater</xsl:text>
                  <xsl:if test="($fileEncoding='VRML97')">
                    <xsl:text> (not VRML97)</xsl:text>
                  </xsl:if>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="local-name(.)"/>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
            <xsl:text> ### </xsl:text>
            <xsl:value-of select="local-name()"/><xsl:text> </xsl:text><xsl:value-of select="."/>
            <xsl:text>&#10;</xsl:text>
          </xsl:when>
          <xsl:otherwise>
            <xsl:call-template name="attribute-value-validation">
              <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
              <xsl:with-param name="type"><xsl:text>SFBool</xsl:text></xsl:with-param>
              <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
            </xsl:call-template>
          </xsl:otherwise>
        </xsl:choose>
      </xsl:when>
      <!-- MFBool:  no native MFBool attributes but Scripts, prototypes and Lattice XvlShell can have them. -->
      <xsl:when test="(contains($parentElementName,'BooleanSequencer') and $attributeName='keyValue') or
					($parentElementName='MetadataBoolean' and $attributeName='value') or
					(local-name(..)='XvlShell' and (local-name()='faceEmpty' or local-name()='faceHidden'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFBool</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
      </xsl:when>
      <!-- Enumerations.  Note some apparent mislabeling as SFString/MFstring. -->
      <xsl:when test="	($parentElementName='Fog' and $attributeName='fogType') or
      			($parentElementName='FontStyle' and ($attributeName='family' or $attributeName='justify')) or
      			($parentElementName='NavigationInfo' and contains($attributeName,'type')) or
      			($parentElementName='GeoViewpoint' and contains($attributeName,'navType'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFString</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <xsl:if test="contains($normalizeSpaceValue,' ') and not(contains(string(.),'&quot;'))">
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:text>Enumeration attribute </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> requires "quotation" marks around tokens</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <!-- better tests needed for exact checks, but this will flag major differences -->
        <xsl:choose>
          <xsl:when test="($parentElementName='Fog' and $attributeName='fogType')">
            <xsl:variable name="attributeResidue" select="translate($normalizeSpaceValue,'LINEAREXPONENTIAL','')"/>
            <xsl:if test="normalize-space($attributeResidue)">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains values different than those specified by X3D standard (LINEAR EXPONENTIAL)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
          </xsl:when>
          <xsl:when test="($parentElementName='FontStyle' and $attributeName='family')">
            <xsl:variable name="attributeResidue" select="translate($normalizeSpaceValue,'SERIFSANSTYPEWRITER&quot;','')"/>
            <xsl:if test="normalize-space($attributeResidue)">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains values different than those specified by X3D standard (SERIF SANS TYPEWRITER)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
          </xsl:when>
          <xsl:when test="($parentElementName='FontStyle' and $attributeName='justify')">
            <xsl:variable name="attributeResidue" select="translate($normalizeSpaceValue,'FIRSTBEGINMIDDLEEND&quot;','')"/>
            <xsl:if test="normalize-space($attributeResidue)">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains values different than those specified by X3D standard (FIRST BEGIN MIDDLE END)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
            <xsl:if test="$tupleCount > 2">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains too many values (max 2)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
          </xsl:when>
          <xsl:when test="($parentElementName='FontStyle' and $attributeName='style')">
            <xsl:variable name="attributeResidue" select="translate($normalizeSpaceValue,'PLAINBOLDITALICBOLDITALIC&quot;','')"/>
            <xsl:if test="normalize-space($attributeResidue)">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains values different than those specified by X3D standard (PLAIN BOLD ITALIC BOLDITALIC)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
            <xsl:if test="$tupleCount > 1">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains too many values (max 1)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
          </xsl:when>
          <xsl:when test="($parentElementName='NavigationInfo' and contains($attributeName,'type')) or
                          ($parentElementName='GeoViewpoint' and contains($attributeName,'navType'))">
            <xsl:variable name="attributeResidue" select="translate($normalizeSpaceValue,'EXAMINEWALKFLYANYNONE&quot;','')"/>
            <xsl:if test="normalize-space($attributeResidue)">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains values different than those specified by X3D standard (EXAMINE WALK FLY ANY NONE)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
          </xsl:when>
          <xsl:when test="($parentElementName='EspduTransform' and ($attributeName='networkMode'))">
            <xsl:if test="not($normalizeSpaceValue='local') and not($normalizeSpaceValue='remote') and not($normalizeSpaceValue='master')">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains values different than those specified by X3D standard (local master remote)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <!-- MFString -->
      <xsl:when test="	(starts-with($parentElementName,'Geo') and ($attributeName='geoSystem')) or
					($parentElementName='MetadataString' and $attributeName='value') or
					($parentElementName='MultiTexture' and ($attributeName='function' or $attributeName='mode' or $attributeName='source'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFString</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <xsl:choose>
          <!-- just checking first quoted string value in MFString array -->
          <xsl:when test="starts-with($parentElementName,'Geo') and ($attributeName='geoSystem')">
            <xsl:variable name="attributeUnquoted" select="translate($normalizeSpaceValue,'&quot;','')"/>
            <xsl:variable name="firstStringValue" select="substring-before($attributeUnquoted,' ')"/>
            <!-- <xsl:message><xsl:text>$firstStringValue='</xsl:text><xsl:value-of select="$firstStringValue"/><xsl:text>'</xsl:text></xsl:message> -->
            <xsl:if test="not($firstStringValue='GC' or $firstStringValue='UTM' or $firstStringValue='GD' or $firstStringValue='&quot;GC&quot;' or $firstStringValue='&quot;UTM&quot;' or $firstStringValue='&quot;GD&quot;')">
              <xsl:call-template name="output-warning">
                <xsl:with-param name="warningString">
                  <xsl:text>Initial enumeration attribute </xsl:text>
                  <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text>
                  <xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains values unrecognized by GeoSpatial Profile (&quot;GC&quot; &quot;GD&quot; or &quot;UTM&quot;)</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node">
                  <xsl:value-of select="local-name(..)"/>
                  <xsl:text> node</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:if>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <!-- SFColor -->
      <xsl:when test="	(contains($parentElementName,'Light') and $attributeName='color') or
      			($parentElementName='Fog' and $attributeName='color') or
      			(ends-with($parentElementName,'Material') and contains($attributeName,'Color')) or
				($parentElementName='MultiTexture' and $attributeName='color')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFColor</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
      </xsl:when>
      <!-- MFColor -->
      <xsl:when test="	($parentElementName='Color' and $attributeName='color') or
      			($parentElementName='ColorInterpolator' and $attributeName='keyValue') or
      			($parentElementName='Background' and ($attributeName='groundColor' or $attributeName='skyColor'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFColor</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
      </xsl:when>
      <!-- MFColorRGBA -->
      <xsl:when test="	($parentElementName='ColorRGBA' and $attributeName='color')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFColorRGBA</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
      </xsl:when>
      <!-- SFInt32 -->
      <xsl:when test=" 		($attributeName='channelSelection')         or
                                ($parentElementName='IntegerTrigger' and $attributeName='integerKey') or
				($parentElementName='MetadataInteger' and $attributeName='value') or
				($parentElementName='Switch' and $attributeName='whichChoice') or
      			(contains($parentElementName,'ElevationGrid') and ($attributeName='xDimension' or $attributeName='zDimension')) or
      			(starts-with($parentElementName,'Nurbs') and ($attributeName='order' or $attributeName='tessellation' or $attributeName='uTessellation' or $attributeName='vTessellation' or $attributeName='uTessellation' or $attributeName='dimension' or $attributeName='UDimension' or $attributeName='vDimension')) or
      			($parentElementName='XvlShell' and $attributeName='numberOfDivisions')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFInt32</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- watch out for less-than operator inside numeric comparisons -->
        <!-- value range [-1 .. infinity] -->
        <xsl:if test="(local-name(..)='Switch' and local-name()='whichChoice') and
        		(-1 > number(.))">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Attribute </xsl:text>
              <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> outside valid range [-1 .. +infinity]</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <xsl:choose>
          <!-- test sufficient children for Switch range -->
          <xsl:when test="(local-name(..)='Switch' and local-name()='whichChoice') and not(../*) and not((string(.)='-1') or (string(.)=''))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> found without any Switch child levels</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name(..)='Switch' and local-name()='whichChoice') and
          		((number(.) + 1) > count(../*))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> must not be greater than number of Switch child levels (initial index = 0)</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
        </xsl:choose>
        <!-- value range [0 .. infinity] -->
        <xsl:if test=" ((local-name(..)='ElevationGrid') or
        		(starts-with(local-name(..),'Nurbs') and (local-name()='weight' or local-name()='order' or local-name()='uOrder' or local-name()='vOrder' or local-name()='uDimension' or local-name()='vDimension'))) and
        		(contains($blankedValue,' -'))">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Attribute </xsl:text>
              <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> outside valid range [0 .. +infinity]</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <!-- TODO other NURBS range checks needed here -->
      </xsl:when>
      <!-- MFInt32 -->
      <xsl:when test="	($attributeName='colorIndex') or
      			($attributeName='coordIndex') or
      			($attributeName='normalIndex') or
      			($attributeName='texCoordIndex') or
      			($attributeName='faceCoordIndex') or
      			($attributeName='faceTexCoordIndex') or
      			($attributeName='edgeBeginCoordIndex') or
      			($attributeName='edgeEndCoordIndex') or
      			($attributeName='index' and ($parentElementName='ContourPolyline2D')) or
      			($attributeName='index' and starts-with($parentElementName,'IndexedTriangle')) or
				($attributeName='keyValue' and starts-with($parentElementName,'IntegerSequencer')) or
				($attributeName='vertexCount' and starts-with($parentElementName,'LineSet')) or
				($attributeName='image' and ($parentElementName='PixelTexture3D')) or
      			($attributeName='fanCount') or
      			($attributeName='stripCount') or
      			($attributeName='edgeEndCoordIndex')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFInt32</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- value range [-1 .. infinity] applies to all four Index attributes -->
        <xsl:if test="(-1 > number(.))">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Attribute </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> outside valid range [-1 .. +infinity]</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
      </xsl:when>
      <!-- SFFloat -->
      <xsl:when test="
                                        ($attributeName='absorption')       or
                                        ($attributeName='ambientIntensity') or
					($attributeName='attack')           or
                                        ($attributeName='coneInnerAngle')   or ($attributeName='coneOuterAngle')  or ($attributeName='coneOuterGain')    or
					($attributeName='creaseAngle')      or
					($attributeName='detune')           or
                                        ($attributeName='diffuse')          or
					($attributeName='farDistance')      or ($attributeName='nearDistance')    or
					($attributeName='frequency')        or
					($attributeName='gain')             or
					($attributeName='intensity')        or
					($attributeName='interauralDistance') or
					($attributeName='knee')             or
					($attributeName='loopEnd')          or ($attributeName='loopStart')       or
					($attributeName='maxDistance')      or
					($attributeName='minDecibels')      or ($attributeName='maxDecibels')     or
                                        starts-with($attributeName,'pointSize') or
					($attributeName='priority')         or
					($attributeName='qualityFactor')    or
                                        ($attributeName='radius')           or ($attributeName='innerRadius') or ($attributeName='outerRadius') or
					($attributeName='ratio')            or
					($attributeName='referenceDistance') or
                                        ($attributeName='refraction')       or
                                        ($attributeName='rolloffFactor')    or
					($attributeName='shadowIntensity')  or
					($attributeName='smoothingTimeConstant')  or
                                        ($attributeName='specular')         or
                                        ($attributeName='startAngle')       or ($attributeName='endAngle') or
					($attributeName='threshold')        or
                                        ($attributeName='tolerance')        or
					($attributeName='transparency')     or
			($parentElementName='AcousticProperties' and ($attributeName='absorption' or $attributeName='diffuse' or $attributeName='refraction' or $attributeName='specular')) or
			($parentElementName='Appearance'       and $attributeName='alphaCutoff') or
			($parentElementName='AudioClip' and $attributeName='pitch') or
      			($parentElementName='Cone' and ($attributeName='bottomRadius' or $attributeName='height')) or
      			($parentElementName='Cylinder' and ($attributeName='radius' or $attributeName='height')) or
      			($parentElementName='CylinderSensor' and ($attributeName='diskAngle' or $attributeName='maxAngle' or $attributeName='minAngle' or $attributeName='offset')) or
      			(contains($parentElementName,'ElevationGrid') and ($attributeName='xSpacing' or $attributeName='zSpacing')) or
      			($parentElementName='Fog' and $attributeName='visibilityRange') or
      			($parentElementName='FontStyle' and ($attributeName='size' or $attributeName='spacing')) or
      			(ends-with($parentElementName,'Material') and ($attributeName='ambientIntensity' or $attributeName='shininess' or $attributeName='transparency')) or
      			($parentElementName='MovieTexture' and $attributeName='speed') or
			($parentElementName='MultiTexture' and $attributeName='alpha') or
      			($parentElementName='NavigationInfo' and ($attributeName='speed' or $attributeName='visibilityLimit' or $attributeName='transitionTime')) or
      			($parentElementName='GeoViewpoint' and $attributeName='speedFactor') or
      			($parentElementName='PointLight' and $attributeName='radius') or
      			($parentElementName='Sound' and ($attributeName='maxBack' or $attributeName='minBack' or $attributeName='maxFront' or $attributeName='minFront' or $attributeName='priority')) or
      			($parentElementName='SpatialSound' and ($attributeName='coneInnerAngle' or $attributeName='coneOuterAngle' or $attributeName='coneOuterGain' or $attributeName='maxDistance' or $attributeName='priority' or $attributeName='referenceDistance' or $attributeName='rolloffFactor')) or
			($parentElementName='Sphere' and $attributeName='radius') or
      			($parentElementName='SpotLight' and ($attributeName='radius' or $attributeName='cutOffAngle' or $attributeName='beamWidth')) or
      			($parentElementName='Text' and $attributeName='maxExtent') or
      			(starts-with($parentElementName,'TextureProjector') and ($attributeName='farDistance' or $attributeName='nearDistance')) or
                        ($parentElementName='TextureProjectorPerspective' and $attributeName='fieldOfView') or
			($parentElementName='TextureTransform' and $attributeName='rotation') or
      			(contains($parentElementName,'Viewpoint') and $attributeName='fieldOfView') or
      			(starts-with($parentElementName,'Arc') and (contains($attributeName,'Angle') or $attributeName='radius')) or
      			($parentElementName='Circle2D' and $attributeName='radius') or
      			($parentElementName='Disk2D' and contains($attributeName,'Radius')) or
      			($parentElementName='HAnimSegment' and $attributeName='mass') or
      			($parentElementName='HAnimDisplacer' and $attributeName='weight') or
      			($parentElementName='NurbsSet' and $attributeName='tessellationScale')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFFloat</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- further range checks are only performed for native nodes, since prototypes might extend functionality -->
        <xsl:choose>
          <!-- value range [0 .. 1] -->
          <xsl:when test="(($attributeName='intensity') or contains($attributeName,'Intensity') or
                           (ends-with($parentElementName,'Material') and ($attributeName='shininess' or $attributeName='transparency')) or
                           ($parentElementName='Sound' and $attributeName='priority')) and
          		((number(.) > 1) or (0 > number(.)))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> outside valid range [0..1]</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- value range [-2pi .. 2pi] -->
          <xsl:when test="($attributeName='startAngle' or $attributeName='endAngle') and
          		  ((number(.) > 6.283185307179586476925286766559) or (-6.283185307179586476925286766559 > number(.)))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> outside valid range [-2pi .. 2pi]</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- test nonnegative attributes -->
          <xsl:when test="((local-name()='creaseAngle') or
                           (local-name(..)='Fog' and local-name()='visibilityRange') or
                           (local-name(..)='FontStyle' and (local-name()='size' or local-name()='spacing')) or
                           (local-name(..)='NavigationInfo' and (local-name()='speed' or local-name()='visibilityLimit' or $attributeName='transitionTime')) or
                           (local-name(..)='PixelTexture' and local-name()='image') or
                           (local-name(..)='PointLight' and (local-name()='radius')) or
                           (local-name(..)='SpotLight'  and (local-name()='radius')) or
                           (local-name(..)='ProximitySensor' and local-name()='size') or
                           (local-name(..)='VisibilitySensor' and local-name()='size') or
                           (local-name(..)='Sound' and (starts-with(local-name(),'max') or starts-with(local-name(),'min'))) or
                           (local-name(..)='Text' and local-name()='maxExtent') or
      			   ($parentElementName='HAnimSegment' and $attributeName='mass')) and
          		(contains($blankedValue,' -'))"> <!-- exclude negative exponents -->
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> must be a nonnegative value</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- test positive attributes -->
          <xsl:when test="((local-name(..)='AudioClip' and local-name()='pitch') or
                           (local-name(..)='Box' and local-name()='size') or
                           (local-name(..)='Cone' and (local-name()='bottomRadius' or local-name()='height')) or
                           (local-name(..)='Cylinder' and (local-name()='height' or local-name()='radius')) or
                           (local-name(..)='Sphere' and local-name()='radius') or
                           (local-name(..)='TimeSensor' and local-name()='cycleInterval')) and
          		(contains($blankedValue,' -') or
          		 normalize-space(string(.))='0' or normalize-space(string(.))='0.0' or normalize-space(string(.))='.0' or normalize-space(string(.))='0.')">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> must be a positive value</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- range [-2pi..2pi] -->
          <xsl:when test="((local-name(..)='CylinderSensor' and (local-name()='maxAngle' or local-name()='minAngle')) and
          		((number(.) > 6.283185306) or (-6.283185306 > number(.))))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> must be within range [-2pi..2pi] radians</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- range (0..pi/2) -->
          <xsl:when test="((local-name(..)='CylinderSensor' and (local-name()='diskAngle')) and
          		((number(.) > 1.5707963265) or (0 > number(.))))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> must be within range (0..pi/2) radians</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <!-- MFFloat -->
      <xsl:when test="	($attributeName='key') or
      			(contains($parentElementName,'ElevationGrid') and $attributeName='height') or
      			(contains($parentElementName,'LOD') and $attributeName='range') or
      			($parentElementName='NavigationInfo' and $attributeName='avatarSize') or
      			($parentElementName='Text' and $attributeName='length') or
      			($parentElementName='Background' and ($attributeName='groundAngle' or $attributeName='skyAngle')) or
      			($parentElementName='HAnimJoint' and ($attributeName='llimit' or $attributeName='ulimit' or $attributeName='stiffness')) or
				($parentElementName='HAnimMotion' and $attributeName='values') or
      			($parentElementName='HAnimSegment' and $attributeName='momentsOfInertia') or
      			($parentElementName='MetadataFloat' and $attributeName='value') or
      			($parentElementName='NurbsTextureSurface' and $attributeName='weight') or
      			($parentElementName='XvlShell' and ($attributeName='vertexRound' or $attributeName='edgeRound'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFFloat</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <xsl:choose>
          <!-- test nonnegative attributes -->
          <xsl:when test="((local-name(..)='NavigationInfo' and local-name()='avatarSize') or
                           (local-name(..)='Text' and local-name()='length')) and
          		(contains($blankedValue,' -'))"> <!-- exclude negative exponents -->
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> must be a nonnegative value</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- test positive attributes -->
          <xsl:when test="(local-name(..)='LOD' and local-name()='range') and
          		((contains($blankedValue,' -') or contains($blankedValue,' 0 ') or contains($blankedValue,' 0.0 ') or contains($blankedValue,' 0. ') or contains($blankedValue,' .0 ')))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> must be all positive (nonzero) values</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- test sufficient children for LOD range -->
          <xsl:when test="(local-name(..)='LOD' and local-name()='range') and not(../node())">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> found without any LOD children levels</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <xsl:when test="(local-name(..)='LOD' and local-name()='range') and
          		($tupleCount + 1 != (count(../*)))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> array length (</xsl:text>
                <xsl:value-of select="$tupleCount"/>
                <xsl:text>) must be one less than number of LOD children levels (</xsl:text>
                <xsl:value-of select="count(../*)"/>
                <xsl:text>)</xsl:text>
                <xsl:if test="($tupleCount = count(../*))">
                  <xsl:text> (hint: can use empty WorldInfo as nonrendering final node)</xsl:text>
                </xsl:if>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- momentsOfInertia size -->
          <xsl:when test="($parentElementName='HAnimSegment' and $attributeName='momentsOfInertia') and
                           ($tupleCount!=9)">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> is a [3 x 3] matrix and must contain 9 values</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- key with no keyValue -->
          <xsl:when test="(local-name(.)='key') and not(normalize-space(../@keyValue))">
            <xsl:call-template name="output-warning">
              <xsl:with-param name="warningString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> needs corresponding keyValue attribute</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- test key/keyValue size matches -->
          <xsl:when test="(local-name(.)='key') or (local-name(.)='keyValue' and not(../@key))">
            <!-- change commas and quote marks to spaces, then normalize -->
            <xsl:variable name="keyValue"    select="normalize-space(translate(../@keyValue,',&quot;','  '))"/>
            <xsl:variable name="keyValueTokensCount" select="(string-length($keyValue) - string-length(translate($keyValue,' ',''))) + 1"/>
            <xsl:variable name="keyValueCount">
              <xsl:choose>
                <xsl:when test="(local-name(..)='ScalarInterpolator') or
                		(local-name(..)='BooleanSequencer') or
                		(local-name(..)='IntegerSequencer')">
                  <xsl:value-of select="$keyValueTokensCount"/>
                </xsl:when>
                <xsl:when test="(local-name(..)='PositionInterpolator2D') or
                		(local-name(..)='CoordinateInterpolator2D')">
                  <xsl:value-of select="$keyValueTokensCount div 2"/>
                </xsl:when>
                <xsl:when test="(local-name(..)='ColorInterpolator') or
                		(local-name(..)='CoordinateInterpolator') or
                		(local-name(..)='NormalInterpolator') or
                		(local-name(..)='PositionInterpolator') or
                		(local-name(..)='GeoPositionInterpolator')">
                  <xsl:value-of select="$keyValueTokensCount div 3"/>
                </xsl:when>
                <xsl:when test="(local-name(..)='OrientationInterpolator')">
                  <xsl:value-of select="$keyValueTokensCount div 4"/>
                </xsl:when>
              </xsl:choose>
            </xsl:variable>
            <!-- debug
            <xsl:message>
              <xsl:text>$keyValue=</xsl:text><xsl:value-of select="$keyValue"/><xsl:text>, </xsl:text>
              <xsl:text>$keyValueTokensCount=</xsl:text><xsl:value-of select="$keyValueTokensCount"/><xsl:text>, </xsl:text>
              <xsl:text>$keyValueCount=</xsl:text><xsl:value-of select="$keyValueCount"/>
            </xsl:message> -->
            <xsl:choose>
              <xsl:when test="(local-name(..)='CoordinateInterpolator') or
                	      (local-name(..)='NormalInterpolator') or
                	      (local-name(..)='CoordinateInterpolator2D')">
                <xsl:if test="($keyValueCount div $tupleCount)!=round($keyValueCount div $tupleCount)">
                  <xsl:call-template name="output-error">
                    <xsl:with-param name="errorString">
                      <xsl:text>Attribute </xsl:text>
                      <xsl:value-of select="local-name()"/>
                      <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                      <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                      <xsl:text> key count (</xsl:text>
                      <xsl:value-of select="$tupleCount"/>
                      <xsl:text>) must be an integer factor of the keyValue count (</xsl:text>
                      <xsl:value-of select="$keyValueCount"/>
                      <xsl:text>) to determine number of Vector3Floats sent in each eventOut value</xsl:text>
                    </xsl:with-param>
                    <xsl:with-param name="node">
                      <xsl:value-of select="local-name(..)"/>
                      <xsl:text> node</xsl:text>
                    </xsl:with-param>
                    <xsl:with-param name="DEF"  select="../@DEF"/>
                  </xsl:call-template>
                </xsl:if>
              </xsl:when>
              <xsl:when test="($tupleCount!=$keyValueCount)">
                <xsl:call-template name="output-warning">
                  <xsl:with-param name="warningString">
                    <xsl:text>Attribute </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                    <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                    <xsl:text> key count (</xsl:text>
                    <xsl:value-of select="$tupleCount"/>
                    <xsl:text>) must equal keyValue count (</xsl:text>
                    <xsl:value-of select="$keyValueCount"/>
                    <xsl:text>)</xsl:text>
                  </xsl:with-param>
                  <xsl:with-param name="node">
                    <xsl:value-of select="local-name(..)"/>
                    <xsl:text> node</xsl:text>
                  </xsl:with-param>
                  <xsl:with-param name="DEF"  select="../@DEF"/>
                </xsl:call-template>
              </xsl:when>
            </xsl:choose>
          </xsl:when>
          <!-- more precise angle tests needed, but these help catch gross cases (e.g. degree values) -->
          <!-- range [0..pi/2] -->
          <xsl:when test="((local-name(..)='Background' and local-name()='groundAngle')) and
          	(contains($blankedValue,' -') or
  		 contains($blankedValue,' 2') or contains($blankedValue,' 3') or contains($blankedValue,' 4') or
  		 contains($blankedValue,' 5') or contains($blankedValue,' 6') or contains($blankedValue,' 7') or
  		 contains($blankedValue,' 8') or contains($blankedValue,' 9'))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> must be in range [0..pi/2] radians</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- range [0..pi] -->
          <xsl:when test="((local-name(..)='Background' and local-name()='skyAngle')) and
          	(contains($blankedValue,' -') or
  		 contains($blankedValue,' 4') or
  		 contains($blankedValue,' 5') or contains($blankedValue,' 6') or contains($blankedValue,' 7') or
  		 contains($blankedValue,' 8') or contains($blankedValue,' 9'))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> must be in range [0..pi] radians</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <!-- SFVec2f -->
      <xsl:when test="	($parentElementName='TextureTransform' and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
      			($parentElementName='PlaneSensor' and ($attributeName='maxPosition' or $attributeName='minPosition')) or
      			($parentElementName='Rectangle2D' and ($attributeName='size'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFVec2f</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- no constraint tests needed -->
      </xsl:when>
      <!-- MFVec2f -->
      <xsl:when test="	($parentElementName='Extrusion' and ($attributeName='crossSection' or $attributeName='scale')) or
      			(($parentElementName='ContourPolyline2D' or $parentElementName='Polypoint2D' or $parentElementName='TextureCoordinate') and $attributeName='point') or
      			(($parentElementName='NurbsCurve2D' or $parentElementName='NurbsTextureSurface') and $attributeName='controlPoint') or
      			(($parentElementName='Polyline2D') and $attributeName='lineSegments') or
      			(($parentElementName='TriangleSet2D') and $attributeName='vertices')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFVec2f</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- test positive attributes -->
        <xsl:if test="(	($parentElementName='Extrusion' and $attributeName='scale')) and
          	       ((contains($blankedValue,' -') or
          		 contains($blankedValue,' 0 ') or contains($blankedValue,' 0.0 ') or contains($blankedValue,' .0 ') or contains($blankedValue,' 0. ')))">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Attribute </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> must be all positive (nonzero) values</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        <!-- Extrusion spine has a default value, so don't need to check for it -->
        <!-- test scale/spine size matches -->
        <xsl:if test="$parentElementName='Extrusion' and $attributeName='scale'">
          <!-- change commas to spaces and normalize -->
          <xsl:variable name="spine"    select="normalize-space(translate(../@spine,',',' '))"/>
          <xsl:variable name="spineTokensCount" select="(string-length($spine) - string-length(translate($spine,' ',''))) + 1"/>
          <xsl:variable name="spineCount" select="$spineTokensCount div 3"/>
          <!-- debug
          <xsl:message>
            <xsl:text>$spine=</xsl:text><xsl:value-of select="$spine"/><xsl:text>, </xsl:text>
            <xsl:text>$spineTokensCount=</xsl:text><xsl:value-of select="$spineTokensCount"/><xsl:text>, </xsl:text>
            <xsl:text>$spineCount=</xsl:text><xsl:value-of select="$spineCount"/>
          </xsl:message> -->
          <xsl:if test="(($tupleCount div 2)!=$spineCount) and (($tupleCount div 2)!=1) and not(($spine='' or $spine=' ') and ($tupleCount div 2)>=2)">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>MFVec2f attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> count (</xsl:text>
                <xsl:value-of select="($tupleCount div 2)"/>
                <xsl:text> pairs) must equal 1, or equal spine count (</xsl:text>
                <xsl:choose>
                  <xsl:when test="not(../@spine)"><xsl:text>default=2</xsl:text></xsl:when>
                  <xsl:otherwise><xsl:value-of select="$spineCount"/></xsl:otherwise>
                </xsl:choose>
                <xsl:text> triplets)</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:if>
        </xsl:if>
      </xsl:when>
      <!-- SFVec3d -->
      <xsl:when test="	($parentElementName='GeoLocation' and $attributeName='geoCoords') or
      			($parentElementName='GeoOrigin' and $attributeName='geoCoords')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFVec3d</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- any other special tests? -->
      </xsl:when>
      <!-- MFVec3d -->
      <xsl:when test="	($parentElementName='GeoCoordinate' and $attributeName='point') or
      			($parentElementName='GeoPositionInterpolator' and $attributeName='keyValue')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFVec3d</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- any other special tests? -->
      </xsl:when>
      <!-- SFVec3f -->
      <xsl:when test="	($attributeName='bboxCenter') or
      			($attributeName='bboxSize') or
      			($parentElementName='Billboard' and $attributeName='axisOfRotation') or
      			($parentElementName='Box' and $attributeName='size') or
      			($parentElementName='DirectionalLight' and $attributeName='direction') or
      			(contains($parentElementName,'LOD') and $attributeName='center') or
      			($parentElementName='PlaneSensor' and $attributeName='offset') or
      			($parentElementName='ProximitySensor' and ($attributeName='center' or $attributeName='size')) or
      			($parentElementName='PointLight' and ($attributeName='attenuation' or $attributeName='location')) or
      			($parentElementName='Sound' and ($attributeName='direction' or $attributeName='location')) or
      			($parentElementName='SpotLight' and ($attributeName='attenuation' or $attributeName='direction' or $attributeName='location')) or
      			($parentElementName='Transform' and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
      			($parentElementName='Viewpoint' and (($attributeName='position') or ($attributeName='centerOfRotation'))) or
      			($parentElementName='VisibilitySensor' and $attributeName='size') or
      			($parentElementName='HAnimJoint' and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
      			($parentElementName='HAnimSite'  and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
      			($parentElementName='HAnimSegment' and $attributeName='centerOfMass')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFVec3f</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- check coverage of other attributes -->
        <xsl:choose>
          <!-- positive value -->
          <xsl:when test="(($parentElementName='Box' and $attributeName='size') or
      	  	           ($parentElementName='ProximitySensor' and $attributeName='size') or
      	  	           ($parentElementName='Transform' and $attributeName='scale' and (//X3D/@version='3.0'))) and
          	          ((contains($blankedValue,' -') or
            	            contains($blankedValue,' 0 ') or contains($blankedValue,' 0.0 ') or contains($blankedValue,' .0 ') or contains($blankedValue,' 0. ')))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> must contain all positive (nonzero) values</xsl:text>
                <xsl:if test="$attributeName='scale'"><xsl:text> in &lt;X3D version='3.0'&gt;, and so change to later version or use positive values for scale</xsl:text></xsl:if>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- value range [0 .. infinity] -->
          <xsl:when test="(($parentElementName='PointLight' and $attributeName='attenuation') or
      	  	           ($parentElementName='SpotLight'  and $attributeName='attenuation') or
      	  	           ($parentElementName='VisibilitySensor' and $attributeName='size')) and
          		  (contains($blankedValue,' -'))"> <!-- exclude negative exponents -->
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> outside valid range [0 .. +infinity]</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <!-- bboxSize values positive or '-1 -1 -1' -->
          <xsl:when test="(local-name()='bboxSize') and
          		(contains($blankedValue,' -') and (normalize-space(translate(string(.),'.0',''))!='-1 -1 -1'))">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> contains negative value other than '-1 -1 -1'</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:when>
        </xsl:choose>
      </xsl:when>
      <!-- MFVec3f -->
      <xsl:when test="	($parentElementName='CoordinateInterpolator' and $attributeName='keyValue') or
      			($parentElementName='NormalInterpolator' and $attributeName='keyValue') or
      			($parentElementName='PositionInterpolator' and $attributeName='keyValue') or
      			(contains($parentElementName,'Coordinate') and $attributeName='point') or
      			($parentElementName='Extrusion' and $attributeName='spine') or
      			($parentElementName='Normal' and $attributeName='vector') or
      			($parentElementName='HAnimDisplacer' and $attributeName='displacements') or
      			($parentElementName='XvlShell' and ($attributeName='edgeBeginVector' or $attributeName='edgeEndVector'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFVec3f</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
      </xsl:when>
      <!-- SFRotation -->
      <xsl:when test="	($parentElementName='PlaneSensor' and $attributeName='axisRotation') or
				($parentElementName='SphereSensor' and $attributeName='offset') or
      			($parentElementName='Transform' and ($attributeName='rotation' or $attributeName='scaleOrientation')) or
      			(contains($parentElementName,'Viewpoint') and $attributeName='orientation') or
      			($parentElementName='HAnimJoint' and ($attributeName='limitOrientation' or $attributeName='rotation' or $attributeName='scaleOrientation')) or
      			($parentElementName='HAnimSite' and ($attributeName='rotation' or $attributeName='scaleOrientation'))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>SFRotation</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
      </xsl:when>
      <!-- MFRotation -->
      <xsl:when test="	($parentElementName='Extrusion' and $attributeName='orientation') or
      			($parentElementName='OrientationInterpolator' and $attributeName='keyValue')">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>MFRotation</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
        <!-- Extrusion spine has a default value, so don't need to check for it -->
        <!-- test orientation/spine size matches -->
        <xsl:if test="$parentElementName='Extrusion' and $attributeName='orientation'">
          <!-- change commas to spaces and normalize -->
          <xsl:variable name="spine"    select="normalize-space(translate(../@spine,',',' '))"/>
          <xsl:variable name="spineTokensCount" select="(string-length($spine) - string-length(translate($spine,' ',''))) + 1"/>
          <xsl:variable name="spineCount" select="$spineTokensCount div 3"/>
          <!-- debug
          <xsl:message>
            <xsl:text>$spine=</xsl:text><xsl:value-of select="$spine"/><xsl:text>, </xsl:text>
            <xsl:text>$spineTokensCount=</xsl:text><xsl:value-of select="$spineTokensCount"/><xsl:text>, </xsl:text>
            <xsl:text>$spineCount=</xsl:text><xsl:value-of select="$spineCount"/>
          </xsl:message> -->
          <xsl:if test="(($tupleCount div 4)!=$spineCount) and (($tupleCount div 4)!=1) and not(($spine='' or $spine=' ') and ($tupleCount div 4)>=2)">
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:text>Attribute </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
                <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                <xsl:text> count (</xsl:text>
                <xsl:value-of select="($tupleCount div 4)"/>
                <xsl:text> orientation 4-tuples) must equal 1, or equal spine count (</xsl:text>
                <xsl:choose>
                  <xsl:when test="not(../@spine)"><xsl:text>default=2</xsl:text></xsl:when>
                  <xsl:otherwise><xsl:value-of select="$spineCount"/></xsl:otherwise>
                </xsl:choose>
                <xsl:text> triplets)</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="../@DEF"/>
            </xsl:call-template>
          </xsl:if>
        </xsl:if>
      </xsl:when>
 <!-- Other
      <xsl:when test="	($attributeName='') or
      			($parentElementName='' and $attributeName='') or
      			($parentElementName='' and $attributeName='') or
      			($parentElementName='' and ($attributeName='' or $attributeName='')) or
      			($parentElementName='' and ($attributeName='' or $attributeName=''))">
        <xsl:call-template name="attribute-value-validation">
          <xsl:with-param name="name"><xsl:value-of select="$attributeName"/></xsl:with-param>
          <xsl:with-param name="type"><xsl:text>Boolean</xsl:text></xsl:with-param>
          <xsl:with-param name="value"><xsl:value-of select="."/></xsl:with-param>
        </xsl:call-template>
      </xsl:when>
 -->
    </xsl:choose>
    <xsl:if test="($attributeName='keyValue') and not(normalize-space(translate(../@key,',',' ')))">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> needs corresponding same-size key array</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
    </xsl:if>
  </xsl:if>
</xsl:template>


<!-- ****** XML comments ****** -->
<xsl:template match="comment()[ancestor::X3D]">
<!-- template match constraint [ancestor::X3D] filters out DTD comments -->
  <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
  <!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
  <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
  <!-- having trouble translating line breaks properly, changing them to spaces (which avoids runtime errors, at least).  also meta tag.  -->
  <xsl:text># </xsl:text><xsl:value-of select="normalize-space(string(.))"/> <!-- translate(string(.),'&#10;',' ') -->
  <xsl:text>&#10;</xsl:text>
  <xsl:if test="contains(string(.),'--')">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>XML comment contains embedded '--' terminator characters: '</xsl:text>
        <xsl:value-of select="substring(normalize-space(string(.)),1,100)"/>
        <xsl:if test="string-length(normalize-space(string(.))) > 100"><xsl:text> [...]</xsl:text></xsl:if>
        <xsl:text>'</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>comment with parent </xsl:text>
        <xsl:value-of select="local-name(..)"/>
        <xsl:text> node</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- also ought to test that last character isn't - terminator -->
</xsl:template>


<!-- ****** XML processing instructions ****** -->
<xsl:template match="processing-instruction()">
<xsl:text># </xsl:text><xsl:value-of select="."/><xsl:text>&#10;</xsl:text>
</xsl:template>


<!-- ****** @appinfo for tooltips:  comment the attribute value ****** -->
<xsl:template match="@appinfo[local-name(..)='field' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare']">
  <xsl:param name="indent"><xsl:text>1</xsl:text></xsl:param>
  <xsl:if test="normalize-space(string(.))">
    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
    <xsl:text># [</xsl:text>
    <xsl:value-of select="local-name(.)"/>
    <xsl:text>] </xsl:text>
    <xsl:value-of select="translate(string(.),'&#10;',' ')"/>
  </xsl:if>
  <xsl:text>&#10;</xsl:text>
</xsl:template>


<!-- ****** @documentation for tooltips:  comment the attribute value ****** -->
<xsl:template match="@documentation[local-name(..)='field' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare']">
  <xsl:if test="normalize-space(string(.))">
    <xsl:text> # </xsl:text>
    <xsl:value-of select="local-name(.)"/>
    <xsl:text>: </xsl:text>
    <xsl:value-of select="translate(string(.),'&#10;',' ')"/>
    <!-- check for url (or . in filename.ext) -->
    <xsl:if test="not(contains(string(.),'://')) and not(contains(string(.),'.'))">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>attribute documentation='</xsl:text>
          <xsl:value-of select="."/>
          <xsl:text>' usually contains reference url</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node"/>
        <xsl:with-param name="DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
</xsl:template>


<!-- ****** ROUTE ****** -->
<xsl:template match="ROUTE">
<xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
<!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
<xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
<xsl:text>ROUTE </xsl:text>
<xsl:value-of select="@fromNode" /><xsl:text>.</xsl:text>
<xsl:value-of select="@fromField"/>
<xsl:text> TO </xsl:text>
<xsl:value-of select="@toNode"   /><xsl:text>.</xsl:text>
<xsl:value-of select="@toField"  />
<xsl:text>&#10;</xsl:text>
<xsl:variable name="fromNode"  select="@fromNode" />
<xsl:variable name="fromField" select="@fromField" />
<xsl:variable name="toNode"    select="@toNode" />
<xsl:variable name="toField"   select="@toField" />
<xsl:variable name="fromNodeType" select="local-name(//*[(@DEF=$fromNode)])"/>
<xsl:variable name="toNodeType"   select="local-name(//*[(@DEF=$toNode)])"/>
<xsl:variable name="fromNodeProtoInstanceName" select="//ProtoInstance[@DEF=$fromNode]/@name"/>
<xsl:variable name=  "toNodeProtoInstanceName" select="//ProtoInstance[@DEF=$toNode]/@name"/>
<xsl:choose>
  <!-- verify all parameters defined (which is convenient but redundant, since already required by DTD/Schema -->
  <xsl:when test="not(@fromNode) or not(@fromField) or not(@toNode) or not(@toField)">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>incomplete ROUTE </xsl:text>
        <xsl:choose>
          <xsl:when test="@fromNode">
            <xsl:value-of select="@fromNode" />
          </xsl:when>
          <xsl:otherwise><xsl:text>___</xsl:text></xsl:otherwise>
        </xsl:choose>
        <xsl:text>.</xsl:text>
        <xsl:choose>
          <xsl:when test="@fromField">
            <xsl:value-of select="@fromField" />
          </xsl:when>
          <xsl:otherwise><xsl:text>___</xsl:text></xsl:otherwise>
        </xsl:choose>
        <xsl:text> TO </xsl:text>
        <xsl:choose>
          <xsl:when test="@toNode">
            <xsl:value-of select="@toNode" />
          </xsl:when>
          <xsl:otherwise><xsl:text>___</xsl:text></xsl:otherwise>
        </xsl:choose>
        <xsl:text>.</xsl:text>
        <xsl:choose>
          <xsl:when test="@toField">
            <xsl:value-of select="@toField" />
          </xsl:when>
          <xsl:otherwise><xsl:text>___</xsl:text></xsl:otherwise>
        </xsl:choose>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>ROUTE</xsl:text>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:when>
  <!-- all ROUTE attributes defined, so check them -->
  <xsl:otherwise>
    <!-- duplicate ROUTEs? -->
    <xsl:if test="count(//ROUTE[(@fromNode=$fromNode) and (@fromField=$fromField) and (@toNode=$toNode) and (@toField=$toField)]) != 1">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>duplicate ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- fromNode DEFed? -->
    <xsl:if test="not(//*[@DEF=$fromNode] or //IMPORT[(@importedDEF=$fromNode and @AS='') or @AS=$fromNode])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>no node with DEF="</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>" found, for ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- toNode DEFed? -->
    <xsl:if test="not(//*[@DEF=$toNode] or //IMPORT[(@importedDEF=$toNode and @AS='') or @AS=$toNode])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>no node with DEF="</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>" found, for ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE within/without scope of ProtoDeclare?  multiple checks follow. -->
    <!-- ROUTE inside ProtoDeclare but fromNode is not? -->
    <xsl:if test="ancestor-or-self::*[(local-name()='ProtoDeclare')] and
              not(ancestor-or-self::*[(local-name()='ProtoDeclare')]//*[@DEF=$fromNode])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE inside ProtoDeclare "</xsl:text>
          <xsl:value-of select="ancestor-or-self::*[(local-name()='ProtoDeclare')]/@name" />
          <xsl:text>" but fromNode "</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>" is not inside same scope, for ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE inside ProtoDeclare but toNode is not? -->
    <xsl:if test="ancestor-or-self::*[(local-name()='ProtoDeclare')] and
              not(ancestor-or-self::*[(local-name()='ProtoDeclare')]//*[@DEF=$toNode])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE inside ProtoDeclare "</xsl:text>
          <xsl:value-of select="ancestor-or-self::*[(local-name()='ProtoDeclare')]/@name" />
          <xsl:text>" but toNode "</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>" is not inside same scope, for ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE not inside ProtoDeclare but fromNode is? -->
    <xsl:if test="not(ancestor-or-self::*[(local-name()='ProtoDeclare')]) and
                     (//*[(local-name()='ProtoDeclare')]//*[@DEF=$fromNode])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE outside ProtoDeclare scope but fromNode "</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>" is inside ProtoDeclare scope, for ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE not inside ProtoDeclare but toNode is? -->
    <xsl:if test="not(ancestor-or-self::*[(local-name()='ProtoDeclare')]) and
                     (//*[(local-name()='ProtoDeclare')]//*[@DEF=$toNode])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE outside ProtoDeclare scope but toNode "</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>" is inside ProtoDeclare scope, for ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE fromNode precedes DEF? -->
    <xsl:if test="following::*[@DEF=$fromNode]">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE fromNode='"</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>"' precedes node DEFinition.  Move the ROUTE to follow the DEF node.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE toNode precedes DEF? -->
    <xsl:if test="following::*[@DEF=$toNode]">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE toNode='"</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>"' precedes node DEFinition.  Move the ROUTE to follow the DEF node.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE fromField includes needed _changed suffix? -->
    <xsl:if test="$fromNodeType and (
    	(contains($fromNodeType,'Interpolator') and $fromField='value') or
    	(($fromNodeType='AudioClip' or $fromNodeType='MovieTexture') and $fromField='duration') or
    	($fromNodeType='CylinderSensor' and ($fromField='rotation' or $fromField='trackPoint')) or
    	($fromNodeType='PlaneSensor' and ($fromField='translation' or $fromField='trackPoint')) or
    	($fromNodeType='PositionSensor' and ($fromField='position' or $fromField='orientation')) or
    	($fromNodeType='SphereSensor' and ($fromField='rotation' or $fromField='trackPoint')) or
    	($fromNodeType='TimeSensor' and ($fromField='fraction')) or
    	($fromNodeType='TouchSensor' and ($fromField='hitNormal' or $fromField='hitPoint' or $fromField='hitTexCoord')))">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>ROUTE fromField missing '_changed' suffix. Change "ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text>" fromField into "ROUTE </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text>_changed"</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE toField includes needed set_ prefix? -->
    <xsl:if test="$toNodeType and (
    	(contains($toNodeType,'Interpolator') and $toField='fraction') or
    	(($toNodeType='BackGround' or $toNodeType='Fog' or $toNodeType='NavigationInfo' or $toNodeType='Viewpoint') and ($toField='bind')) or
    	($toNodeType='ElevationGrid' and ($toField='height')) or
    	($toNodeType='Extrusion' and ($toField='crossSection' or $toField='orientation' or $toField='scale' or $toField='spine')) or
    	(($toNodeType='IndexedFaceSet' or $toNodeType='IndexedQuadSet' or $toNodeType='QuadSet') and ($toField='colorIndex' or $toField='coordIndex' or $toField='normalIndex' or $toField='texCoordIndex')) or
    	($toNodeType='IndexedLineSet' and ($toField='colorIndex' or $toField='coordIndex')))">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>ROUTE toField missing 'set_' prefix. Change "ROUTE ... TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
          <xsl:text>" toField into "ROUTE ... TO </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:text>set_</xsl:text>
          <xsl:value-of select="@toField" />
          <xsl:text>"</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE fromField matches member of ProtoDeclare/ExternProtoDeclare field list? -->
    <xsl:if test="$fromNodeType='ProtoInstance' and
    	not(//ProtoDeclare      [@name=$fromNodeProtoInstanceName]/ProtoInterface/field[@name=$fromField]) and
    	not(//ProtoDeclare      [@name=$fromNodeProtoInstanceName]/ProtoInterface/field[concat(@name,'_changed')=$fromField]) and
    	not(//ExternProtoDeclare[@name=$fromNodeProtoInstanceName]/field[@name=$fromField]) and
    	not(//ExternProtoDeclare[@name=$fromNodeProtoInstanceName]/field[concat(@name,'_changed')=$fromField])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE fromNode='</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>' is a </xsl:text>
          <xsl:value-of select="$fromNodeProtoInstanceName" />
          <xsl:text> ProtoInstance, but fromField='</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text>' is not a defined field.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE fromField matches member of Script field list? -->
    <xsl:if test="$fromNodeType='Script' and
    	not(//Script      [@DEF=$fromNode]/field[@name=$fromField]) and
    	not(//Script      [@DEF=$fromNode]/field[concat(@name,'_changed')=$fromField])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE fromNode='</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>' is a Script, but fromField='</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text>' is not a defined field.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE fromField has accessType=inputOnly on ProtoDeclare/ExternProtoDeclare field list? -->
    <xsl:if test="$fromNodeType='ProtoInstance' and
    	((//ProtoDeclare      [@name=$fromNodeProtoInstanceName]/ProtoInterface/field[@name=$fromField]	   [@accessType='inputOnly']) or
    	 (//ProtoDeclare      [@name=$fromNodeProtoInstanceName]/ProtoInterface/field[concat(@name,'_changed')=$fromField][@accessType='inputOnly']) or
    	 (//ExternProtoDeclare[@name=$fromNodeProtoInstanceName]/field[@name=$fromField]		   [@accessType='inputOnly']) or
    	 (//ExternProtoDeclare[@name=$fromNodeProtoInstanceName]/field[concat(@name,'_changed')=$fromField][@accessType='inputOnly']))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE fromNode='</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>' is a </xsl:text>
          <xsl:value-of select="$fromNodeProtoInstanceName" />
          <xsl:text> ProtoInstance, but fromField='</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text>' has accessType='inputOnly' which cannot produce events.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE fromField has accessType=inputOnly on Script field list? -->
    <xsl:if test="$fromNodeType='Script' and
    	((//Script      [@DEF=$fromNode]/field[@name=$fromField]		   [@accessType='inputOnly']) or
    	 (//Script      [@DEF=$fromNode]/field[concat(@name,'_changed')=$fromField][@accessType='inputOnly']))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE fromNode='</xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>' is a Script, but fromField='</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text>' has accessType='inputOnly' which cannot produce events.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE toField matches member of ProtoDeclare/ExternProtoDeclare field list? -->
    <xsl:if test="$toNodeType='ProtoInstance' and
    	not(//ProtoDeclare      [@name=$toNodeProtoInstanceName]/ProtoInterface/field[@name=$toField]) and
    	not(//ProtoDeclare      [@name=$toNodeProtoInstanceName]/ProtoInterface/field[concat('set_',@name)=$toField]) and
    	not(//ExternProtoDeclare[@name=$toNodeProtoInstanceName]/field[@name=$toField]) and
    	not(//ExternProtoDeclare[@name=$toNodeProtoInstanceName]/field[concat('set_',@name)=$toField])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE toNode='</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>' is a </xsl:text>
          <xsl:value-of select="$toNodeProtoInstanceName" />
          <xsl:text> ProtoInstance, but toField='</xsl:text>
          <xsl:value-of select="@toField" />
          <xsl:text>' is not a defined field.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE toField matches member of Script field list? -->
    <xsl:if test="$toNodeType='Script' and
    	not(//Script      [@DEF=$toNode]/field[@name=$toField]) and
    	not(//Script      [@DEF=$toNode]/field[concat('set_',@name)=$toField])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE toNode='</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>' is a Script, but toField='</xsl:text>
          <xsl:value-of select="@toField" />
          <xsl:text>' is not a defined field.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE toField has accessType=outputOnly on ProtoDeclare/ExternProtoDeclare field list? -->
    <xsl:if test="$toNodeType='ProtoInstance' and
    	((//ProtoDeclare      [@name=$toNodeProtoInstanceName]/ProtoInterface/field[@name=$toField][@accessType='outputOnly']) or
    	 (//ProtoDeclare      [@name=$toNodeProtoInstanceName]/ProtoInterface/field[concat('set_',@name)=$toField][@accessType='outputOnly']) or
    	 (//ExternProtoDeclare[@name=$toNodeProtoInstanceName]/field[@name=$toField][@accessType='outputOnly']) or
    	 (//ExternProtoDeclare[@name=$toNodeProtoInstanceName]/field[concat('set_',@name)=$toField][@accessType='outputOnly']))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE toNode='</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>' is a </xsl:text>
          <xsl:value-of select="$toNodeProtoInstanceName" />
          <xsl:text> ProtoInstance, but toField='</xsl:text>
          <xsl:value-of select="@toField" />
          <xsl:text>' has accessType='outputOnly' which cannot receive events.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
    <!-- ROUTE toField has accessType=outputOnly on Script field list? -->
    <xsl:if test="$toNodeType='Script' and
    	((//Script      [@DEF=$toNode]/field[@name=$toField][@accessType='outputOnly']) or
    	 (//Script      [@DEF=$toNode]/field[concat('set_',@name)=$toField][@accessType='outputOnly']))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ROUTE toNode='</xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>' is a Script, but toField='</xsl:text>
          <xsl:value-of select="@toField" />
          <xsl:text>' has accessType='</xsl:text>
          <xsl:value-of select="//Script[@DEF=$toNode]/field[(@name=$toField) or (concat('set_',@name)=$toField)]/@accessType" />
          <xsl:text>' which cannot receive events.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
  </xsl:otherwise>
</xsl:choose>
  <xsl:variable name="sourceType">
	<xsl:call-template name="fieldType">
		<xsl:with-param name="DEFname" select="@fromNode"/>
		<xsl:with-param name="fieldName" select="@fromField"/>
	</xsl:call-template>
  </xsl:variable>
  <xsl:variable name="destinationType">
	<xsl:call-template name="fieldType">
		<xsl:with-param name="DEFname" select="@toNode"/>
		<xsl:with-param name="fieldName" select="@toField"/>
	</xsl:call-template>
  </xsl:variable>
  <xsl:if test="($sourceType!=$destinationType) and not(starts-with(normalize-space($sourceType),'###')) and not(starts-with(normalize-space($destinationType),'###'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Mismatched type: ROUTE source </xsl:text>
          <xsl:value-of select="@fromNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@fromField" />
          <xsl:text> has type </xsl:text>
          <xsl:value-of select="$sourceType" />
          <xsl:text>, but destination </xsl:text>
          <xsl:value-of select="@toNode" />
          <xsl:text>.</xsl:text>
          <xsl:value-of select="@toField" />
          <xsl:text> has type </xsl:text>
          <xsl:value-of select="$destinationType" />
          <xsl:text>.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
  </xsl:if>
  <!-- TODO: ensure not routing to/from initializeOnly field, from inputOnly field, to outputOnly field -->
</xsl:template>


<!-- fieldType returns type of given node, field -->
<xsl:template name="fieldType">
  <xsl:param name="DEFname"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="fieldName"><xsl:text></xsl:text></xsl:param>
  <xsl:choose>
    <!-- safety check first, did parameters arrive? -->
    <xsl:when test="($DEFname='') or ($fieldName='')">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>[Stylesheet error:  illegal invocation of template fieldType. DEFname='</xsl:text>
          <xsl:value-of select="$DEFname" />
          <xsl:text>', fieldName='</xsl:text>
          <xsl:value-of select="$fieldName" />
          <xsl:text>']</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ROUTE</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
      <!-- OK to proceed -->
      <xsl:variable name="shortFieldName">
          <xsl:choose>
              <!-- do not truncate field name for prototypes, match declaration exactly -->
              <xsl:when test="//ProtoInstance[@DEF=$DEFname]">
                  <xsl:value-of select="$fieldName"/>
              </xsl:when>
              <xsl:when test="starts-with($fieldName,'set_')">
                  <xsl:value-of select="substring-after($fieldName,'set_')"/>
              </xsl:when>
              <xsl:when test="contains($fieldName,'_changed')">
                  <xsl:value-of select="substring-before($fieldName,'_changed')"/>
              </xsl:when>
              <xsl:otherwise>
                  <xsl:value-of select="$fieldName"/>
              </xsl:otherwise>
          </xsl:choose>
      </xsl:variable>
      <!-- may or may not be found -->
      <xsl:variable name="ProtoName" select="//ProtoInstance[@DEF=$DEFname]/@name"/>
      <xsl:variable name="nodeName">
          <xsl:choose>
              <!-- preceding:: is more precise than .. but also more restrictive, and an out-of-order ROUTE or (Extern)ProtoDeclare error is caught separately -->
              <xsl:when test="//ProtoInstance[@DEF=$DEFname]">
                  <xsl:choose>
                    <xsl:when test="//ProtoDeclare[@name=$ProtoName]">
                        <xsl:text>ProtoDeclare</xsl:text>
                    </xsl:when>
                    <xsl:when test="//ExternProtoDeclare[@name=$ProtoName]">
                        <xsl:text>ExternProtoDeclare</xsl:text>
                    </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>ProtoInstanceDeclarationNotFound</xsl:text>
                        </xsl:otherwise>
                  </xsl:choose>
              </xsl:when>
              <xsl:when test="//*[@DEF=$DEFname]">
                  <xsl:value-of select="local-name(//*[@DEF=$DEFname])"/>
              </xsl:when>
              <xsl:otherwise>
                  <xsl:text>NodeNameNotFoundPriorToRoute</xsl:text>
              </xsl:otherwise>
          </xsl:choose>
      </xsl:variable>
<!-- debug
	<xsl:message>
	      <xsl:variable name="protoName">
	          <xsl:choose>
	              <xsl:when test="//ProtoInstance[@DEF=$DEFname]">
			  <xsl:choose>
				<xsl:when test="//ProtoDeclare[@name=$ProtoName]">
	                  		<xsl:text>ProtoDeclare</xsl:text>
				</xsl:when>
				<xsl:when test="//ExternProtoDeclare[@name=$ProtoName]">
	                  		<xsl:text>ExternProtoDeclare</xsl:text>
				</xsl:when>
	              		<xsl:otherwise>
	              		    <xsl:text>ProtoInstanceDeclarationNotFound</xsl:text>
	              		</xsl:otherwise>
			  </xsl:choose>
	              </xsl:when>
	          </xsl:choose>
	      </xsl:variable>
		<xsl:if test="contains($shortFieldName,'set_') or contains($shortFieldName,'_changed')">
		      <xsl:call-template name="output-error">
		        <xsl:with-param name="errorString">
		          <xsl:text>$shortFieldName construction failure: </xsl:text>
		          <xsl:value-of select="$shortFieldName" />
		        </xsl:with-param>
		        <xsl:with-param name="node">
		          <xsl:text>ROUTE</xsl:text>
		        </xsl:with-param>
		      </xsl:call-template>
		</xsl:if>
          <xsl:text>[DEFname='</xsl:text>
          <xsl:value-of select="$DEFname" />
          <xsl:text>', nodeName='</xsl:text>
          <xsl:value-of select="$nodeName" />
          <xsl:text>', fieldName='</xsl:text>
          <xsl:value-of select="$fieldName" />
          <xsl:text>', shortFieldName='</xsl:text>
          <xsl:value-of select="$shortFieldName" />
          <xsl:if test="$protoName">
	          <xsl:text>', protoName='</xsl:text>
	          <xsl:value-of select="$protoName" />
          </xsl:if>
          <xsl:text>'] </xsl:text>
	</xsl:message>
-->
      <!-- now check node name and field in order to get type -->
      <xsl:choose>
        <xsl:when test="($nodeName='Script')">
           <!-- assumes missing field definitions diagnosed elsewhere -->
           <xsl:value-of select="preceding::Script[@DEF=$DEFname]/field[($fieldName=@name) or ($fieldName=concat('set_',@name)) or ($fieldName=concat(@name,'_changed'))]/@type"/>
        </xsl:when>
        <!-- ProtoInstance with matching ProtoDeclare -->
        <xsl:when test="($nodeName='ProtoDeclare')">
            <xsl:value-of select="preceding::ProtoDeclare[@name=$ProtoName]/ProtoInterface/field[($fieldName=@name) or ($fieldName=concat('set_',@name)) or ($fieldName=concat(@name,'_changed'))]/@type"/>
        </xsl:when>
        <!-- ProtoInstance with matching ExternProtoDeclare -->
        <xsl:when test="($nodeName='ExternProtoDeclare')">
            <xsl:value-of select="preceding::ExternProtoDeclare[@name=$ProtoName]/field[($fieldName=@name) or ($fieldName=concat('set_',@name)) or ($fieldName=concat(@name,'_changed'))]/@type"/>
        </xsl:when>
        <xsl:when test="(($shortFieldName='bboxCenter') or ($shortFieldName='bboxSize'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="(contains($nodeName,'Interpolator') or contains($nodeName,'Sequencer')) and ($shortFieldName='key')">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='TimeSensor') or contains($nodeName,'Interpolator') or contains($nodeName,'Sequencer')) and ($shortFieldName='fraction')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($shortFieldName='visible')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(contains($nodeName,'Sensor') or ($nodeName='Collision')) and (($shortFieldName='enabled') or ($shortFieldName='isActive'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(contains($nodeName,'Collision')) and ($shortFieldName='collideTime')">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(contains($nodeName,'Inline')) and ($shortFieldName='load')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(contains($nodeName,'Sensor')) and ($shortFieldName='description')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='TimeSensor') and (($shortFieldName='loop') or ($shortFieldName='isPaused'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='TimeSensor') and (($shortFieldName='time') or ($shortFieldName='cycleInterval') or ($shortFieldName='startTime') or ($shortFieldName='stopTime') or ($shortFieldName='cycleTime') or ($shortFieldName='pauseTime') or ($shortFieldName='resumeTime') or ($shortFieldName='elapsedTime'))">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='TouchSensor') or ($nodeName='TouchSensor')) and (($shortFieldName='isActive') or ($shortFieldName='isOver'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='TouchSensor') or ($nodeName='TouchSensor')) and ($shortFieldName='touchTime')">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='TouchSensor') or ($nodeName='TouchSensor')) and (($shortFieldName='hitPoint') or ($shortFieldName='hitNormal'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='TouchSensor') or ($nodeName='TouchSensor')) and ($shortFieldName='hitTexCoord')">
          <xsl:text>SFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Switch') and ($shortFieldName='whichChoice')">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Transform') or ($nodeName='EspduTransform')) and (($shortFieldName='translation') or ($shortFieldName='center') or ($shortFieldName='scale'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Transform') or ($nodeName='CylinderSensor') or ($nodeName='SphereSensor') or ($nodeName='EspduTransform')) and ($shortFieldName='rotation')">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Transform') or ($nodeName='EspduTransform')) and ($shortFieldName='scaleOrientation')">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Viewpoint') or ($nodeName='GeoViewpoint')) and (($shortFieldName='position') or ($shortFieldName='centerOfRotation'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Viewpoint') or ($nodeName='GeoViewpoint')) and ($shortFieldName='orientation')">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Viewpoint') or ($nodeName='GeoViewpoint') or ($nodeName='ViewpointGroup')) and ($shortFieldName='description')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Viewpoint') or ($nodeName='GeoViewpoint')) and  (($shortFieldName='jump') or ($shortFieldName='bind') or ($shortFieldName='isBound'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Viewpoint') or ($nodeName='GeoViewpoint') or ($nodeName='ViewpointGroup')) and  (($shortFieldName='displayed') or ($shortFieldName='retainUserOffsets'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Viewpoint') or ($nodeName='GeoViewpoint')) and  ($shortFieldName='fieldOfView')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Viewpoint') or ($nodeName='GeoViewpoint')) and  ($shortFieldName='bindTime')">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ViewpointGroup')) and (($shortFieldName='center') or ($shortFieldName='size'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='BooleanFilter') and (($shortFieldName='boolean') or ($shortFieldName='inputTrue') or ($shortFieldName='inputFalse') or ($shortFieldName='inputNegate'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='BooleanToggle') and (($shortFieldName='boolean') or ($shortFieldName='toggle'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='BooleanTrigger') and ($shortFieldName='triggerTrue')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='BooleanTrigger') and ($shortFieldName='triggerTime')">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(contains($nodeName,'Sequencer')) and (($shortFieldName='previous') or ($shortFieldName='next'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='BooleanSequencer') and ($shortFieldName='keyValue')">
          <xsl:text>MFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='BooleanSequencer') and ($shortFieldName='value')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IntegerSequencer') and ($shortFieldName='keyValue')">
          <xsl:text>MFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IntegerSequencer') and ($shortFieldName='value')">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IntegerTrigger') and ($shortFieldName='boolean')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IntegerTrigger') and (($shortFieldName='integerKey') or ($shortFieldName='triggerValue'))">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='TimeTrigger') and ($shortFieldName='boolean')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='TimeTrigger') and (($shortFieldName='triggerTime'))">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='ColorInterpolator') and ($shortFieldName='keyValue')">
          <xsl:text>MFColor</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='CoordinateInterpolator') or ($nodeName='NormalInterpolator')) and (($shortFieldName='value') or  ($shortFieldName='keyValue'))">
          <xsl:text>MFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='CoordinateInterpolator2D') and (($shortFieldName='keyValue') or ($shortFieldName='value'))">
          <xsl:text>MFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='ColorInterpolator') and ($shortFieldName='value')">
          <xsl:text>SFColor</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PositionInterpolator2D') and ($shortFieldName='keyValue')">
          <xsl:text>MFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PositionInterpolator2D') and ($shortFieldName='value')">
          <xsl:text>SFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PositionInterpolator2D') and ($shortFieldName='keyValue')">
          <xsl:text>MFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PositionInterpolator2D') and ($shortFieldName='value')">
          <xsl:text>SFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PositionInterpolator') and ($shortFieldName='keyValue')">
          <xsl:text>MFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PositionInterpolator') and ($shortFieldName='value')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='OrientationInterpolator') and ($shortFieldName='keyValue')">
          <xsl:text>MFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='OrientationInterpolator') and ($shortFieldName='value')">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='ScalarInterpolator') and ($shortFieldName='keyValue')">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='ScalarInterpolator') and ($shortFieldName='value')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='CylinderSensor') or ($nodeName='PlaneSensor') or ($nodeName='SphereSensor')) and (($shortFieldName='autoOffset') or ($shortFieldName='isOver'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='CylinderSensor') and (($shortFieldName='diskAngle') or ($shortFieldName='minAngle') or ($shortFieldName='maxAngle') or ($shortFieldName='offset'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='CylinderSensor') and ($shortFieldName='rotation')">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='CylinderSensor') or ($nodeName='SphereSensor')) and ($shortFieldName='trackPoint')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PlaneSensor') and (($shortFieldName='trackPoint') or ($shortFieldName='translation'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PlaneSensor') and ($shortFieldName='offset')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PlaneSensor') and (($shortFieldName='minPosition') or ($shortFieldName='maxPosition'))">
          <xsl:text>SFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='SphereSensor') and (($shortFieldName='offset') or ($shortFieldName='rotation'))">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ProximitySensor') or ($nodeName='GeoProximitySensor')) and (($shortFieldName='centerOfRotation') or ($shortFieldName='position'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ProximitySensor') or ($nodeName='GeoProximitySensor')) and (($shortFieldName='orientation'))">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ProximitySensor') or ($nodeName='GeoProximitySensor') or ($nodeName='VisibilitySensor')) and (($shortFieldName='center') or ($shortFieldName='size'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ProximitySensor') or ($nodeName='GeoProximitySensor') or ($nodeName='VisibilitySensor')) and (($shortFieldName='enterTime') or ($shortFieldName='exitTime'))">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='KeySensor') and (($shortFieldName='altKey') or ($shortFieldName='controlKey') or ($shortFieldName='shiftKey'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='KeySensor') and (($shortFieldName='keyPress') or ($shortFieldName='keyRelease'))">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='KeySensor') and (($shortFieldName='actionKeyPress') or ($shortFieldName='actionKeyRelease'))">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='StringSensor') and ($shortFieldName='deletionAllowed')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='StringSensor') and (($shortFieldName='enteredText') or ($shortFieldName='finalText'))">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Material') and (($shortFieldName='diffuseColor') or ($shortFieldName='emissiveColor') or ($shortFieldName='specularColor'))">
          <xsl:text>SFColor</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Material') and (($shortFieldName='ambientIntensity') or ($shortFieldName='shininess') or ($shortFieldName='transparency'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="contains($nodeName,'Light') and (($shortFieldName='on') or ($shortFieldName='global'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="contains($nodeName,'Light') and ($shortFieldName='color')">
          <xsl:text>SFColor</xsl:text>
        </xsl:when>
        <xsl:when test="contains($nodeName,'Light') and (($shortFieldName='radius') or ($shortFieldName='intensity') or ($shortFieldName='ambientIntensity') or ($shortFieldName='beamWidth') or ($shortFieldName='cutOffAngle'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="contains($nodeName,'Light') and (($shortFieldName='direction') or ($shortFieldName='location') or ($shortFieldName='attenuation'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='NavigationInfo') and (($shortFieldName='bind') or ($shortFieldName='isBound') or ($shortFieldName='headlight') or ($shortFieldName='transitionComplete'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='NavigationInfo') and ($shortFieldName='bindTime')">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='NavigationInfo') and (($shortFieldName='speed') or ($shortFieldName='visibilityLimit'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='NavigationInfo') and (($shortFieldName='avatarSize') or ($shortFieldName='transitionTime'))">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='NavigationInfo') and (($shortFieldName='type') or ($shortFieldName='transitionType'))">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Background') or ($nodeName='TextureBackground')) and (($shortFieldName='bind') or ($shortFieldName='isBound'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Background') or ($nodeName='TextureBackground')) and ($shortFieldName='bindTime')">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Background') or ($nodeName='TextureBackground')) and (($shortFieldName='skyAngle') or ($shortFieldName='groundAngle'))">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Background') or ($nodeName='TextureBackground')) and (($shortFieldName='skyColor') or ($shortFieldName='groundColor'))">
          <xsl:text>MFColor</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='TextureBackground') and ($shortFieldName='transparency')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Background') and contains($shortFieldName,'Url')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Fog') and (($shortFieldName='bind') or ($shortFieldName='isBound'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Fog') and ($shortFieldName='bindTime')">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Fog') or ($nodeName='LocalFog')) and ($shortFieldName='enabled')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Fog') or ($nodeName='LocalFog')) and ($shortFieldName='color')">
          <xsl:text>SFColor</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Fog') or ($nodeName='LocalFog')) and ($shortFieldName='fogType')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Fog') or ($nodeName='LocalFog')) and ($shortFieldName='visibilityRange')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Anchor') or ($nodeName='AudioClip') or ($nodeName='ImageTexture') or ($nodeName='Inline') or ($nodeName='DISEntityTypeMapping')) and ($shortFieldName='url')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='AudioClip') and (($shortFieldName='loop') or ($shortFieldName='isActive') or ($shortFieldName='isPaused'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='AudioClip') or ($nodeName='MovieTexture')) and (($shortFieldName='startTime') or ($shortFieldName='stopTime') or ($shortFieldName='pauseTime') or ($shortFieldName='resumeTime') or ($shortFieldName='elapsedTime') or ($shortFieldName='duration'))">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='AudioClip') and ($shortFieldName='pitch')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Anchor') and ($shortFieldName='parameter')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Anchor') or ($nodeName='AudioClip')) and ($shortFieldName='description')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Billboard') and ($shortFieldName='axisOfRotation')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='LOD') and ($shortFieldName='forceTransitions')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='LOD') and ($shortFieldName='center')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='LOD') and ($shortFieldName='range')">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='LOD') and ($shortFieldName='level')">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='MovieTexture') and (($shortFieldName='loop') or ($shortFieldName='repeatS') or ($shortFieldName='repeatT') or ($shortFieldName='isActive') or ($shortFieldName='isPaused'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PixelTexture') and (($shortFieldName='repeatS') or ($shortFieldName='repeatT'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='PixelTexture') and ($shortFieldName='image')">
          <xsl:text>SFImage</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='MovieTexture') and ($shortFieldName='speed')"> <!-- TODO:  note mismatch with node type -->
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='MovieTexture') and ($shortFieldName='description')"> <!-- TODO:  note mismatch with node type because missing from current spec, included here nevertheless -->
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Sound') and (($shortFieldName='intensity') or ($shortFieldName='minFront') or ($shortFieldName='minBack') or ($shortFieldName='maxFront') or ($shortFieldName='maxBack') or ($shortFieldName='priority'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Sound') and (($shortFieldName='location') or ($shortFieldName='direction') or ($shortFieldName='pauseTime') or ($shortFieldName='resumeTime') or ($shortFieldName='elapsedTime') or ($shortFieldName='duration'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Sound') and ($shortFieldName='spatialize')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='TextureTransform') and (($shortFieldName='translation') or ($shortFieldName='center') or ($shortFieldName='scale'))">
          <xsl:text>SFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='TextureTransform') and (($shortFieldName='rotation'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Color') and ($shortFieldName='color')">
          <xsl:text>MFColor</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='ColorRGBA') and ($shortFieldName='color')">
          <xsl:text>MFColorRGBA</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Coordinate') and ($shortFieldName='point')">
          <xsl:text>MFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='CoordinateDouble') and ($shortFieldName='point')">
          <xsl:text>MFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="starts-with($nodeName,'Metadata') and (($shortFieldName='name') or ($shortFieldName='reference'))">
          <xsl:text>MFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='MetadataDouble') and ($shortFieldName='value')">
          <xsl:text>MFDouble</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='MetadataFloat') and ($shortFieldName='value')">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='MetadataInteger') and ($shortFieldName='value')">
          <xsl:text>MFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='MetadataFloat') and ($shortFieldName='value')">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='Box') or ($nodeName='Cone') or ($nodeName='Cylinder') or ($nodeName='Sphere')) and ($shortFieldName='solid')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Box') and ($shortFieldName='size')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Cone') and (($shortFieldName='bottom') or ($shortFieldName='side'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Cone') and (($shortFieldName='bottomRadius') or ($shortFieldName='height'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Cylinder') and (($shortFieldName='bottom') or ($shortFieldName='side') or ($shortFieldName='top'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Cylinder') and (($shortFieldName='radius') or ($shortFieldName='height'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Sphere') and ($shortFieldName='radius')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ElevationGrid') or ($nodeName='GeoElevationGrid') or ($nodeName='Extrusion') or ($nodeName='IndexedFaceSet')) and (($shortFieldName='ccw') or ($shortFieldName='solid') or ($shortFieldName='colorPerVertex') or ($shortFieldName='normalPerVertex'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ElevationGrid') or ($nodeName='GeoElevationGrid') or ($nodeName='Extrusion') or ($nodeName='IndexedFaceSet')) and ($shortFieldName='creaseAngle')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ElevationGrid') or ($nodeName='GeoElevationGrid')) and (($shortFieldName='xDimension') or ($shortFieldName='zDimension'))">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ElevationGrid') or ($nodeName='GeoElevationGrid')) and (($shortFieldName='xSpacing') or ($shortFieldName='zSpacing'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='ElevationGrid') or ($nodeName='GeoElevationGrid')) and ($shortFieldName='height')">
          <!-- set_height field actually -->
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Extrusion') and (($shortFieldName='beginCap') or ($shortFieldName='endCap'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Extrusion') and (($shortFieldName='crossSection') or ($shortFieldName='scale'))">
          <xsl:text>MFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Extrusion') and ($shortFieldName='spine')">
          <xsl:text>MFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Extrusion') and ($shortFieldName='orientation')">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IndexedFaceSet') and (($shortFieldName='colorIndex') or ($shortFieldName='coordIndex') or ($shortFieldName='normalIndex') or ($shortFieldName='texCoordIndex'))">
          <xsl:text>MFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IndexedFaceSet') and (($shortFieldName='convex') or ($shortFieldName='normalPerVertex'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IndexedLineSet') and (($shortFieldName='colorIndex') or ($shortFieldName='coordIndex'))">
          <xsl:text>MFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='IndexedLineSet') and (($shortFieldName='colorPerVertex'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <!-- PointSet has no attributes -->
        <xsl:when test="($nodeName='Normal') and ($shortFieldName='vector')">
          <xsl:text>MFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Text') and ($shortFieldName='string')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Text') and ($shortFieldName='length')">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Text') and ($shortFieldName='maxExtent')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Text') and ($shortFieldName='solid')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='Text') and (($shortFieldName='lineBounds') or ($shortFieldName='textBounds'))">
          <xsl:text>SFVec2f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='FontStyle') and (($shortFieldName='family') or ($shortFieldName='justify'))">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='FontStyle') and (($shortFieldName='style') or ($shortFieldName='language'))">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='FontStyle') and (($shortFieldName='size') or ($shortFieldName='spacing'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='FontStyle') and (($shortFieldName='horizontal') or ($shortFieldName='leftToRight') or ($shortFieldName='topToBottom'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU')) and
        	(($shortFieldName='enabled') or ($shortFieldName='isStandAlone') or ($shortFieldName='isNetworkReader') or ($shortFieldName='isNetworkWriter') or
        	 ($shortFieldName='rtpHeaderExpected') or ($shortFieldName='isRtpHeaderHeard') or ($shortFieldName='isActive') or ($shortFieldName='isCollided') or
        	 ($shortFieldName='fired1') or ($shortFieldName='fired2'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU') or ($nodeName='DISEntityManager')) and
        	(($shortFieldName='applicationID') or ($shortFieldName='entityID') or ($shortFieldName='siteID') or ($shortFieldName='forceID') or ($shortFieldName='radioID') or ($shortFieldName='port') or ($shortFieldName='multicastRelayPort') or
        	 ($shortFieldName='entityKind') or ($shortFieldName='entityDomain') or ($shortFieldName='entityCountry') or ($shortFieldName='entityCategory') or ($shortFieldName='entitySubCategory') or
        	 ($shortFieldName='entitySpecific') or ($shortFieldName='entityExtra') or ($shortFieldName='deadReckoning') or
        	 ($shortFieldName='munitionApplicationID') or ($shortFieldName='munitionEntityID') or ($shortFieldName='munitionSiteID') or ($shortFieldName='fireMissionIndex') or
        	 ($shortFieldName='warhead') or ($shortFieldName='fuse') or ($shortFieldName='munitionQuantity') or ($shortFieldName='firingRate') or ($shortFieldName='collisionType') or
        	 ($shortFieldName='eventApplicationID') or ($shortFieldName='eventEntityID') or ($shortFieldName='eventSiteID') or ($shortFieldName='eventNumber') or ($shortFieldName='articulationParameterCount') or
        	 ($shortFieldName='firedTime') or ($shortFieldName='firedTime') or ($shortFieldName='firedTime') or ($shortFieldName='firedTime') or
                 ($shortFieldName='whichGeometry') or ($shortFieldName='antennaPatternType') or ($shortFieldName='cryptoKeyID') or ($shortFieldName='cryptoSystem') or ($shortFieldName='inputSource') or ($shortFieldName='lengthOfModulationParameters') or 
                 ($shortFieldName='modulationTypeDetail') or ($shortFieldName='modulationTypeMajor') or ($shortFieldName='modulationTypeSpreadSpectrum') or ($shortFieldName='modulationTypeSystem') or 
                 ($shortFieldName='radioEntityTypeCategory') or ($shortFieldName='radioEntityTypeCountry') or ($shortFieldName='radioEntityTypeDomain') or ($shortFieldName='radioEntityTypeKind') or ($shortFieldName='radioEntityTypeNomenclature') or
                 ($shortFieldName='radioEntityTypeNomenclatureVersion') or ($shortFieldName='transmitFrequencyBandwidth') or ($shortFieldName='transmitState') or ($shortFieldName='receiverState') or 
                 ($shortFieldName='modulationTypeDetail'))">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='DISEntityTypeMapping')) and
        	(($shortFieldName='category') or ($shortFieldName='country') or ($shortFieldName='domain') or ($shortFieldName='extra') or ($shortFieldName='kind') or
        	 ($shortFieldName='specific') or ($shortFieldName='subcategory'))">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU')) and
        	(($shortFieldName='articulationParameterDesignatorArray') or ($shortFieldName='articulationParameterChangeIndicatorArray') or ($shortFieldName='articulationParameterIdPartAttachedToArray') or
        	 ($shortFieldName='articulationParameterTypeArray'))">
          <xsl:text>MFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU')) and
        	(($shortFieldName='readInterval') or ($shortFieldName='writeInterval') or ($shortFieldName='firingRange') or
        	 ($shortFieldName='articulationParameterValue0') or ($shortFieldName='articulationParameterValue1') or ($shortFieldName='articulationParameterValue2') or ($shortFieldName='articulationParameterValue3') or
        	 ($shortFieldName='articulationParameterValue4') or ($shortFieldName='articulationParameterValue5') or ($shortFieldName='articulationParameterValue6') or ($shortFieldName='articulationParameterValue7'))">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU')) and
        	(($shortFieldName='articulationParameterArray'))">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU')) and
        	(($shortFieldName='timestamp') or ($shortFieldName='collideTime') or ($shortFieldName='detonateTime') or ($shortFieldName='firedTime'))">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU')) and
        	(($shortFieldName='linearVelocity') or ($shortFieldName='linearAcceleration') or ($shortFieldName='munitionStartPoint') or ($shortFieldName='munitionEndPoint'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='EspduTransform') or ($nodeName='ReceiverPDU') or ($nodeName='SignalPDU') or ($nodeName='TransmitterPDU') or ($nodeName='DISEntityManager')) and
        	(($shortFieldName='marking') or ($shortFieldName='networkMode') or ($shortFieldName='address') or ($shortFieldName='multicastRelayHost') or ($shortFieldName='multicastRelayPort'))">
          <!-- TODO:  add SFString type to networkMode tooltip -->
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="(starts-with($nodeName,'Geo') and
        	($shortFieldName='geoSystem'))">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoLOD') and
        	(($shortFieldName='child1Url') or ($shortFieldName='child2Url') or ($shortFieldName='child3Url') or ($shortFieldName='child4Url') or ($shortFieldName='rootUrl'))">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoMetadata') and
        	(($shortFieldName='summary') or ($shortFieldName='url'))">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoViewpoint') and
        	($shortFieldName='navType')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoElevationGrid') and
        	($shortFieldName='yScale')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoElevationGrid') and
        	($shortFieldName='geoGridOrigin')">
          <xsl:text>SFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="(($nodeName='GeoLocation') or ($nodeName='GeoOrigin')) and
        	($shortFieldName='geoCoords')">
          <xsl:text>SFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoLOD') and
        	($shortFieldName='level')">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoLOD') and
        	($shortFieldName='center')">
          <xsl:text>SFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoLOD') and
        	($shortFieldName='range')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoLOD') and
        	($shortFieldName='rootUrl')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoMetadata') and
        	($shortFieldName='url')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoOrigin') and
        	($shortFieldName='rotateYUp')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoPositionInterpolator') and
        	($shortFieldName='keyValue')">
          <xsl:text>MFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoPositionInterpolator') and
        	($shortFieldName='geovalue')">
          <xsl:text>SFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoPositionInterpolator') and
        	($shortFieldName='value')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoProximitySensor') and
        	(($shortFieldName='geoCenter') or ($shortFieldName='geoCoord'))">
          <xsl:text>MFDouble</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoTouchSensor') and
        	($shortFieldName='hitGeoCoord')">
          <xsl:text>SFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoViewpoint') and
        	($shortFieldName='speedFactor')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoViewpoint') and
        	($shortFieldName='position')">
          <xsl:text>SFVec3d</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='GeoViewpoint') and
        	(($shortFieldName='jump') or ($shortFieldName='bind') or ($shortFieldName='isBound'))">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	(($shortFieldName='name') or ($shortFieldName='version') or ($shortFieldName='skeletalConfiguration'))">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	($shortFieldName='info')">
          <xsl:text>MFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	(($shortFieldName='translation') or ($shortFieldName='scale') or ($shortFieldName='center'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	(($shortFieldName='rotation') or ($shortFieldName='scaleOrientation'))">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	($shortFieldName='motionsEnabled')">
          <xsl:text>MFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	($shortFieldName='loa')">
          <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	(($shortFieldName='jointBindingPositions') or ($shortFieldName='jointBindingScales'))">
          <xsl:text>MFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimHumanoid') and
        	($shortFieldName='jointBindingRotations')">
          <xsl:text>MFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimDisplacer') and
        	($shortFieldName='name')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimDisplacer') and
        	($shortFieldName='coordIndex')">
          <xsl:text>MFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimDisplacer') and
        	($shortFieldName='displacements')">
          <xsl:text>MFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimDisplacer') and
        	($shortFieldName='weight')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimJoint') and
        	($shortFieldName='name')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimJoint') and
        	(($shortFieldName='ulimit') or ($shortFieldName='llimit') or ($shortFieldName='skinCoordWeight') or ($shortFieldName='stiffness'))">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimJoint') and
        	($shortFieldName='skinCoordIndex')">
          <xsl:text>MFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimJoint') and
        	(($shortFieldName='translation') or ($shortFieldName='scale') or ($shortFieldName='center'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimJoint') and
        	(($shortFieldName='rotation') or ($shortFieldName='scaleOrientation'))">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimSegment') and
        	($shortFieldName='name')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimSegment') and
        	($shortFieldName='mass')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimSegment') and
        	($shortFieldName='centerOfMass')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimSegment') and
        	($shortFieldName='momentsOfInertia')">
          <xsl:text>MFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimSite') and
        	($shortFieldName='name')">
          <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimSite') and
        	(($shortFieldName='translation') or ($shortFieldName='scale') or ($shortFieldName='center'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='HAnimSite') and
        	(($shortFieldName='rotation') or ($shortFieldName='scaleOrientation'))">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='LoadSensor') and (($shortFieldName='timeOut') or ($shortFieldName='loadTime'))">
          <xsl:text>SFTime</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='LoadSensor') and ($shortFieldName='isLoaded')">
          <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='LoadSensor') and ($shortFieldName='progress')">
          <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='NurbsPositionInterpolator') and ($shortFieldName='value_changed')">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName=' NurbsOrientationInterpolator') and ($shortFieldName='value_changed')">
          <xsl:text>SFRotation</xsl:text>
        </xsl:when>
        <xsl:when test="($nodeName='NurbsSurfaceInterpolator') and (($shortFieldName='position_changed') or ($shortFieldName='normal_changed'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
<!-- TODO:  finish DIS, add multitexture, 2D and advanced geometry, SFNodes -->
        <xsl:when test="($nodeName='Appearance') and (contains($shortFieldName,'material') or contains($shortFieldName,'fillProperties') or contains($shortFieldName,'lineProperties') or contains($shortFieldName,'texture'))">
          <xsl:text>SFVec3f</xsl:text>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="$nodeName"/>
          <xsl:text>.</xsl:text>
          <xsl:value-of select="$shortFieldName"/>
          <xsl:text>.FieldTypeNotFound</xsl:text>
        </xsl:otherwise>
        <!-- done with check for node name -->
      </xsl:choose>
    </xsl:otherwise>
    <!-- done with safety check -->
  </xsl:choose>
</xsl:template>


<!-- ****** fieldValue overrides default field values inside a ProtoInstance ****** -->
<xsl:template match="fieldValue">
<xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
<!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
<xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
  <!-- Check for duplicate field names -->
  <xsl:variable name="fieldValueName" select="@name" />
  <xsl:if test="preceding-sibling::*[local-name()='fieldValue' and @name=$fieldValueName]">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>duplicate &lt;fieldValue name='</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text>'/&gt; definitions</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:if test="../@name">
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- USE attribute restructured, not valid -->
  <xsl:if test="@USE">
    <xsl:variable name="USEname" select="@USE"/>
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>USE attribute (USE='</xsl:text>
          <xsl:value-of select="@USE"/>
          <xsl:text>') is not valid X3D for fieldValue tags.  Edit source, rewrite as </xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
          <xsl:text>fieldValue name='</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text disable-output-escaping="yes"><![CDATA[><]]></xsl:text>
          <xsl:choose>
            <xsl:when test='//*[@DEF=$USEname]'>
              <xsl:value-of select="local-name(//*[@DEF=$USEname])"/>
            </xsl:when>
            <xsl:otherwise>
              <xsl:text>NodeName</xsl:text>
            </xsl:otherwise>
          </xsl:choose>
          <xsl:text> USE='</xsl:text>
          <xsl:value-of select="@USE"/>
          <xsl:text>'/</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[><]]></xsl:text>
          <xsl:text>/fieldValue</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>fieldValue '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:if test="../@name">
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
<!-- output name of fieldvalue, unless IS connection made/checked elsewhere -->
<xsl:if test="not(../IS/connect/@nodeField = @name) and (@value or *)">
  <xsl:value-of select="@name"/><xsl:text> </xsl:text>
</xsl:if>
<xsl:variable name="fieldName" select="@name" />
<xsl:variable name="fieldValueValue" select="@value" />
<!-- <xsl:text> # $fieldName </xsl:text><xsl:value-of select="$fieldName"/><xsl:text>&#10;</xsl:text> -->
<!-- figure out node type for ProtoDeclared ProtoInstance, ExternProtoDeclared ProtoInstance and internal DTD declaration tag definitions -->
<xsl:variable name="nodeName" select="../@name" />
<xsl:variable name="nodeName2" select="local-name(..)" />
<!-- ProtoDeclared ProtoInstance -->
<xsl:variable name="nodeType" select="//ProtoDeclare[@name=$nodeName or @name=$nodeName2]/ProtoInterface/field[@name=$fieldName]/@type" />
<!-- ExternProtoDeclared ProtoInstance -->
<xsl:variable name="EPnodeType" select="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/field[@name=$fieldName]/@type" />
<!-- debug diagnosis statements -->
<!-- <xsl:message><xsl:text>$fieldName </xsl:text><xsl:value-of select="$fieldName"/><xsl:text>&#10;</xsl:text></xsl:message> -->
<!-- <xsl:message><xsl:text>$nodeName </xsl:text><xsl:value-of select="$nodeName"/><xsl:text>&#10;</xsl:text></xsl:message> -->
<!-- <xsl:text># nodeName2 </xsl:text><xsl:value-of select="$nodeName2"/><xsl:text>&#10;</xsl:text> -->
<!-- <xsl:text># nodeType </xsl:text><xsl:value-of select="$nodeType"/><xsl:text>&#10;</xsl:text> -->
<!-- <xsl:text># EPnodeType </xsl:text><xsl:value-of select="$EPnodeType"/><xsl:text>&#10;</xsl:text> -->
<xsl:choose>
  <!-- check that field definition exists -->
  <xsl:when test="//ProtoDeclare[@name=$nodeName or @name=$nodeName2]">
    <xsl:if test="not(//ProtoDeclare[@name=$nodeName or @name=$nodeName2]/ProtoInterface/field[@name=$fieldName])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ProtoInstance </xsl:text>
          <xsl:value-of select="../@name" />
          <xsl:text> fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' has no matching ProtoDeclare </xsl:text>
          <xsl:value-of select="//ProtoDeclare[@name=$nodeName or @name=$nodeName2]/@name" />
          <xsl:text> field '</xsl:text>
          <xsl:value-of select="$fieldName" />
          <xsl:text>' definition</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="(//ProtoDeclare[@name=$nodeName or @name=$nodeName2]/ProtoInterface/field[@name=$fieldName][@accessType='inputOnly' or @accessType='outputOnly'])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ProtoInstance </xsl:text>
          <xsl:value-of select="../@name" />
          <xsl:text> fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' has accessType </xsl:text>
          <xsl:value-of select="//ProtoDeclare[@name=$nodeName or @name=$nodeName2]/ProtoInterface/field[@name=$fieldName]/@accessType" />
          <xsl:text> and cannot be initialized.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:when>
  <xsl:when test="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]">
    <xsl:if test="not(//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/field[@name=$fieldName])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ProtoInstance </xsl:text>
          <xsl:value-of select="../@name" />
          <xsl:text> fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' has no matching ExternProtoDeclare </xsl:text>
          <xsl:value-of select="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/@name" />
          <xsl:text> field '</xsl:text>
          <xsl:value-of select="$fieldName" />
          <xsl:text>' definition</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="(//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/field[@name=$fieldName][@accessType='inputOnly' or @accessType='outputOnly'])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ProtoInstance </xsl:text>
          <xsl:value-of select="../@name" />
          <xsl:text> fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' has accessType </xsl:text>
          <xsl:value-of select="//ExternProtoDeclare[@name=$nodeName or @name=$nodeName2]/field[@name=$fieldName]/@accessType" />
          <xsl:text> and cannot be initialized.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:when>
</xsl:choose>
<!-- check that accessType is initializable -->
<xsl:variable name="fieldValueType">
  <xsl:choose>
    <xsl:when test="$nodeType"><xsl:value-of select="$nodeType"/></xsl:when>
    <xsl:when test="$EPnodeType"><xsl:value-of select="$EPnodeType"/></xsl:when>
  </xsl:choose>
</xsl:variable>
<!-- <xsl:message><xsl:text>$fieldValueType=</xsl:text><xsl:value-of select="$fieldValueType"/></xsl:message> -->
<!-- validate attribute values, unless IS connection made/checked elsewhere -->
<xsl:if test="not(../IS/connect/@nodeField = @name)">
  <xsl:call-template name="attribute-value-validation">
    <xsl:with-param name="name"><xsl:value-of select="concat('&lt;fieldValue name=',@name,'&gt; value')"/></xsl:with-param>
    <xsl:with-param name="type"><xsl:value-of select="$fieldValueType"/></xsl:with-param>
    <xsl:with-param name="value"><xsl:value-of select="@value"/></xsl:with-param>
  </xsl:call-template>
</xsl:if>
<xsl:choose>
  <!-- overload check -->
  <xsl:when test="@value and *">
    <xsl:value-of select="@value" />
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>ignoring contained SFNode/MFNode content inside fieldValue </xsl:text>
        <xsl:value-of select="$fieldName" />
        <xsl:text>, since simple-type value="</xsl:text>
        <xsl:value-of select="@value" />
        <xsl:text>" provided</xsl:text>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:text> </xsl:text>
        <xsl:value-of select="../@name" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:when>
    <!-- no value allowed for fields with IS connections -->
    <xsl:when test="@value and ../IS/connect[@nodeField=$fieldName]">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>IS-connected fieldValues cannot be initialized, ignoring value="</xsl:text>
          <xsl:value-of select="@value" />
          <xsl:text>"</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <!-- only single IS connection to ancestor ProtoDeclare field interface -->
    <xsl:when test="count(../IS/connect[@nodeField=$fieldName]) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>only one IS/connect for each fieldValue</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <!-- no contained node allowed for fields with IS connections -->
    <xsl:when test="boolean(*) and boolean(../IS/connect[@nodeField=$fieldName])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>IS-connected fieldValues cannot be initialized, ignoring contained node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
  <!-- check if this fieldValue has an IS initialization -->
  <!-- take care of IS attribute definitions for SFNode/MFNode-type field declarations inside ProtoDeclarations -->
  <xsl:when test="../IS/connect[@nodeField=$fieldName]">
    <!-- no further action required, IS connection made/checked above -->
  </xsl:when>
  <!-- SFNode/MFNode initializations:  recurse on children/comments -->
  <!-- MFNode -->
  <xsl:when test="not(@value) and (count(*[not(comment())]) > 1)">
    <xsl:text> [&#10;</xsl:text>
    <xsl:apply-templates select="* | comment()">
     <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
    <xsl:text> ]&#10;</xsl:text>
  </xsl:when>
  <!-- SFNode -->
  <xsl:when test="(not(@value) and count(*[not(comment())])=1) or comment()">
    <xsl:text> </xsl:text>
    <xsl:apply-templates select="* | comment()">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:when>
  <!-- SFNode/MFNode where value=USEname -->
  <xsl:when test="not(*) and (@value) and ($fieldValueType='SFNode' or $fieldValueType='MFNode')">
    <xsl:text> USE </xsl:text>
    <xsl:value-of select="@value" />
    <xsl:if test="not(//*[@DEF=$fieldValueValue])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>SFNode fieldValue @value='</xsl:text>
          <xsl:value-of select="@value" />
          <xsl:text>' does not match a DEFed node name</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>fieldValue '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:variable name="useName"  select="@value" />
    <xsl:variable name="useParentProtoName"  select="ancestor::*[local-name()='ProtoDeclare']/@name" />
    <xsl:text> # $useParentProtoName ='</xsl:text><xsl:value-of select="$useParentProtoName"/><xsl:text>'&#10;</xsl:text><!--  -->
    <xsl:text> # $useParentProtoName ='</xsl:text><xsl:value-of select="$useParentProtoName"/><xsl:text>'&#10;</xsl:text><!--  -->
    <xsl:if test="($useParentProtoName  and not(//ProtoDeclare[@name=$useParentProtoName]/ProtoBody//*[@DEF=$useName]))
    	   or (not($useParentProtoName) and    (//ProtoDeclare/ProtoBody//*[@DEF=$useName]))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
        <xsl:text>SFNode fieldValue @value='</xsl:text>
        <xsl:value-of select="@value" />
        <xsl:text>' matches a DEFed node name that is out of ProtoDeclare scope</xsl:text>
        </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>fieldValue '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:if test="../@name">
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:when>
  <!-- simple-type values -->
  <xsl:when test="@value">
    <xsl:variable name="MFtypes"
		select="($nodeType  ='MFBool')     or ($nodeType  ='MFColor') or ($nodeType  ='MFFloat') or ($nodeType  ='MFInt32') or
			($nodeType  ='MFRotation') or ($nodeType  ='MFTime')  or ($nodeType  ='MFVec2f') or ($nodeType  ='MFVec3f') or
			($EPnodeType='MFBool')     or ($EPnodeType='MFColor') or ($EPnodeType='MFFloat') or ($EPnodeType='MFInt32') or
			($EPnodeType='MFRotation') or ($EPnodeType='MFTime')  or ($EPnodeType='MFVec2f') or ($EPnodeType='MFVec3f') or
      			((local-name(..)='HAnimJoint'	or $nodeType='HAnimJoint' or $EPnodeType='HAnimJoint') and
      			 (local-name()='skinCoordIndex' or local-name()='skinCoordWeight'))" />
    <xsl:variable name="ColorCoordinateMFtypes"
		select="
                      ((local-name(..)='Color'    		or $nodeType='Color'    	or $EPnodeType='Color' or
      		        local-name(..)='ColorRGBA'    		or $nodeType='ColorRGBA'    	or $EPnodeType='ColorRGBA') and
      				    local-name()='color') or
                      ((local-name(..)='Coordinate'		or $nodeType='Coordinate'	or $EPnodeType='Coordinate'	or 
                        local-name(..)='CoordinateDouble'	or $nodeType='CoordinateDouble'	or $EPnodeType='CoordinateDouble') and
      				    local-name()='point')" />
    <xsl:variable name="DisJavaVrmlBooleanTypes"
			select="(($nodeName='EspduTransform'	or $nodeName2='EspduTransform'  or
		          $nodeName='ReceiverPdu'	or $nodeName2='ReceiverPdu'	or
		          $nodeName='SignalPdu'		or $nodeName2='SignalPdu'	or
		          $nodeName='TransmitterPdu'	or $nodeName2='TransmitterPdu') and
      				     ($fieldName='traceJava' or $fieldName='rtpHeaderExpected'))" />
    <xsl:variable name="tokenCount">
      <xsl:call-template name="tokenCount">
        <xsl:with-param name="parameter" select="@value"/>
      </xsl:call-template>
    </xsl:variable>
    <!-- <xsl:text># MFtypes </xsl:text><xsl:value-of select="$MFtypes"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text># DisJavaVrmlBooleanTypes </xsl:text><xsl:value-of select="$DisJavaVrmlBooleanTypes"/><xsl:text>&#10;</xsl:text> -->
    <xsl:choose>
      <!-- take care of boolean value capitalization -->
      <xsl:when test="(($nodeType='SFBool') or ($EPnodeType='SFBool') or ($DisJavaVrmlBooleanTypes)) and (@value='true')">
        <xsl:text> TRUE&#10;</xsl:text>
      </xsl:when>
      <xsl:when test="(($nodeType='SFBool') or ($EPnodeType='SFBool') or ($DisJavaVrmlBooleanTypes)) and (@value='false')">
        <xsl:text> FALSE&#10;</xsl:text>
      </xsl:when>
      <!-- take care of SFString fields by wrapping &quot; quotation marks &quot; -->
      <xsl:when test="((local-name(..)='Anchor'     or $nodeType='Anchor'	or $EPnodeType='Anchor') and
      				    local-name()='description') or
                      ((local-name(..)='AudioClip'  or $nodeType='AudioClip'	or $EPnodeType='AudioClip') and
      				    local-name()='description') or
                      ((local-name(..)='Fog'        or $nodeType='Fog'		or $EPnodeType='Fog') and
      				    local-name()='fogType')     or
                      ((local-name(..)='FontStyle'  or $nodeType='FontStyle'	or $EPnodeType='FontStyle') and
      				   (local-name()='language' or local-name()='style'))       or
                      ((local-name(..)='Viewpoint'  or $nodeType='Viewpoint'	or $EPnodeType='Viewpoint') and
      				    local-name()='description') or
                      ((local-name(..)='WorldInfo'  or $nodeType='WorldInfo'	or $EPnodeType='WorldInfo') and
      				    local-name()='title') or
      		($nodeType   = 'SFString') or
      		($EPnodeType = 'SFString')
                     ">
        <xsl:choose>
          <!-- output SFString.  wrap quotes (null string) if string-length 0 -->
          <xsl:when test="not(@value)"><xsl:text> &quot;&quot;&#10;</xsl:text></xsl:when>
          <!-- output SFString.  no need to wrap quotes -->
          <xsl:when test="starts-with(normalize-space(@value),'&quot;')"><xsl:text> </xsl:text><xsl:value-of select="@value" /><xsl:text>&#10;</xsl:text></xsl:when>
          <xsl:when test='starts-with(@value,"&apos;")'><xsl:text> &quot;</xsl:text><xsl:value-of select="@value" /><xsl:text>&quot;&#10;</xsl:text></xsl:when>
          <!-- output SFString with wrapped quotes since it doesn't have any-->
          <xsl:otherwise><xsl:text> &quot;</xsl:text><xsl:value-of select="@value" /><xsl:text>&quot;&#10;</xsl:text></xsl:otherwise>
        </xsl:choose>
        <xsl:if test="(local-name()='fogType' or local-name()='style') and ($tokenCount > 1)">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>illegal number of tokens (</xsl:text>
              <xsl:value-of select="$tokenCount"/>
              <xsl:text>), maximum allowed = 1</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> attribute </xsl:text>
              <xsl:value-of select="local-name(.)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
      </xsl:when>
      <!-- take care of some special MFString types by adding enclosing &quot; &quot; marks, deleting commas -->
      <xsl:when test="((local-name(..)='FontStyle'		or $nodeType='FontStyle'    	or $EPnodeType='FontStyle') and
      				   (local-name()='family' or local-name()='justify')) or
      		      ((local-name(..)='NavigationInfo'		or $nodeType='NavigationInfo' 	or $EPnodeType='NavigationInfo') and
      				    local-name()='type')">
        <!-- <xsl:text> ### inputString &quot;</xsl:text><xsl:value-of select="@value"/><xsl:text>&quot;&#10;</xsl:text> -->
        <xsl:choose>
          <!-- output MFString.  wrap quotes if string-length 0 -->
          <xsl:when test="not(@value)"><xsl:text> [ &quot;&quot; ]&#10;</xsl:text></xsl:when>
          <!-- output MFString.  don't modify quotes if some are there already -->
          <xsl:when test="contains(string(@value),'&quot;')">
            <xsl:text> [ </xsl:text><xsl:value-of select="translate(@value,',',' ')" /><xsl:text> ]### quotes found...&#10;</xsl:text>
          </xsl:when> <!--  -->
          <!-- output MFString with wrapped quotes around token values -->
          <xsl:otherwise>
            <xsl:text> ### inputString &quot;</xsl:text><xsl:value-of select="concat(normalize-space(translate(@value,'&quot;,',' ')),' ')"/><xsl:text>&quot;&#10;</xsl:text><!--  -->
            <xsl:text> [</xsl:text>
            <xsl:call-template name="wrap-quotes-around-tokens">
              <xsl:with-param name="inputValue" select="concat(normalize-space(translate(@value,'&quot;,','  ')),' ')"/>
            </xsl:call-template>
            <xsl:text> ]&#10;</xsl:text> <!-- ### inserted quotes around tokens... -->
          </xsl:otherwise>
        </xsl:choose>
      </xsl:when>
      <!-- take care of MFString types by wrapping [ ]
           (if necessary, ensure contained SFString elements wrapped in &quot; &quot;) -->
      <xsl:when test="((local-name(..)='Anchor'			or $nodeType='Anchor'		or $EPnodeType='Anchor') and
      				   (local-name()='parameter'	or local-name()='url')) or
                      ((local-name(..)='AudioClip'		or $nodeType='AudioClip'	or $EPnodeType='AudioClip') and
      				    local-name()='url') or
                      ((local-name(..)='Background'		or $nodeType='Background'	or $EPnodeType='Background') and
      				    contains(local-name(),'Url'))	or
                      ((local-name(..)='ImageTexture'		or $nodeType='ImageTexture' 	or $EPnodeType='ImageTexture') and
      				    local-name()='url') or
                      ((local-name(..)='Inline'			or $nodeType='Inline'		or $EPnodeType='Inline') and
      				    local-name()='url') or
                      ((local-name(..)='MovieTexture'		or $nodeType='MovieTexture'	or $EPnodeType='MovieTexture') and
      				    local-name()='url') or
                      ((local-name(..)='Script'			or $nodeType='Script'		or $EPnodeType='Script') and
      				    local-name()='url') or
                      ((local-name(..)='Text'			or $nodeType='Text'		or $EPnodeType='Text') and
      				    local-name()='string') or
                      ((local-name(..)='WorldInfo'		or $nodeType='WorldInfo'    	or $EPnodeType='WorldInfo' or
      		        local-name(..)='HAnimHumanoid'		or $nodeType='HAnimHumanoid'    or $EPnodeType='HAnimHumanoid') and
      				    local-name()='info') or
      				($nodeType   = 'MFString') or
      				($EPnodeType = 'MFString')">
        <xsl:if test="((local-name(..)='Inline'			or $nodeType='Inline'		or $EPnodeType='Inline') and
            				   (local-name()='url'))
                      and not(contains(string(.),'.x3d')) and not(contains(string(.),'.x3dv')) and not(contains(string(.),'.x3db')) and not(contains(string(.),'.wrl')) and not(contains(string(.),'.wrz'))">
          <xsl:call-template name="output-warning">
            <xsl:with-param name="warningString">
              <xsl:text>Inline url does not refer to an X3D scene (file extension .x3d .x3dv .x3db .wrl .wrz)</xsl:text>
              <xsl:if test="contains(string(.),'http://') or contains(string(.),'https://') or contains(string(.),'ftp://') or contains(string(.),'sftp://')">
                <xsl:text> Perhaps network resource might nevertheless return an X3D scene?</xsl:text>
              </xsl:if>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text disable-output-escaping="yes">&lt;Inline </xsl:text>
              <xsl:if test="../@DEF">
                <xsl:text>Inline name='</xsl:text>
                <xsl:value-of select="../@DEF" />
                <xsl:text>' </xsl:text>
              </xsl:if>
              <xsl:text>url='</xsl:text>
              <xsl:value-of select="." />
              <xsl:text disable-output-escaping="yes">'&gt;</xsl:text>
            </xsl:with-param>
          </xsl:call-template>
        </xsl:if>
        <xsl:choose>
          <!-- output MFString.  wrap quotes if string-length 0 -->
          <xsl:when test="not(@value)"><xsl:text> [ &quot;&quot; ]&#10;</xsl:text></xsl:when>
          <!-- output MFString.  no need to wrap quotes -->
          <xsl:when test="starts-with(normalize-space(@value),'&quot;')"><xsl:text> [ </xsl:text><xsl:value-of select="@value" /><xsl:text> ]&#10;</xsl:text></xsl:when>
          <xsl:when test='starts-with(@value,"&apos;")'><xsl:text> [ &quot;</xsl:text><xsl:value-of select="@value" /><xsl:text>&quot; ]&#10;</xsl:text></xsl:when>
          <!-- output MFString with wrapped quotes since it doesn't have any-->
          <xsl:otherwise><xsl:text> [ &quot;</xsl:text><xsl:value-of select="@value" /><xsl:text>&quot; ]&#10;</xsl:text></xsl:otherwise>
        </xsl:choose>
      </xsl:when>
      <!-- take care of other MF field types by wrapping [ ] -->
      <xsl:when test="(contains(local-name(..),'Interpolator') and contains(local-name(),'key')) or
                      (contains(local-name(..),'Sequencer')    and contains(local-name(),'key')) or
                      ( local-name(..)='Background'		or $nodeType='Background'	or $EPnodeType='Background') or
                      ((local-name(..)='ElevationGrid'		or $nodeType='ElevationGrid'	or $EPnodeType='ElevationGrid') and
      				    local-name()='height') or
                      ((local-name(..)='Extrusion'		or $nodeType='Extrusion'	or $EPnodeType='Extrusion') and
      				   (local-name()='crossSection' or local-name()='orientation' or local-name()='scale' or local-name()='spine')) or
                      ((local-name(..)='IndexedFaceSet'		or $nodeType='IndexedFaceSet'	or $EPnodeType='IndexedFaceSet' or
                        local-name(..)='IndexedQuadSet'		or $nodeType='IndexedQuadSet'	or $EPnodeType='IndexedQuadSet') and
      				    contains(local-name(),'ndex')) or
                      ((local-name(..)='IndexedLineSet'		or $nodeType='IndexedLineSet'	or $EPnodeType='IndexedLineSet' or
                        local-name(..)='IndexedQuadSet'		or $nodeType='IndexedQuadSet'	or $EPnodeType='IndexedQuadSet') and
      				    contains(local-name(),'ndex')) or
                      ((local-name(..)='LOD'			or $nodeType='LOD'		or $EPnodeType='LOD') and
      				    local-name()='range') or
                      ((local-name(..)='NavigationInfo'		or $nodeType='NavigationInfo'	or $EPnodeType='NavigationInfo') and
      				    local-name()='avatarSize') or
                      ((local-name(..)='Normal'			or $nodeType='Normal'		or $EPnodeType='Normal') and
      				    local-name()='vector') or
                      ((local-name(..)='Text'			or $nodeType='Text'		or $EPnodeType='Text') and
      				    local-name()='length') or
                      ((local-name(..)='TextureCoordinate'	or $nodeType='TextureCoordinate' or $EPnodeType='TextureCoordinate') and
      				    local-name()='point') or
      			((local-name(..)='TextureCoordinate'	or $nodeType='TextureCoordinate' or $EPnodeType='TextureCoordinate') and
      				    local-name()='point') or
      			    $ColorCoordinateMFtypes or
      			    $MFtypes
      			">
        <!-- could put traps here to eliminate default-valued fields -->
        <!-- ?? is a local construct needed here to check and wrap quotes around individual string elements in MFString, if content didn't comply?? -->
        <xsl:text> [ </xsl:text><xsl:value-of select="@value"/><xsl:text> ]&#10;</xsl:text>
      </xsl:when>
      <!-- output doubles, quoted if VRML97 since they were string types then -->
      <xsl:when test="($fileEncoding='VRML97') and
                      (  $nodeType='SFVec2d' or   $nodeType='SFVec3d' or   $nodeType='MFVec2d' or   $nodeType='MFVec3d' or
      		       $EPnodeType='SFVec2d' or $EPnodeType='SFVec3d' or $EPnodeType='MFVec2d' or $EPnodeType='MFVec3d')"><xsl:text> "</xsl:text><xsl:value-of select="@value" /><xsl:text>"</xsl:text></xsl:when>
      <!-- default field output is merely standalone value(s) -->
      <xsl:otherwise>
        <xsl:if test="."><xsl:text> </xsl:text><xsl:value-of select="@value"/><xsl:text>&#10;</xsl:text></xsl:if>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:when>
  <!-- old-style @IS attribute -->
  <xsl:when test="../@DEF and ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[contains(@IS,concat(../@DEF,'.',@name))]">
    <!-- pattern-match variables -->
    <xsl:variable name="DEFname" select="../@DEF" />
    <!-- <xsl:text> # $DEFname   </xsl:text><xsl:value-of select="$DEFname"/><xsl:text>&#10;</xsl:text> -->
    <!-- <xsl:text> # $fieldValueName   </xsl:text><xsl:value-of select="$fieldValueName"/><xsl:text>&#10;</xsl:text> -->
      <xsl:for-each select="ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field">
        <xsl:if test="starts-with(@IS,concat($DEFname, '.')) or contains(@IS,concat(' ',$DEFname, '.'))">
           <!-- this test seems to work when extracting appropriate substring when multiple IS references occur... -->
           <xsl:if test="(contains(substring-after(@IS,concat($DEFname, '.')),' ') and
               	$fieldValueName=substring-before(substring-after(@IS,concat($DEFname, '.')),' '))
               	or ($fieldValueName=substring-after(@IS,concat($DEFname, '.')))">
             <xsl:text> IS </xsl:text>
             <xsl:value-of select="@name"/> <!-- this is @name of ProtoDeclare/ProtoInterface/field -->
             <xsl:text>&#10;</xsl:text>
           </xsl:if>
        </xsl:if>
      </xsl:for-each>
  </xsl:when>
  <!-- SFNode/MFNode additional checks -->
  <xsl:when test="(* or comment()) and ($fieldValueType='SFNode' or $fieldValueType='MFNode')">
      <!-- no warning needed, initializing node or explanatory comment found -->
  </xsl:when>
  <xsl:when test="not(*) and not(comment()) and ($fieldValueType='SFNode' or $fieldValueType='MFNode')">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>Empty node initialization, no value provided for fieldValue '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>'</xsl:text>
        <xsl:text> (insert a comment to silence this warning)</xsl:text>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:text> </xsl:text>
        <xsl:value-of select="../@name" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:when>
  <xsl:otherwise>
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>Improper initialization, no value provided for fieldValue '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>'</xsl:text>
     </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:text> </xsl:text>
        <xsl:value-of select="../@name" />
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:otherwise>
</xsl:choose>
</xsl:template>



<!-- ****** field:  used inside Script, ProtoDeclare, ExternProtoDeclare. ****** -->
<xsl:template match="field">
<xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
  <!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
  <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
  <!-- Check for duplicate field names -->
  <xsl:variable name="fieldName" select="@name" />
  <xsl:variable name="value" select="@value" />
  <!-- Parent(s) of interest are either ProtoDeclare/ProtoInterface or else Script -->
  <xsl:variable name="parentNode">
    <xsl:choose>
      <xsl:when test="local-name(..)='ProtoInterface'">
        <xsl:value-of select="local-name(../..)" />
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="local-name(..)" />
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <xsl:variable name="parentName">
    <xsl:choose>
      <xsl:when test="local-name(..)='ProtoInterface'">
        <xsl:value-of select="../../@name" />
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="../@name" />
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <!-- look for unreferenced ProtoInstance field definitions -->
  <xsl:if test="local-name(..)='ProtoInterface' and not(../../ProtoBody//IS/connect[@protoField=$fieldName])">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>ProtoInterface &lt;field name='</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text>'/&gt; is unreferenced in ProtoBody with no corresponding IS/connect/@protoField</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="$parentNode" />
        <xsl:if test="$parentName">
          <xsl:text> </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/><!-- Script only -->
    </xsl:call-template>
  </xsl:if>
  <!-- duplicate field definition:  only report problem upon encountering first duplicate -->
  <xsl:if test="(count(preceding-sibling::*[local-name()='field' and @name=$fieldName]) = 1)">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>duplicate &lt;field name='</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text>'/&gt; definitions</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="$parentNode" />
        <xsl:if test="$parentName">
          <xsl:text> </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/><!-- Script only -->
    </xsl:call-template>
  </xsl:if>
  <!-- value not initialized.  no error reported on null string, or if contained comment might explain it. -->
  <xsl:if test="(@accessType='initializeOnly' or @accessType='inputOutput') and not(@type='SFString' or @type='SFNode' or starts-with(@type,'MF')) and not(@value) and not(comment()) and not(../IS/connect[@nodeField=$fieldName]) and not(local-name(..)='ExternProtoDeclare')">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text>Initializing </xsl:text>
        <xsl:value-of select="@type"/>
        <xsl:text> value not provided for field '</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>' with @accessType='</xsl:text>
        <xsl:value-of select="@accessType"/>
        <xsl:text>'</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="$parentNode" />
        <xsl:if test="$parentName">
          <xsl:text> </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(@accessType='initializeOnly' or @accessType='inputOutput') and (@type='SFNode' or @type='MFNode') and not(*) and not(comment()) and not(../IS/connect[@nodeField=$fieldName]) and not(local-name(..)='ExternProtoDeclare')">
    <xsl:call-template name="output-info">
      <xsl:with-param name="infoString">
        <xsl:value-of select="@type"/>
        <xsl:text> not provided for field '</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>' with @accessType='</xsl:text>
        <xsl:value-of select="@accessType"/>
        <xsl:text>'.  (Authors can silence this warning by inserting a comment.)</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="$parentNode" />
        <xsl:if test="$parentName">
          <xsl:text> </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- Improper type with contained nodes -->
  <xsl:choose>
    <xsl:when test="boolean(*) and (not(@type='SFNode') and not(@type='MFNode'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>field type='</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>' but initializing node(s) present.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentNode" />
          <xsl:if test="$parentName">
            <xsl:text> </xsl:text>
            <xsl:value-of select="$parentName" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="boolean(*) and ((@accessType='inputOnly') or (@accessType='outputOnly'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>field accessType='</xsl:text>
            <xsl:value-of select="@accessType"/>
            <xsl:text>' but initializing node</xsl:text>
            <xsl:if test="count(*) > 1">
              <xsl:text>s</xsl:text>
            </xsl:if>
            <xsl:text> present: </xsl:text>
            <xsl:for-each select="*">
              <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text>/> </xsl:text>
            </xsl:for-each>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentNode" />
          <xsl:if test="$parentName">
            <xsl:text> </xsl:text>
            <xsl:value-of select="$parentName" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
  </xsl:choose>
  <!-- IS attribute restructured -->
  <xsl:if test="@IS">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>IS attribute (IS='</xsl:text>
          <xsl:value-of select="@IS"/>
          <xsl:text>' = defName.fieldName) is not valid X3D.  Edit source, rewrite using IS/connect tags.</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="$parentNode" />
        <xsl:if test="$parentName">
          <xsl:text> </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- USE attribute restructured -->
  <xsl:if test="@USE">
    <xsl:variable name="USEname" select="@USE"/>
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>USE attribute (USE='</xsl:text>
          <xsl:value-of select="@USE"/>
          <xsl:text>') is not valid X3D for field tags.  Edit source, rewrite as </xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
          <xsl:text>field name='</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text>' etc.</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[><]]></xsl:text>
          <xsl:choose>
            <xsl:when test='//*[@DEF=$USEname]'>
              <xsl:value-of select="local-name(//*[@DEF=$USEname])"/>
            </xsl:when>
            <xsl:otherwise>
              <xsl:text>NodeName</xsl:text>
            </xsl:otherwise>
          </xsl:choose>
          <xsl:text> USE='</xsl:text>
          <xsl:value-of select="$USEname"/>
          <xsl:text>'/</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[><]]></xsl:text>
          <xsl:text>/field</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' parent </xsl:text>
        <xsl:value-of select="$parentNode" />
        <xsl:if test="$parentName">
          <xsl:text> </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:if>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- first, field accessType -->
  <xsl:choose>
    <xsl:when test="($fileEncoding='ClassicVRML') and (@accessType='inputOnly')     "><xsl:text>inputOnly      </xsl:text></xsl:when>
    <xsl:when test="($fileEncoding='ClassicVRML') and (@accessType='outputOnly')    "><xsl:text>outputOnly     </xsl:text></xsl:when>
    <xsl:when test="($fileEncoding='ClassicVRML') and (@accessType='initializeOnly')"><xsl:text>initializeOnly </xsl:text></xsl:when>
    <xsl:when test="($fileEncoding='ClassicVRML') and (@accessType='inputOutput')   "><xsl:text>inputOutput    </xsl:text></xsl:when>
    <xsl:when test="@accessType='inputOnly'      "><xsl:text>eventIn      </xsl:text></xsl:when>
    <xsl:when test="@accessType='outputOnly'     "><xsl:text>eventOut     </xsl:text></xsl:when>
    <xsl:when test="@accessType='initializeOnly' "><xsl:text>field        </xsl:text></xsl:when>
    <xsl:when test="not(local-name(..)='Script' or local-name(../..)='Script') and @accessType='inputOutput' "><xsl:text>exposedField </xsl:text></xsl:when>
    <!-- verbose warning about VRML97 Script -->
    <xsl:when test="not($fileEncoding='ClassicVRML') and (local-name(..)='Script' or local-name(../..)='Script') and @accessType='inputOutput' ">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>Script field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' has accessType 'inputOutput' (exposedField), which is only allowed in X3D Script node, not VRML97 Script node.  Using exposedField anyway, may cause errors.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
      <xsl:text>exposedField </xsl:text>
      <xsl:text> </xsl:text>
    </xsl:when>
    <!-- unspecified or unknown accessType (inputOnly|outputOnly|initializeOnly|inputOutput), formerly (eventIn|eventOut|field|exposedField) -->
    <!-- Scripts cannot contain exposedField so default becomes VRML97 'field' -->
    <xsl:when test="not(@accessType)">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>accessType value not set for field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>', setting accessType=&apos;initializeOnly&apos;</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
      <xsl:text>field </xsl:text>
    </xsl:when>
    <xsl:when test="@accessType='eventIn'">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>accessType=&apos;</xsl:text>
          <xsl:value-of select="@accessType" />
          <xsl:text>&apos; not allowed, instead use accessType=&apos;inputOnly&apos;</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
      <xsl:text>field </xsl:text>
    </xsl:when>
    <xsl:when test="@accessType='eventOut'">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>accessType=&apos;</xsl:text>
          <xsl:value-of select="@accessType" />
          <xsl:text>&apos; not allowed, instead use accessType=&apos;outputOnly&apos;</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
      <xsl:text>field </xsl:text>
    </xsl:when>
    <xsl:when test="@accessType='field'">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>accessType=&apos;</xsl:text>
          <xsl:value-of select="@accessType" />
          <xsl:text>&apos; not allowed, instead use accessType=&apos;initializeOnly&apos;</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
      <xsl:text>field </xsl:text>
    </xsl:when>
    <xsl:when test="@accessType='exposedField'">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>accessType=&apos;</xsl:text>
          <xsl:value-of select="@accessType" />
          <xsl:text>&apos; not allowed, instead use accessType=&apos;inputOutput&apos;</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentName" />
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
      <xsl:text>field </xsl:text>
    </xsl:when>
  </xsl:choose>
  <!-- next, base type -->
  <xsl:choose>
    <xsl:when test="@type='SFBool'	"><xsl:text>SFBool	</xsl:text></xsl:when>
    <xsl:when test="@type='MFBool'	"><xsl:text>SFString	</xsl:text></xsl:when> <!-- X3D type:  MFBool -->
    <xsl:when test="@type='SFColor'	"><xsl:text>SFColor	</xsl:text></xsl:when>
    <xsl:when test="@type='MFColor'	"><xsl:text>MFColor	</xsl:text></xsl:when>
    <xsl:when test="@type='SFColorRGBA'	"><xsl:text>SFColorRGBA	</xsl:text></xsl:when>
    <xsl:when test="@type='MFColorRGBA'	"><xsl:text>MFColorRGBA	</xsl:text></xsl:when>
    <xsl:when test="@type='SFFloat'	"><xsl:text>SFFloat	</xsl:text></xsl:when>
    <xsl:when test="@type='MFFloat'	"><xsl:text>MFFloat	</xsl:text></xsl:when>
    <xsl:when test="@type='SFDouble'	"><xsl:text>SFFloat	</xsl:text></xsl:when>
    <xsl:when test="@type='MFDouble'	"><xsl:text>MFFloat	</xsl:text></xsl:when>
    <xsl:when test="@type='SFImage'	"><xsl:text>SFImage	</xsl:text></xsl:when>
    <xsl:when test="@type='SFInt32'	"><xsl:text>SFInt32	</xsl:text></xsl:when>
    <xsl:when test="@type='MFInt32'	"><xsl:text>MFInt32	</xsl:text></xsl:when>
    <xsl:when test="@type='SFNode'	"><xsl:text>SFNode      </xsl:text></xsl:when>
    <xsl:when test="@type='MFNode'	"><xsl:text>MFNode	</xsl:text></xsl:when>
    <xsl:when test="@type='SFRotation'	"><xsl:text>SFRotation	</xsl:text></xsl:when>
    <xsl:when test="@type='MFRotation'	"><xsl:text>MFRotation	</xsl:text></xsl:when>
    <xsl:when test="@type='SFString'	"><xsl:text>SFString	</xsl:text></xsl:when>
    <xsl:when test="@type='MFString'	"><xsl:text>MFString	</xsl:text></xsl:when>
    <xsl:when test="@type='SFTime'	"><xsl:text>SFTime	</xsl:text></xsl:when>
    <xsl:when test="@type='MFTime'	"><xsl:text>MFTime	</xsl:text></xsl:when>
    <xsl:when test="@type='SFVec2f'	"><xsl:text>SFVec2f	</xsl:text></xsl:when>
    <xsl:when test="@type='MFVec2f'	"><xsl:text>MFVec2f	</xsl:text></xsl:when>
    <xsl:when test="@type='SFVec3f'	"><xsl:text>SFVec3f	</xsl:text></xsl:when>
    <xsl:when test="@type='MFVec3f'	"><xsl:text>MFVec3f	</xsl:text></xsl:when>
    <xsl:when test="(@type='SFVec2d') and ($fileEncoding='VRML97') "><xsl:text>SFString	# SFVec2d&#10;</xsl:text></xsl:when>
    <xsl:when test="(@type='MFVec2d') and ($fileEncoding='VRML97') "><xsl:text>SFString	# MFVec2d&#10;</xsl:text></xsl:when>
    <xsl:when test="(@type='SFVec3d') and ($fileEncoding='VRML97') "><xsl:text>SFString	# SFVec3d&#10;</xsl:text></xsl:when>
    <xsl:when test="(@type='MFVec3d') and ($fileEncoding='VRML97') "><xsl:text>SFString	# MFVec3d&#10;</xsl:text></xsl:when>
    <xsl:when test="@type='SFVec2d'	"><xsl:text>SFVec2d</xsl:text></xsl:when>
    <xsl:when test="@type='MFVec2d'	"><xsl:text>MFVec2d</xsl:text></xsl:when>
    <xsl:when test="@type='SFVec3d'	"><xsl:text>SFVec3d</xsl:text></xsl:when>
    <xsl:when test="@type='MFVec3d'	"><xsl:text>MFVec3d</xsl:text></xsl:when>
    <!-- unknown or previously unspecified type -->
    <xsl:when test="not(@type)           ">
      <xsl:text>__absentTypeError__</xsl:text>
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>type is required for field variables</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="$parentNode" />
          <xsl:if test="$parentName">
            <xsl:text> </xsl:text>
            <xsl:value-of select="$parentName" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
      <xsl:value-of select="@type"/><xsl:text> </xsl:text>
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>unknown type </xsl:text>
          <xsl:value-of select="@type"/>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
            <xsl:value-of select="$parentNode" />
            <xsl:if test="$parentName">
              <xsl:text> </xsl:text>
              <xsl:value-of select="$parentName" />
            </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:otherwise>
  </xsl:choose>
  <!-- next, field name -->
  <xsl:value-of select="@name"/>
  <!-- next, IS name -->
  <!-- pattern-match variables -->
  <xsl:variable name="DEFname" select="../@DEF" />
  <xsl:variable name="protoField" select="../IS/connect[@nodeField=$fieldName]/@protoField" />
  <xsl:variable name="parentNodeName" select="local-name(..)" /> <!-- check above -->
  <xsl:variable name="matchName" select="concat(' ', $DEFname, '.', $fieldName, ' ')" />
  <!-- <xsl:text> # $DEFname   </xsl:text><xsl:value-of select="$DEFname"/><xsl:text>&#10;</xsl:text> -->
  <!-- <xsl:text> # $fieldName </xsl:text><xsl:value-of select="$fieldName"/><xsl:text>&#10;</xsl:text> -->
  <!-- <xsl:message><xsl:text> # $matchName </xsl:text><xsl:value-of select="$matchName"/><xsl:text>&#10;</xsl:text></xsl:message> -->
  <xsl:if test="local-name(..)='Script' and ../@DEF">
    <!-- <xsl:text> # ancestor PROTO field </xsl:text><xsl:value-of select="local-name(ancestor::*[local-name()='ProtoDeclare'])"/><xsl:text>&#10;</xsl:text> -->
    <xsl:for-each select="ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[contains(concat(' ',normalize-space(@IS),' '),$matchName)]">
      <!-- <xsl:text> # node rule: @IS </xsl:text><xsl:value-of select="@IS"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # (starts-with(@IS,concat($DEFname, '.')) </xsl:text><xsl:value-of select="starts-with(@IS,concat($DEFname, '.'))"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # concat($DEFname, '.') </xsl:text><xsl:value-of select="concat($DEFname, '.')"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # @type </xsl:text><xsl:value-of select="@type"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text> # substring-after(@IS,'.') </xsl:text><xsl:value-of select="substring-after(@IS,'.')"/><xsl:text>&#10;</xsl:text> -->
      <xsl:if test="position()=1">
         <xsl:text> IS</xsl:text>
      </xsl:if>
      <xsl:text> </xsl:text>
      <xsl:value-of select="@name"/>
    </xsl:for-each>
  </xsl:if>
  <xsl:if test="local-name(..)='Script'">
    <!-- new style, IS definition follows contained Script node -->
    <!-- output IS -->
    <xsl:for-each select="../IS/connect[@nodeField=$fieldName]">
      <!-- verify, are multiple IS relations handled correctly here? -->
      <xsl:if test="position()=1">
         <xsl:text> IS</xsl:text>
      </xsl:if>
      <xsl:text> </xsl:text>
      <xsl:value-of select="@protoField"/>
    </xsl:for-each>
    <xsl:if test="(local-name()='field') and (../IS/connect[@nodeField=$fieldName]) and (@value or *)">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>cannot initialize field inside Script when IS connection exists. Remove follow-on initializing </xsl:text>
          <xsl:choose>
            <xsl:when test="@value">
              <xsl:text>value </xsl:text>
              <xsl:value-of select="$value" />
            </xsl:when>
            <xsl:otherwise>
              <xsl:text>node </xsl:text>
              <xsl:value-of select="local-name(*[1])" />
            </xsl:otherwise>
          </xsl:choose>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <!--
    <xsl:message>
              <xsl:text>ProtoDeclare/ProtoInterface/field/@name='</xsl:text>
              <xsl:value-of select="ancestor::ProtoDeclare/ProtoInterface/field[@name=$fieldName]/@name" />
              <xsl:text>' $fieldName='</xsl:text>
              <xsl:value-of select="$fieldName" />
              <xsl:text>' $protoField='</xsl:text>
              <xsl:value-of select="$protoField" />
              <xsl:text>' ancestor::ProtoDeclare/ProtoInterface/field[@name=$fieldName]/@accessType='</xsl:text>
              <xsl:value-of select="ancestor::ProtoDeclare/ProtoInterface/field[@name=$fieldName]/@accessType" />
              <xsl:text>' @accessType='</xsl:text>
              <xsl:value-of select="@accessType" />
              <xsl:text>'</xsl:text>
    </xsl:message>
    -->
    <xsl:if test="$protoField and
        (../IS/connect[@nodeField=$fieldName]) and
        (   ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[@name=$protoField]/@type) and
    	not(ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[@name=$protoField]/@type = @type)">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Mismatched ancestor::ProtoDeclare/ProtoInterface/field/@type='</xsl:text>
          <xsl:value-of select="ancestor::ProtoDeclare/ProtoInterface/field[@name=$protoField]/@type" />
          <xsl:text>' and Script/field/@type='</xsl:text>
          <xsl:value-of select="@type" />
          <xsl:text>'</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
          <xsl:if test="ancestor::ProtoDeclare/@name">
            <xsl:text>, parent Prototype name='</xsl:text>
            <xsl:value-of select="ancestor::ProtoDeclare/@name" />
            <xsl:text>'</xsl:text>
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
    <xsl:if test="../IS/connect[@nodeField=$fieldName] and
    	(   ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[@name=$protoField]/@accessType) and
    	not(ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[@name=$protoField]/@accessType = @accessType)">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Mismatched ancestor::ProtoDeclare/ProtoInterface/field/@accessType='</xsl:text>
          <xsl:value-of select="ancestor::ProtoDeclare/ProtoInterface/field[@name=$protoField]/@accessType" />
          <xsl:text>' and Script/field/@accessType='</xsl:text>
          <xsl:value-of select="@accessType" />
          <xsl:text>'</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
  <!-- <xsl:message><xsl:text>... past for-each</xsl:text></xsl:message> -->
  <!-- check that IS nodes match corresponding children inside ProtoDeclare-->
  <xsl:if test="@IS and (local-name(..)='ProtoDeclare')">
    <xsl:call-template name="check-IS-nodes">
      <xsl:with-param name="list" select="@IS"/>
    </xsl:call-template>
  </xsl:if>
  <!-- check that $value is not provided as initializing value for fields of type SFNode/MFNode-->
  <xsl:if test="(@type='SFNode' or @type='MFNode') and @value and ($value!='NULL')">
    <xsl:variable name="USEname" select="$value" />
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>Initializing field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' of type </xsl:text>
        <xsl:value-of select="@type" />
        <xsl:text> with @value="</xsl:text>
        <xsl:value-of select="$value" />
        <xsl:text>" is not valid X3D for field tags.  Edit source, rewrite as </xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
          <xsl:text>field name='</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text>' etc.</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[><]]></xsl:text>
          <xsl:choose>
            <xsl:when test='//*[@DEF=$USEname]'>
              <xsl:value-of select="local-name(//*[@DEF=$USEname])"/>
            </xsl:when>
            <xsl:otherwise>
              <xsl:text>NodeName</xsl:text>
            </xsl:otherwise>
          </xsl:choose>
          <xsl:text> USE='</xsl:text>
          <xsl:value-of select="$USEname"/>
          <xsl:text>'/</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[><]]></xsl:text>
          <xsl:text>/field</xsl:text>
          <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>field '</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>' </xsl:text>
          <xsl:if test="not(../@DEF or ../@name) and (../../@DEF or ../../@name)">
            <xsl:text>grand</xsl:text>
          </xsl:if>
          <xsl:text>parent </xsl:text>
        <xsl:value-of select="local-name(..)" />
        <xsl:choose>
          <xsl:when  test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:when>
          <xsl:when  test="../../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../../@name" />
          </xsl:when>
        </xsl:choose>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- last, provide initializing value (if appropriate) -->
  <xsl:choose>
    <!-- no initial value for ExternProtoDeclare fields -->
    <xsl:when test="@value and not($value='') and local-name(..)='ExternProtoDeclare'">
         <xsl:call-template name="output-error">
           <xsl:with-param name="errorString">
             <xsl:text>initialization value not allowed inside EXTERNPROTO field declarations, ignoring value='</xsl:text>
             <xsl:value-of select="$value" />
             <xsl:text>'</xsl:text>
           </xsl:with-param>
           <xsl:with-param name="node">
             <xsl:text>field '</xsl:text>
             <xsl:value-of select="@name" />
             <xsl:text>' </xsl:text>
             <xsl:if test="not(../@DEF or ../@name) and (../../@DEF or ../../@name)">
               <xsl:text>grand</xsl:text>
             </xsl:if>
             <xsl:text>parent </xsl:text>
             <xsl:value-of select="local-name(..)" />
             <xsl:choose>
               <xsl:when  test="../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../@name" />
               </xsl:when>
               <xsl:when  test="../../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../../@name" />
               </xsl:when>
             </xsl:choose>
           </xsl:with-param>
           <xsl:with-param name="DEF"  select="../@DEF"/>
         </xsl:call-template>
    </xsl:when>
    <!-- no initial node for ExternProtoDeclare fields -->
    <xsl:when test="boolean(*) and local-name(..)='ExternProtoDeclare'">
         <xsl:call-template name="output-error">
           <xsl:with-param name="errorString">
             <xsl:text>initialization node not allowed inside EXTERNPROTO field declarations, ignoring initialization </xsl:text>
             <xsl:for-each select="*">
               <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
               <xsl:value-of select="local-name()" />
               <xsl:text>/> </xsl:text>
             </xsl:for-each>
             <xsl:text>node</xsl:text>
             <xsl:if test="count(*) > 1">
               <xsl:text>s</xsl:text>
             </xsl:if>
           </xsl:with-param>
           <xsl:with-param name="node">
             <xsl:text>field '</xsl:text>
             <xsl:value-of select="@name" />
             <xsl:text>' </xsl:text>
             <xsl:if test="not(../@DEF or ../@name) and (../../@DEF or ../../@name)">
               <xsl:text>grand</xsl:text>
             </xsl:if>
             <xsl:text>parent </xsl:text>
             <xsl:value-of select="local-name(..)" />
             <xsl:choose>
               <xsl:when  test="../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../@name" />
               </xsl:when>
               <xsl:when  test="../../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../../@name" />
               </xsl:when>
             </xsl:choose>
           </xsl:with-param>
           <xsl:with-param name="DEF"  select="../@DEF"/>
         </xsl:call-template>
    </xsl:when>
    <xsl:when test="local-name(..)='ExternProtoDeclare'"><!-- ignore, no value is the correct case for ExternProtoDeclare --></xsl:when>
    <!-- eventIn, eventOut -->
    <xsl:when test="((@accessType='inputOnly') or (@accessType='outputOnly')) and @value">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>ignoring initial value="</xsl:text>
          <xsl:value-of select="$value" />
          <xsl:text>" for </xsl:text>
          <xsl:value-of select="@accessType" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' </xsl:text>
             <xsl:if test="not(../@DEF or ../@name) and (../../@DEF or ../../@name)">
               <xsl:text>grand</xsl:text>
             </xsl:if>
             <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
             <xsl:choose>
               <xsl:when  test="../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../@name" />
               </xsl:when>
               <xsl:when  test="../../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../../@name" />
               </xsl:when>
             </xsl:choose>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <!-- no value allowed for Script fields with IS connections -->
    <xsl:when test="(@value) and (../IS/connect[@nodeField=$fieldName])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>IS-connected field definitions cannot be initialized, ignoring value="</xsl:text>
          <xsl:value-of select="$value" />
          <xsl:text>"</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' </xsl:text>
             <xsl:if test="not(../@DEF or ../@name) and (../../@DEF or ../../@name)">
               <xsl:text>grand</xsl:text>
             </xsl:if>
             <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
             <xsl:choose>
               <xsl:when  test="../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../@name" />
               </xsl:when>
               <xsl:when  test="../../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../../@name" />
               </xsl:when>
             </xsl:choose>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <!-- only single IS connection to ancestor ProtoDeclare field interface -->
    <xsl:when test="count(../IS/connect[@nodeField=$fieldName]) > 1">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>only one IS/connect for each field</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' </xsl:text>
          <xsl:if test="not(../@DEF or ../@name) and (../../@DEF or ../../@name)">
            <xsl:text>grand</xsl:text>
          </xsl:if>
          <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
             <xsl:choose>
               <xsl:when  test="../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../@name" />
               </xsl:when>
               <xsl:when  test="../../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../../@name" />
               </xsl:when>
             </xsl:choose>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <!-- no contained node allowed for fields with IS connections -->
    <xsl:when test="boolean(*) and boolean(../IS/connect[@nodeField=$fieldName])">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>IS-connected field definitions cannot be initialized, ignoring contained node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' </xsl:text>
          <xsl:if test="not(../@DEF or ../@name) and (../../@DEF or ../../@name)">
            <xsl:text>grand</xsl:text>
          </xsl:if>
          <xsl:text>parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
             <xsl:choose>
               <xsl:when  test="../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../@name" />
               </xsl:when>
               <xsl:when  test="../../@name">
                 <xsl:text> </xsl:text>
                 <xsl:value-of select="../../@name" />
               </xsl:when>
             </xsl:choose>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="../IS/connect[@nodeField=$fieldName]">
      <!-- do not output default value below if an IS connection exists, no action taken here -->
    </xsl:when>
    <!-- properly declared Script field with corresponding @IS in prototype declaration - no action required -->
    <xsl:when test="local-name(..)='Script' and ../@DEF and
	ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[contains(concat(' ',@IS,' '),$matchName)]">
       <!-- <xsl:message><xsl:text>... matching IS found</xsl:text></xsl:message> -->
       <!-- matching IS found -->
       <xsl:if test="@value">
         <xsl:call-template name="output-error">
           <xsl:with-param name="errorString">
             <xsl:text>initialization value not allowed in addition to IS declarations, ignoring initial value='</xsl:text>
             <xsl:value-of select="$value" />
             <xsl:text>'</xsl:text>
           </xsl:with-param>
           <xsl:with-param name="node">
             <xsl:text>field '</xsl:text>
             <xsl:value-of select="@name" />
             <xsl:text>' parent </xsl:text>
             <xsl:value-of select="local-name(..)" />
           </xsl:with-param>
           <xsl:with-param name="DEF"  select="../@DEF"/>
         </xsl:call-template>
       </xsl:if>
       <!-- <xsl:message><xsl:text>... check for-each</xsl:text></xsl:message> -->
       <xsl:variable name="accessType" select="@accessType"/>
       <xsl:for-each select="ancestor::*[local-name()='ProtoDeclare']/ProtoInterface/field[contains(concat(' ',@IS,' '),$matchName)]">
         <!-- context is now within field located by for-each -->
         <xsl:if test="$accessType!=@accessType">
           <xsl:call-template name="output-warning">
             <xsl:with-param name="warningString">
               <xsl:value-of select="$parentNodeName" />
               <xsl:text> field </xsl:text>
               <xsl:value-of select="$fieldName" />
               <xsl:text> accessType='</xsl:text>
               <xsl:value-of select="@accessType" />
               <xsl:text>' does not match IS accessType='</xsl:text>
               <xsl:value-of select="@accessType" />
               <xsl:text>' of ProtoDeclare field '</xsl:text>
               <xsl:value-of select="@name" />
               <xsl:text>'</xsl:text>
             </xsl:with-param>
             <xsl:with-param name="node">
               <xsl:text>field '</xsl:text>
               <xsl:value-of select="$fieldName" />
               <xsl:text>' parent </xsl:text>
               <xsl:value-of select="$parentNodeName" />
               <xsl:text> </xsl:text>
               <xsl:value-of select="$parentName" />
             </xsl:with-param>
             <xsl:with-param name="DEF"  select="$DEFname"/>
           </xsl:call-template>
         </xsl:if>
       </xsl:for-each>
    </xsl:when>
    <xsl:when test="((@accessType='inputOnly') or (@accessType='outputOnly'))"><!-- no value required --></xsl:when>
    <!-- wrap SFStrings in quotes -->
    <xsl:when test="@type='SFString' and @value"><xsl:text> &quot;</xsl:text><xsl:value-of select="$value" /><xsl:text>&quot;</xsl:text></xsl:when>
    <!-- output MFString.  wrap quotes if string-length 0 or 1 -->
    <xsl:when test="(@type='MFString' and
                     (string-length($value)=0 or string-length($value)=1))"><xsl:text> [&#10;&quot;</xsl:text><xsl:value-of select="$value" /><xsl:text>&quot;&#10;]</xsl:text></xsl:when>
    <xsl:when test="(@type='MFString' and starts-with($value,'&quot;'))"><xsl:text> [&#10;</xsl:text><xsl:value-of select="$value" /><xsl:text>&#10;]</xsl:text></xsl:when>
    <xsl:when test='(@type="Strings" and starts-with($value,"&apos;"))'><xsl:text> [&#10;&quot;</xsl:text><xsl:value-of select="$value" /><xsl:text>&quot;&#10;]</xsl:text></xsl:when>
    <!-- output MFString with wrapped quotes when it doesn't have any-->
    <xsl:when test="(@type='MFString')">
                     <xsl:text> [ &quot;</xsl:text><xsl:value-of select="$value" /><xsl:text>&quot; ]</xsl:text></xsl:when>
    <!-- output SFNode if initializing child present -->
    <xsl:when test="@type='SFNode' and (*)">
      <xsl:text> </xsl:text>
      <xsl:apply-templates select="*">
        <xsl:with-param name="indent" select="$indent + 2"/>
      </xsl:apply-templates>
    </xsl:when>
    <!-- output MFNode if initializing children present -->
    <xsl:when test="@type='MFNode' and (*)">
      <xsl:text> [&#10;</xsl:text>
      <xsl:apply-templates select="*">
        <xsl:with-param name="indent" select="$indent + 2"/>
      </xsl:apply-templates>
      <xsl:text>] </xsl:text>
    </xsl:when>
    <!-- straightforward output-test cases follow, check whether SF (single field) or MF (multiple field) values -->
    <!-- error:  embedded child SFNode/MFNode when USE present -->
    <xsl:when test="@USE and *">
      <xsl:text> USE </xsl:text>
      <xsl:value-of select="@USE"/>
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>no embedded child-node content allowed together with USE="</xsl:text>
          <xsl:value-of select="@USE" />
          <xsl:text>"</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <!-- error:  incorrect field type when USE present -->
    <xsl:when test="@USE and not(@type='SFNode' or @type='MFNode')">
      <xsl:text> USE </xsl:text><xsl:value-of select="@USE"/>
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>mismatched type="</xsl:text>
          <xsl:value-of select="@type" />
          <xsl:text>", should be type Node or Nodes for USE="</xsl:text>
          <xsl:value-of select="@USE" />
          <xsl:text>"</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>field '</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>' parent </xsl:text>
          <xsl:value-of select="local-name(..)" />
          <xsl:if test="../@name">
            <xsl:text> </xsl:text>
            <xsl:value-of select="../@name" />
          </xsl:if>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
    </xsl:when>
    <!-- output SFNode/MFNode name if USE present
    <xsl:when test="@USE and (@type='SFNode' or @type='MFNode')">
      <xsl:text> USE </xsl:text>
      <xsl:value-of select="@USE"/>
      <xsl:apply-templates select="comment()">
        <xsl:with-param name="indent" select="$indent + 2"/>
      </xsl:apply-templates>
    </xsl:when> -->
    <!-- some kind of value present -->
    <xsl:when test="@value">
      <!-- <xsl:text> # @value found &#10;</xsl:text> -->
      <xsl:choose>
        <!-- output Boolean values -->
        <xsl:when test="@type='SFBool' and $value='true'"><xsl:text> TRUE</xsl:text></xsl:when>
        <xsl:when test="@type='SFBool' and $value='false'"><xsl:text> FALSE</xsl:text></xsl:when>
        <xsl:when test="@type='SFBool'"><xsl:text> </xsl:text><xsl:value-of select="$value" /><xsl:text> ### invalid SFBool value! </xsl:text></xsl:when>
        <xsl:when test="@type='MFBool'"><xsl:text> "</xsl:text><xsl:value-of select="$value" /><xsl:text>" # type MFBool </xsl:text></xsl:when>
   <!-- <xsl:when test="@type='MFBool'"><xsl:text> [ </xsl:text><xsl:value-of select="translate($value,'truefalse','TRUEFALSE')" /><xsl:text> ]</xsl:text></xsl:when> -->
        <!-- output other SF values (SFNode  is possible, might contain NULL) -->
        <xsl:when test="(@type='SFColor' or @type='SFFloat' or @type='SFDouble' or @type='SFInt32' or @type='SFNode' or @type='SFRotation' or @type='SFString' or
                         @type='SFTime'  or @type='SFVec2f' or @type='SFVec3f' )"><xsl:text> </xsl:text><xsl:value-of select="$value" /></xsl:when>
        <xsl:when test="(@type='SFImage')">
          <!-- image data can be very long, ensure no buffer overruns on output -->
          <xsl:text> </xsl:text><xsl:value-of select="translate(normalize-space($value),' ','&#10;')" />
        </xsl:when>
        <!-- output other MF values (MFNode is possible, might contain NULL) -->
        <xsl:when test="(@type='MFColor' or @type='MFColorRGBA'  or @type='MFFloat' or @type='MFDouble' or @type='MFInt32' or @type='MFNode' or @type='MFRotation' or @type='MFString' or
                         @type='MFTime' or @type='MFVec2f' or @type='MFVec3f' )"><xsl:text> [ </xsl:text><xsl:value-of select="$value" /><xsl:text> ]</xsl:text></xsl:when>
        <!-- output doubles as SFString -->
        <xsl:when test="@value and (@type='SFVec2d' or @type='SFVec3d'   or @type='MFVec2d') and ($fileEncoding='VRML97')"><xsl:text> "</xsl:text><xsl:value-of select="$value" /><xsl:text>"</xsl:text></xsl:when>
        <!-- output MFVec3d as MFString triplets -->
        <xsl:when test="@value and (@type='MFVec3d') and ($fileEncoding='VRML97')">
            <xsl:call-template name="wrap-quotes-around-triplets">
              <xsl:with-param name="inputValue" select="concat(normalize-space(translate($value,'&quot;,',' ')),' ')"/>
            </xsl:call-template>
        </xsl:when>
        <xsl:otherwise><xsl:text> </xsl:text><xsl:value-of select="$value" /><xsl:text> # unknown type!</xsl:text></xsl:otherwise>
      </xsl:choose>
      <!-- validate attribute values -->
      <xsl:call-template name="attribute-value-validation">
        <xsl:with-param name="name"><xsl:value-of select="@name"/></xsl:with-param>
        <xsl:with-param name="type"><xsl:value-of select="@type"/></xsl:with-param>
        <xsl:with-param name="value"><xsl:value-of select="$value"/></xsl:with-param>
      </xsl:call-template>
    </xsl:when>
    <!-- no value provided for field or exposedField, or no SFNode/MFNode children, or no hint provided, must determine default value -->
    <xsl:otherwise> <!-- otherwise show default value, except when IS provides the value -->
        <xsl:choose>
          <xsl:when test="@type='SFNode'	"><xsl:text> NULL</xsl:text></xsl:when>
          <xsl:when test="@type='MFNode'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFBool'	"><xsl:text> FALSE</xsl:text></xsl:when>
          <xsl:when test="@type='MFBool'	"><xsl:text> ""</xsl:text></xsl:when>
    <!--  <xsl:when test="@type='MFBool'	"><xsl:text> [ ]</xsl:text></xsl:when> -->
          <xsl:when test="@type='SFColor'	"><xsl:text> 0 0 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFColor'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFColorRGBA'	"><xsl:text> 0 0 0 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFColorRGBA'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFFloat'	"><xsl:text> 0.0</xsl:text></xsl:when>
          <xsl:when test="@type='MFFloat'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFDouble'	"><xsl:text> 0.0 # SFFloat substituted for SFDouble</xsl:text></xsl:when>
          <xsl:when test="@type='MFDouble'	"><xsl:text> [ ] # MFFloat substituted for MFDouble</xsl:text></xsl:when>
          <xsl:when test="@type='SFImage'	"><xsl:text> 0 0 0</xsl:text></xsl:when>
          <xsl:when test="@type='SFInt32'	"><xsl:text> 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFInt32'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFRotation'	"><xsl:text> 0 0 1 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFRotation'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFString'	"><xsl:text> ""</xsl:text></xsl:when>
          <xsl:when test="@type='MFString'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFTime'	"><xsl:text> -1</xsl:text></xsl:when>
          <xsl:when test="@type='MFTime'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFVec2f'	"><xsl:text> 0 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFVec2f'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFVec3f'	"><xsl:text> 0 0 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFVec3f'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="(@type='SFVec2d') and ($fileEncoding='VRML97') "><xsl:text> "0 0"</xsl:text></xsl:when>
          <xsl:when test="(@type='MFVec2d') and ($fileEncoding='VRML97') "><xsl:text> ""</xsl:text></xsl:when>
          <xsl:when test="(@type='SFVec3d') and ($fileEncoding='VRML97') "><xsl:text> "0 0 0"</xsl:text></xsl:when>
          <xsl:when test="(@type='MFVec3d') and ($fileEncoding='VRML97') "><xsl:text> ""</xsl:text></xsl:when>
          <xsl:when test="@type='SFVec2d'	"><xsl:text> 0 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFVec2d'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <xsl:when test="@type='SFVec3d'	"><xsl:text> 0 0 0</xsl:text></xsl:when>
          <xsl:when test="@type='MFVec3d'	"><xsl:text> [ ]</xsl:text></xsl:when>
          <!-- unknown or previously unspecified type -->
          <xsl:when test="not(@type)           "><!-- ignore, no further action required --></xsl:when>
          <xsl:otherwise><xsl:value-of select="@type"/><!-- ignore, no further action required --></xsl:otherwise>
        </xsl:choose>
    </xsl:otherwise>
  </xsl:choose>
  <xsl:if test="@IS">
    <xsl:choose>
      <xsl:when test="local-name(..)='ExternProtoDeclare' ">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>IS="</xsl:text>
            <xsl:value-of select="@IS" />
            <xsl:text>" references not allowed inside ExternProto field declarations</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:text>field '</xsl:text>
            <xsl:value-of select="@name" />
            <xsl:text>' parent </xsl:text>
            <xsl:value-of select="local-name(..)" />
            <xsl:if test="../@name">
              <xsl:text> </xsl:text>
              <xsl:value-of select="../@name" />
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:when>
      <xsl:when test="local-name(..)='ProtoDeclare'">
        <xsl:text> # IS </xsl:text><xsl:value-of select="@IS" />
      </xsl:when>
      <xsl:when test="local-name(..)='Script'">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>IS definitions usually belong in ProtoDeclare field definitions, pointing to contained Script node fields.</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:text>field '</xsl:text>
            <xsl:value-of select="@name" />
            <xsl:text>' parent </xsl:text>
            <xsl:value-of select="local-name(..)" />
            <xsl:if test="../@name">
              <xsl:text> </xsl:text>
              <xsl:value-of select="../@name" />
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:when>
      <xsl:otherwise>
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>why an IS="</xsl:text>
            <xsl:value-of select="@IS" />
            <xsl:text>" reference here?</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:text>field '</xsl:text>
            <xsl:value-of select="@name" />
            <xsl:text>' parent </xsl:text>
            <xsl:value-of select="local-name(..)" />
            <xsl:if test="../@name">
              <xsl:text> </xsl:text>
              <xsl:value-of select="../@name" />
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:if>
  <xsl:if test="@type='MFBool'"><xsl:text> # type MFBool </xsl:text></xsl:if>
  <xsl:if test="@appinfo">
    <xsl:apply-templates select="@appinfo">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:if>
  <xsl:if test="@documentation">
    <xsl:if test="@appinfo"><xsl:text>&#10;</xsl:text></xsl:if>
    <xsl:apply-templates select="@documentation">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
  <!-- careful not to extract comment until full field done -->
  <xsl:if test="comment()">
    <xsl:text>&#10;</xsl:text>
    <xsl:apply-templates select="comment()">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:if>
  <!-- finished with this field -->
  <xsl:if test="not((@type='SFNode' or @type='MFNode') and *)"> <!-- no linespace needed if child node(s) output -->
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
</xsl:template>


<!-- ****** ExternProtoDeclare ****** -->
<xsl:template match="ExternProtoDeclare">
<xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
<!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
<xsl:variable name="url" select="@url"/>
<xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
<xsl:text>EXTERNPROTO </xsl:text>
<xsl:value-of select="@name" />
<xsl:text> [ </xsl:text>
<xsl:if test="@appinfo|@documentation|field"><xsl:text>&#10;</xsl:text></xsl:if>
  <xsl:if test="@appinfo">
    <xsl:apply-templates select="@appinfo">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="@documentation">
    <xsl:if test="@appinfo"><xsl:text>&#10;</xsl:text></xsl:if>
    <xsl:apply-templates select="@documentation">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
<!-- ExternProtoDeclare is only allowed to contain X3D field tags, no initializations or IS statements, check each -->
<xsl:apply-templates select="field | comment()">
  <xsl:with-param name="indent" select="$indent + 2"/>
</xsl:apply-templates>
<!-- finish with URLs -->
<xsl:text>][&#10;</xsl:text>
<!-- <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template> <xsl:text>  </xsl:text>-->
<xsl:choose>
  <!-- output url MFString.  wrap quotes if necessary -->
  <xsl:when test="not(@url)"><xsl:text>&quot;&quot; ### error, no URL(s) provided for EXTERNPROTO&#10;</xsl:text></xsl:when>
  <xsl:when test="string-length($url)=1"><xsl:text>&quot;</xsl:text><xsl:value-of select="@url" /><xsl:text>&quot;</xsl:text></xsl:when>
  <xsl:when test="starts-with(normalize-space(@url),'&quot;')"><xsl:value-of select="@url" /></xsl:when>
  <!-- otherwise output MFString with wrapped quotes since it doesn't have any (but could still be multiple URLs, which is bad!) -->
  <xsl:otherwise><xsl:text>&quot;</xsl:text><xsl:value-of select="@url" /><xsl:text>&quot;</xsl:text></xsl:otherwise>
</xsl:choose>
<xsl:text>&#10;</xsl:text>
<xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
<xsl:text> ]&#10;</xsl:text>
<!-- check for problems -->
<xsl:variable name="externProtoDeclareName" select="@name"/>
<!-- ensure only one definition -->
<xsl:if test="//ProtoDeclare[@name=$externProtoDeclareName]">
  <xsl:call-template name="output-error">
    <xsl:with-param name="errorString">
      <xsl:text>Simultaneous ExternProtoDeclare and ProtoDeclare definitions for </xsl:text>
      <xsl:value-of select="@name" />
      <xsl:text> node</xsl:text>
    </xsl:with-param>
    <xsl:with-param name="node">
      <xsl:text>ProtoDeclare, ExternProtoDeclare </xsl:text>
      <xsl:value-of select="@name" />
    </xsl:with-param>
  </xsl:call-template>
</xsl:if>
<xsl:if test="preceding::*[local-name()='ExternProtoDeclare' and @name=$externProtoDeclareName]">
  <xsl:call-template name="output-error">
    <xsl:with-param name="errorString">
      <xsl:text>Duplicate ExternProtoDeclare definitions for </xsl:text>
      <xsl:value-of select="@name" />
      <xsl:text> node</xsl:text>
    </xsl:with-param>
    <xsl:with-param name="node">
      <xsl:text>ExternProtoDeclare </xsl:text>
      <xsl:value-of select="@name" />
    </xsl:with-param>
  </xsl:call-template>
</xsl:if>
<!-- ensure prior definition if ProtoInstance occurs -->
<xsl:if test="preceding::*[local-name()='ProtoInstance' and @name=$externProtoDeclareName]">
  <xsl:call-template name="output-error">
    <xsl:with-param name="errorString">
      <xsl:text>ExternProtoDeclare </xsl:text>
      <xsl:value-of select="@name" />
      <xsl:text> must precede ProtoInstance</xsl:text>
    </xsl:with-param>
    <xsl:with-param name="node">
      <xsl:text>ProtoInstance </xsl:text>
      <xsl:value-of select="@name" />
    </xsl:with-param>
  </xsl:call-template>
</xsl:if>

  <xsl:if test="not(@name) or (@name='')">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>ExternProtoDeclare requires name</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>unnamed ExternProtoDeclare</xsl:text>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="not(@url) or (@url='')">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>ExternProtoDeclare does not include url pointing to ProtoDeclare definition scene</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>ExternProtoDeclare name='</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>'</xsl:text>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="@url and not(contains(@url,'.x3d')) and not(contains(@url,'.x3dv')) and not(contains(@url,'.x3db')) and not(contains(@url,'.wrl')) and not(contains(@url,'.wrz'))">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>ExternProtoDeclare url does not refer to an X3D scene (file extension .x3d .x3dv .x3db .wrl .wrz)</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:text>ExternProtoDeclare name='</xsl:text>
        <xsl:value-of select="@name" />
        <xsl:text>'</xsl:text>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:if>
  <xsl:choose>
    <xsl:when test="@url and not(contains(@url,'#'))">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>ExternProtoDeclare url does not end with prototype name:  #</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text> or #OriginalProtoName"</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ExternProtoDeclare name='</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>'</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="@url and not(contains(@url,concat('#',@name)))">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text>ExternProtoDeclare url renames prototype by not ending with #</xsl:text>
          <xsl:value-of select="@name" />
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>ExternProtoDeclare name='</xsl:text>
          <xsl:value-of select="@name" />
          <xsl:text>'</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:when>
  </xsl:choose>
  <xsl:variable name="EPname" select="@name"/>
  <xsl:variable name="EPurl"  select="@url"/>
  <xsl:if test="preceding::*[(local-name()='ExternProtoDeclare') and (@name=$EPname)] or
  		following::*[(local-name()='ExternProtoDeclare') and (@name=$EPname)]">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:text>duplicate </xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
        <xsl:text>ExternProtoDeclare name='</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>'/</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
        <xsl:text> definitions found.</xsl:text>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="preceding::*[(local-name()='ExternProtoDeclare') and (@name!=$EPname) and (@url=$EPurl)] or
  		following::*[(local-name()='ExternProtoDeclare') and (@name!=$EPname) and (@url=$EPurl)]">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:text></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
        <xsl:text>ExternProtoDeclare name='</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>'/</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
        <xsl:text> definition found with duplicate url='</xsl:text>
        <xsl:value-of select="@url"/>
        <xsl:text>'</xsl:text>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:if>
  <!-- check quotes are matched since unterminated VRML string values cause big problems.  report error but do not append correcting quote.  -->
  <xsl:call-template name="count-quotes">
    <xsl:with-param name="inputValue" select="@url"/>
  </xsl:call-template>
</xsl:template>


<!-- ****** ProtoDeclare ****** -->
<xsl:template match="ProtoDeclare">
<xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
<!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
<xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
<!-- error checks -->
<xsl:if test="*[local-name()!='ProtoInterface' and local-name()!='ProtoBody' and not(comment())]">
  <xsl:call-template name="output-error">
    <xsl:with-param name="errorString">
      <xsl:text>ProtoDeclare can only contain ProtoInterface and ProtoBody as immediate child nodes'</xsl:text>
    </xsl:with-param>
    <xsl:with-param name="node">
      <xsl:text>ProtoDeclare </xsl:text>
      <xsl:value-of select="@name" />
    </xsl:with-param>
  </xsl:call-template>
</xsl:if>
<xsl:if test="descendant-or-self::*[local-name()='EXPORT']">
  <xsl:call-template name="output-error">
    <xsl:with-param name="errorString">
      <xsl:text>ProtoDeclare cannot contain any EXPORT statements</xsl:text>
    </xsl:with-param>
    <xsl:with-param name="node">
      <xsl:text>ProtoDeclare </xsl:text>
      <xsl:value-of select="@name" />
    </xsl:with-param>
  </xsl:call-template>
</xsl:if>
<!-- ensure prior definition if ProtoInstance occurs -->
<xsl:variable name="protoDeclareName" select="@name"/>
<xsl:if test="preceding::*[local-name()='ProtoInstance' and @name=$protoDeclareName]">
  <xsl:call-template name="output-error">
    <xsl:with-param name="errorString">
      <xsl:text>ProtoDeclare </xsl:text>
      <xsl:value-of select="@name" />
      <xsl:text> must precede ProtoInstance</xsl:text>
    </xsl:with-param>
    <xsl:with-param name="node">
      <xsl:text>ProtoInstance </xsl:text>
      <xsl:value-of select="@name" />
    </xsl:with-param>
  </xsl:call-template>
</xsl:if>
<xsl:text>PROTO </xsl:text><xsl:value-of select="@name" /><xsl:text> [&#10;</xsl:text>
  <xsl:if test="@appinfo">
    <xsl:apply-templates select="@appinfo">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="@documentation">
    <xsl:if test="@appinfo"><xsl:text>&#10;</xsl:text></xsl:if>
    <xsl:apply-templates select="@documentation">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
<!-- ProtoDeclare is allowed to contain X3D field tags and content, check each ProtoInterface, field tags first -->
<xsl:choose>
  <xsl:when test="ProtoInterface or ProtoBody">
    <xsl:apply-templates select="comment()[following-sibling::ProtoInterface] | ProtoInterface/field | ProtoInterface/comment() |
    				 comment()[following-sibling::ProtoBody]">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:when>
  <xsl:otherwise> <!-- original form, without ProtoInterface/ProtoBody -->
    <xsl:apply-templates select="field | comment()[preceding-sibling::field or following-sibling::field]">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:otherwise>
</xsl:choose>
<xsl:text>] {&#10;</xsl:text>
<!-- now handle ProtoBody embedded content.  recurse on non-field-tag children. -->
<xsl:choose>
  <xsl:when test="ProtoBody">
    <xsl:if test="count(ProtoBody/*[(local-name()!='ROUTE') and (local-name()!='ProtoDeclare') and (local-name()!='ExternProtoDeclare') and not(comment())]) > 1">
      <!-- if neither of first two nodes are a comment, throw warning -->
      <xsl:if test="not(ProtoBody/comment()[position()=1]) and not(ProtoBody/comment()[position()=2]) and (ProtoBody/Shape[position()>1] or ProtoBody/*[position()>1]//Shape or ProtoInstance[position()>1] or *[position()>1]//ProtoInstance)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
            <xsl:text>ProtoDeclare name='</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>'/</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
            <xsl:text> ProtoBody child (or descendant) Shape following first child will not be rendered, since the first child determines node type of this prototype. (Authors can silence this warning by placing a comment as second child.)</xsl:text>
          </xsl:with-param>
        </xsl:call-template>
      </xsl:if>
    </xsl:if>
    <xsl:apply-templates select="ProtoBody/* | ProtoBody/comment()[preceding-sibling::ProtoBody] | comment()[preceding-sibling::ProtoBody]">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:when>
  <xsl:otherwise> <!-- original form, without ProtoInterface/ProtoBody -->
    <xsl:apply-templates select="*[local-name()!='field'] | comment()[not(following-sibling::field)]">
      <xsl:with-param name="indent" select="$indent + 2"/>
    </xsl:apply-templates>
  </xsl:otherwise>
</xsl:choose>
<xsl:text>}&#10;</xsl:text>
</xsl:template>


<!-- ****** USE element ****** -->
<xsl:template match="USE">
<!-- USE node is no longer allowed -->
<xsl:variable name="nodeReference"><xsl:value-of select="@node"/></xsl:variable>
<xsl:call-template name="output-error">
  <xsl:with-param name="errorString">
    <xsl:text>USE element not allowed, utilize the USE attribute in a matching node instead.  Example: </xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[<]]></xsl:text>
    <xsl:choose>
      <xsl:when test="//*[(@DEF=$nodeReference)]">
        <xsl:for-each select="//*[(@DEF=$nodeReference)]">
          <xsl:value-of select="local-name()"/>
        </xsl:for-each>
      </xsl:when>
      <xsl:otherwise><xsl:text>NodeName</xsl:text></xsl:otherwise>
    </xsl:choose>
    <xsl:text> USE='</xsl:text>
    <xsl:value-of select="@node"/>
    <xsl:text>'/</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[>]]></xsl:text>
  </xsl:with-param>
</xsl:call-template>
</xsl:template>


<!-- ****** children elements:  ignore wrapper tags (since redundant with VRML definitions) ****** -->

<xsl:template match="appearance | children | choice | color | coord | fontStyle | geometry | level | material | normal | source | texCoord | texture | textureTransform">
<xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
<!-- <xsl:text># $indent=</xsl:text><xsl:value-of select="$indent"/><xsl:text>### &#10;</xsl:text> -->
  <xsl:text>### wrapper tag:  </xsl:text>
  <xsl:value-of select="local-name()"/>
  <xsl:text>&#10;</xsl:text>
  <xsl:apply-templates>
    <xsl:with-param name="indent" select="$indent"/>
  </xsl:apply-templates>

</xsl:template>

<xsl:template name="tokenCount">
    <xsl:param name="parameter"><xsl:text></xsl:text></xsl:param>
    <!-- thanks to Marc Jablonski for original technique -->
    <xsl:variable name="normalizedParameter" select="normalize-space(string($parameter))"/>
<!-- debug
-->
    <xsl:variable name="messagePrefix">
        <xsl:text>*** $parameter='</xsl:text>
        <xsl:value-of select="$parameter"/>
        <xsl:text>'</xsl:text>
        <xsl:text> $normalizedParameter='</xsl:text>
        <xsl:value-of select="$normalizedParameter"/>
        <xsl:text>' </xsl:text>
    </xsl:variable>
    <xsl:variable name="tokens">
	<xsl:choose>
	    <xsl:when test="not($parameter)">
	    	<xsl:value-of select="number(0)"/>
	    </xsl:when>
	    <xsl:when test="(string-length(string($parameter)) = 0)">
	    	<xsl:value-of select="number(0)"/>
	    </xsl:when>
	    <xsl:when test="(starts-with($normalizedParameter,'&quot;') and ends-with($normalizedParameter,'&quot;'))">
	    	<xsl:value-of select="count(tokenize($normalizedParameter,'&quot; &quot;'))"/>
                <!-- debug
	    	<xsl:message>
	    	    <xsl:value-of select="$messagePrefix"/>
                    <xsl:text>MFString tokenCount=count(tokenize($normalizedParameter,'&quot; &quot;'))=</xsl:text>
	    	    <xsl:value-of select="count(tokenize($normalizedParameter,'&quot; &quot;'))"/>
	    	</xsl:message>
                -->
	    </xsl:when>
	    <!-- https://stackoverflow.com/questions/3854345/xpath-test-if-node-value-is-number
	    <xsl:when test="(string(number($parameter)) = 'NaN')">
	    	<xsl:value-of select="number(0)"/>
	    	<xsl:message>
	            <xsl:text>tokenCount($parameter='</xsl:text>
	            <xsl:value-of select="$parameter"/>
	            <xsl:text>')=0</xsl:text>
	    	</xsl:message>
	    </xsl:when> -->
	    <xsl:otherwise>
                <xsl:variable name="result">
                    <xsl:value-of select="string-length(          normalize-space(string($parameter))) -
                                          string-length(translate(normalize-space(string($parameter)),' ','')) + 1"/>
                </xsl:variable>
                <xsl:value-of select="$result"/>
                <!-- debug
	    	<xsl:message>
	    	    <xsl:value-of select="$messagePrefix"/>
                    <xsl:text>tokenCount=</xsl:text>
                    <xsl:value-of select="$result"/>
	    	</xsl:message>
                -->
	    </xsl:otherwise>
	</xsl:choose>
    </xsl:variable>
  <xsl:value-of select="$tokens"/>
</xsl:template>

<!-- attribute-value-validation can be invoked by @*, field and fieldValue rules -->
<xsl:template name="attribute-value-validation">
  <xsl:param name="name"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="value"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="type"><xsl:text></xsl:text></xsl:param>
  <!-- compute tuple count:  first convert commas to spaces, then normalize, then despace, then compare -->
  <xsl:variable name="normalizeSpaceValue">
    <xsl:choose>
      <!-- GeoSpatial profile coordinates are encoded as String/Strings, need to become Doubles in future version -->
      <xsl:when test="starts-with($name,'geo') or starts-with(local-name(..),'Geo')">
        <xsl:value-of select="normalize-space(translate($value,',&quot;','  '))"/>
      </xsl:when>
      <!-- remove commas, which are treated as whitespace in VRML attributes -->
      <xsl:otherwise>
        <xsl:value-of select="normalize-space(translate($value,',',' '))"/>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <xsl:variable name="blankedValue" select="concat(' ',$normalizeSpaceValue,' ')"/>
  <xsl:variable name="nonSpaceValue" select="translate($normalizeSpaceValue,' ','')"/>
  <xsl:variable name="tupleCount">
    <xsl:choose>
      <xsl:when test="$nonSpaceValue">
        <xsl:value-of select="(string-length($normalizeSpaceValue) - string-length($nonSpaceValue)) + 1"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>0</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <!-- debug
  <xsl:message>
    <xsl:text>attribute-value-validation </xsl:text>
    <xsl:text>$name="</xsl:text><xsl:value-of select="$name"/><xsl:text>" </xsl:text>
    <xsl:text>$type="</xsl:text><xsl:value-of select="$type"/><xsl:text>" </xsl:text>
    <xsl:text>$value="</xsl:text><xsl:value-of select="$value"/><xsl:text>" </xsl:text>
    <xsl:text>$tupleCount=</xsl:text><xsl:value-of select="$tupleCount"/>
  </xsl:message> -->
  <xsl:variable name="errorNodeName">
    <xsl:if test="starts-with(local-name(),'Metadata')">
      <xsl:text>parent </xsl:text>
    </xsl:if>
    <xsl:value-of select="local-name(..)"/>
    <xsl:choose>
      <xsl:when test="local-name(..)='ProtoDeclare' or local-name(..)='ProtoInstance' or local-name(..)='ExternProtoDeclare'">
        <xsl:text> '</xsl:text>
        <xsl:value-of select="../@name"/>
        <xsl:text>'</xsl:text>
      </xsl:when>
      <xsl:when test="local-name(..)='field' or local-name(..)='fieldValue'">
        <xsl:text> '</xsl:text>
        <xsl:value-of select="../@name"/>
        <xsl:text>'</xsl:text>
        <xsl:text> parent </xsl:text>
        <xsl:value-of select="local-name(../..)"/>
        <xsl:text> '</xsl:text>
        <xsl:value-of select="../../@name"/>
        <xsl:text>'</xsl:text>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text> node</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <!-- square brackets not allowed in any type except String(s), check for them in case someone confuses X3D with VRML array encoding -->
  <!-- ... also need to check reenumeration values -->
  <xsl:if test="not($type='SFString' or $type='MFString' or $type='SFNode' or $type='MFNode') and (contains(string(.),'[') or contains(string(.),']'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Attribute </xsl:text>
          <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> cannot include [square brackets] in attribute value</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="$errorNodeName"/>
          <xsl:text> node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
  </xsl:if>
  <!-- quote marks not allowed in any type except SFString/MFString, check for them in case someone confuses X3D with VRML encoding -->
  <xsl:if test="not($type='SFString' or $type='MFString' or $type='SFNode' or $type='MFNode') and (contains(string(.),'&quot;') or contains(string(.),'&amp;'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Attribute </xsl:text>
          <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> cannot include "double quote marks" or 'single quote marks' in attribute value</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="$errorNodeName"/>
          <xsl:text> node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
  </xsl:if>
  <!-- NaN (Not a Number) not allowed in any numeric type -->
  <xsl:if test="not($type='SFString' or $type='MFString' or $type='SFNode' or $type='MFNode') and (contains(string(.),'NaN'))">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Attribute </xsl:text>
          <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> cannot include "NaN" (Not a Number) substitutions in attribute value</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:value-of select="$errorNodeName"/>
          <xsl:text> node</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="DEF"  select="../@DEF"/>
      </xsl:call-template>
  </xsl:if>
  <!-- count commas.  stronger checks needed.  no check yet for commas only between atomic types in an array -->
  <xsl:variable name="normalizeSpaceCommasRetained">
    <!-- concat ' ' ensures minimum value of 1 -->
    <xsl:value-of select="normalize-space(concat(' ',$value))"/>
  </xsl:variable>
  <xsl:variable name="nonSpaceValueCommasRetained"  select="translate($normalizeSpaceCommasRetained,' ','')"/>
  <xsl:variable name="nonCommaValueNormalizedSpace" select="translate($normalizeSpaceCommasRetained,',','')"/>
  <xsl:variable name="spaceCountCommasNormalized">
    <!--
    <xsl:message>
    	<xsl:text>normalized-comma characters+whitespace=</xsl:text>
    	<xsl:value-of select="(normalize-space(translate($value,',',' ')))"/>
    	<xsl:text>, normalized-comma characters+whitespace count=</xsl:text>
    	<xsl:value-of select="string-length(normalize-space(translate($value,',',' ')))"/>
    	<xsl:text>, stripped-commas characters-only=</xsl:text>
    	<xsl:value-of select="(translate(normalize-space(translate($value,',',' ')),' ',''))"/>
    	<xsl:text>, stripped-commas characters-only count=</xsl:text>
    	<xsl:value-of select="string-length(translate(normalize-space(translate($value,',',' ')),' ',''))"/>
    </xsl:message>
    -->
    <xsl:value-of select="string-length(normalize-space(translate($value,',',' '))) - string-length(translate(normalize-space(translate($value,',',' ')),' ',''))"/>
  </xsl:variable>
  <xsl:variable name="numberOfValues" select="$spaceCountCommasNormalized + 1"/>
  <xsl:variable name="commaCount">
    <xsl:choose>
      <xsl:when test="$value">
        <xsl:value-of select="string-length($value) - string-length(translate($value,',',''))"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>0</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <xsl:variable name="finalCharacter" select="substring($normalizeSpaceCommasRetained,string-length($normalizeSpaceCommasRetained),string-length($normalizeSpaceCommasRetained))"/>
  <xsl:variable name="finalCommaCount">
    <xsl:choose>
      <xsl:when test="$finalCharacter=','">
        <xsl:text>1</xsl:text>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>0</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <xsl:variable name="totalWhiteSpaceCount">
    <!-- could include whitespace surrounding isolated commas -->
    <xsl:choose>
      <xsl:when test="$value">
        <xsl:value-of select="string-length(normalize-space(translate($value,',',' '))) - string-length(normalize-space(translate($value,', &#10;','')))"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>0</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <!-- debug
  <xsl:message>
    <xsl:text>========= comma checks: </xsl:text>
    	<xsl:value-of select="local-name(..)"/>
    	<xsl:if test="../@DEF">
    	  <xsl:text> DEF='</xsl:text>
    	  <xsl:value-of select="../@DEF"/>
    	  <xsl:text>'</xsl:text>
    	</xsl:if>
    	<xsl:text> </xsl:text>
    	<xsl:value-of select="local-name(.)"/>
    	<xsl:text> =========&#10;</xsl:text>
    <xsl:text>spaceCountCommasNormalized=</xsl:text><xsl:value-of select="$spaceCountCommasNormalized"/>
    <xsl:text>, commaCount=</xsl:text><xsl:value-of select="$commaCount"/>
    <xsl:text>, numberOfValues=</xsl:text><xsl:value-of select="$numberOfValues"/><xsl:text>&#10;</xsl:text>
    <xsl:text>final character='</xsl:text><xsl:value-of select="$finalCharacter"/><xsl:text>'</xsl:text>
    <xsl:text>, finalCommaCount=</xsl:text><xsl:value-of select="$finalCommaCount"/>
    <xsl:text>, $totalWhiteSpaceCount=</xsl:text><xsl:value-of select="$totalWhiteSpaceCount"/>
  </xsl:message>
  -->
  <xsl:if test="starts-with($type,'MF') and not($type='MFString')">
    <xsl:choose>
      <xsl:when test="starts-with(normalize-space($value),',')">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Attribute </xsl:text>
            <xsl:value-of select="$name"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> should not start with a comma</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="$errorNodeName"/>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:when>
      <xsl:when test="contains(translate(normalize-space($value),' ',''),',,')">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Attribute </xsl:text>
            <xsl:value-of select="$name"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> is an MF (multiple-valued field) value containing double commas (,,)</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="$errorNodeName"/>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:when>
      <xsl:when test="($commaCount - $totalWhiteSpaceCount > 1)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Attribute </xsl:text>
            <xsl:value-of select="$name"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> is an MF (multiple-valued field) value containing too many commas</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="$errorNodeName"/>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:when>
    </xsl:choose>
  </xsl:if>
  <!-- start checking typed values, first non-numerics then numerics -->
  <xsl:choose>
    <xsl:when test="normalize-space($value)=''">
      <!-- no value, ignore. -->
    </xsl:when>
    <xsl:when test="$type='SFBool'">
        <xsl:if test="normalize-space($value) and ($value!='' and $value!='true' and $value!='false')">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Attribute </xsl:text>
              <xsl:value-of select="$name"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> not a valid SFBool value (true|false)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="$errorNodeName"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
    </xsl:when>
    <xsl:when test="$type='MFBool'">
      <xsl:variable name="BooleansResidue" select="normalize-space(translate($value,'truefalse','         '))"/>
      <!-- not a perfect test, but it catches everything except letter scrambles -->
        <xsl:if test="($BooleansResidue!=' ' and $BooleansResidue!='')">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Attribute </xsl:text>
              <xsl:value-of select="$name"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> includes character</xsl:text>
              <xsl:if test="string-length($BooleansResidue)!=1">
                <xsl:text>s</xsl:text>
              </xsl:if>
              <xsl:text> '</xsl:text>
              <xsl:value-of select="$BooleansResidue"/>
              <xsl:text>' other than a valid SFBool value (true|false)</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="$errorNodeName"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
    </xsl:when>
    <xsl:when test="$type='SFString'">
      <!-- check for stray quote mark
        <xsl:if test="contains($value,'&quot;') and not(contains($value,'\'))) and not(contains($value,'\\'))">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text>Attribute </xsl:text>
              <xsl:value-of select="$name"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> includes &quot;quote&quot; character without an escaping backslash \ character</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node" select="$errorNodeName"/>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:if>
        -->
    </xsl:when>
    <xsl:when test="$type='MFString'">
      <!-- no checks.  Enumeration-value tests are only performed for native VRML attributes since prototypes may override them. -->
    </xsl:when>
    <!-- test numeric attribute contents -->
    <xsl:otherwise>
      <!-- test for excess leading zeros -->
      <xsl:variable name="noNegativeSigns" select="translate($normalizeSpaceValue,'-','')"/>
      <xsl:if test="(contains($normalizeSpaceValue,' 0') and
      			(contains($noNegativeSigns,' 00') or contains($noNegativeSigns,' 01') or contains($noNegativeSigns,' 02') or
      			 contains($noNegativeSigns,' 03') or contains($noNegativeSigns,' 04') or contains($noNegativeSigns,' 05') or
      			 contains($noNegativeSigns,' 06') or contains($noNegativeSigns,' 07') or contains($noNegativeSigns,' 08') or
      			 contains($noNegativeSigns,' 09'))) or
      		    (starts-with($noNegativeSigns,'0') and
      			(starts-with($noNegativeSigns,'00') or starts-with($noNegativeSigns,'01') or starts-with($noNegativeSigns,'02') or
      			 starts-with($noNegativeSigns,'03') or starts-with($noNegativeSigns,'04') or starts-with($noNegativeSigns,'05') or
      			 starts-with($noNegativeSigns,'06') or starts-with($noNegativeSigns,'07') or starts-with($noNegativeSigns,'08') or
      			 starts-with($noNegativeSigns,'09')))">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="$name"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> contains excess leading zeros</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node" select="$errorNodeName"/>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- clear out nonNumericValue digits -->
      <xsl:variable name="nonFloatResidue"   select="normalize-space(translate($normalizeSpaceValue,'eE0123456789+-.,','                '))"/>
      <xsl:variable name="nonIntegerResidue" select="normalize-space(translate($normalizeSpaceValue,'0123456789+-,',   '             '   ))"/>
      <xsl:variable name="capitalEValue" select="concat(normalize-space(translate($normalizeSpaceValue,'e','E')),' ')"/>
      <!-- ensure numeric, include special checks for some forms of erroneous exponential notation -->
      <xsl:choose>
        <!-- floating-point types -->
        <xsl:when test="$type='SFColor'         or $type='MFColor' or
        		$type='SFColorRGBA'     or $type='MFColorRGBA' or
        		$type='SFDouble'        or $type='MFDouble' or
        		$type='SFFloat'         or $type='MFFloat' or
        		$type='SFRotation'      or $type='MFRotation' or
        		$type='SFTime'          or $type='MFTime' or
        		$type='SFVec2f'  	or $type='MFVec2f' or
        		$type='SFVec3f'  	or $type='MFVec3f' or
        		$type='SFVec3d' 	or $type='MFVec3d'">
          <xsl:choose>
            <!-- screen out SFBool -->
            <xsl:when test="contains($nonIntegerResidue,'true') or contains($nonIntegerResidue,'false') or
            		    contains($nonIntegerResidue,'TRUE') or contains($nonIntegerResidue,'FALSE')">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:value-of select="$type"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="$name"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains an SFBool value instead of numeric characters</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node" select="$errorNodeName"/>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="($nonFloatResidue!='' and $nonFloatResidue!=' ')">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:value-of select="$type"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="$name"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains illegal non-numeric character</xsl:text>
                  <xsl:if test="string-length($nonFloatResidue)!=1">
                    <xsl:text>s</xsl:text>
                  </xsl:if>
                  <xsl:text> '</xsl:text>
                  <xsl:value-of select="$nonFloatResidue"/>
                  <xsl:text>'</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node" select="$errorNodeName"/>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($capitalEValue,' E') or contains($capitalEValue,'E ') or
          		                                     contains($capitalEValue,'E.') or
          		    contains($capitalEValue,',E') or contains($capitalEValue,'E,') or
          		    contains($capitalEValue,'+E') or contains($capitalEValue,'-E')">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:value-of select="$type"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="$name"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains malformed exponential notation</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node" select="$errorNodeName"/>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains(concat($value,' '),'+ ') or contains(concat($value,' '),'- ')">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:value-of select="$type"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="$name"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains isolated sign operator ( + , - )</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node" select="$errorNodeName"/>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:when>
          </xsl:choose>
        </xsl:when>
        <!-- integer types -->
        <xsl:when test="$type='SFInt32' or $type='MFInt32'">
          <xsl:choose>
            <!-- screen out SFBool -->
            <xsl:when test="contains($nonIntegerResidue,'true') or contains($nonIntegerResidue,'false') or
            		    contains($nonIntegerResidue,'TRUE') or contains($nonIntegerResidue,'FALSE')">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:value-of select="$type"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="$name"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains an SFBool value instead of numeric characters</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node" select="$errorNodeName"/>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="($nonIntegerResidue!='' and $nonIntegerResidue!=' ')">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:value-of select="$type"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="$name"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains illegal</xsl:text>
                  <xsl:choose>
                    <xsl:when test="($nonIntegerResidue='.')">
                      <xsl:text> decimal point</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                      <xsl:text> non-numeric character</xsl:text>
                    </xsl:otherwise>
                  </xsl:choose>
                  <xsl:if test="string-length($nonIntegerResidue)!=1">
                    <xsl:text>s</xsl:text>
                  </xsl:if>
                  <xsl:text> '</xsl:text>
                  <xsl:value-of select="$nonIntegerResidue"/>
                  <xsl:text>'</xsl:text>
                  <xsl:if test="contains($nonIntegerResidue,'.')">
                    <xsl:text> and must be integral, not floating point</xsl:text>
                  </xsl:if>
                </xsl:with-param>
                <xsl:with-param name="node" select="$errorNodeName"/>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains(concat($value,' '),'+ ') or contains(concat($value,' '),'- ')">
              <xsl:call-template name="output-error">
                <xsl:with-param name="errorString">
                  <xsl:value-of select="$type"/>
                  <xsl:text> attribute </xsl:text>
                  <xsl:value-of select="$name"/>
                  <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
                  <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
                  <xsl:text> contains isolated sign operator ( + , - )</xsl:text>
                </xsl:with-param>
                <xsl:with-param name="node" select="$errorNodeName"/>
                <xsl:with-param name="DEF"  select="../@DEF"/>
              </xsl:call-template>
            </xsl:when>
          </xsl:choose>
        </xsl:when>
      </xsl:choose>
    </xsl:otherwise>
  </xsl:choose>
  <!-- common counting checks -->
  <!-- debug
  <xsl:message>
    <xsl:text>...common counting checks... type </xsl:text>
    <xsl:value-of select="$type"/>
    <xsl:text>, value </xsl:text>
    <xsl:value-of select="$value"/>
  </xsl:message>
  -->
  <xsl:choose>
    <!-- singletons -->
    <xsl:when test="starts-with($type,'SF') and not($type='SFString')">
<!--
<xsl:message>
  <xsl:text>testing SF... not firing?? </xsl:text>
</xsl:message>
-->
      <xsl:if test="contains($value,',')">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="$name"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> cannot contain comma characters</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <!-- arrays -->
    <xsl:when test="starts-with($type,'MF') and not($type='MFString')">
      <!-- count commas.  TODO:  stronger checks needed -->
      <xsl:if test="1*($commaCount - $finalCommaCount + 1) > ($numberOfValues)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> has too many commas, cannot contain more commas than values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
  </xsl:choose>
  <!-- type-by-type tuple checks for correct number of attribute values, enumerations handled separately/individually -->
  <xsl:choose>
    <xsl:when test="normalize-space($value)=''">
      <!-- no value, ignore. -->
    </xsl:when>
    <!-- 1-tuple -->
    <xsl:when test="($type='SFBool') or ($type='SFInt32') or ($type='SFFloat') or ($type='SFDouble') or ($type='SFTime')">
      <xsl:if test="$tupleCount!=1">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> must contain only 1 value</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <!-- 2-tuple -->
    <xsl:when test="($type='SFVec2f') or ($type='SFVec2d')">
      <xsl:if test="$tupleCount!=2">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> must contain 2 values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <!-- 3-tuple -->
    <xsl:when test="($type='SFColor') or ($type='SFVec3f') or ($type='SFVec3d')">
      <xsl:if test="$tupleCount!=3">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:if test="(local-name()='fieldValue')">
              <xsl:text> </xsl:text>
              <xsl:value-of select="@name"/>
            </xsl:if>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> must contain 3 values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <!-- 4-tuple -->
    <xsl:when test="($type='SFRotation')">
      <xsl:choose>
        <xsl:when test="$tupleCount!=4">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:value-of select="$type"/>
              <xsl:text> attribute </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> must contain 4 values</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:when>
      <!-- range check [-1..1] for first three values (need some way to discriminate fourth..., watch out for exponent negations too... )
      <xsl:variable name="negativeBlankedValue" select="translate($blankedValue,'-',' ')"/>
        <xsl:when test="(
  		 contains($negativeBlankedValue,' 2') or contains($negativeBlankedValue,' 3') or contains($negativeBlankedValue,' 4') or
  		 contains($negativeBlankedValue,' 5') or contains($negativeBlankedValue,' 6') or contains($negativeBlankedValue,' 7') or
  		 contains($negativeBlankedValue,' 8') or contains($negativeBlankedValue,' 9'))">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:value-of select="$type"/>
              <xsl:text> attribute </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
              <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
              <xsl:text> first three values must be in range [-1..1]</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="DEF"  select="../@DEF"/>
          </xsl:call-template>
        </xsl:when>
        -->
      </xsl:choose>
    </xsl:when>
    <!-- 2-tuple array -->
    <xsl:when test="($type='MFVec2f') or ($type='MFVec2d')">
      <xsl:if test="($tupleCount mod 2) != 0">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> must contain an integer multiple of paired values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- count commas.  TODO:  stronger checks needed -->
      <xsl:if test="2*($commaCount - $finalCommaCount + 1) > ($numberOfValues)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> has too many commas, cannot contain commas within 2-tuple values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <!-- 3-tuple array -->
    <xsl:when test="($type='MFColor') or ($type='MFVec3f') or ($type='MFVec3d')">
      <xsl:if test="($tupleCount mod 3) != 0">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> must contain an integer multiple of triplet values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- count commas.  stronger checks needed -->
      <xsl:if test="3*($commaCount - $finalCommaCount + 1) > ($numberOfValues)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> has too many commas, cannot contain commas within 3-tuple values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <!-- 4-tuple array -->
    <xsl:when test="($type='MFRotation') or ($type='MFColorRGBA')">
      <xsl:if test="($tupleCount mod 4) != 0">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> must contain an integer multiple of 4-tuple values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- count commas.  stronger checks needed -->
      <xsl:if test="4*($commaCount - $finalCommaCount + 1) > ($numberOfValues)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:value-of select="$type"/>
            <xsl:text> attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
            <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
            <xsl:text> has too many commas, cannot contain commas within 4-tuple values</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
  </xsl:choose>
  <!-- SFTime/MFTime values valid:  -1 or nonnegative -->
  <xsl:if test="(($type='SFTime') or ($type='MFTime')) and not(normalize-space(string(.))='-1') and not(normalize-space(string(.))='') and
  		(contains($blankedValue,' -2') or
  		 contains($blankedValue,' -3') or
  		 contains($blankedValue,' -4') or
  		 contains($blankedValue,' -5') or
  		 contains($blankedValue,' -6') or
  		 contains($blankedValue,' -7') or
  		 contains($blankedValue,' -8') or
  		 contains($blankedValue,' -9'))">
  		 <!-- checks to see if negative scientific exponential is in same value token.  not complete, some errors can slip through if first E- instance is correct.  -->
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="$type"/>
        <xsl:text> attribute </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
        <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
        <xsl:text> contains value</xsl:text>
        <xsl:if test="($type='MFTime')">
          <xsl:text>(s)</xsl:text>
        </xsl:if>
        <xsl:text> outside valid value range [-1 or nonnegative]</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name(..)"/>
        <xsl:text> node</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <!-- Color values (and transparency) in range [0..1] -->
  <xsl:if test="(($type='SFColor') or ($type='MFColor') or ($type='SFColorRGBA') or ($type='MFColorRGBA')) and
  		( contains($blankedValue,' -') or
  		 (contains($blankedValue,' 2') and not(contains(translate(substring-before(substring-after($blankedValue,' 2'),' '),'e','E'),'E-'))) or
  		 (contains($blankedValue,' 3') and not(contains(translate(substring-before(substring-after($blankedValue,' 3'),' '),'e','E'),'E-'))) or
  		 (contains($blankedValue,' 4') and not(contains(translate(substring-before(substring-after($blankedValue,' 4'),' '),'e','E'),'E-'))) or
  		 (contains($blankedValue,' 5') and not(contains(translate(substring-before(substring-after($blankedValue,' 5'),' '),'e','E'),'E-'))) or
  		 (contains($blankedValue,' 6') and not(contains(translate(substring-before(substring-after($blankedValue,' 6'),' '),'e','E'),'E-'))) or
  		 (contains($blankedValue,' 7') and not(contains(translate(substring-before(substring-after($blankedValue,' 7'),' '),'e','E'),'E-'))) or
  		 (contains($blankedValue,' 8') and not(contains(translate(substring-before(substring-after($blankedValue,' 8'),' '),'e','E'),'E-'))) or
  		 (contains($blankedValue,' 9') and not(contains(translate(substring-before(substring-after($blankedValue,' 9'),' '),'e','E'),'E-'))))">
  		 <!-- checks to see if negative scientific exponential is in same value token.  not complete, some errors can slip through if first E- instance is correct.  -->
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="$type"/>
        <xsl:text> attribute </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
        <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
        <xsl:text> contains RGB value(s) outside allowed range [0..1]</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name(..)"/>
        <xsl:text> node</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="(($type='SFColor') or ($type='MFColor') or ($type='SFColorRGBA') or ($type='MFColorRGBA')) and
  		 (contains($blankedValue,' 00') or starts-with($blankedValue,'00') or
  		  contains($blankedValue,' 01') or starts-with($blankedValue,'01') or
  		  contains($blankedValue,' 02') or starts-with($blankedValue,'02') or
  		  contains($blankedValue,' 03') or starts-with($blankedValue,'03') or
  		  contains($blankedValue,' 04') or starts-with($blankedValue,'04') or
  		  contains($blankedValue,' 05') or starts-with($blankedValue,'05') or
  		  contains($blankedValue,' 06') or starts-with($blankedValue,'06') or
  		  contains($blankedValue,' 07') or starts-with($blankedValue,'07') or
  		  contains($blankedValue,' 08') or starts-with($blankedValue,'08') or
  		  contains($blankedValue,' 09') or starts-with($blankedValue,'09'))">
  		 <!-- checks for missing decimal point  -->
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="$type"/>
        <xsl:text> attribute </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
        <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
        <xsl:text> contains RGB value(s) missing decimal point after leading zero</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name(..)"/>
        <xsl:text> node</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
  <xsl:if test="not(	($type='SFBool')      or ($type='MFBool')      or
  			($type='SFColor')     or ($type='MFColor')     or
  			($type='SFColorRGBA') or ($type='MFColorRGBA') or
  			($type='SFDouble')    or ($type='MFDouble')    or
  			($type='SFFloat')     or ($type='MFFloat')     or
  			($type='SFImage')     or ($type='MFImage')     or
  			($type='SFInt32')     or ($type='MFInt32')     or
  			($type='SFNode')      or ($type='MFNode')      or
  			($type='SFRotation')  or ($type='MFRotation')  or
  			($type='SFString')    or ($type='MFString')    or
  			($type='SFTime')      or ($type='MFTime')      or
  			($type='SFVec2f')     or ($type='MFVec2f')     or
  			($type='SFVec2d')     or ($type='MFVec2d')     or
  			($type='SFVec3f')     or ($type='MFVec3f')     or
  			($type='SFVec3d')     or ($type='MFVec3d')     or
  			($type=''))">
    <xsl:call-template name="output-error">
      <xsl:with-param name="errorString">
        <xsl:value-of select="$type"/>
        <xsl:text> attribute </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space($value),1,100)"/><xsl:text>'</xsl:text>
        <xsl:if test="string-length(normalize-space($value)) > 100"><xsl:text> [...]</xsl:text></xsl:if>
        <xsl:text> internal X3dToVrml97.xslt stylesheet error, illegal attribute type </xsl:text>
        <xsl:value-of select="$type"/>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name(..)"/>
        <xsl:text> node</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="DEF"  select="../@DEF"/>
    </xsl:call-template>
  </xsl:if>
</xsl:template>

<!-- print-indent keeps track of indenting level -->
<xsl:template name="print-indent">
  <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
  <xsl:if test="($disableIndent='false') and $indent > 0">
    <xsl:text> </xsl:text>
    <xsl:call-template name="print-indent">
      <xsl:with-param name="indent" select="$indent - 1"/>
    </xsl:call-template>
  </xsl:if>
</xsl:template>

<!-- wrap-quotes-around-tokens builds SFString values and MFString arrays -->
<xsl:template name="wrap-quotes-around-tokens">
  <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
  <xsl:variable name="inputString" select="string($inputValue)"/>
  <!-- <xsl:text> ### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="contains($inputString,' ')">
      <xsl:text> &quot;</xsl:text>
      <xsl:value-of select="substring-before($inputString,' ')"/>
      <xsl:text>&quot;</xsl:text>
      <xsl:if test="substring-after($inputString,' ')">
        <xsl:call-template name="wrap-quotes-around-tokens">
          <xsl:with-param name="inputValue" select="substring-after($inputString,' ')"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <xsl:otherwise>
      <xsl:value-of select="$inputString"/>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>

<!-- wrap-quotes-around-triplets prepares SFVec3f values for VRML97 output -->
<xsl:template name="wrap-quotes-around-triplets">
  <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
  <xsl:variable name="inputString" select="string($inputValue)"/>
  <!-- <xsl:text> ### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
  <xsl:variable name="inputStringNormalized">
    <!-- note appended space character in order to find final token -->
    <xsl:value-of select="concat(normalize-space(translate($inputString,',',' ')),' ')"/>
  </xsl:variable>
  <!-- <xsl:text> ### inputStringNormalized: </xsl:text><xsl:value-of select="$inputStringNormalized"/><xsl:text>&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="$inputStringNormalized=' ' ">
      <!-- all done, return -->
    </xsl:when>
    <xsl:otherwise>
      <xsl:variable name="token1">
        <xsl:value-of select="substring-before($inputStringNormalized,' ')"/>
      </xsl:variable>
      <xsl:variable name="token2">
        <xsl:value-of select="substring-before(substring-after($inputStringNormalized,concat($token1, ' ')),' ')"/>
      </xsl:variable>
      <xsl:variable name="token3">
        <xsl:value-of select="substring-before(substring-after(concat($inputStringNormalized,' '),concat($token1, ' ', $token2, ' ')),' ')"/>
      </xsl:variable>
      <xsl:variable name="remainderString">
        <xsl:value-of select="substring-after($inputStringNormalized,concat($token1, ' ', $token2, ' ', $token3))"/>
      </xsl:variable>
      <!-- debug message
      <xsl:message>
        <xsl:text>$token1=</xsl:text><xsl:value-of select="$token1"/>
        <xsl:text>, $token2=</xsl:text><xsl:value-of select="$token2"/>
        <xsl:text>, $token3=</xsl:text><xsl:value-of select="$token3"/>
      </xsl:message> -->
      <xsl:text>&quot;</xsl:text>
      <xsl:value-of select="$token1"/>
      <xsl:text> </xsl:text>
      <xsl:value-of select="$token2"/>
      <xsl:text> </xsl:text>
      <xsl:value-of select="$token3"/>
      <xsl:text>&quot; </xsl:text>
      <xsl:if test="($token2='') or ($token3='')">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>MFVec3d attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> has insufficient triplet values: </xsl:text>
            <xsl:text>$token1=</xsl:text><xsl:value-of select="$token1"/>
            <xsl:text>, $token2=</xsl:text><xsl:value-of select="$token2"/>
            <xsl:text>, $token3=</xsl:text><xsl:value-of select="$token3"/>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="$remainderString">
        <xsl:call-template name="wrap-quotes-around-triplets">
          <xsl:with-param name="inputValue" select="$remainderString"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>

<!-- count-quotes is used to check for an imbalanced-quote error -->
<xsl:template name="count-quotes">
  <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
  <xsl:variable name="inputString" select="string($inputValue)"/>
  <!-- unmatched quotes can hide large blocks of VRML scene, causing hard-to-diagnose errors -->
  <!-- consider loosening checks from MFString values to all values -->
  <xsl:variable name="quoteCount">
    <xsl:call-template name="count-quotes-recurse">
      <xsl:with-param name="inputValue" select="$inputString"/><!-- pass through -->
    </xsl:call-template>
  </xsl:variable>
  <xsl:variable name="sizeQuoteCount" select="string-length($quoteCount)"/>
  <!-- debug
  <xsl:message>
    <xsl:text>field name=</xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:text>, quoteCount=</xsl:text>
    <xsl:value-of select="$quoteCount"/>
    <xsl:text>, sizeQuoteCount=</xsl:text>
    <xsl:value-of select="$sizeQuoteCount"/>
    <xsl:text>, $sizeQuoteCount div 2 =</xsl:text>
    <xsl:value-of select="$sizeQuoteCount div 2"/>
    <xsl:text>&#10;</xsl:text>
  </xsl:message>
  -->
  <!-- no need to quote meta tag content, unless multiple occurences are there.  (newbie mistake) -->
  <xsl:if test="(local-name()='meta') and ($sizeQuoteCount = 2) and (starts-with(normalize-space($inputString),'&quot;'))">
    <xsl:call-template name="output-hint">
      <xsl:with-param name="hintString">
        <xsl:text disable-output-escaping="yes">&lt;meta name='</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text disable-output-escaping="yes">'&gt; content does not need to be quoted</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node">
        <xsl:value-of select="local-name()"/>
      </xsl:with-param>
    </xsl:call-template>
  </xsl:if>
  <xsl:choose>
    <xsl:when test="(local-name()='ExternProtoDeclare')">
      <xsl:if test="($sizeQuoteCount div 2)!=round($sizeQuoteCount div 2)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>ExternProtoDeclare </xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text> url has unmatched quote (&quot;) character: </xsl:text>
            <xsl:text>url='</xsl:text><xsl:value-of select="substring(normalize-space($inputString),1,400)"/><xsl:text>'</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:text>ExternProtoDeclare definition</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="@name"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <xsl:when test="local-name()='url' or
    		contains(local-name(),'Url') or
    		(local-name(..)='Anchor' and local-name()='parameter') or
    		(local-name(..)='FontStyle' and (local-name()='family' or local-name()='justify')) or
    		(local-name(..)='NavigationInfo' and local-name()='type') or
    		(local-name(..)='Text' and local-name()='string') or
    		(local-name(..)='WorldInfo' and local-name()='info')">
      <xsl:if test="($sizeQuoteCount div 2)!=round($sizeQuoteCount div 2)">
        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
            <xsl:text>Attribute </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> has unmatched quote (&quot;) character: </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,400)"/><xsl:text>'</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> node</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
    <xsl:when test="local-name()='meta'">
      <xsl:if test="($sizeQuoteCount div 2)!=round($sizeQuoteCount div 2)">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text disable-output-escaping="yes">&lt;meta name='</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text disable-output-escaping="yes">'&gt;</xsl:text>
            <xsl:text> has unmatched quote (&quot;) character:  content='</xsl:text>
            <xsl:value-of select="substring(normalize-space($inputString),1,400)"/><xsl:text>'</xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:value-of select="local-name()"/>
            <xsl:text> tag</xsl:text>
          </xsl:with-param>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
  </xsl:choose>
  <!-- check for adjacent quotes in url fields -->
  <xsl:if test="local-name()='url' or contains(local-name(),'Url') or (local-name()='ExternProtoDeclare')">
  <!-- <xsl:message><xsl:text>adjacent quote test...&#10;</xsl:text></xsl:message> -->
    <xsl:if test="contains($inputString,'&quot;&quot;')">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text>Attribute </xsl:text>
          <xsl:choose>
            <xsl:when test="local-name()='ExternProtoDeclare'">
              <xsl:text> url</xsl:text>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="local-name()"/>
            </xsl:otherwise>
          </xsl:choose>
          <xsl:text> has adjacent quote marks ( &quot;&quot; ) without intervening whitespace: </xsl:text>
          <xsl:choose>
            <xsl:when test="local-name()='ExternProtoDeclare'">
              <xsl:value-of select="local-name()"/>
              <xsl:text> </xsl:text>
              <xsl:value-of select="@name"/>
              <xsl:text> url</xsl:text>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(@url),1,400)"/><xsl:text>'</xsl:text>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> </xsl:text>
              <xsl:value-of select="local-name()"/>
              <xsl:text>='</xsl:text><xsl:value-of select="substring(normalize-space(string(.)),1,400)"/><xsl:text>'</xsl:text>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:choose>
            <xsl:when test="local-name()='ExternProtoDeclare'">
              <xsl:value-of select="local-name()"/>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="local-name(..)"/>
              <xsl:text> node</xsl:text>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:with-param>
        <xsl:with-param name="DEF">
          <xsl:choose>
            <xsl:when test="local-name()='ExternProtoDeclare'">
              <xsl:value-of select="@name"/>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="../@DEF"/>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:if>
  </xsl:if>
</xsl:template>

<!-- count-quotes-recurse is used to check for an imbalanced-quote error -->
<xsl:template name="count-quotes-recurse">
  <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
  <xsl:variable name="inputString" select="string($inputValue)"/>
  <!-- <xsl:message> ###  inputString received: <xsl:value-of select="$inputString"/>&#10;</xsl:message> -->
  <xsl:if test="contains(string($inputString),'&quot;')">
    <xsl:call-template name="count-quotes-recurse">
      <xsl:with-param name="inputValue"  select="substring-after(string($inputString),'&quot;')"/>
    </xsl:call-template>
    <!--  return a # for each quote found, original invoking call performs count -->
    <xsl:text>#</xsl:text>
  </xsl:if>
</xsl:template>

  <!-- <xsl:text># entered escape-quotes-recurse&#10;</xsl:text> -->
<!--
<xsl:template name="escape-quotes-recurse">
  <xsl:param name="inputValue"><xsl:text>< ! - - default value is empty - - ></xsl:text></xsl:param>
  <xsl:variable name="inputString" select="string($inputValue)"/>
  <xsl:choose>
    <xsl:when test="contains($inputString,'&quot;')">
      <xsl:value-of select="substring-before($inputString,'&quot;')"/>
      -->
      <!--  escaped quote requires preceding backslash in VRML encoding -->
      <!--
      <xsl:text>\"</xsl:text>
      <xsl:call-template name="escape-quotes-recurse">
        <xsl:with-param name="inputValue"  select="substring-after($inputString,'&quot;')"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
      <xsl:value-of select="$inputString"/>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>
-->

<xsl:template name="escape-quotes-recurse">
  <xsl:param name="indent"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
  <xsl:variable name="inputString" select="string($inputValue)"/>
  <xsl:choose>
    <xsl:when test="not(contains($inputString,'&quot;'))">
      <xsl:value-of select="$inputString"/>
    </xsl:when>
    <!-- has quote, or has quote before \" -->
    <xsl:when test="not(contains($inputString,'\&quot;')) or (string-length(substring-before($inputString,'&quot;')) &lt; string-length(substring-before($inputString,'\&quot;')))">
      <xsl:value-of select="substring-before($inputString,'&quot;')"/>
      <xsl:text>\&quot;</xsl:text>
      <xsl:call-template name="escape-quotes-recurse">
        <xsl:with-param name="inputValue"  select="substring-after($inputString,'&quot;')"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
      <xsl:value-of select="substring-before($inputString,'\&quot;')"/>
      <xsl:text>\&quot;</xsl:text>
      <xsl:call-template name="escape-quotes-recurse">
        <xsl:with-param name="inputValue"  select="substring-after($inputString,'\&quot;')"/>
      </xsl:call-template>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>

<xsl:template name="strip-Browser-print-prefix-recurse">
  <xsl:param name="indent"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
  <xsl:variable name="inputString" select="string($inputValue)"/>
<!--   <xsl:message> ###  inputString received: <xsl:value-of select="$inputString"/>&#10;</xsl:message>
  <xsl:message> ###  $fileEncoding: <xsl:value-of select="$fileEncoding"/>&#10;</xsl:message>
  <xsl:message> ###  contains($inputString,'Browser.print'): <xsl:value-of select="contains($inputString,'Browser.print')"/>&#10;</xsl:message>
  -->
  <xsl:choose>
    <xsl:when test="($fileEncoding='ClassicVRML') or not(contains($inputString,'Browser.print'))">
      <xsl:call-template name="escape-quotes-recurse">
        <xsl:with-param name="inputValue"  select="$inputString"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
      <!-- strip 'Browser.' Only output warning first time. -->
      <!-- <xsl:if test="starts-with($inputString,'ecmascript:') or starts-with($inputString,'javascript:')">
        <xsl:text>&#10;</xsl:text>
        <xsl:text>// ### X3D Browser.print() not supported by all VRML97 viewers, instead simply use print()&#10;</xsl:text>
      </xsl:if>
      <xsl:call-template name="print-indent">
        <xsl:with-param name="indent" select="$indent"/>
      </xsl:call-template>
      put this here in case it includes a comment // -->
      <xsl:call-template name="escape-quotes-recurse">
        <xsl:with-param name="inputValue"  select="substring-before($inputString,'Browser.print')"/>
      </xsl:call-template>
      <xsl:text>printing</xsl:text>
      <xsl:call-template name="strip-Browser-print-prefix-recurse">
        <xsl:with-param name="inputValue"  select="substring-after($inputString,'Browser.print')"/>
      </xsl:call-template>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>

<!-- ****** check-IS-nodes:  callable template (recursive function) ****** -->
<!-- follows examples in Michael Kay's _XSLT_, pp. 551-554 -->
<xsl:template name="check-IS-nodes">
  <xsl:param name="list"><xsl:text></xsl:text></xsl:param>
  <xsl:variable name="wlist" select="concat(normalize-space($list),' ')"/>
  <!-- <xsl:text>&#10;$wlist=[</xsl:text><xsl:value-of select="$wlist" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="$wlist!=' '">
      <xsl:variable name="nextPair"  select="translate(substring-before($wlist,' '),'&quot;','')"/>
      <xsl:variable name="restPairs" select="substring-after($wlist,' ')"/>
      <!-- <xsl:text>&#10;$restPairs=[</xsl:text><xsl:value-of select="$restPairs" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
      <xsl:variable name="nextDEF"  select="substring-before($nextPair,'.')"/>
      <xsl:if test="not(contains($nextPair,'.'))">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>Node DEF.field pair "</xsl:text>
            <xsl:value-of select="$nextPair" />
            <xsl:text>" missing "." delimiter between DEF name and field name. </xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:text>field '</xsl:text>
            <xsl:value-of select="@name" />
            <xsl:text>' parent </xsl:text>
            <xsl:value-of select="local-name(..)" />
            <xsl:if test="../@name">
              <xsl:text> </xsl:text>
              <xsl:value-of select="../@name" />
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <xsl:if test="contains($nextPair,'.') and not(..//*[@DEF=$nextDEF])">
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
            <xsl:text>Node "</xsl:text>
            <xsl:value-of select="$nextDEF" />
            <xsl:text>" specified by IS attribute (for field "</xsl:text>
            <xsl:value-of select="@name" />
            <xsl:text>") not found inside ProtoDeclare "</xsl:text>
            <xsl:value-of select="../@name" />
            <xsl:text>" </xsl:text>
          </xsl:with-param>
          <xsl:with-param name="node">
            <xsl:text>field '</xsl:text>
            <xsl:value-of select="@name" />
            <xsl:text>' parent </xsl:text>
            <xsl:value-of select="local-name(..)" />
            <xsl:if test="../@name">
              <xsl:text> </xsl:text>
              <xsl:value-of select="../@name" />
            </xsl:if>
          </xsl:with-param>
          <xsl:with-param name="DEF"  select="../@DEF"/>
        </xsl:call-template>
      </xsl:if>
      <!-- recurse on remainder of list of URLs -->
      <xsl:if test="$restPairs!=''">
        <xsl:call-template name="check-IS-nodes">
          <xsl:with-param name="list" select="$restPairs"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
  </xsl:choose>
</xsl:template>

<!--
        <xsl:call-template name="output-warning">
          <xsl:with-param name="warningString">
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>

        <xsl:call-template name="output-error">
          <xsl:with-param name="errorString">
          </xsl:with-param>
          <xsl:with-param name="node" select="local-name()"/>
          <xsl:with-param name="DEF"  select="@DEF"/>
        </xsl:call-template>
-->

<xsl:template name="output-info">
  <xsl:param name="infoString"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="node"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="DEF"><xsl:text></xsl:text></xsl:param>
  <!-- <xsl:text>### infoString received: </xsl:text><xsl:value-of select="normalize-space($infoString)"/><xsl:text>&#10;</xsl:text> -->
  <xsl:text>### </xsl:text>
  <xsl:text>Info:  </xsl:text>
  <xsl:value-of select="normalize-space($infoString)" disable-output-escaping="yes"/>
  <xsl:text>&#10;</xsl:text>
  <xsl:if test="($outputDiagnostics='true')">
  <xsl:message>
    <xsl:text>[Info] </xsl:text>
    <xsl:value-of select="$infoString" disable-output-escaping="yes"/>
    
    <!-- no further output needed for X3D meta error/warning/hint, otherwise indicate location -->
    <xsl:if test="(string-length($node) > 0) and local-name()!='X3D' and local-name()!='meta' and ($node or $DEF) and (local-name()!='ROUTE')">
      <xsl:text> [</xsl:text>
      <xsl:choose>
        <xsl:when test="$DEF">
          <xsl:value-of select="local-name()"/>
          <xsl:text> bleah </xsl:text>
          <xsl:value-of select="$node"/>
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="$DEF"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="@description">
          <xsl:value-of select="$node"/>
          <xsl:text> description='</xsl:text>
          <xsl:value-of select="@description"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="local-name(..)='fieldValue' or local-name(..)='field'">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> name='</xsl:text>
          <xsl:value-of select="../@name"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:otherwise>
          <!-- nothing else to say, info only might relate to entire scene -->
          <xsl:text>check X3D source or VRML output to find pertinent </xsl:text>
          <xsl:choose>
            <xsl:when test="($node='ProtoInterface node')">
              <xsl:text>ProtoInterface field declaration</xsl:text>
            </xsl:when>
            <xsl:when test="($node='ProtoInstance')">
              <xsl:text>ProtoInstance name='</xsl:text>
              <xsl:value-of select="../../@name"/>
              <xsl:text>'</xsl:text>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="$node"/>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:otherwise>
      </xsl:choose>
      <xsl:text>]</xsl:text>
    </xsl:if>
  </xsl:message>
  </xsl:if>
</xsl:template>

<xsl:template name="output-hint">
  <xsl:param name="hintString"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="node"><xsl:text>node</xsl:text></xsl:param>
  <xsl:param name="DEF"><xsl:text></xsl:text></xsl:param>
  <xsl:variable name="metaHintApos">
    <xsl:text> name=&apos;hint&apos;</xsl:text>
  </xsl:variable>
  <xsl:if test="not(contains(normalize-space($hintString),'meta ') and (contains(normalize-space($hintString),' name=&quot;hint&quot;') or contains($hintString,$metaHintApos)))">
    <xsl:text> ### </xsl:text>
    <xsl:text>Hint:  </xsl:text>
    <xsl:value-of select="normalize-space($hintString)" disable-output-escaping="yes"/>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="($outputDiagnostics='true')">
  <xsl:message>
    <xsl:text>[Hint] </xsl:text>
    <xsl:value-of select="$hintString" disable-output-escaping="yes"/>
    <!-- no further output needed for meta error/warning/hint, otherwise indicate location -->
    <xsl:if test="(string-length($node) > 0) and local-name()!='X3D' and (local-name()!='meta') and (local-name()!='ROUTE')">
      <xsl:text> [</xsl:text>
      <xsl:choose>
        <xsl:when test="$DEF">
          <xsl:value-of select="$node"/>
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="$DEF"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="@description">
          <xsl:value-of select="$node"/>
          <xsl:text> description='</xsl:text>
          <xsl:value-of select="@description"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="local-name(..)='fieldValue' or local-name(..)='field'">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> name='</xsl:text>
          <xsl:value-of select="../@name"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>check X3D source or VRML output to find pertinent </xsl:text>
          <xsl:choose>
            <xsl:when test="($node='ProtoInterface node')">
              <xsl:text>ProtoInterface field declaration</xsl:text>
            </xsl:when>
            <xsl:when test="($node='ProtoInstance')">
              <xsl:text>ProtoInstance name='</xsl:text>
              <xsl:value-of select="../../@name"/>
              <xsl:text>'</xsl:text>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="$node"/>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:otherwise>
      </xsl:choose>
      <xsl:text>]</xsl:text>
    </xsl:if>
  </xsl:message>
  </xsl:if>
</xsl:template>

<xsl:template name="output-warning">
  <xsl:param name="warningString"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="node"><xsl:text>node</xsl:text></xsl:param>
  <xsl:param name="DEF"><xsl:text></xsl:text></xsl:param>
  <xsl:variable name="metaWarningApos">
    <xsl:text> name=&apos;warning&apos;</xsl:text>
  </xsl:variable>
  <!-- <xsl:message><xsl:text>$metaWarningApos=</xsl:text><xsl:value-of select="$metaWarningApos"/></xsl:message> -->
  <xsl:if test="not(contains(normalize-space($warningString),'meta ') and (contains(normalize-space($warningString),' name=&quot;warning&quot;') or contains($warningString,$metaWarningApos)))">
    <!-- <xsl:text>### warningString received: </xsl:text><xsl:value-of select="normalize-space($warningString)"/><xsl:text>&#10;</xsl:text> -->
    <xsl:text> ### </xsl:text>
    <xsl:text>Warning:  </xsl:text>
    <xsl:value-of select="normalize-space($warningString)" disable-output-escaping="yes"/>
    <xsl:text>&#10;</xsl:text>
  </xsl:if>
  <xsl:if test="($outputDiagnostics='true')">
  <xsl:message>
    <xsl:if test="not(contains(normalize-space($warningString),'meta ') and (contains(normalize-space($warningString),' name=&quot;warning&quot;') or contains($warningString,$metaWarningApos)))">
      <xsl:text>[Warning] </xsl:text>
    </xsl:if>
    <xsl:value-of select="$warningString" disable-output-escaping="yes"/>
    <!-- no further output needed for meta error/warning/hint, otherwise indicate location -->
    <xsl:if test="(string-length($node) > 0) and local-name()!='X3D' and (local-name()!='meta') and (local-name()!='ROUTE')">
      <xsl:text> [</xsl:text>
      <xsl:choose>
        <xsl:when test="$DEF">
          <xsl:value-of select="$node"/>
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="$DEF"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="local-name(..)='ExternProtoDeclare'">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> name='</xsl:text>
          <xsl:value-of select="../@name"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="local-name(..)='fieldValue' or local-name(..)='field'">
          <xsl:choose>
            <xsl:when test="local-name(../..)='ProtoInterface'">
              <!-- indicate ancestor ProtoDeclare -->
              <xsl:value-of select="local-name(../../..)"/>
              <xsl:text> name='</xsl:text>
              <xsl:value-of select="../../../@name"/>
              <xsl:text>', ProtoInterface </xsl:text>
            </xsl:when>
            <xsl:when test="local-name(../..)='ExternProtoDeclare'">
              <xsl:value-of select="local-name(../..)"/>
              <xsl:text> name='</xsl:text>
              <xsl:value-of select="../../@name"/>
              <xsl:text>', </xsl:text>
            </xsl:when>
            <xsl:otherwise>
              <!-- indicate parent Script -->
              <xsl:value-of select="local-name(../..)"/>
              <xsl:text> DEF='</xsl:text>
              <xsl:value-of select="../../@DEF"/>
              <xsl:text>', </xsl:text>
            </xsl:otherwise>
          </xsl:choose>
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> name='</xsl:text>
          <xsl:value-of select="../@name"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="@description">
          <xsl:value-of select="$node"/>
          <xsl:text> description='</xsl:text>
          <xsl:value-of select="@description"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>check X3D source or VRML output to find questionable </xsl:text>
          <xsl:choose>
            <xsl:when test="($node='ProtoInterface node')">
              <xsl:text>ProtoInterface field declaration</xsl:text>
            </xsl:when>
            <xsl:when test="($node='ExternProtoDeclare')">
              <xsl:text>ExternProtoDeclare field declaration</xsl:text>
            </xsl:when>
            <xsl:when test="($node='ProtoInstance')">
              <xsl:text>ProtoInstance name='</xsl:text>
              <xsl:value-of select="../../@name"/>
              <xsl:text>'</xsl:text>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="$node"/>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:otherwise>
      </xsl:choose>
      <xsl:text>]</xsl:text>
    </xsl:if>
  </xsl:message>
  </xsl:if>
</xsl:template>

<xsl:template name="output-error">
  <xsl:param name="errorString"><xsl:text></xsl:text></xsl:param>
  <xsl:param name="node"><xsl:text>node</xsl:text></xsl:param>
  <xsl:param name="DEF"><xsl:text></xsl:text></xsl:param>
  <!-- <xsl:text>### errorString received: </xsl:text><xsl:value-of select="normalize-space($errorString)"/><xsl:text>&#10;</xsl:text> -->
  <xsl:text> ### </xsl:text>
  <xsl:text>Error:  </xsl:text>
  <xsl:value-of select="normalize-space($errorString)" disable-output-escaping="yes"/>
  <xsl:text>&#10;</xsl:text>
  <xsl:if test="($outputDiagnostics='true')">
  <xsl:message>
    <xsl:text>[Error] </xsl:text>
    <xsl:value-of select="$errorString" disable-output-escaping="yes"/>
    <!-- no further output needed for meta error/warning/hint, otherwise indicate location -->
    <xsl:if test="(string-length($node) > 0) and local-name()!='X3D' and (local-name()!='meta') and (local-name()!='component') and (local-name()!='unit') and (local-name()!='EXPORT') and (local-name()!='IMPORT') and (local-name()!='ROUTE')">
      <xsl:text> [</xsl:text>
      <xsl:choose>
        <xsl:when test="$DEF">
          <xsl:value-of select="$node"/>
          <xsl:text> DEF='</xsl:text>
          <xsl:value-of select="$DEF"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="@description">
          <xsl:value-of select="$node"/>
          <xsl:text> description='</xsl:text>
          <xsl:value-of select="@description"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="local-name(..)='fieldValue' or local-name(..)='field'">
          <xsl:value-of select="local-name(..)"/>
          <xsl:text> name='</xsl:text>
          <xsl:value-of select="../@name"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>check X3D source or VRML output to find erroneous </xsl:text>
          <xsl:choose>
            <xsl:when test="($node='ProtoInterface node')">
              <xsl:text>ProtoInterface field declaration</xsl:text>
            </xsl:when>
            <xsl:when test="($node='ProtoInstance')">
              <xsl:text>ProtoInstance name='</xsl:text>
              <xsl:value-of select="@name"/>
              <xsl:text>'</xsl:text>
            </xsl:when>
            <xsl:otherwise>
              <xsl:value-of select="$node"/>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:otherwise>
      </xsl:choose>
      <xsl:text>]</xsl:text>
    </xsl:if>
  </xsl:message>
  </xsl:if>
</xsl:template>

<!-- TODO: check-version -->

<xsl:template name="check-profile">
  <xsl:variable name="computedProfile">
    <xsl:choose>
      <!-- Full profile -->
      <xsl:when test="//Arc2D
		or //ArcClose2D
		or //Circle2D
		or //Contour2D
		or //ContourPolyline2D
		or //CoordinateDouble
		or //CoordinateInterpolator2D
		or //Disk2D
		or //EspduTransform
		or //FillProperties
		or //GeoCoordinate
		or //GeoElevationGrid
		or //GeoLocation
		or //GeoLOD
		or //GeoMetadata
		or //GeoOrigin
		or //GeoPositionInterpolator
		or //GeoTouchSensor
		or //GeoViewpoint
		or //HAnimDisplacer
		or //HAnimHumanoid
		or //HAnimJoint
		or //HAnimSegment
		or //HAnimSite
		or //NurbsCurve
		or //NurbsCurve2D
		or //NurbsOrientationInterpolator
		or //NurbsPatchSurface
		or //NurbsPositionInterpolator
		or //NurbsSet
		or //NurbsSurfaceInterpolator
		or //NurbsSweptSurface
		or //NurbsSwungSurface
		or //NurbsTextureCoordinate
		or //NurbsTrimmedSurface
		or //PositionInterpolator2D
		or //ReceiverPdu
		or //SignalPdu
		or //StaticGroup
		or //TextureBackground
		or //TransmitterPdu">
        <xsl:text>Full</xsl:text>
      </xsl:when>
      <!-- Full profile, Amendment 1 -->
      <xsl:when test="//ComposedCubeMapTexture
		or //GeneratedCubeMapTexture
		or //ImageCubeMapTexture
		or //ComposedShader
		or //FloatVertexAttribute
		or //Matrix3VertexAttribute
		or //Matrix4VertexAttribute
		or //PackagedShader
		or //ProgramShader
		or //ShaderPart
		or //ShaderProgram
		or //Composed3DTexture
		or //ImageTexture3D
		or //Pixel3DTexture
		or //TextureCoordinate3D
		or //TextureCoordinate4D
		or //TextureMatrixTransform
		or //TextureTransform3D">
        <xsl:text>Full</xsl:text>
      </xsl:when>
      <!-- Immersive profile -->
      <xsl:when test="
		   //ExternProtoDeclare
		or //field
		or //fieldValue
		or //IS
		or //connect
		or //ProtoDeclare
		or //ProtoInterface
		or //ProtoBody
		or //ProtoInstance
		or //AudioClip
		or //Billboard
		or //Collision
		or //Extrusion
		or //Fog
		or //FontStyle
		or //LineProperties
		or //LoadSensor
		or //LOD
		or //MovieTexture
		or //Polyline2D
		or //Polypoint2D
		or //Rectangle2D
		or //Script
		or //Sound
		or //Text
		or //TriangleSet2D
		or //VisibilitySensor">
        <xsl:text>Immersive</xsl:text>
      </xsl:when>
      <!-- Interactive profile -->
      <xsl:when test="
		   //Anchor
		or //BooleanFilter
		or //BooleanSequencer
		or //BooleanToggle
		or //BooleanTrigger
		or //CylinderSensor
		or //ElevationGrid
		or //Inline
		or //IMPORT
		or //EXPORT
		or //IntegerSequencer
		or //IntegerTrigger
		or //KeySensor
		or //PlaneSensor
		or //PointLight
		or //ProximitySensor
		or //SphereSensor
		or //SpotLight
		or //StringSensor
		or //Switch
		or //TimeTrigger
		or //TouchSensor">
        <xsl:text>Interactive</xsl:text>
      </xsl:when>
      <!-- CADInterchange profile -->
      <xsl:when test="
		   //CADAssembly
		or //CADFace
		or //CADLayer
		or //CADPart
		or //IndexedQuadSet
		or //QuadSet">
        <xsl:text>CADInterchange</xsl:text>
      </xsl:when>
      <!-- Interchange profile -->
      <xsl:when test="
		   //Appearance
		or //Background
		or //Box
		or //Color
		or //ColorInterpolator
		or //ColorRGBA
		or //Cone
		or //Coordinate
		or //CoordinateInterpolator
		or //Cylinder
		or //DirectionalLight
		or //Group
		or //ImageTexture
		or //IndexedFaceSet
		or //IndexedLineSet
		or //IndexedTriangleFanSet
		or //IndexedTriangleSet
		or //IndexedTriangleStripSet
		or //LineSet
		or //Material
		or //MultiTexture
		or //MultiTextureCoordinate
		or //MultiTextureTransform
		or //NavigationInfo
		or //Normal
		or //NormalInterpolator
		or //OrientationInterpolator
		or //PixelTexture
		or //PointSet
		or //PositionInterpolator
		or //ScalarInterpolator
		or //Shape
		or //Sphere
		or //TextureCoordinate
		or //TextureCoordinateGenerator
		or //TextureTransform
		or //TimeSensor
		or //Transform
		or //TriangleFanSet
		or //TriangleSet
		or //TriangleStripSet
		or //Viewpoint
		or //WorldInfo">
        <xsl:text>Interchange</xsl:text>
      </xsl:when>
      <!-- Core profile -->
      <xsl:when test="
		   //component
		or //head
		or //meta
		or //MetadataDouble
		or //MetadataFloat
		or //MetadataInteger
		or //MetadataSet
		or //MetadataString
		or //ROUTE
		or //X3D">
        <xsl:text>Core</xsl:text>
      </xsl:when>
    </xsl:choose>
  </xsl:variable>
  <!-- check profile sufficient -->
  <xsl:choose>
    <xsl:when test="(/X3D/@profile = $computedProfile)">
      <!-- looking good, done -->
    </xsl:when>
    <xsl:when test="(/X3D/@profile = 'Full')">
      <xsl:call-template name="output-warning">
        <xsl:with-param name="warningString">
          <xsl:text disable-output-escaping="yes">&lt;X3D profile='</xsl:text>
          <xsl:value-of select="/X3D/@profile"/>
          <xsl:text disable-output-escaping="yes">'&gt; is not supported by all browsers.  Consider using Immersive or lower profile, adding component tag(s) if needed.</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>root X3D</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="(/X3D/@profile='Immersive'      and ($computedProfile='Full'))
    		 or (/X3D/@profile='Interactive'    and ($computedProfile='Full' or $computedProfile='Immersive'))
    		 or (/X3D/@profile='CADInterchange' and ($computedProfile='Full' or $computedProfile='Immersive' or $computedProfile='Interactive'))
    		 or (/X3D/@profile='Interchange'    and ($computedProfile='Full' or $computedProfile='Immersive' or $computedProfile='Interactive' or $computedProfile='CADInterchange'))
    		 or (/X3D/@profile='Core'           and ($computedProfile='Full' or $computedProfile='Immersive' or $computedProfile='Interactive' or $computedProfile='CADInterchange' or $computedProfile='Interchange'))">
      <xsl:choose>
        <xsl:when test="not(/X3D/head/component)">
          <xsl:call-template name="output-error">
            <xsl:with-param name="errorString">
              <xsl:text disable-output-escaping="yes">&lt;X3D profile='</xsl:text>
              <xsl:value-of select="/X3D/@profile"/>
              <xsl:text disable-output-escaping="yes">'&gt; is not sufficient, since computed profile='</xsl:text>
              <xsl:value-of select="$computedProfile"/>
              <xsl:text>' for this scene.  Raise profile, or consider adding component tags.</xsl:text>
            </xsl:with-param>
            <xsl:with-param name="node">
              <xsl:text>root X3D</xsl:text>
            </xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <xsl:otherwise>
          <!-- component tag(s) found, should provide sufficient coverage, further checks follow -->
        </xsl:otherwise>
      </xsl:choose>
      <xsl:call-template name="check-components"/>
    </xsl:when>
    <xsl:when test="(/X3D/@profile='MPEG4Interactive') and
		(  //Arc2D
		or //ArcClose2D
		or //AudioClip
		or //Billboard
		or //BooleanFilter
		or //BooleanSequencer
		or //BooleanToggle
		or //BooleanTrigger
		or //CADAssembly
		or //CADFace
		or //CADLayer
		or //CADPart
		or //IndexedQuadSet
		or //QuadSet
		or //Circle2D
		or //Collision
		or //Contour2D
		or //ContourPolyline2D
		or //CoordinateDouble
		or //CoordinateInterpolator2D
		or //CylinderSensor
		or //Disk2D
		or //EspduTransform
		or //Extrusion
		or //FillProperties
		or //Fog
		or //FontStyle
		or //GeoCoordinate
		or //GeoElevationGrid
		or //GeoLocation
		or //GeoLOD
		or //GeoMetadata
		or //GeoOrigin
		or //GeoPositionInterpolator
		or //GeoTouchSensor
		or //GeoViewpoint
		or //HAnimDisplacer
		or //HAnimHumanoid
		or //HAnimJoint
		or //HAnimSegment
		or //HAnimSite
		or //IndexedTriangleFanSet
		or //IndexedTriangleSet
		or //IndexedTriangleStripSet
		or //IntegerSequencer
		or //IntegerTrigger
		or //KeySensor
		or //LineProperties
		or //LoadSensor
		or //LOD
		or //MovieTexture
		or //MultiTexture
		or //MultiTextureCoordinate
		or //MultiTextureTransform
		or //Normal
		or //NurbsCurve
		or //NurbsCurve2D
		or //NurbsOrientationInterpolator
		or //NurbsPatchSurface
		or //NurbsPositionInterpolator
		or //NurbsSet
		or //NurbsSurfaceInterpolator
		or //NurbsSweptSurface
		or //NurbsSwungSurface
		or //NurbsTextureCoordinate
		or //NurbsTrimmedSurface
		or //Polyline2D
		or //Polypoint2D
		or //PositionInterpolator2D
		or //ReceiverPdu
		or //Rectangle2D
		or //Script
		or //SignalPdu
		or //Sound
		or //StaticGroup
		or //StringSensor
		or //Text
		or //TextureBackground
		or //TextureCoordinateGenerator
		or //TimeTrigger
		or //TriangleFanSet
		or //TriangleSet
		or //TriangleStripSet
		or //TransmitterPdu
		or //TriangleSet2D
		or //VisibilitySensor
		or //ComposedCubeMapTexture
		or //GeneratedCubeMapTexture
		or //ImageCubeMapTexture
		or //ComposedShader
		or //FloatVertexAttribute
		or //Matrix3VertexAttribute
		or //Matrix4VertexAttribute
		or //PackagedShader
		or //ProgramShader
		or //ShaderPart
		or //ShaderProgram
		or //Composed3DTexture
		or //ImageTexture3D
		or //Pixel3DTexture
		or //TextureCoordinate3D
		or //TextureCoordinate4D
		or //TextureMatrixTransform
		or //TextureTransform3D
		)">
      <xsl:call-template name="output-error">
        <xsl:with-param name="errorString">
          <xsl:text disable-output-escaping="yes">&lt;X3D profile='</xsl:text>
          <xsl:value-of select="/X3D/@profile"/>
          <xsl:text disable-output-escaping="yes">'&gt; is insufficient due to contained nodes in a higher profile</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="node">
          <xsl:text>root X3D</xsl:text>
        </xsl:with-param>
      </xsl:call-template>
      <xsl:call-template name="check-components"/>
    </xsl:when>
    <xsl:when test="//ProtoInstance or //Inline">
      <!-- disable following test since scene containing ProtoInstance or Inline may need the higher profile -->
    </xsl:when>
    <xsl:when test="(/X3D/@profile != $computedProfile)">
      <xsl:call-template name="output-info">
        <xsl:with-param name="infoString">
          <xsl:text disable-output-escaping="yes">&lt;X3D profile='</xsl:text>
          <xsl:value-of select="/X3D/@profile"/>
          <xsl:text disable-output-escaping="yes">'&gt; differs from computed profile='</xsl:text>
          <xsl:value-of select="$computedProfile"/>
          <xsl:text>'</xsl:text>
          <xsl:choose>
            <xsl:when test="//ProtoInstance and //Inline">
              <xsl:text> (although nodes contained by ProtoInstance or Inline may need the higher profile)</xsl:text>
            </xsl:when>
            <xsl:when test="//ProtoInstance">
              <xsl:text> (although nodes contained by ProtoInstance may need the higher profile)</xsl:text>
            </xsl:when>
            <xsl:when test="//Inline">
              <xsl:text> (although nodes contained by Inline may need the higher profile)</xsl:text>
            </xsl:when>
          </xsl:choose>
        </xsl:with-param>
      </xsl:call-template>
      <xsl:call-template name="check-components"/>
    </xsl:when>
  </xsl:choose>
  <!-- TODO additional warnings if field support for node is optional at this level (e.g. Inline, load field is optional at level 2) -->
</xsl:template>
<!-- debug
  <xsl:message>
    <xsl:text disable-output-escaping="yes">&lt;X3D profile='</xsl:text>
    <xsl:value-of select="/X3D/@profile"/>
    <xsl:text disable-output-escaping="yes">'&gt;, computed profile='</xsl:text>
    <xsl:value-of select="$computedProfile"/>
    <xsl:text>'</xsl:text>
  </xsl:message>
-->


<xsl:template name="check-components">
  <xsl:param name="computedProfile"><xsl:text></xsl:text></xsl:param>
  <xsl:if test="not(/X3D/@profile='Full')">
    <!-- test every node for profile, component -->
    <xsl:for-each select="//*">
      <!-- computed neededProfile, neededComponent, neededLevel -->
      <xsl:variable name="neededProfileComponentLevel">
        <xsl:if test="not(/X3D/@profile='Full')">
	  <!-- check if current node solely in Full profile -->
          <xsl:choose>
            <xsl:when test="local-name()='ComposedCubeMapTexture'">				<xsl:text>Full.CubeMapTexturing=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeneratedCubeMapTexture'">				<xsl:text>Full.CubeMapTexturing=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='ImageCubeMapTexture'">				<xsl:text>Full.CubeMapTexturing=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='ComposedShader'">					<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='FloatVertexAttribute'">				<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='Matrix3VertexAttribute'">				<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='Matrix4VertexAttribute'">				<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='PackagedShader'">					<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='ProgramShader'">					<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='ShaderPart'">						<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='ShaderProgram'">					<xsl:text>Full.Shaders=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='Composed3DTexture'">					<xsl:text>Full.Texturing3D=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='ImageTexture3D'">					<xsl:text>Full.Texturing3D=2</xsl:text></xsl:when>
            <xsl:when test="local-name()='Pixel3DTexture'">					<xsl:text>Full.Texturing3D=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='TextureCoordinate3D'">				<xsl:text>Full.Texturing3D=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='TextureCoordinate4D'">				<xsl:text>Full.Texturing3D=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='TextureMatrixTransform'">				<xsl:text>Full.Texturing3D=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='TextureTransform3D'">					<xsl:text>Full.Texturing3D=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='Arc2D'">						<xsl:text>Full.Geometry2D=2</xsl:text></xsl:when>
            <xsl:when test="local-name()='ArcClose2D'">						<xsl:text>Full.Geometry2D=2</xsl:text></xsl:when>
            <xsl:when test="local-name()='Circle2D'">						<xsl:text>Full.Geometry2D=2</xsl:text></xsl:when>
            <xsl:when test="local-name()='Contour2D'">						<xsl:text>Full.NURBS=4</xsl:text></xsl:when>
            <xsl:when test="local-name()='ContourPolyline2D'">					<xsl:text>Full.NURBS=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='CoordinateDouble'">					<xsl:text>Full.NURBS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='CoordinateInterpolator2D'">				<xsl:text>Full.Interpolation=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='Disk2D'">						<xsl:text>Full.Geometry2D=2</xsl:text></xsl:when>
            <xsl:when test="local-name()='EspduTransform'">					<xsl:text>Full.DIS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='FillProperties'">					<xsl:text>Full.Shape=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoCoordinate'">					<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoElevationGrid'">					<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoLocation'">					<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoLOD'">						<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoMetadata'">					<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoOrigin'">						<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoPositionInterpolator'">				<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoTouchSensor'">					<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='GeoViewpoint'">					<xsl:text>Full.Geospatial=1</xsl:text></xsl:when>
            <!-- H-Anim component renamed to HAnim in X3D4 -->
            <xsl:when test="local-name()='HAnimDisplacer'">					<xsl:text>Full.HAnim=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='HAnimHumanoid'">					<xsl:text>Full.HAnim=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='HAnimJoint'">						<xsl:text>Full.HAnim=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='HAnimSegment'">					<xsl:text>Full.HAnim=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='HAnimSite'">						<xsl:text>Full.HAnim=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='HAnimMotion'">                    <xsl:text>Full.HAnim=2</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsCurve'">						<xsl:text>Full.NURBS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsCurve2D'">					<xsl:text>Full.NURBS=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsOrientationInterpolator'">			<xsl:text>Full.NURBS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsPatchSurface'">					<xsl:text>Full.NURBS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsPositionInterpolator'">				<xsl:text>Full.NURBS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsSet'">						<xsl:text>Full.NURBS=2</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsSurfaceInterpolator'">				<xsl:text>Full.NURBS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsSweptSurface'">					<xsl:text>Full.NURBS=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsSwungSurface'">					<xsl:text>Full.NURBS=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsTextureCoordinate'">				<xsl:text>Full.NURBS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='NurbsTrimmedSurface'">				<xsl:text>Full.NURBS=4</xsl:text></xsl:when>
            <xsl:when test="local-name()='PositionInterpolator2D'">				<xsl:text>Full.Interpolation=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='ReceiverPdu'">					<xsl:text>Full.DIS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='SignalPdu'">						<xsl:text>Full.DIS=1</xsl:text></xsl:when>
            <xsl:when test="local-name()='StaticGroup'">					<xsl:text>Full.Grouping=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='TextureBackground'">					<xsl:text>Full.EnvironmentalEffects=3</xsl:text></xsl:when>
            <xsl:when test="local-name()='TransmitterPdu'">					<xsl:text>Full.DIS=1</xsl:text></xsl:when>
            <!-- current node not solely in Full profile, check Immersive profile (and lower) if needed -->
            <xsl:otherwise>
              <xsl:if test="not(/X3D/@profile='Immersive')">
      	        <xsl:choose>
                  <xsl:when test="local-name()='ExternProtoDeclare'">				<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='field'">					<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='fieldValue'">					<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='IS'">						<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='connect'">					<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='ProtoDeclare'">					<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='ProtoInterface'">				<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='ProtoBody'">					<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='ProtoInstance'">				<xsl:text>Immersive.Core=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='AudioClip'">					<xsl:text>Immersive.Sound=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Billboard'">					<xsl:text>Immersive.Navigation=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Collision'">					<xsl:text>Immersive.Navigation=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Extrusion'">					<xsl:text>Immersive.Geometry3D=4</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Fog'">						<xsl:text>Immersive.EnvironmentalEffects=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='FontStyle'">					<xsl:text>Immersive.Text=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='LineProperties'">				<xsl:text>Immersive.Shape=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='LoadSensor'">					<xsl:text>Immersive.Networking=3</xsl:text></xsl:when>
                  <xsl:when test="local-name()='LOD'">						<xsl:text>Immersive.Navigation=2</xsl:text></xsl:when>
                  <xsl:when test="local-name()='MovieTexture'">					<xsl:text>Immersive.Texturing=3</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Polyline2D'">					<xsl:text>Immersive.Geometry2D=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Polypoint2D'">					<xsl:text>Immersive.Geometry2D=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Rectangle2D'">					<xsl:text>Immersive.Geometry2D=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Script'">					<xsl:text>Immersive.Scripting=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Sound'">					<xsl:text>Immersive.Sound=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='Text'">						<xsl:text>Immersive.Text=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='TriangleSet2D'">				<xsl:text>Immersive.Geometry2D=1</xsl:text></xsl:when>
                  <xsl:when test="local-name()='VisibilitySensor'">				<xsl:text>Immersive.EnvironmentalSensor=2</xsl:text></xsl:when>
                  <!-- current node not solely in Immersive profile, check Interactive profile if needed -->
                  <xsl:otherwise>
                    <xsl:if test="not(/X3D/@profile='Interactive')">
      	              <xsl:choose>
                        <xsl:when test="local-name()='Anchor'">					<xsl:text>Interactive.Networking=2</xsl:text></xsl:when>
                        <xsl:when test="local-name()='BooleanFilter'">				<xsl:text>Interactive.EventUtilities=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='BooleanSequencer'">			<xsl:text>Interactive.EventUtilities=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='BooleanToggle'">				<xsl:text>Interactive.EventUtilities=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='BooleanTrigger'">				<xsl:text>Interactive.EventUtilities=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='CylinderSensor'">				<xsl:text>Interactive.PointingDeviceSensor=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='ElevationGrid'">				<xsl:text>Interactive.Geometry3D=4</xsl:text></xsl:when>
                        <!-- Full support for Inline load field is level 3, otherwise optional at level 2. Inline is level 2 -->
                        <xsl:when test="local-name()='Inline'">					<xsl:text>Interactive.Networking=2</xsl:text></xsl:when>
                        <xsl:when test="local-name()='IMPORT'">					<xsl:text>Interactive.Networking=2</xsl:text></xsl:when>
                        <xsl:when test="local-name()='EXPORT'">					<xsl:text>Interactive.Networking=2</xsl:text></xsl:when>
                        <xsl:when test="local-name()='IntegerSequencer'">			<xsl:text>Interactive.EventUtilities=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='IntegerTrigger'">				<xsl:text>Interactive.EventUtilities=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='KeySensor'">				<xsl:text>Interactive.KeyDeviceSensor=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='PlaneSensor'">				<xsl:text>Interactive.PointingDeviceSensor=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='PointLight'">				<xsl:text>Interactive.Lighting=3</xsl:text></xsl:when>
                        <xsl:when test="local-name()='ProximitySensor'">			<xsl:text>Interactive.EnvironmentalSensor=2</xsl:text></xsl:when>
                        <xsl:when test="local-name()='SphereSensor'">				<xsl:text>Interactive.PointingDeviceSensor=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='SpotLight'">				<xsl:text>Interactive.Lighting=3</xsl:text></xsl:when>
                        <xsl:when test="local-name()='StringSensor'">				<xsl:text>Interactive.KeyDeviceSensor=2</xsl:text></xsl:when>
                        <xsl:when test="local-name()='Switch'">					<xsl:text>Interactive.Grouping=2</xsl:text></xsl:when>
                        <xsl:when test="local-name()='TimeTrigger'">				<xsl:text>Interactive.EventUtilities=1</xsl:text></xsl:when>
                        <xsl:when test="local-name()='TouchSensor'">				<xsl:text>Interactive.PointingDeviceSensor=1</xsl:text></xsl:when>
                        <!-- current node not solely in Interactive profile, check CADInterchange profile (and lower) if needed -->
                        <xsl:otherwise>
                          <xsl:if test="not(/X3D/@profile='CADInterchange')">
      	                    <xsl:choose>
                              <xsl:when test="local-name()='IndexedQuadSet'">			<xsl:text>CADInterchange.CADGeometry=1</xsl:text></xsl:when>
                              <xsl:when test="local-name()='QuadSet'">				<xsl:text>CADInterchange.CADGeometry=1</xsl:text></xsl:when>
                              <xsl:when test="local-name()='CADAssembly'">			<xsl:text>CADInterchange.CADGeometry=2</xsl:text></xsl:when>
                              <xsl:when test="local-name()='CADFace'">				<xsl:text>CADInterchange.CADGeometry=2</xsl:text></xsl:when>
                              <xsl:when test="local-name()='CADLayer'">				<xsl:text>CADInterchange.CADGeometry=2</xsl:text></xsl:when>
                              <xsl:when test="local-name()='CADPart'">				<xsl:text>CADInterchange.CADGeometry=2</xsl:text></xsl:when>
                              <!-- current node not solely in CADInterchange profile, check Interchange profile (and lower) if needed -->
                              <xsl:otherwise>
                                <xsl:if test="not(/X3D/@profile='Interchange')">
      	                          <xsl:choose>
                                    <xsl:when test="local-name()='Appearance'">			<xsl:text>Interchange.Shape=4</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Background'">			<xsl:text>Interchange.EnvironmentalEffects=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Box'">			<xsl:text>Interchange.Geometry3D=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Color'">			<xsl:text>Interchange.Rendering=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='ColorInterpolator'">		<xsl:text>Interchange.Interpolation=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='ColorRGBA'">			<xsl:text>Interchange.Rendering=4</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Cone'">			<xsl:text>Interchange.Geometry3D=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Coordinate'">			<xsl:text>Interchange.Rendering=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='CoordinateInterpolator'">	<xsl:text>Interchange.Interpolation=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Cylinder'">			<xsl:text>Interchange.Geometry3D=1</xsl:text></xsl:when>
                                    <!-- spec question about which level requires scoping of DirectionalLight -->
                                    <xsl:when test="local-name()='DirectionalLight'">		<xsl:text>Interchange.Lighting=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Group'">			<xsl:text>Interchange.Grouping=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='ImageTexture'">		<xsl:text>Interchange.Texturing=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='IndexedFaceSet'">		<xsl:text>Interchange.Geometry3D=4</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='IndexedLineSet'">		<xsl:text>Interchange.Rendering=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='IndexedTriangleFanSet'">	<xsl:text>Interchange.Rendering=3</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='IndexedTriangleSet'">		<xsl:text>Interchange.Rendering=3</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='IndexedTriangleStripSet'">	<xsl:text>Interchange.Rendering=3</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='LineSet'">			<xsl:text>Interchange.Rendering=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Material'">			<xsl:text>Interchange.Shape=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='MultiTexture'">		<xsl:text>Interchange.Texturing=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='MultiTextureCoordinate'">	<xsl:text>Interchange.Texturing=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='MultiTextureTransform'">	<xsl:text>Interchange.Texturing=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='NavigationInfo'">		<xsl:text>Interchange.Navigation=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Normal'">			<xsl:text>Interchange.Rendering=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='NormalInterpolator'">		<xsl:text>Interchange.Interpolation=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='OrientationInterpolator'">	<xsl:text>Interchange.Interpolation=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='PixelTexture'">		<xsl:text>Interchange.Texturing=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='PointSet'">			<xsl:text>Interchange.Rendering=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='PositionInterpolator'">	<xsl:text>Interchange.Interpolation=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='ScalarInterpolator'">		<xsl:text>Interchange.Interpolation=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Shape'">			<xsl:text>Interchange.Shape=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Sphere'">			<xsl:text>Interchange.Geometry3D=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='TextureCoordinate'">		<xsl:text>Interchange.Texturing=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='TextureCoordinateGenerator'">	<xsl:text>Interchange.Texturing=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='TextureTransform'">		<xsl:text>Interchange.Texturing=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='TimeSensor'">			<xsl:text>Interchange.Time=1</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Transform'">			<xsl:text>Interchange.Grouping=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='TriangleFanSet'">		<xsl:text>Interchange.Rendering=3</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='TriangleSet'">		<xsl:text>Interchange.Rendering=3</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='TriangleStripSet'">		<xsl:text>Interchange.Rendering=3</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='Viewpoint'">			<xsl:text>Interchange.Navigation=2</xsl:text></xsl:when>
                                    <xsl:when test="local-name()='WorldInfo'">			<xsl:text>Interchange.Grouping=2</xsl:text></xsl:when>
                                    <!-- current node not solely in Interchange profile, check Core profile -->
                                    <xsl:otherwise>
                                      <!-- should only be Core left as a possible provile at this point -->
                                      <xsl:if test="not(/X3D/@profile='Core')">
                                        <xsl:choose>
                                          <xsl:when test="local-name()='component'">		<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='head'">			<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='meta'">			<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='MetadataDouble'">	<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='MetadataFloat'">	<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='MetadataInteger'">	<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='MetadataSet'">		<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='MetadataString'">	<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='ROUTE'">		<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <xsl:when test="local-name()='X3D'">			<xsl:text>Core.Core=1</xsl:text></xsl:when>
                                          <!-- current node not found -->
                                          <xsl:otherwise>
     			      	            <xsl:call-template name="output-error">
     			      	              <xsl:with-param name="errorString">
     			      	                <xsl:text>component for node </xsl:text>
     			      	                <xsl:value-of select="local-name()"/>
     			      	                <xsl:text> not found (possible X3dToVrml97.xslt error)</xsl:text>
     			      	              </xsl:with-param>
     			      	              <xsl:with-param name="node">
     			      	                <xsl:value-of select="local-name()"/>
     			      	                <xsl:text> node</xsl:text>
     			      	              </xsl:with-param>
     			      	              <xsl:with-param name="DEF"  select="@DEF"/>
     			      	            </xsl:call-template>
                                          </xsl:otherwise>
      	                                </xsl:choose>
                                      </xsl:if>
                                    </xsl:otherwise>
      	                          </xsl:choose>
                                </xsl:if>
                              </xsl:otherwise>
                            </xsl:choose>
                          </xsl:if>
                        </xsl:otherwise>
      	              </xsl:choose>
                    </xsl:if>
                  </xsl:otherwise>
      	        </xsl:choose>
              </xsl:if>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:if>
      </xsl:variable>
      <xsl:variable name="nodeName">       <xsl:value-of select="local-name()"/></xsl:variable>
      <xsl:variable name="neededProfile">  <xsl:value-of select="substring-before($neededProfileComponentLevel,'.')"/></xsl:variable>
      <xsl:variable name="neededLevel">    <xsl:value-of select="substring-after ($neededProfileComponentLevel,'=')"/></xsl:variable>
      <xsl:variable name="neededComponent"><xsl:value-of select="substring-after (substring-before($neededProfileComponentLevel,'='),'.')"/></xsl:variable>
      <xsl:if test="$neededComponent and not($neededComponent='') and not(/X3D/head/component[translate(@name,'-','')=$neededComponent and ($neededLevel &lt;= @level)])
      		    and count(preceding::*[local-name()=$nodeName]) = 0"><!-- only report first node -->
        <xsl:choose>
          <xsl:when test="/X3D/head/component[translate(@name,'-','')=$neededComponent]"><!-- H-Anim component renamed to HAnim in X3D4 -->
            <xsl:call-template name="output-hint">
              <xsl:with-param name="hintString">
                <xsl:text>Complete functionality for </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> node may require support by &lt;X3D profile='</xsl:text>
                <xsl:value-of select="$neededProfile"/>
                <xsl:text disable-output-escaping="yes">'&gt; or else &lt;component name='</xsl:text>
                <xsl:value-of select="$neededComponent"/>
                <xsl:text>' level='</xsl:text>
                <xsl:value-of select="$neededLevel"/>
                <xsl:text>'/&gt; (instead of declared level='</xsl:text>
                <xsl:value-of select="/X3D/head/component[@name=$neededComponent]/@level"/>
                <xsl:text>')</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name()"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:when>
          <xsl:otherwise>
            <xsl:call-template name="output-error">
              <xsl:with-param name="errorString">
                <xsl:value-of select="local-name()"/>
                <xsl:text> node requires support by &lt;X3D profile='</xsl:text>
                <xsl:value-of select="$neededProfile"/>
                <xsl:text disable-output-escaping="yes">'&gt; or else &lt;component name='</xsl:text>
                <xsl:value-of select="$neededComponent"/>
                <xsl:text>' level='</xsl:text>
                <xsl:value-of select="$neededLevel"/>
                <xsl:text>'/&gt;</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="node">
                <xsl:value-of select="local-name()"/>
                <xsl:text> node</xsl:text>
              </xsl:with-param>
              <xsl:with-param name="DEF"  select="@DEF"/>
            </xsl:call-template>
          </xsl:otherwise>
        </xsl:choose>
      </xsl:if>
    </xsl:for-each>
  </xsl:if>
</xsl:template>


<!-- ****** X3D nodes not supported by VRML97 prototypes ****** -->
<xsl:template match="FillProperties|LineProperties">
<!-- debug
  <xsl:message>
    <xsl:text disable-output-escaping="yes">&lt;X3D profile='</xsl:text>
    <xsl:value-of select="/X3D/@profile"/>
    <xsl:text disable-output-escaping="yes">'&gt;, computed profile='</xsl:text>
    <xsl:value-of select="$computedProfile"/>
    <xsl:text>'</xsl:text>
  </xsl:message>
-->
  <xsl:if test="$fileEncoding='VRML97'">
    <xsl:call-template name="output-warning">
      <xsl:with-param name="warningString">
        <xsl:value-of select="local-name()"/>
        <xsl:text> not supported in VRML97</xsl:text>
      </xsl:with-param>
      <xsl:with-param name="node" select="local-name()"/>
      <xsl:with-param name="DEF"  select="@DEF"/>
    </xsl:call-template>
    <xsl:text> # </xsl:text>
  </xsl:if>
  <xsl:choose>
    <xsl:when test="@containerField">
      <xsl:value-of select="@containerField"/>
    </xsl:when>
    <xsl:when test="local-name()='FillProperties'">
      <xsl:text>fillProperties</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='LineProperties'">
      <xsl:text>lineProperties</xsl:text>
    </xsl:when>
    <xsl:otherwise>
      <xsl:text>containerFieldNameUnknown</xsl:text>
    </xsl:otherwise>
  </xsl:choose>
  <xsl:choose>
    <xsl:when test="@USE">
      <xsl:text> USE </xsl:text>
      <xsl:value-of select="@USE"/>
    </xsl:when>
    <xsl:otherwise>
      <xsl:if test="@DEF">
        <xsl:text> DEF </xsl:text>
        <xsl:value-of select="@DEF"/>
      </xsl:if>
      <xsl:text> </xsl:text>
      <xsl:value-of select="local-name()"/>
      <xsl:text> {&#10;</xsl:text>
      <xsl:for-each select="@*[not(local-name()='DEF' or local-name()='containerField' or local-name()='class')]">
        <xsl:if test="$fileEncoding='VRML97'"><xsl:text> # </xsl:text></xsl:if>
        <xsl:apply-templates select="."/>
      </xsl:for-each>
      <xsl:variable name="MetadataNode" select="*[starts-with(local-name(),'Metadata')]"/>
      <xsl:if test="$MetadataNode">
        <xsl:if test="$fileEncoding='VRML97'"><xsl:text> # </xsl:text></xsl:if>
        <xsl:text>metadata</xsl:text>
        <xsl:if test="$MetadataNode/@DEF">
          <xsl:text> </xsl:text>
          <xsl:value-of select="$MetadataNode/@DEF"/>
        </xsl:if>
        <xsl:text> </xsl:text>
        <xsl:value-of select="local-name($MetadataNode)"/>
        <xsl:text> {&#10;</xsl:text>
        <xsl:for-each select="$MetadataNode/@*[not(local-name()='DEF' or local-name()='containerField' or local-name()='class')]">
          <xsl:if test="$fileEncoding='VRML97'"><xsl:text> # </xsl:text></xsl:if>
          <xsl:apply-templates select="."/>
        </xsl:for-each>
        <xsl:if test="$fileEncoding='VRML97'"><xsl:text> # </xsl:text></xsl:if>
        <xsl:text> }&#10;</xsl:text>
      </xsl:if>
      <!-- end MetadataNode (if any), finish original node -->
      <xsl:if test="$fileEncoding='VRML97'"><xsl:text> # </xsl:text></xsl:if>
      <xsl:text> }</xsl:text>
    </xsl:otherwise>
  </xsl:choose>
  <xsl:text>&#10;</xsl:text>
</xsl:template>



</xsl:stylesheet>

