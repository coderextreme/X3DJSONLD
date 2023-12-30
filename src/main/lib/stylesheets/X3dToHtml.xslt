<?xml version='1.0'?>
<xsl:stylesheet xmlns:xsl="https://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:saxon="https://icl.com/saxon" saxon:trace="no">
        
    <xsl:variable name="x3dVersion" select="normalize-space(//X3D/@version)"/>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersion,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersion,'4')"/>
<!--
Copyright (c) 2004-2023 held by the author(s).  All rights reserved.

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
      (https://www.nps.edu and https://www.MovesInstitute.org)
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
	Saxon:           <xsl:stylesheet xmlns:xsl='https://www.w3.org/1999/XSL/Transform'>
	IBM XSLEditor:   <xsl:stylesheet xmlns:xsl='https://www.w3.org/XSL/Transform/1.0'>
	IE 5:            <xsl:stylesheet xmlns:xsl='https://www.w3.org/TR/WD-xsl'>
	XT:              <xsl:stylesheet xmlns:xsl='https://www.w3.org/XSL/Transform'>
-->

<!--
  <head>
   <meta name="filename"    content="X3dToHtml.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="revised"     content="6 March 2004" />
   <meta name="description" content="XSLT stylesheet to convert X3D source into an easily readable HTML page." />
   <meta name="url"         content="https://www.web3d.org/x3d/content/X3dToHtml.xslt" />
  </head>

Recommended tool:

- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- Can also be used with Apache server

-->  

<!-- Problems and bugs:

 - autocorrection of String, array field delimiters in ProtoInstances (GeoVrmlExample1)
 - convert to tag form for simplicity

  -->
  
<xsl:strip-space elements="*" />
<xsl:output method="text" encoding="utf-8" media-type="text/html" indent="yes" cdata-section-elements="Script ShaderPart ShaderProgram"/>
<!-- omit-xml-declaration="no" -->


<!-- ****** root:  start of file ****** -->
<xsl:template match="/">
<xsl:text>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.01 Transitional//EN&quot;&gt;&#10;&#10;</xsl:text>
<!-- weird bug breaks margin spacing when url included:  &quot;https://www.w3.org/TR/html4/loose.dtd&quot;  -->

<xsl:text>&lt;html&gt;&#10;</xsl:text>
<xsl:text>&lt;head&gt;&#10;</xsl:text>
<xsl:text>&lt;title&gt;</xsl:text>
<xsl:variable name="fileName" select="//head/meta[@name='filename']/@content" />
<xsl:choose>
  <xsl:when test="$fileName and $fileName!='*enter FileNameWithNoAbbreviations.x3d here*' ">
    <xsl:value-of select="//head/meta[@name='filename']/@content"/>
    <xsl:text> (X3dToHtml)</xsl:text>
   </xsl:when>
   <xsl:otherwise><xsl:text> X3dToHtml </xsl:text></xsl:otherwise>
</xsl:choose>
<xsl:text>&lt;/title&gt;&#10;</xsl:text>
<xsl:text>&lt;meta name=&quot;generator&quot;   content=&quot;X3dToHtml.xsl, https://www.web3d.org/x3d/content/X3dToHtml.xsl&quot;&gt;&#10;</xsl:text>
<xsl:text>&lt;/head&gt;&#10;</xsl:text>
<xsl:text>&lt;body&gt;&#10;</xsl:text>
<!-- XML header -->
<xsl:text>&lt;pre&gt;&#10;</xsl:text>
<xsl:text>&amp;lt;?xml version="1.0" encoding="UTF-8"?&amp;gt;&#10;</xsl:text>
<xsl:variable name="wrapped" select="//*[local-name()='appearance' or
	local-name()='children' or local-name()='choice' or 
	local-name()='color' or local-name()='coord' or local-name()='fontStyle' or 
	local-name()='geometry' or local-name()='material' or local-name()='normal' or 
	local-name()='source' or local-name()='level' or local-name()='texCoord' or 
	local-name()='texture' or local-name()='textureTransform']" />
<xsl:choose>
  <xsl:when test="$wrapped">
    <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "https://www.web3d.org/x3d/content/x3d-compromise.dtd"&#10;</xsl:text>
    <!-- (no longer used in local doctype)  file://localhost/C: -->
    <xsl:text>                     "file:///www.web3d.org/x3d/content/x3d-compromise.dtd"&amp;gt;&#10;</xsl:text>
  </xsl:when>
  <xsl:otherwise>
    <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "https://www.web3d.org/specifications/x3d-3.0.dtd" "file:///www.web3d.org/specifications/x3d-3.0.dtd"></xsl:text>
    <!-- <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "https://www.web3d.org/specifications/x3d-3.0.dtd" "file:///www.web3d.org/x3d/content/x3d-3.0.dtd"></xsl:text>-->
    <!-- <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "https://www.web3d.org/x3d/content/x3d-compact.dtd"&#10;</xsl:text> -->
    <!-- <xsl:text>                     "/www.web3d.org/x3d/content/x3d-compact.dtd"&amp;gt;&#10;</xsl:text> -->
  </xsl:otherwise>
</xsl:choose>
<xsl:text>&lt;/pre&gt;&#10;</xsl:text>

<xsl:apply-templates/>

