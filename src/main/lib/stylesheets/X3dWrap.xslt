<?xml version='1.0'?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
<!--
Copyright (c) 2001-2022 held by the author(s).  All rights reserved.

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
<!--
  <head>
   <meta name="filename"    content="X3dWrap.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="17 July 2001" />
   <meta name="revised"     content="6 March 2004" />
   <meta name="description" content="XSL stylesheet to remove field wrapper tags to match specialty x3d-compact.dtd, remove attributes with default values, pretty-print X3D source, etc." />
   <meta name="url"         content="https://www.web3d.org/TaskGroups/x3d/content/X3dWrap.xslt" />
  </head>

Recommended tool:

-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://users.iclway.co.uk/mhkay/saxon

Can also be used with Apache server.  Point of contact:  Jeff Sonstein.

Problems:

- DTD fragment at beginning of source file handled OK, but with literals instead of XSL constructs.
  Need to read and retain parameter entities defined in scene file, if possible.  Future work for XSL.
- Disable output escaping and use apostrophes/quotes for attributes containing quotes/apostrophes.

-->  

<!--	XSL names spaces are in transition!  Tools are slow to catch up.  
    ***	Edit the topmost stylesheet tag on line 2 of this file to match your XSL tool. ***
	W3C:             
	Saxon:           <xsl:stylesheet xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>
	IBM XSLEditor:   <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform/1.0'>
	IE 5:            <xsl:stylesheet xmlns:xsl='http://www.w3.org/TR/WD-xsl'>
	XT:              <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform'>
-->

<xsl:output method="xml" encoding="utf-8" indent="yes" media-type="text/xml" omit-xml-declaration="no" />
<xsl:preserve-space elements="Script" />
<xsl:strip-space elements="*" />

<!-- xsl:output attributes for DOCTYPE (handled via text output by root tag)
	doctype-public="https://www.web3d.org/TaskGroups/x3d/content/x3d-compromise.dtd"
	doctype-system="file:///C:/www.web3D.org/TaskGroups/x3d/content/x3d-compromise.dtd"
	cdata-section-elements="@string"
-->

<!-- ****** root:  start of file ****** -->
<xsl:template match="/">
  <xsl:apply-templates select="processing-instruction()"/>
  <xsl:text disable-output-escaping="yes">&#10;&lt;!DOCTYPE X3D PUBLIC&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes">	"https://www.web3d.org/TaskGroups/x3d/content/x3d-compromise.dtd"&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes">	"file:///C:/www.web3D.org/TaskGroups/x3d/content/x3d-compromise.dtd"&#10;[&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % BaseLineProfile    "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % CoreProfile        "IGNORE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % DisJavaVrmlProfile "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % GeoVrmlProfile     "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % HAnimProfile       "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % NurbsProfile       "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes">]&gt;&#10;</xsl:text>

  <xsl:apply-templates/>
  <xsl:text>&#10;</xsl:text>
</xsl:template>


<!-- ****** recurse through each of the tree node elements ****** -->
<!-- don't wrap topmost elements inside Scene or ProtoDeclatation -->
<xsl:template match="*">
    <xsl:copy>
         <xsl:apply-templates select="@DEF | @USE | @*"/>
         <xsl:apply-templates/>
    </xsl:copy>
</xsl:template>

<!-- ****** recurse through each of the attributes ****** -->
<xsl:template match="@*">
  <!-- eliminate default attribute values, otherwise they will _all_ appear in output  -->
  <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3domX_ITE.xslt X3dUnwrap.xslt X3dWrap.xslt and X3dToJson.xslt -->
  <!-- check values with/without .0 suffix since these are string checks and autogenerated/DOM output might have either -->
  <!-- do not check ProtoInstance fields or natively defined nodes, since they might have different user-defined defaults -->
  <!-- tool-bug workaround:  split big boolean queries into pieces to avoid overloading the Xalan/lotusxml query buffer -->
  <xsl:variable name="notImplicitEvent"
	select="not(local-name(..)='AudioClip'	and	(local-name()='duration' or local-name()='isActive')) and
		not(contains(local-name(..),'Interpolator') and (local-name()='fraction' or local-name()='value')) and
		not(((local-name(..)='Background') or (local-name(..)='TextureBackground'))	and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound')) and
		not(local-name(..)='CylinderSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint')) and
		not(local-name(..)='Fog'		and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound')) and
		not(local-name(..)='IndexedLineSet' and	 local-name()='lineWidth') and
        not(((local-name(..)='IndexedFaceSet') or contains(local-name(..),'TriangleFanSet') or contains(local-name(..),'TriangleSet') or contains(local-name(..),'TriangleStripSet') or contains(local-name(..),'QuadSet')) and starts-with(local-name(),'set_') and contains(local-name(),'ndex')) and
		not(local-name(..)='NavigationInfo' and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound')) and
		not(local-name(..)='PointSet'	and	 local-name()='pointSize') and
		not(local-name(..)='PlaneSensor' and	(local-name()='isActive' or local-name()='translation' or local-name()='trackPoint')) and
		not(local-name(..)='ProximitySensor' and (local-name()='isActive' or local-name()='position' or local-name()='orientation' or
						 	 local-name()='enterTime' or local-name()='exitTime')) and
		not(local-name(..)='SphereSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint')) and
		not(local-name(..)='TimeSensor'	and	(local-name()='isActive' or local-name()='cycleTime' or local-name()='fraction' or
							 local-name()='time')) and
		not(local-name(..)='TouchSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='hitNormal' or
							 local-name()='touchTime' or local-name()='hitPoint' or local-name()='hitTexCoord')) and
		not(local-name(..)='Viewpoint'	and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine'))" />
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
		not( local-name(..)='ElevationGrid' and
						((local-name()='ccw' and string(.)='true') or
						 (local-name()='colorPerVertex' and string(.)='true') or
						 (local-name()='normalPerVertex' and string(.)='true') or
						 (local-name()='solid' and string(.)='true') or
						 (local-name()='xDimension' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='xSpacing' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='zDimension' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='zSpacing' and (string(.)='1' or string(.)='1.0')) or
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
						 (local-name()='crossSection' and string(.)='1 1, 1 -1, -1 -1, -1 1, 1  1') or
						 (local-name()='spine' and string(.)='0 0 0, 0 1 0')))" />
  <xsl:variable name="notDefaultFieldValue3"
	select="not( local-name(..)='Fog' and 	((local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
						 (local-name()='visibilityRange' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='fogType' and string(.)='LINEAR'))) and
		not( local-name(..)='FontStyle'	and
						((local-name()='horizontal' and string(.)='true') or
						 (local-name()='leftToRight' and string(.)='true') or
						 (local-name()='topToBottom' and string(.)='true') or
						 (local-name()='size' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='spacing' and (string(.)='1' or string(.)='1.0')) or
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
		not( local-name(..)='LOD '	and	 local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) and
		not( ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
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
	select="not( local-name(..)='ProximitySensor' and
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
		not( local-name(..)='Sphere' and  local-name()='radius' and (string(.)='1' or string(.)='1.0')) and
		not( local-name(..)='SphereSensor' and
						((local-name()='autoOffset' and string(.)='true') or
						 (local-name()='enabled' and string(.)='true') or
						 (local-name()='offset' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0'))))" />
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
		not( local-name(..)='Switch' and  local-name()='whichChoice' and (string(.)='-1' or string(.)='-1.0')) and
		not( local-name(..)='Text'   and ((local-name()='maxExtent' and (string(.)='0' or string(.)='0.0')) or (local-name()='solid' and (string(.)='false')))) and
		not( local-name(..)='TextureTransform' and
						((local-name()='center' and (string(.)='0 0' or string(.)='0.0 0.0')) or
						 (local-name()='rotation' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='scale ' and (string(.)='1 1' or string(.)='1.0 1.0')) or
						 (local-name()='translation' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
		not( local-name(..)='Switch' and  local-name()='whichChoice' and (string(.)='-1' or string(.)='-1.0'))" />
  <xsl:variable name="notDefaultFieldValue7"
	select="not( local-name(..)='TimeSensor' and
						((local-name()='cycleInterval' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='enabled' and string(.)='true') or
						 (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='loop' and string(.)='false'))) and
		not( local-name(..)='TouchSensor' and
						  local-name()='enabled' and string(.)='true') and
		not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
						((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						 (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
						 (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						 (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
		not( local-name(..)='Viewpoint' and
						((local-name()='fieldOfView' and string(.)='0.785398') or
						 (local-name()='jump' and string(.)='true') or
						 (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						 (local-name()='position' and (string(.)='0 0 10' or string(.)='0.0 0.0 10.0')))) and
		not( local-name(..)='VisibilitySensor' and
						((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='enabled' and string(.)='true') or
						 (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
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
                      not( local-name(..)='TextureCoordinateGenerator' and
                      ((local-name()='mode' and string(.)='SPHERE'))) and
                      not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                      ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and string(.)='false')) and
                      not( local-name(..)='PixelTexture3D' and
                      (local-name()='image' and (string(.)='0 0 0 0')))" />
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
 <xsl:if test="	$notImplicitEvent and
                $notDefaultFieldValue1 and
                $notDefaultFieldValue2 and
                $notDefaultFieldValue3 and
                $notDefaultFieldValue4 and
                $notDefaultFieldValue5 and
                $notDefaultFieldValue6 and
                $notDefaultFieldValue7 and
                $notDefaultFieldValue8 and
                $notDefaultFieldValue9 and
                $notDefaultFieldValue10 and
                not((local-name(..)='Script' or local-name(..)='field') and (local-name()='xml:space' or local-name()='space'))" >
  <!--   valid field found by the preceding checks, now output accordingly  -->
  <xsl:attribute name="{local-name()}"><xsl:value-of select="."/></xsl:attribute>
</xsl:if>
</xsl:template>

<!-- ****** insert wrapper tags ****** -->

<!-- appearance -->
<xsl:template match="Appearance[local-name(..)!='appearance' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] |
				*[@nodeTypeHint='Appearance' and local-name()!='ExternProtoDeclare' and local-name(..)!='appearance' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="appearance">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- children (except under Collision) -->
<xsl:template match="Anchor | Billboard | Group | Transform |
				*[@nodeTypeHint='Anchor'    and local-name()!='ExternProtoDeclare'] |
				*[@nodeTypeHint='Billboard' and local-name()!='ExternProtoDeclare'] |
				*[@nodeTypeHint='Group'     and local-name()!='ExternProtoDeclare'] |
				*[@nodeTypeHint='Transform' and local-name()!='ExternProtoDeclare']">
  <xsl:copy>
    <xsl:apply-templates select="@name | @DEF | @*"/>
    <xsl:apply-templates select="fieldValue | defaultValue"/>
    <xsl:choose>
      <xsl:when test="*[local-name()!='children' and local-name()!='fieldValue' and local-name()!='defaultValue']">
        <xsl:element name="children">
          <xsl:apply-templates select="*[local-name()!='children' and local-name()!='fieldValue' and local-name()!='defaultValue'] | comment()"/>
        </xsl:element>
      </xsl:when>
      <!-- allow already-wrapped children to pass -->
      <xsl:otherwise>
        <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='defaultValue'] | comment()"/>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:copy>
</xsl:template>

<!-- children, proxy for Collision -->
<xsl:template match="Collision |
				*[@nodeTypeHint='Collision' and local-name()!='ExternProtoDeclare']">
  <xsl:copy>
    <xsl:apply-templates select="@name | @DEF | @*"/>
    <xsl:apply-templates select="fieldValue | defaultValue"/>
    <!-- first, Proxy element -->
    <xsl:if test="proxy">
      <xsl:element name="proxy">
        <xsl:apply-templates select="proxy/*[local-name()!='fieldValue' and local-name()!='defaultValue'] | comment()"/>
      </xsl:element>
    </xsl:if>
    <!-- second, other non-wrapped child elements -->
    <xsl:if test="*[local-name()!='proxy' and local-name()!='Proxy' and local-name()!='children' and local-name()!='fieldValue' and local-name()!='defaultValue']">
      <xsl:element name="children">
        <xsl:apply-templates select="*[local-name()!='proxy' and local-name()!='Proxy' and local-name()!='children' and local-name()!='fieldValue' and local-name()!='defaultValue'] | comment()"/>
      </xsl:element>
    </xsl:if>
    <!-- third, any already-wrapped proxy/children elements without modification -->
    <xsl:if test="*[proxy or children]">
      <xsl:apply-templates select="*[local-name()='proxy' or local-name()='children'] | comment()"/>
    </xsl:if>
  </xsl:copy>
</xsl:template>

<!-- choice -->
<xsl:template match="Switch |
				*[@nodeTypeHint='Switch' and local-name()!='ExternProtoDeclare']">
  <xsl:copy>
    <xsl:apply-templates select="@name | @DEF | @*"/>
    <xsl:apply-templates select="fieldValue | defaultValue"/>
    <xsl:choose>
      <xsl:when test="*[local-name()!='choice' and local-name()!='fieldValue' and local-name()!='defaultValue']">
        <xsl:element name="choice">
          <xsl:apply-templates select="*[local-name()!='choice' and local-name()!='fieldValue' and local-name()!='defaultValue']"/>
        </xsl:element>
      </xsl:when>
      <!-- allow already-wrapped choice to pass -->
      <xsl:otherwise>
        <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='defaultValue']"/>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:copy>
</xsl:template>

<!-- level -->
<xsl:template match="LOD |
				*[@nodeTypeHint='LOD' and local-name()!='ExternProtoDeclare']">
  <xsl:copy>
    <xsl:apply-templates select="@name | @DEF | @*"/>
    <xsl:apply-templates select="fieldValue | defaultValue"/>
    <xsl:choose>
      <xsl:when test="*[local-name()!='level' and local-name()!='fieldValue' and local-name()!='defaultValue']">
        <xsl:element name="level">
          <xsl:apply-templates select="*[local-name()!='level' and local-name()!='fieldValue' and local-name()!='defaultValue']"/>
        </xsl:element>
      </xsl:when>
      <!-- allow already-wrapped level to pass -->
      <xsl:otherwise>
        <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='defaultValue']"/>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:copy>
</xsl:template>

<!-- color -->
<xsl:template match="Color[local-name(..)!='color' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Color' and local-name()!='ExternProtoDeclare' and local-name(..)!='color' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="color">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- coord -->
<xsl:template match="Coordinate[local-name(..)!='coord' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Coordinate' and local-name()!='ExternProtoDeclare' and local-name(..)!='coord' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="coord">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- fontStyle -->
<xsl:template match="FontStyle[local-name(..)!='fontStyle' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='FontStyle' and local-name()!='ExternProtoDeclare' and local-name(..)!='fontStyle' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="fontStyle">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- geometry -->
<xsl:template match="Box[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				Cone[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				Cylinder[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] |
				ElevationGrid[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				Extrusion[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] |
				IndexedFaceSet[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				IndexedLineSet[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				PointSet[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] |
				Sphere[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] |
				Text[local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Box' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Cone' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Cylinder' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='ElevationGrid' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Extrusion' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='IndexedFaceSet' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='IndexedLineSet' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='PointSet' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Sphere' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Text' and local-name()!='ExternProtoDeclare' and local-name(..)!='geometry' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="geometry">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- not necessarily a leaf node, some child nodes expected -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- material -->
<xsl:template match="Material[local-name(..)!='material' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Material' and local-name()!='ExternProtoDeclare' and local-name(..)!='material' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="material">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- normal -->
<xsl:template match="Normal[local-name(..)!='normal' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='Normal' and local-name()!='ExternProtoDeclare' and local-name(..)!='normal' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="normal">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- source -->
<xsl:template match="AudioClip[local-name(..)!='source' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				MovieTexture[local-name(..)!='source' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='AudioClip'    and local-name()!='ExternProtoDeclare' and local-name(..)!='source' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='MovieTexture' and local-name()!='ExternProtoDeclare' and local-name(..)!='source' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="source">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- texCoord -->
<xsl:template match="TextureCoordinate[local-name(..)!='texCoord' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
			*[@nodeTypeHint='TextureCoordinate' and local-name()!='ExternProtoDeclare' and local-name(..)!='texCoord' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="texCoord">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- texture -->
<xsl:template match="ImageTexture[local-name(..)!='texture' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				MovieTexture[local-name(..)!='texture' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				PixelTexture[local-name(..)!='texture' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='ImageTexture' and local-name()!='ExternProtoDeclare' and local-name(..)!='texture' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='MovieTexture' and local-name()!='ExternProtoDeclare' and local-name(..)!='texture' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='PixelTexture' and local-name()!='ExternProtoDeclare' and local-name(..)!='texture' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="texture">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>

<!-- textureTransform -->
<xsl:template match="TextureTransform[local-name(..)!='textureTransform' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare'] | 
				*[@nodeTypeHint='TextureTransform' and local-name()!='ExternProtoDeclare' and local-name(..)!='textureTransform' and
					local-name(..)!='Scene' and local-name(..)!='ProtoDeclare']">
  <xsl:element name="textureTransform">
    <xsl:element name="{local-name()}">
      <xsl:apply-templates select="@name | @DEF | @*"/>
      <!-- this is a leaf node, no child nodes expected (but ProtoInstances might have some) -->
      <xsl:apply-templates/>
    </xsl:element>
  </xsl:element>
</xsl:template>



<!-- ProtoInstance -->
<xsl:template match="ProtoInstance">
    <!-- figure out node type for ProtoDeclared ProtoInstance, ExternProtoDeclared ProtoInstance tag definitions -->
    <xsl:variable name="nodeName" select="@name" />
    <!-- ProtoDeclared ProtoInstance -->
    <xsl:variable name="nodeType" select="local-name(//ProtoDeclare[@name=$nodeName]/*[local-name()!='field'])" /><!--  -->
    <!-- ExternProtoDeclared ProtoInstance -->
    <xsl:variable name="EPnodeType" select="//ExternProtoDeclare[@name=$nodeName]/@nodeTypeHint" /> <!--  -->
    <!-- debug diagnosis statements -->
      <!-- <xsl:text># nodeName </xsl:text><xsl:value-of select="$nodeName"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:comment><xsl:text>&#10;ProtoInstance nodeType </xsl:text><xsl:value-of select="$nodeType"/><xsl:text>&#10;</xsl:text></xsl:comment> -->
      <!-- <xsl:text># EPnodeType </xsl:text><xsl:value-of select="$EPnodeType"/><xsl:text>&#10;</xsl:text> -->
      <!-- <xsl:text># @nodeTypeHint </xsl:text><xsl:value-of select="@nodeTypeHint"/><xsl:text>&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="($nodeType='Appearance' or $EPnodeType='Appearance') and local-name(..)!='appearance'">
        <xsl:element name="appearance">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='Anchor'    or $EPnodeType='Anchor' or
    				 $nodeType='Billboard' or $EPnodeType='Billboard' or
    				 $nodeType='Group'     or $EPnodeType='Group' or
    				 $nodeType='Transform' or $EPnodeType='Transform')
    				and local-name()!='children'">
        <xsl:copy>
          <xsl:apply-templates select="@name | @DEF | @*" />
          <xsl:apply-templates select="fieldValue | defaultValue" />
          <xsl:if test="*[local-name()!='fieldValue' and local-name()!='defaultValue']">
            <xsl:element name="children">
              <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='defaultValue']" />
            </xsl:element>
          </xsl:if>
        </xsl:copy>
    </xsl:when>
    <xsl:when test="($nodeType='Collision' or $EPnodeType='Collision')
    				and local-name()!='proxy' and local-name()!='children'">
      <xsl:copy>
        <xsl:apply-templates select="@name | @DEF | @*" />
        <xsl:apply-templates select="fieldValue | defaultValue" />
        <xsl:if test="Proxy">
          <xsl:element name="proxy">
            <xsl:apply-templates select="Proxy/*"/>
          </xsl:element>
        </xsl:if>
        <!-- second, other non-wrapped child elements -->
        <xsl:if test="*[local-name()!='proxy' and local-name()!='Proxy' and local-name()!='children' and local-name()!='fieldValue' and local-name()!='defaultValue']">
          <xsl:element name="children">
            <xsl:apply-templates select="*[local-name()!='proxy' and local-name()!='Proxy' and local-name()!='children' and local-name()!='fieldValue' and local-name()!='defaultValue']"/>
          </xsl:element>
        </xsl:if>
        <!-- third, any already-wrapped proxy/children elements without modification -->
        <xsl:if test="*[local-name()='proxy' or local-name()='children']">
          <xsl:apply-templates select="*[local-name()='proxy' or local-name()='children']"/>
        </xsl:if>
      </xsl:copy>
    </xsl:when>
    <xsl:when test="($nodeType='LOD' or $EPnodeType='LOD') and local-name()!='level'">
      <xsl:copy>
        <xsl:apply-templates select="@name | @DEF | @*" />
        <xsl:apply-templates select="fieldValue | defaultValue" />
        <xsl:if test="*[local-name()!='fieldValue' and local-name()!='defaultValue']">
          <xsl:element name="level">
            <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='defaultValue']" />
          </xsl:element>
        </xsl:if>
      </xsl:copy>
    </xsl:when>
    <xsl:when test="($nodeType='Switch' or $EPnodeType='Switch') and local-name()!='choice'">
        <xsl:apply-templates select="@name | @DEF | @*" />
        <xsl:apply-templates select="fieldValue | defaultValue" />
        <xsl:if test="*[local-name()!='fieldValue' and local-name()!='defaultValue']">
          <xsl:element name="choice">
            <xsl:apply-templates select="*[local-name()!='fieldValue' and local-name()!='defaultValue']" />
          </xsl:element>
        </xsl:if>
    </xsl:when>
    <xsl:when test="($nodeType='Color' or $EPnodeType='Color') and local-name(..)!='color'">
        <xsl:element name="color">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='Coordinate' or $EPnodeType='Coordinate') and local-name(..)!='coord'">
        <xsl:element name="coord">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='FontStyle' or $EPnodeType='FontStyle') and local-name(..)!='fontStyle'">
        <xsl:element name="fontStyle">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='Box'			or $EPnodeType='Box' or
    				 $nodeType='Cone'			or $EPnodeType='Cone' or
    				 $nodeType='Cylinder'		or $EPnodeType='Cylinder' or
    				 $nodeType='ElevationGrid'	or $EPnodeType='ElevationGrid' or
    				 $nodeType='Extrusion'		or $EPnodeType='Extrusion' or
    				 $nodeType='IndexedFaceSet'	or $EPnodeType='IndexedFaceSet' or
    				 $nodeType='IndexedLineSet'	or $EPnodeType='IndexedLineSet' or
    				 $nodeType='PointSet'		or $EPnodeType='PointSet' or
    				 $nodeType='Sphere'			or $EPnodeType='Sphere' or
    				 $nodeType='Text'			or $EPnodeType='Text')
    				 and local-name(..)!='geometry'">
        <xsl:element name="geometry">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='Material' or $EPnodeType='Material') and local-name(..)!='material'">
        <xsl:element name="material">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='Normal' or $EPnodeType='Normal') and local-name(..)!='normal'">
        <xsl:element name="normal">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='AudioClip'    or $EPnodeType='AudioClip' or
    				 $nodeType='MovieTexture' or $EPnodeType='MovieTexture')
    				and local-name(..)!='source'">
        <xsl:element name="source">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='TextureCoordinate' or $EPnodeType='TextureCoordinate') and local-name(..)!='texCoord'">
        <xsl:element name="texCoord">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='ImageTexture' or $EPnodeType='ImageTexture' or
    				 $nodeType='MovieTexture' or $EPnodeType='MovieTexture' or
    				 $nodeType='PixelTexture' or $EPnodeType='PixelTexture' or
    				 $nodeType='MultiTexture')
    				and local-name(..)!='texture'">
        <xsl:element name="texture">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:when test="($nodeType='TextureTransform' or $EPnodeType='TextureTransform') and local-name(..)!='textureTransform'">
        <xsl:element name="textureTransform">
          <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
          </xsl:copy>
        </xsl:element>
    </xsl:when>
    <xsl:otherwise>
      <xsl:copy>
            <xsl:apply-templates select="@name | @DEF | @*" />
            <xsl:apply-templates select="fieldValue | defaultValue | *" />
      </xsl:copy>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>


<!-- ****** comments in scene ****** -->
<xsl:template match="comment()[ancestor::X3D]">
    <xsl:text>&#10;</xsl:text>
    <xsl:comment>
      <xsl:value-of select="." />
    </xsl:comment>
</xsl:template>


<!-- ****** text nodes in scene ****** -->
<xsl:template match="text()">
    <xsl:value-of select="." disable-output-escaping="yes" />
</xsl:template>


<!-- ****** Script node:  preserve CDATA content ****** -->
<xsl:template match="Script">
  <xsl:copy><xsl:apply-templates select="@name | @DEF | @* | * | comment()" /><xsl:apply-templates select="text()" /></xsl:copy>
</xsl:template>

<!--
-->

<!-- ****** renames !!! (get rid of these when content converted to avoid future name collisions with user nodes) ****** -->

<!-- Route changed to ROUTE -->
<xsl:template match="Route[local-name(..)='Scene' or local-name(..)='ProtoDeclare']">
  <xsl:element name="ROUTE">
    <xsl:apply-templates select="@*"/>
  </xsl:element>
</xsl:template>


<!-- ****** tag renames !!! (get rid of these when content converted to avoid future name collisions with user nodes) ****** -->

<!-- defaultValue changed to fieldValue -->
<xsl:template match="defaultValue">
  <xsl:element name="fieldValue">
    <xsl:apply-templates select="@name | @*"/>
    <xsl:apply-templates select="*"/>
  </xsl:element>
</xsl:template>


<!-- Header changed to head -->
<xsl:template match="Header">
  <xsl:element name="head">
    <xsl:apply-templates select="@*"/>
    <xsl:apply-templates select="*"/>
  </xsl:element>
</xsl:template>


</xsl:stylesheet>