<xsl:text>&#10;&amp;lt;!-- Tag color codes:&#10;</xsl:text>
<xsl:if test="$wrapped">
  <xsl:text>&lt;font color=&quot;BLUE&quot;&gt; &amp;lt;field&amp;gt;&lt;/font&gt; </xsl:text>
</xsl:if>
<xsl:text>&#10;</xsl:text>
<xsl:text>&amp;lt;&lt;font color=&quot;navy&quot;&gt;Node&lt;/font&gt;</xsl:text>
<xsl:if test="//*[@DEF]">
  <xsl:text>&lt;font color=&quot;green&quot;&gt; DEF&lt;/font&gt;=&apos;</xsl:text>
  <xsl:text>&lt;font color=&quot;maroon&quot;&gt;NodeName&lt;/font&gt;&apos; </xsl:text>
</xsl:if>
<xsl:text>&lt;font color=&quot;green&quot;&gt; attribute&lt;/font&gt;=&apos;</xsl:text>
<xsl:text>&lt;font color=&quot;teal&quot;&gt;value&lt;/font&gt;&apos;/&amp;gt;</xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:if test="$wrapped">
  <xsl:text>&lt;font color=&quot;BLUE&quot;&gt; &amp;lt;/field&amp;gt;&lt;/font&gt;</xsl:text>
</xsl:if>
<xsl:if test="//*[contains(local-name(),'Proto')]">
  <xsl:text>&#10;</xsl:text>
  <xsl:text>&amp;lt;&lt;font color=&quot;purple&quot;&gt; Prototype &lt;/font&gt;</xsl:text>
  <xsl:text>&lt;font color=&quot;green&quot;&gt; name&lt;/font&gt;='</xsl:text>
  <xsl:text>&lt;font color=&quot;purple&quot;&gt;ProtoName&lt;/font&gt;'/&amp;gt; </xsl:text>
  <xsl:if test="//*[starts-with(local-name(),'field')]">
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&amp;lt;&lt;font color=&quot;navy&quot;&gt; field &lt;/font&gt;</xsl:text>
    <xsl:text>&lt;font color=&quot;green&quot;&gt; name&lt;/font&gt;='</xsl:text>
    <xsl:text>&lt;font color=&quot;purple&quot;&gt;fieldName&lt;/font&gt;'/&amp;gt; </xsl:text>
  </xsl:if>
  <xsl:text>&amp;lt;&lt;font color=&quot;purple&quot;&gt;/Prototype &lt;/font&gt;&amp;gt;</xsl:text>
</xsl:if>

<xsl:text> --&amp;gt;&#10;</xsl:text>

<xsl:text>&lt;/body&gt;&#10;</xsl:text>
<xsl:text>&lt;/html&gt;&#10;</xsl:text>
</xsl:template>


<!-- ****** recurse through each of the tree node elements ****** -->
<xsl:template match="*">
<xsl:if test="local-name(..)='Script' and local-name()='field'"><xsl:text>&#10;</xsl:text></xsl:if>
<!-- first tag name -->
<xsl:choose>
  <xsl:when test="local-name()='ROUTE'">
    <xsl:text>&amp;lt;&lt;font color=&quot;RED&quot;&gt;</xsl:text>
  </xsl:when>
  <xsl:when test="local-name()='ProtoDeclare' or local-name()='ProtoInterface' or local-name()='ProtoBody' or local-name()='ExternProtoDeclare' or local-name()='ProtoInstance' or local-name()='IS' or local-name()='connect'">
    <xsl:text>&amp;lt;&lt;font color=&quot;purple&quot;&gt;</xsl:text>
  </xsl:when>
  <xsl:otherwise>
    <xsl:text>&amp;lt;&lt;font color=&quot;navy&quot;&gt;</xsl:text>
  </xsl:otherwise>
</xsl:choose>
<xsl:value-of select="local-name()"/>
<xsl:text>&lt;/font&gt;</xsl:text>
<!-- next attributes, if any.  first check to output in order if appropriate. -->
<xsl:if test="@*">
  <xsl:choose>
    <xsl:when test="local-name()='component'">
      <xsl:apply-templates select="@name"/>
      <xsl:apply-templates select="@*[local-name()!='name']"/>
    </xsl:when>
    <xsl:when test="local-name()='meta'">
      <xsl:apply-templates select="@name"/>
      <xsl:apply-templates select="@content"/>
      <xsl:apply-templates select="@*[local-name()!='name' and local-name()!='content']"/>
        <xsl:if test="@name='warning'">
          <xsl:message>
            <xsl:text disable-output-escaping="yes"><![CDATA[<]]>meta name='warning' content='</xsl:text>
            <xsl:value-of select="normalize-space(@content)"/>
            <xsl:text disable-output-escaping="yes">'/<![CDATA[>]]></xsl:text>
          </xsl:message>
        </xsl:if>
    </xsl:when>
    <xsl:when test="local-name()='ROUTE'">
      <xsl:apply-templates select="@fromNode"/>
      <xsl:apply-templates select="@fromField"/>
      <xsl:apply-templates select="@toNode"/>
      <xsl:apply-templates select="@toField"/>
    </xsl:when>
    <xsl:when test="local-name()='ElevationGrid' or local-name()='GeoElevationGrid'">
      <xsl:apply-templates select="@*[local-name()!='height' and local-name()!='colorIndex']"/>
      <xsl:apply-templates select="@height"/>
      <xsl:apply-templates select="@colorIndex"/>
    </xsl:when>
    <xsl:when test="local-name()='IndexedFaceSet' or local-name()='IndexedLineSet'">
      <xsl:apply-templates select="@*[not(contains(local-name(), 'Index'))]"/>
      <xsl:apply-templates select="@*[contains(local-name(), 'Index')]"/>
    </xsl:when>
    <xsl:when test="local-name()='IMPORT'">
      <xsl:apply-templates select="@inlineDEF"/>
      <xsl:apply-templates select="@importedDEF"/>
      <xsl:apply-templates select="@AS"/>
    </xsl:when>
    <xsl:when test="local-name()='EXPORT'">
      <xsl:apply-templates select="@localDEF"/>
      <xsl:apply-templates select="@AS"/>
    </xsl:when>
    <xsl:when test="contains(local-name(),'Proto')">
      <xsl:apply-templates select="@name"/>
      <xsl:apply-templates select="@DEF"/>
      <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='name')]"/>
    </xsl:when>
    <xsl:when test="local-name()='field' or local-name()='fieldValue'">
      <xsl:apply-templates select="@name"/>
      <xsl:apply-templates select="@type"/>
      <xsl:apply-templates select="@value"/>
      <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='type') and (local-name()!='value') and (local-name()!='appInfo') and (local-name()!='documentation')]"/>
      <xsl:apply-templates select="@appInfo"/>
      <xsl:apply-templates select="@documentation"/>
    </xsl:when>
    <xsl:when test="contains(local-name(),'connect')">
      <xsl:apply-templates select="@nodeField"/>
      <!-- IS -->
      <xsl:apply-templates select="@protoField"/>
    </xsl:when>
    <xsl:otherwise>
      <xsl:apply-templates select="@DEF | @USE | @*[not(contains(local-name(), 'url') or contains(local-name(), 'Url'))]"/>
      <xsl:apply-templates select="@*[contains(local-name(), 'url') or contains(local-name(), 'Url')]"/>
    </xsl:otherwise>
  </xsl:choose>
</xsl:if>
<!-- appropriate angle-bracket close of first tag, depending if children node/comment is present -->
<xsl:choose>                        
  <xsl:when test="* | comment()"><xsl:text>&amp;gt;&#10;&lt;div style="margin-left:25"&gt;&#10;</xsl:text></xsl:when>
  <xsl:when test="local-name(..)='Script' and local-name()='field'"><xsl:text>/&amp;gt;</xsl:text></xsl:when>
  <xsl:otherwise><xsl:text>/&amp;gt;&#10;</xsl:text></xsl:otherwise>
</xsl:choose>
<!-- recurse on contained tag/comment -->
<xsl:apply-templates select="* | comment()"/>
<!-- add a closing tag if children node/comment is present -->
<xsl:if test="* or comment()">
  <xsl:choose>
    <xsl:when test="local-name()='ProtoDeclare' or local-name()='ProtoInterface' or local-name()='ProtoBody' or local-name()='ExternProtoDeclare' or local-name()='ProtoInstance' or local-name()='IS' or local-name()='connect'">
      <xsl:text>&lt;/div&gt;&#10;&amp;lt;/&lt;font color=&quot;purple&quot;&gt;</xsl:text>
    </xsl:when>
    <xsl:otherwise>
      <xsl:text>&lt;/div&gt;&#10;&#10;&amp;lt;/&lt;font color=&quot;navy&quot;&gt;</xsl:text>
    </xsl:otherwise>
  </xsl:choose>
  <xsl:value-of select="local-name()"/>
  <xsl:text>&lt;/font&gt;&amp;gt;&#10;</xsl:text>
</xsl:if>
<!-- element complete, insert index (prior to Scene, after X3D) or else break -->
<xsl:choose>
  <xsl:when test="local-name()='head' or local-name()='X3D' ">
    <xsl:call-template name="ID-link-index"/>
  </xsl:when>
  <xsl:otherwise>
    <xsl:text>&lt;br /&gt;&#10;</xsl:text>
  </xsl:otherwise>
</xsl:choose>

</xsl:template>

<!-- ****** recurse through each of the attributes ****** -->
<xsl:template match="@*">
        <!-- eliminate default attribute values, otherwise they will all appear in output  -->
        <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3domX_ITE.xslt X3dUnwrap.xslt X3dWrap.xslt and X3dToJson.xslt -->
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
                      not( local-name()='channelCountMode' and string(.)='MAX') and
                      not( local-name()='channelInterpretation' and string(.)='SPEAKERS') and
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
                      (local-name()='xDimension' and (string(.)='0')) or
                      (local-name()='xSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='zDimension' and (string(.)='0')) or
                      (local-name()='zSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='yScale' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='geoGridOrigin' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
                      not((local-name(..)='ElevationGrid') and
                      (local-name()='height' and (string(.)='' or string(.)=''))) and
                      not((local-name(..)='GeoElevationGrid') and
                      (local-name()='height' and (string(.)='0 0' or string(.)='0.0 0.0'))) and
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
                      not( ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial') or (local-name(..)='PhysicalMaterial')) and
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
                      select="not(contains(local-name(..),'ProximitySensor') and
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
                      not( contains(local-name(..),'TouchSensor') and
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
                      (local-name()='type' and (string(.)='LOWPASS')) or
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
                      (local-name()='frequency' and (string(.)='440' or string(.)='440.0')))) and
                      not( local-name(..)='PeriodicWave' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='type' and (string(.)='SQUARE')))) and
                      not( local-name(..)='SpatialSound' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='coneInnerAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterGain' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                      (local-name()='distanceModel' and (string(.)='INVERSE')) or
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
                      (local-name()='oversample' and (string(.)='NONE'))))" />
        <xsl:variable name="notDefaultContainerField1"
                      select="not((local-name()='containerField' and string(.)='children')	and
                      (contains(local-name(..),'Interpolator') or
                      ends-with(local-name(..),'Filter') or
                      ends-with(local-name(..),'Sequencer') or
                      ends-with(local-name(..),'Trigger') or
                      contains(local-name(..),'Light') or
                      contains(local-name(..),'Sensor') or
                      local-name(..)='Anchor' or
                      local-name(..)='Background' or
                      local-name(..)='Billboard' or
                      local-name(..)='Collision' or
                      local-name(..)='Fog' or
                      local-name(..)='GeoMetadata' or
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
                      not((local-name()='containerField' and string(.)='material')         and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial') or (local-name(..)='PhysicalMaterial'))) and
                      not((local-name()='containerField' and string(.)='color')            and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                      not((local-name()='containerField' and string(.)='coord')            and ((local-name(..)='Coordinate') or (local-name(..)='CoordinateDouble') or (local-name(..)='GeoCoordinate'))) and
                      not((local-name()='containerField' and string(.)='normal')           and (local-name(..)='Normal')) and
                      not((local-name()='containerField' and string(.)='texture')          and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D' or local-name(..)='GeneratedCubeMapTexture')) and
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
                      not((local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsSwungSurface') and
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
  <xsl:variable name="value" select="."/>
  <xsl:if test="$notImplicitEvent1 and
                $notImplicitEvent2 and
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
                ." >
        	<!--and not((local-name(../..)='Script' and local-name(..)='field') and (local-name()='xml:space' or local-name()='space')) -->
  <!-- valid field found by the preceding checks, now output accordingly  -->
  <!-- single attributes can stay on same line, skip line otherwise -->
  <!-- problem:  appears to be counting default attributes in addition to user-defined attributes... -->
  <xsl:if test="(count (../@*) > 2) or ((count (../@*) = 2) and (string-length(../@*[1]) + string-length(../@*[2]) &gt; 72))">
    <xsl:text>&#10;  </xsl:text>
  </xsl:if>
<!--  <xsl:if test="(local-name(..)='field' or local-name(..)='ProtoDeclare' or local-name()='ProtoInterface' or local-name()='ProtoBody' or local-name(..)='ExternProtoDeclare') and (local-name()='appInfo' or local-name()='documentation')">
    <xsl:text>&lt;br /&gt;&#10;&amp;nbsp;</xsl:text>
  </xsl:if> -->
  <xsl:text> &lt;font color=&quot;green&quot;&gt;</xsl:text>
  <!-- output actual attribute value.  try to break MFStrings into multiple lines. -->
  <xsl:value-of select="local-name()"/>
  <xsl:text>&lt;/font&gt;&lt;b&gt;=&apos;&lt;/b&gt;</xsl:text>
  <xsl:choose>
    <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'X3D-Edit, ')">
      <xsl:variable name="containedUrl" select="substring-after(.,'X3D-Edit, ')"/>
      <xsl:text>X3D-Edit, </xsl:text>
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>" target="_blank"&gt;</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'Vrml97ToX3dNist, ')">
      <xsl:variable name="containedUrl" select="substring-after(.,'Vrml97ToX3dNist, ')"/>
      <xsl:text>Vrml97ToX3dNist, </xsl:text>
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>" target="_blank"&gt;</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='ProtoInstance' and local-name()='name') and (//ProtoDeclare[@name=$value] or //ExternProtoDeclare[@name=$value])">
      <xsl:text>&lt;a href=&quot;#</xsl:text>
      <xsl:choose>
      	<xsl:when test="//ProtoDeclare[@name=$value]">
      	  <xsl:text>ProtoDeclare_</xsl:text>
      	</xsl:when>
      	<xsl:when test="//ExternProtoDeclare[@name=$value]">
      	  <xsl:text>ExternProtoDeclare_</xsl:text>
      	</xsl:when>
      </xsl:choose>
      <xsl:value-of select="."/>
      <xsl:text>"&gt;</xsl:text>
      <xsl:text>&lt;font color=&quot;purple&quot;&gt;</xsl:text>
      <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
      <xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='protoField' and (local-name(..)='connect')">
      <xsl:text>&lt;font color=&quot;purple&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name()='nodeField' and local-name(..)='connect' and local-name(../..)='IS' and local-name(../../..)='Script') or (local-name()='name' and local-name(..)='field' and local-name(../..)='Script')">
      <xsl:text>&lt;font color=&quot;black&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:when>
    <!-- print out urls containing javascript source without further ado -->
    <xsl:when test="(local-name()='url' and starts-with(normalize-space(string(.)),'javascript:'))">
      <xsl:text>&lt;PRE&gt;</xsl:text>
      <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
      <xsl:text>&lt;/PRE&gt;</xsl:text> blah 
    </xsl:when>
    <!-- protect simple text references as is -->
    <xsl:when test="(local-name(..)='meta') and (../@name='reference') and not(contains(string(.),'https://')) and not(contains(string(.),'https://')) and not(contains(string(.),'file:')) and contains(normalize-space(string(.)),' ')">
      <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/></xsl:when>
    <!-- make single url reference into actual A HREF= link -->
    <xsl:when test="(local-name(..)='meta' and (../@name='url' or ../@name='filename' or ../@name='reference' or ../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or ../@name='source' or contains(../@name,'permission')) and local-name()='content') and not(contains(normalize-space(string(.)),' '))">
      <xsl:text>&lt;a href=</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text></xsl:when>
<!-- <xsl:when test="(local-name(..)='meta' and (../@name='url' or ../@name='filename' or ../@name='reference' or ../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or contains(../@name,'permission')) and local-name()='content') and starts-with(normalize-space(string(.)),'&quot;') and not(contains(normalize-space(string(.)),'&quot; &quot;')) and (contains(string(.),'.') or starts-with(normalize-space(string(.)),'Makefile')) and not(substring(normalize-space(string(.)),string-length(normalize-space(string(.)))) = '.')">
      <xsl:text>&lt;a href=</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&gt;</xsl:text><xsl:value-of select="substring-before(substring-after(normalize-space(string(.)),'&quot;'),'&quot;')" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text></xsl:when> -->
    <!-- break and make multiple url references into actual A HREF= links -->
    <xsl:when test="(local-name()='url' or contains(local-name(), 'Url'))">
      <xsl:call-template name="URL-ize-MFString-elements">
        <xsl:with-param name="list" select="normalize-space(string(.))"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="(local-name(..)='field' or local-name(..)='fieldValue') and (contains(../@name, 'Url') or contains(../@name, 'url')) and (local-name() = 'value')">
      <xsl:call-template name="URL-ize-MFString-elements">
        <xsl:with-param name="list" select="normalize-space(string(.))"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and (../@name='url' or ../@name='filename' or ../@name='reference' or ../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or contains(../@name,'permission')) and local-name()='content') and starts-with(normalize-space(string(.)),'&quot;') and contains(normalize-space(string(.)),'&quot; &quot;')">
      <xsl:call-template name="URL-ize-MFString-elements">
        <xsl:with-param name="list" select="normalize-space(string(.))"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="(local-name(..)='field' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare') and (local-name()='documentation')">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="starts-with(normalize-space(string(.)),'https://') or starts-with(normalize-space(string(.)),'https://')">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='content') and (../@name='mail' or ../@name='email' or ../@name='e-mail' or ../@name='contact')">
      <xsl:text>&lt;a href="</xsl:text>
      <xsl:if test="contains(string(.),'@') and not(contains(string(.),'mailto:'))">
        <xsl:text>mailto:</xsl:text>
      </xsl:if>
      <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
      <xsl:text>"&gt;</xsl:text>
      <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='content') and (../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph') and (contains(string(.),'https://') or contains(string(.),'https://') or contains(string(.),'file://') or not(contains(string(.),' ')))">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='generator') and starts-with(.,'Xvl3ToX3d, ')">
      <xsl:variable name="containedUrl" select="substring-after(.,'Xvl3ToX3d, ')"/>
      <xsl:text>Xvl3ToX3d, </xsl:text>
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>" target="_blank"&gt;</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='content' and ../@name='generator') and (contains(string(.),'.') and (not(contains(string(.),' '))))">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='url'">
      <xsl:text>&lt;font color=&quot;black&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='name' and (local-name(..)='field' or local-name(..)='fieldValue' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare' or local-name(..)='ProtoInstance')">
      <xsl:if test="(local-name()='name') and (local-name(..)='ProtoDeclare')">
         <xsl:text>&lt;a name=&quot;ProtoDeclare_</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      </xsl:if>
      <xsl:if test="(local-name()='name') and (local-name(..)='ExternProtoDeclare')">
         <xsl:text>&lt;a name=&quot;ExternProtoDeclare_</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      </xsl:if>
      <xsl:text>&lt;font color=&quot;purple&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:if test="(local-name()='name') and (local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare')">
         <xsl:text>&lt;/a&gt;</xsl:text>
      </xsl:if>
    </xsl:when>
    <xsl:when test="local-name()='DEF'">
      <xsl:text>&lt;a name=&quot;</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      <xsl:text>&lt;font color=&quot;maroon&quot;&gt;</xsl:text>
      <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
      <xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='USE' or (local-name(..)='ROUTE' and contains(local-name(),'Node')) or (local-name(..)='USE' and local-name()='node')">
      <xsl:text>&lt;a href=&quot;#</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      <xsl:text>&lt;font color=&quot;maroon&quot;&gt;</xsl:text>
      <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
      <xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>    
    <xsl:when test="local-name()='IS'">
      <xsl:call-template name="format-IS-pairs">
        <xsl:with-param name="list" select="normalize-space(string(.))"/>
      </xsl:call-template>
    </xsl:when>
    <!-- meta warning -->
    <xsl:when test="local-name(..)='meta' and (local-name()='name' and string(.)='warning') or (../@*[local-name()='name' and string(.)='warning'])">
      <!-- remove extraneous space for better formatting, even though this might obscure some content problems/preferences. -->
      <xsl:text>&lt;b&gt;&lt;font color=&quot;#cc5500&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))"/><xsl:text>&lt;/font&gt;&lt;/b&gt;</xsl:text>
    </xsl:when>
    <xsl:otherwise>
      <!-- remove extraneous space for better formatting, even though this might obscure some content problems/preferences. -->
      <xsl:text>&lt;font color=&quot;teal&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(string(.))"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:otherwise>
 <!-- <xsl:text></xsl:text><xsl:value-of select="normalize-space(string(.))"/></xsl:otherwise> -->
  </xsl:choose>
  <xsl:text>&lt;b&gt;&apos;&lt;/b&gt;</xsl:text>
  <xsl:if test="contains(local-name(), 'Url')"><xsl:text>&lt;br /&gt;&#10;</xsl:text></xsl:if><!--  -->
</xsl:if>
</xsl:template>

<!-- ****** URL-ize-MFString-elements:  callable template (recursive function) ****** -->
<!-- follows examples in Michael Kay's _XSLT_, pp. 551-554 -->
<!-- this will need modification if SFURL/MFURL types are created -->
<xsl:template name="URL-ize-MFString-elements">
  <xsl:param name="list"/>
  <xsl:variable name="wlist" select="concat($list,' ')"/>
  <!-- <xsl:text>&#10;$wlist=[</xsl:text><xsl:value-of select="$wlist" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="$wlist!=' '">
      <xsl:variable name="nextURL"  select="translate(substring-before($wlist,' '),'&quot;','')"/>
      <xsl:variable name="restURLs" select="substring-after($wlist,' ')"/>
      <!-- <xsl:text>&#10;$restURLs=[</xsl:text><xsl:value-of select="$restURLs" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
      <!-- output URL-ized nextURL -->
      <xsl:text>&quot;&lt;A href=&quot;</xsl:text><xsl:value-of select="normalize-space($nextURL)"/><xsl:text>&quot;&gt;</xsl:text><xsl:value-of select="normalize-space($nextURL)"/><xsl:text>&lt;/A&gt;&quot;</xsl:text>
      <!-- recurse on remainder of list of URLs -->
      <xsl:if test="$restURLs!=''">
        <xsl:text>&#10;</xsl:text>
        <xsl:call-template name="URL-ize-MFString-elements">
          <xsl:with-param name="list" select="$restURLs"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
  </xsl:choose>
</xsl:template>

<!-- ****** format-IS-pairs:  callable template (recursive function) ****** -->
<!-- follows examples in Michael Kay's _XSLT_, pp. 551-554 -->
<xsl:template name="format-IS-pairs">
  <xsl:param name="list"/>
  <xsl:variable name="wlist" select="concat($list,' ')"/>
  <!-- <xsl:text>&#10;$wlist=[</xsl:text><xsl:value-of select="$wlist" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="$wlist!=' '">
      <xsl:variable name="nextPair"  select="translate(substring-before($wlist,' '),'&quot;','')"/>
      <xsl:variable name="restPairs" select="substring-after($wlist,' ')"/>
      <!-- <xsl:text>&#10;$restPairs=[</xsl:text><xsl:value-of select="$restPairs" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
      <!-- output linked/fonted IS NodeName.fieldName pair -->

      <xsl:text>&lt;a href=&quot;#</xsl:text><xsl:value-of select="substring-before($nextPair,'.')"/><xsl:text>"&gt;</xsl:text>
      <xsl:text>&lt;font color=&quot;maroon&quot;&gt;</xsl:text>
      <xsl:value-of select="substring-before($nextPair,'.')"/>
      <xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:text>&lt;/a&gt;</xsl:text>
      <xsl:text>&lt;b&gt;.&lt;/b&gt;</xsl:text>
      <xsl:text>&lt;font color=&quot;purple&quot;&gt;</xsl:text>
      <xsl:value-of select="substring-after($nextPair,'.')"/>
      <xsl:text>&lt;/font&gt;</xsl:text>

      <!-- recurse on remainder of list of URLs -->
      <xsl:if test="$restPairs!=''">
        <xsl:text>&amp;nbsp;&amp;nbsp;&amp;nbsp;&#10;</xsl:text>
        <xsl:call-template name="format-IS-pairs">
          <xsl:with-param name="list" select="$restPairs"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:when>
  </xsl:choose>
</xsl:template>

<!-- ****** children:  flag wrapper tags ****** -->
<xsl:template match="appearance | children | choice | color | coord | fontStyle | geometry | level | material | normal | source | texCoord | texture | textureTransform">
<!-- first, output tag name -->
<xsl:text>&lt;font color=&quot;BLUE&quot;&gt;&amp;lt;</xsl:text><xsl:value-of select="local-name()"/>
<!-- appropriate angle-bracket close of first tag -->
<xsl:choose>
  <xsl:when test="not(*)"><xsl:text>/&amp;gt;</xsl:text></xsl:when>
  <xsl:otherwise><xsl:text>&amp;gt;</xsl:text></xsl:otherwise>
</xsl:choose>
<!-- insert warning comment after wrapper tag -->
<!-- <xsl:comment> wrapper tag </xsl:comment> -->
<!-- prepare format for next tag, insert blockquote if children present -->
<xsl:choose>
  <xsl:when test="not(*)"><xsl:text>&#10;&lt;/font&gt;</xsl:text></xsl:when>
  <xsl:otherwise><xsl:text>&lt;/font&gt;&lt;div style="margin-left:25"&gt;&#10;</xsl:text></xsl:otherwise>
</xsl:choose>
<!-- recurse on next tag -->
<xsl:apply-templates />
<!-- add a closing tag if children were present -->
<xsl:if test="*">
  <xsl:text>&lt;/div&gt;&#10;&#10;&lt;font color=&quot;BLUE&quot;&gt;&amp;lt;/</xsl:text>
  <xsl:value-of select="local-name()"/>
  <xsl:text>&amp;gt;&lt;/font&gt;&#10;</xsl:text>
</xsl:if>
</xsl:template>


<!-- ****** XML comments ****** -->
<xsl:template match="comment()">
<!-- wrap comment in blanks in case it ends with hyphen, since - is not a valid comment terminator -->
<xsl:text>&amp;lt;!-- </xsl:text><xsl:value-of select="normalize-space(string(.))"/><xsl:text> --&amp;gt;</xsl:text>
<xsl:text>&#10;</xsl:text><xsl:text> </xsl:text>
<!-- *** need test for last -->
<xsl:text>&lt;br /&gt;&#10;</xsl:text>
</xsl:template>
	<!--  <xsl:text>&lt;PRE&gt;</xsl:text> -->
	<!--   <xsl:text>&lt;/PRE&gt;</xsl:text> -->


<!-- ****** XML processing-instruction ****** -->
<xsl:template match="processing-instruction()">
  <xsl:text>&lt;-- </xsl:text><xsl:value-of select="."/><xsl:text> --&gt;&#10;</xsl:text>
</xsl:template>


<!-- ****** Script node:  preserve CDATA delimiters ****** -->
<xsl:template match="Script[text() and not (normalize-space(string(.))='' or normalize-space(string(.))=' ')]">
  <!-- first tag name -->
  <xsl:text>&amp;lt;&lt;font color=&quot;navy&quot;&gt;</xsl:text><xsl:value-of select="local-name()"/><xsl:text>&lt;/font&gt;</xsl:text>
  <!-- next attributes, if any -->
  <xsl:apply-templates select="@*"/>
  <xsl:text>&amp;gt;&#10;&#10;&lt;div style="margin-left:25"&gt;&#10;</xsl:text>
  <xsl:apply-templates select="IS | field | comment()"/>
  <xsl:text>&lt;PRE&gt;&#10;</xsl:text>
  <xsl:text>&lt;b&gt;&amp;lt;![CDATA[&lt;/b&gt;&#10;</xsl:text>
      <xsl:for-each select="text()">
        <xsl:choose>
           <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and preceding::field"></xsl:when><!--<xsl:text>// stripped LF before field&#10;</xsl:text> -->
           <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and following::field"></xsl:when><!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
           <!-- *** need to convert '<' to &lt; -->
           <xsl:otherwise>
           	<xsl:call-template name="escape-lessthan-characters">
           	  <xsl:with-param name="inputValue" select="string(.)"/>
		</xsl:call-template>
           </xsl:otherwise><!--translate(,'javascript:','')-->
        </xsl:choose>
      </xsl:for-each>
  <!-- <xsl:text>&#10;</xsl:text> -->
  <xsl:text>&lt;b&gt;]]&amp;gt;&lt;/b&gt;</xsl:text>
  <xsl:text>&lt;/PRE&gt;&#10;</xsl:text>
  <xsl:text>&lt;/div&gt;&#10;&amp;lt;/&lt;font color=&quot;navy&quot;&gt;</xsl:text>
  <xsl:value-of select="local-name()"/>
  <xsl:text>&lt;/font&gt;&amp;gt;&#10;</xsl:text>
  <xsl:text>&lt;br /&gt;&#10;</xsl:text>
</xsl:template>

<xsl:template name="escape-lessthan-characters"> <!-- &#60; is &lt; -->
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
  <!-- <xsl:text>//######&#10;</xsl:text> -->
  <!-- <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="contains($inputString,'&#60;')">
      <xsl:value-of select="substring-before($inputString,'&#60;')"/>
        <xsl:text>&amp;lt;</xsl:text>
        <xsl:call-template name="escape-lessthan-characters">
          <xsl:with-param name="inputValue" select="substring-after($inputString,'&#60;')"/>
        </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
      <xsl:value-of select="$inputString"/>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>


<xsl:template name="escape-double-ampersand-characters"> <!-- &#38; is &amp; -->
  <xsl:param name="inputString" select="0"/>
  <xsl:text>//###amp###&#10;</xsl:text>
  <!-- <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
  <xsl:if test="contains($inputString,'&#38;&#38;')">
    <xsl:value-of select="substring-before($inputString,'&#38;&#38;')"/>
    <xsl:text>&amp;amp;&amp;amp;</xsl:text>
      <xsl:call-template name="escape-lessthan-characters">
        <xsl:with-param name="inputValue" select="substring-after($inputString,'&#38;&#38;')"/>
      </xsl:call-template>
    <xsl:if test="substring-after($inputString,'&#38;&#38;')">
    </xsl:if>
  </xsl:if>
</xsl:template>


<xsl:template name="ID-link-index">
<!-- bookmark index:  ExternProtoDeclare, ProtoDeclare, DEF -->
<xsl:if test="(//*[@DEF]) or (//*[local-name()='ProtoDeclare']) or (//*[local-name()='ExternProtoDeclare'])">
  <xsl:text>&#10;&#10;&lt;br /&gt;</xsl:text>
  <!-- DEF -->
  <xsl:text>&#10;&amp;lt;!-- </xsl:text>
  <xsl:text>&#10;&lt;center&gt;</xsl:text>
  <xsl:text>&#10;&lt;hr width="100%"/&gt;&#10;</xsl:text>
  <xsl:if test="//*[local-name()='ExternProtoDeclare']">
    <xsl:text>&lt;i&gt;Index&amp;nbsp;for&amp;nbsp;ExternProtoDeclare</xsl:text>
    <xsl:if test="count(//*[local-name()='ExternProtoDeclare']) > 1">
      <xsl:text>s</xsl:text>
    </xsl:if>
    <xsl:text>&lt;/i&gt;:&amp;nbsp;</xsl:text>
    <xsl:for-each select="//*[local-name()='ExternProtoDeclare']">
       <xsl:sort select="@DEF" order="ascending" case-order="upper-first" data-type="text"/>
       <xsl:text>&lt;a href=&quot;#ExternProtoDeclare_</xsl:text><xsl:value-of select="@name"/><xsl:text>"&gt;</xsl:text>
       <xsl:text>&lt;font color="purple"&gt;</xsl:text>
       <xsl:value-of select="@name"/>
       <xsl:text>&lt;/font&gt;</xsl:text>
       <xsl:text>&lt;/a&gt;</xsl:text>
       <xsl:if test="not(position()=last())">
         <xsl:text>,&#10;</xsl:text>
       </xsl:if>
    </xsl:for-each>
    <xsl:text>.  </xsl:text>
  </xsl:if>
  <xsl:if test="//*[local-name()='ProtoDeclare']">
    <xsl:text>&lt;i&gt;Index&amp;nbsp;for&amp;nbsp;ProtoDeclare</xsl:text>
    <xsl:if test="count(//*[local-name()='ProtoDeclare']) > 1">
      <xsl:text>s</xsl:text>
    </xsl:if>
    <xsl:text>&lt;/i&gt;:&amp;nbsp;</xsl:text>
    <xsl:for-each select="//*[local-name()='ProtoDeclare']">
       <xsl:sort select="@DEF" order="ascending" case-order="upper-first" data-type="text"/>
       <xsl:text>&lt;a href=&quot;#ProtoDeclare_</xsl:text><xsl:value-of select="@name"/><xsl:text>"&gt;</xsl:text>
       <xsl:text>&lt;font color="purple"&gt;</xsl:text>
       <xsl:value-of select="@name"/>
       <xsl:text>&lt;/font&gt;</xsl:text>
       <xsl:text>&lt;/a&gt;</xsl:text>
       <xsl:if test="not(position()=last())">
         <xsl:text>,&#10;</xsl:text>
       </xsl:if>
    </xsl:for-each>
    <xsl:text>.  </xsl:text>
    <xsl:if test="//*[local-name()='ExternProtoDeclare']">
      <xsl:text>&#10;&lt;br /&gt;&#10;</xsl:text>
    </xsl:if>
  </xsl:if>
  <xsl:if test="//*[@DEF]">
    <xsl:text>&lt;i&gt;Index&amp;nbsp;for&amp;nbsp;DEF</xsl:text>
    <xsl:if test="count(//*[@DEF]) > 1">
      <xsl:text>s</xsl:text>
    </xsl:if>
    <xsl:text>&lt;/i&gt;:&amp;nbsp;</xsl:text>
    <xsl:for-each select="//*[@DEF]">
       <xsl:sort select="@DEF" order="ascending" case-order="upper-first" data-type="text"/>
       <xsl:text>&lt;a href=&quot;#</xsl:text><xsl:value-of select="@DEF"/><xsl:text>"&gt;</xsl:text>
       <xsl:text>&lt;font color="maroon"&gt;</xsl:text>
       <xsl:value-of select="@DEF"/>
       <xsl:text>&lt;/font&gt;</xsl:text>
       <xsl:text>&lt;/a&gt;</xsl:text>
       <xsl:if test="not(position()=last())">
         <xsl:text>,&#10;</xsl:text>
       </xsl:if>
    </xsl:for-each>
    <xsl:text>.  </xsl:text>
    <xsl:if test="//*[local-name()='ProtoDeclare'] or //*[local-name()='ExternProtoDeclare']">
      <xsl:text>&#10;&lt;br /&gt;&#10;</xsl:text>
    </xsl:if>
  </xsl:if>
  <xsl:text>&#10;&lt;hr width="100%" /&gt;</xsl:text>
  <xsl:text>&#10;&lt;/center&gt;&#10;</xsl:text>
  <xsl:text>--&amp;gt;</xsl:text>
</xsl:if>
<xsl:text>&#10;&lt;br /&gt;&#10;&#10;</xsl:text>
</xsl:template>


</xsl:stylesheet>

