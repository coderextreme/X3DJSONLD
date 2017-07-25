<?xml version='1.0'?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0"
                xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
<!--
Copyright (c) 2004-2017 held by the author(s).  All rights reserved.

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
	XT:              <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform'>
-->

<!--
  <head>
   <meta name="filename"    content="X3dToHtml.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="revised"     content="6 March 2004" />
   <meta name="description" content="XSLT stylesheet to convert X3D source into an easily readable HTML page." />
   <meta name="url"         content="http://www.web3d.org/x3d/content/X3dToHtml.xslt" />
  </head>

Recommended tool:

- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
- Can also be used with Apache server

-->  

<!-- Problems and bugs:

 - autocorrection of String, array field delimiters in ProtoInstances (GeoVrmlExample1)
 - convert to tag form for simplicity

  -->
  
<xsl:strip-space elements="*" />
<xsl:output method="text" encoding="utf-8" media-type="text/html" indent="yes" cdata-section-elements="Script PackagedShader ShaderPart ShaderProgram"/>
<!-- omit-xml-declaration="no" -->


<!-- ****** root:  start of file ****** -->
<xsl:template match="/">
<xsl:text>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.01 Transitional//EN&quot;&gt;&#10;&#10;</xsl:text>
<!-- weird bug breaks margin spacing when url included:  &quot;http://www.w3.org/TR/html4/loose.dtd&quot;  -->

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
<xsl:text>&lt;meta name=&quot;generator&quot;   content=&quot;X3dToHtml.xsl, http://www.web3d.org/x3d/content/X3dToHtml.xsl&quot;&gt;&#10;</xsl:text>
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
    <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "http://www.web3d.org/x3d/content/x3d-compromise.dtd"&#10;</xsl:text>
    <!-- (no longer used in local doctype)  file://localhost/C: -->
    <xsl:text>                     "file:///www.web3d.org/x3d/content/x3d-compromise.dtd"&amp;gt;&#10;</xsl:text>
  </xsl:when>
  <xsl:otherwise>
    <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "http://www.web3d.org/specifications/x3d-3.0.dtd" "file:///www.web3d.org/specifications/x3d-3.0.dtd"></xsl:text>
    <!-- <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "http://www.web3d.org/specifications/x3d-3.0.dtd" "file:///www.web3d.org/x3d/content/x3d-3.0.dtd"></xsl:text>-->
    <!-- <xsl:text>&amp;lt;!DOCTYPE X3D PUBLIC "http://www.web3d.org/x3d/content/x3d-compact.dtd"&#10;</xsl:text> -->
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
  <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3dom.xslt X3dUnwrap.xslt X3dWrap.xslt and X3dToJson.xslt -->
  <!-- check values with/without .0 suffix since these are string checks and autogenerated/DOM output might have either -->
  <!-- do not check ProtoInstance fields or natively defined nodes, since they might have different user-defined defaults -->
  <!-- tool-bug workaround:  split big boolean queries into pieces to avoid overloading the Xalan/lotusxml query buffer -->
  <xsl:variable name="notImplicitEvent1"
	select="not(local-name(..)='AudioClip'	and	(local-name()='duration' or local-name()='isActive')) and
		not(contains(local-name(..),'Interpolator') and (local-name()='set_fraction' or local-name()='value_changed')) and
		not(contains(local-name(..),'Sequencer')    and (local-name()='set_fraction' or local-name()='value_changed' or local-name()='previous' or local-name()='next')) and
		not(((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='transparency' and (.='0' or .='0.0')))) and
        not(local-name(..)='CylinderSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint')) and
		not(local-name(..)='Fog'		and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound')) and
        not(((local-name(..)='IndexedFaceSet') or contains(local-name(..),'TriangleFanSet') or contains(local-name(..),'TriangleSet') or contains(local-name(..),'TriangleStripSet') or contains(local-name(..),'QuadSet')) and starts-with(local-name(),'set_') and contains(local-name(),'ndex')) and
		not(local-name(..)='IndexedLineSet' and	 local-name()='lineWidth') and
		not(local-name(..)='MovieTexture' and	(local-name()='duration' or local-name()='isActive')) and
		not(local-name(..)='NavigationInfo' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound'))
		" />
  <xsl:variable name="notImplicitEvent2"
	select="not(local-name(..)='PointSet'	and	 local-name()='pointSize') and
		not(local-name(..)='PlaneSensor' and	(local-name()='isActive' or local-name()='translation' or local-name()='trackPoint')) and
		not(local-name(..)='ProximitySensor' and (local-name()='isActive' or local-name()='position' or local-name()='orientation' or
						 	 local-name()='enterTime' or local-name()='exitTime')) and
		not(local-name(..)='SphereSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint')) and
		not(local-name(..)='TimeSensor'	and	(local-name()='isActive' or local-name()='cycleTime' or local-name()='set_fraction' or
							 local-name()='time')) and
		not(local-name(..)='TouchSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='hitNormal' or
							 local-name()='touchTime' or local-name()='hitPoint' or local-name()='hitTexCoord')) and
		not(local-name(..)='Viewpoint'	  and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine')) and
		not(local-name(..)='GeoViewpoint' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine'))
		" />
  <xsl:variable name="notDefaultFieldValue1"
	select="not( local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) and
		not( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) and
		not( local-name(..)='X3D' and local-name()='version' and (.='3.0')) and
		not( local-name(..)='AudioClip'	and
						((local-name()='loop' and .='false') or
						 (local-name()='pitch' and (.='1' or .='1.0')) or
						 (local-name()='startTime' and (.='0' or .='0.0')) or
						 (local-name()='stopTime' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not(((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='transparency' and (.='0' or .='0.0')))) and
        not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (.='0 1 0' or .='0.0 1.0 0.0')) and
		not( local-name(..)='BooleanToggle' and local-name()='toggle' and .='false') and
        not( local-name(..)='Box'	and local-name()='size' and (.='2 2 2' or .='2.0 2.0 2.0')) and
		not( local-name(..)='Collision'	and local-name()='collide' and .='true') and
		not( local-name(..)='Cone' and	((local-name()='bottomRadius' and (.='1' or .='1.0')) or
						 (local-name()='height' and (.='2' or .='2.0')) or
						 (local-name()='side' and .='true') or
						 (local-name()='bottom' and .='true'))) and
		not( local-name(..)='Cylinder' and
						((local-name()='height' and (.='2' or .='2.0')) or
						 (local-name()='radius' and (.='1' or .='1.0')) or
						 (local-name()='bottom' and .='true') or
						 (local-name()='side' and .='true') or
						 (local-name()='top' and .='true'))) and
		not( local-name(..)='CylinderSensor' and
						((local-name()='autoOffset' and .='true') or
						 (local-name()='enabled' and .='true') or
						 (local-name()='diskAngle' and .='0.262') or
						 (local-name()='offset' and (.='0' or .='0.0')) or
						 (local-name()='maxAngle' and (.='-1' or .='-1.0')) or
						 (local-name()='minAngle' and (.='0' or .='0.0'))))" />
  <xsl:variable name="notDefaultFieldValue2"
	select="not( local-name(..)='DirectionalLight' and
						((local-name()='ambientIntensity' and (.='0' or .='0.0')) or
						 (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='direction' and (.='0 0 -1' or .='0.0 0.0 -1.0')) or
                         (local-name()='global' and .='false') or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='on' and .='true'))) and
		not((local-name(..)='ElevationGrid' or local-name(..)='GeoElevationGrid') and
						((local-name()='ccw' and .='true') or
						 (local-name()='colorPerVertex' and .='true') or
						 (local-name()='normalPerVertex' and .='true') or
						 (local-name()='solid' and .='true') or
						 (local-name()='xDimension' and (.='0' or .='0.0')) or
						 (local-name()='xSpacing' and (.='1' or .='1.0')) or
						 (local-name()='zDimension' and (.='0' or .='0.0')) or
						 (local-name()='zSpacing' and (.='1' or .='1.0')) or
						 (local-name()='creaseAngle' and (.='0' or .='0.0')))) and
		not( local-name(..)='Extrusion'	and
						((local-name()='beginCap' and .='true') or
						 (local-name()='ccw' and .='true') or
						 (local-name()='convex' and .='true') or
						 (local-name()='endCap' and .='true') or
						 (local-name()='solid' and .='true') or
						 (local-name()='creaseAngle' and (.='0' or .='0.0')) or
						 (local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='scale' and (.='1 1' or .='1.0 1.0')) or
						 (local-name()='crossSection' and .='1 1, 1 -1, -1 -1, -1 1, 1 1') or
						 (local-name()='crossSection' and .='1 1 1 -1 -1 -1 -1 1 1 1') or
						 (local-name()='spine' and .='0 0 0, 0 1 0') or
						 (local-name()='spine' and .='0 0 0 0 1 0')))" />
  <xsl:variable name="notDefaultFieldValue3"
	select="not( local-name(..)='Fog' and 	((local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='visibilityRange' and (.='0' or .='0.0')) or
						 (local-name()='fogType' and .='LINEAR'))) and
		not( local-name(..)='FontStyle'	and
						((local-name()='horizontal' and .='true') or
						 (local-name()='leftToRight' and .='true') or
						 (local-name()='topToBottom' and .='true') or
						 (local-name()='size' and (.='1' or .='1.0')) or
						 (local-name()='spacing' and (.='1' or .='1.0')) or
						 (local-name()='family' and .='&quot;SERIF&quot;') or
						 (local-name()='justify' and .='&quot;BEGIN&quot;') or
						 (local-name()='style' and .='PLAIN'))) and
		not( local-name(..)='ImageTexture' and
						((local-name()='repeatS' and .='true') or
						 (local-name()='repeatT' and .='true'))) and
		not( local-name(..)='IndexedFaceSet' and
						((local-name()='ccw' and .='true') or
						 (local-name()='colorPerVertex' and .='true') or
						 (local-name()='convex' and .='true') or
						 (local-name()='normalPerVertex' and .='true') or
						 (local-name()='solid' and .='true') or
						 (local-name()='creaseAngle' and (.='0' or .='0.0')))) and
		not( local-name(..)='IndexedLineSet' and local-name()='colorPerVertex' and .='true') and
		not( local-name(..)='LoadSensor' and
						((local-name()='enabled' and .='true') or
                         (local-name()='timeOut' and (.='0' or .='0.0')))) and
		not( local-name(..)='LOD'	and	((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='forceTransitions' and .='false'))) and
        not( ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))	and
						((local-name()='ambientIntensity' and .='0.2') or
						 (local-name()='diffuseColor' and .='0.8 0.8 0.8') or
						 (local-name()='emissiveColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='shininess' and .='0.2') or
						 (local-name()='specularColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='transparency' and (.='0' or .='0.0')))) and
        not( local-name(..)='TwoSidedMaterial'	and
                      ((local-name()='backAmbientIntensity' and .='0.2') or
                      (local-name()='backDiffuseColor' and .='0.8 0.8 0.8') or
                      (local-name()='backEmissiveColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='backShininess' and .='0.2') or
                      (local-name()='backSpecularColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='backTransparency' and (.='0' or .='0.0'))))" />
  <xsl:variable name="notDefaultFieldValue4"
	select="not( local-name(..)='MovieTexture' and
						((local-name()='loop' and .='false') or
						 (local-name()='speed' and (.='1' or .='1.0')) or
						 (local-name()='startTime' and (.='0' or .='0.0')) or
						 (local-name()='stopTime' and (.='0' or .='0.0')) or
						 (local-name()='repeatS' and .='true') or
						 (local-name()='repeatT' and .='true'))) and
		not( local-name(..)='NavigationInfo' and
						((local-name()='avatarSize' and .='0.25 1.6 0.75') or
						 (local-name()='headlight' and .='true') or
						 (local-name()='speed' and (.='1' or .='1.0')) or
                         (local-name()='transitionTime' and (.='1' or .='1.0')) or
                         (local-name()='transitionType' and (.='&quot;LINEAR&quot;')) or
						 (local-name()='type' and (.='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
						 (local-name()='visibilityLimit' and (.='0' or .='0.0')))) and
		not( local-name(..)='PixelTexture' and
						((local-name()='repeatS' and .='true') or
						 (local-name()='repeatT' and .='true') or
						 (local-name()='image' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='PlaneSensor' and
						((local-name()='autoOffset' and .='true') or
						 (local-name()='enabled' and .='true') or
						 (local-name()='maxPosition' and (.='-1 -1' or .='-1.0 -1.0')) or
						 (local-name()='minPosition' and (.='0 0' or .='0.0 0.0')) or
						 (local-name()='offset' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='PointLight' and
						((local-name()='ambientIntensity' and (.='0' or .='0.0'))or
						 (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
						 (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                         (local-name()='global' and .='true') or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='on' and .='true') or
						 (local-name()='radius' and (.='100' or .='100.0'))))" />
  <xsl:variable name="notDefaultFieldValue5"
	select="not( local-name(..)='ProximitySensor' and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='enabled' and .='true'))) and
		not( local-name(..)='Script' and ((local-name()='directOutput' and .='false') or
						 (local-name()='mustEvaluate' and .='false'))) and
		not( local-name(..)='Sound' and ((local-name()='direction' and (.='0 0 1' or .='0.0 0.0 1.0')) or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='priority' and (.='0' or .='0.0')) or
						 (local-name()='maxBack' and (.='10' or .='10.0')) or
						 (local-name()='maxFront' and (.='10' or .='10.0')) or
						 (local-name()='minBack' and (.='1' or .='1.0'))  or
						 (local-name()='minFront' and (.='1' or .='1.0')) or
						 (local-name()='spatialize' and .='true'))) and
		not( local-name(..)='Sphere' and  local-name()='radius' and (.='1' or .='1.0')) and
		not( local-name(..)='SphereSensor' and
						((local-name()='autoOffset' and .='true') or
						 (local-name()='enabled' and .='true') or
                         (local-name()='offset' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0')) and
        not( local-name(..)='Switch' and ../IS/connect[@nodeField='whichChoice'])))" />
        <!-- Switch whichChoice='-1' is very significant and somewhat counterintuitive/nonobvious, so otherwise show it. -->
        <!--	  and not( local-name(..)='Switch' and  local-name()='whichChoice' and (.='-1' or .='-1.0')) -->
  <xsl:variable name="notDefaultFieldValue6"
	select="not( local-name(..)='SpotLight'	and
						((local-name()='ambientIntensity' and (.='0' or .='0.0')) or
						 (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
                         (local-name()='beamWidth' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854'))) or
                         (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                         (local-name()='cutOffAngle' and (.='1.5708' or .='1.570796')) or
						 (local-name()='direction' and (.='0 0 -1' or .='0.0 0.0 -1.0')) or
                         (local-name()='global' and .='true') or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='on' and .='true') or
						 (local-name()='radius' and (.='100' or .='100.0')))) and
		not( local-name(..)='Text'   and  ((local-name()='maxExtent' and (.='0' or .='0.0')) or (local-name()='solid' and (.='false')))) and
		not( local-name(..)='TextureTransform' and
						((local-name()='center' and (.='0 0' or .='0.0 0.0')) or
						 (local-name()='rotation' and (.='0' or .='0.0')) or
						 (local-name()='scale ' and (.='1 1' or .='1.0 1.0')) or
						 (local-name()='translation' and (.='0 0' or .='0.0 0.0'))))" />
  <xsl:variable name="notDefaultFieldValue7"
	select="not( local-name(..)='TimeSensor' and
						((local-name()='cycleInterval' and (.='1' or .='1.0')) or
						 (local-name()='enabled' and .='true') or
						 (local-name()='startTime' and (.='0' or .='0.0')) or
						 (local-name()='stopTime' and (.='0' or .='0.0')) or
						 (local-name()='loop' and .='false'))) and
		not( local-name(..)='TouchSensor' and
						  local-name()='enabled' and .='true') and
		not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='Viewpoint' and
						((local-name()='fieldOfView' and .='0.785398') or
						 (local-name()='jump' and .='true') or
						 (local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='position' and (.='0 0 10' or .='0.0 0.0 10.0')))) and
		not( local-name(..)='VisibilitySensor' and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='enabled' and .='true') or
						 (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='enterTime' and (.='0' or .='0.0')) or
						 (local-name()='exitTime'  and (.='0' or .='0.0')) or
						 (local-name()='isActive' and .='false')))" />
        <xsl:variable name="notDefaultFieldValue8"
                      select="not( local-name(..)='FillProperties' and
                      (((local-name()='filled' and .='true') or
                      (local-name()='hatched' and .='true') or
                      local-name()='hatchStyle' and (.='1' or .='1.0')) or
                      (local-name()='hatchColor' and (.='1 1 1' or .='1.0 1.0 1.0')))) and
                      not( local-name(..)='LineProperties' and
                      ((local-name()='applied' and .='true') or
                      (local-name()='linetype' and (.='1')) or
                      (local-name()='linewidthScaleFactor' and (.='0' or .='0.0')))) and
                      not( local-name(..)='ClipPlane' and
                      ((local-name()='enabled' and .='true') or
                      (local-name()='plane' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0')))) and
                      not( local-name(..)='ViewpointGroup' and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='displayed' and .='true') or
                      (local-name()='retainUserOffsets' and .='false') or
                      (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue9"
                      select="not( local-name(..)='MultiTexture' and
                      ((local-name()='alpha' and (.='1' or .='1.0')) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')))) and
                      not( local-name(..)='TextureCoordinateGenerator' and
                      ((local-name()='mode' and .='SPHERE'))) and
                      not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                      ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and .='false')) and
                      not( local-name(..)='PixelTexture3D' and
                      (local-name()='image' and (.='0 0 0 0')))" />
  <xsl:variable name="notDefaultContainerField1"
	select="not((local-name()='containerField' and .='children')	and 
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
			 local-name(..)='Transform' or
			 local-name(..)='Viewpoint' or
			 local-name(..)='WorldInfo')) and
		not((local-name()='containerField' and .='geometry')	and
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
	select="not((local-name()='containerField' and .='source')	and (local-name(..)='AudioClip')) and
		not((local-name()='containerField' and .='appearance')	and (local-name(..)='Appearance')) and
		not((local-name()='containerField' and .='material')	and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))) and
		not((local-name()='containerField' and .='color')	and (local-name(..)='ColorNode' or local-name(..)='Color')) and
		not((local-name()='containerField' and .='coord')	and (local-name(..)='Coordinate')) and
		not((local-name()='containerField' and .='normal')	and (local-name(..)='Normal')) and
		not((local-name()='containerField' and .='texture')	and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
		not((local-name()='containerField' and .='fontStyle')	and (local-name(..)='FontStyle')) and
		not((local-name()='containerField' and .='texCoord')	and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
		not((local-name()='containerField' and .='textureTransform')	and (local-name(..)='TextureTransform'))" />
  <xsl:variable name="notDefaultContainerField3"
                      select="not((local-name()='containerField' and .='geometry')	and
                      ((local-name(..)='Arc2D') or (local-name(..)='ArcClose2D') or (local-name(..)='Circle2D') or (local-name(..)='Disk2D') or (local-name(..)='Polyline2D') or (local-name(..)='Polypoint2D') or (local-name(..)='Rectangle2D') or (local-name(..)='TriangleSet2D') or contains(local-name(..),'QuadSet'))) and
                      not((local-name()='containerField' and .='voxels')	and
                      ((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))) and
                      not((local-name()='containerField' and .='renderStyle')	and
                      ((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')))" />
  <xsl:variable name="notDefaultHAnim"
	select="not( local-name(..)='Joint' and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='limitOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='stiffness' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='Segment' and
						((local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
						 (local-name()='centerOfMass' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='mass' and (.='0' or .='0.0')) or
						 (local-name()='momentsOfInertia' and
						  (.='0 0 0 0 0 0 0 0 0' or .='0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0')))) and
		not( local-name(..)='Site' and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='Humanoid' and
						((local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
						 (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
  <xsl:variable name="notDefaultNurbs"
                      select="not((local-name(..)='NurbsCurve' or local-name(..)='NurbsCurve2D') and
                      ((local-name()='tessellation' and (.='0')) or
                      (local-name()='closed' and (.='false')) or
                      (local-name()='order' and (.='3')))) and
                      not(local-name(..)='NurbsSet' and
                      ((local-name()='tessellationScale' and (.='1' or .='1.0')) or 
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator') and
                      ((local-name()='order' and (.='3' or .='3.0')))) and
                      not((local-name(..)='NurbsSurface' or local-name(..)='NurbsPatchSurface' or local-name(..)='NurbsTextureSurface' or local-name(..)='NurbsTrimmedSurface') and
                      ((local-name()='uTessellation' and (.='0')) or
                      (local-name()='vTessellation' and (.='0')) or
                      (local-name()='uDimension' and (.='0')) or
                      (local-name()='vDimension' and (.='0')) or
                      (local-name()='uOrder' and (.='3')) or
                      (local-name()='vOrder' and (.='3')) or
                      (local-name()='solid' and (.='true')) or
                      ((local-name()='uClosed' or local-name()='vClosed') and (.='false')))) and
                      not((local-name(..)='NurbsSurfaceInterpolator' or local-name(..)='NurbsTextureCoordinate') and
                      ((local-name()='uDimension' and (.='0')) or
                      (local-name()='vDimension' and (.='0')) or
                      (local-name()='uOrder' and (.='3')) or
                      (local-name()='vOrder' and (.='3')))) and
                      not((local-name(..)='NurbsCurve' or local-name(..)='NurbsSwungSurface') and
                      ((local-name()='ccw' or local-name()='solid') and (.='true')))" />
        <xsl:variable name="notDefaultGeometry2D"
                      select="not((local-name(..)='Arc2D' or local-name(..)='ArcClose2D') and
                      ((local-name()='startAngle' and (.='0' or .='0.0')) or
                       (local-name()='endAngle' and (.='1.5708' or .='1.570796')) or
                       (local-name()='radius' and (.='1' or .='1.0')) or
                       (local-name()='solid' and (.='false')))) and
                      not(local-name(..)='Circle2D' and
                      ((local-name()='radius' and (.='1' or .='1.0')))) and
                      not(local-name(..)='Disk2D' and
                      ((local-name()='innerRadius' and (.='0' or .='0.0')) or
                       (local-name()='outerRadius' and (.='1' or .='1.0')) or
                       (local-name()='solid' and (.='false')))) and
                      not((local-name(..)='Rectangle2D') and
                      ((local-name()='size' and ((.='2 2') or (.='2.0 2.0'))) or
                       (local-name()='solid' and (.='false')))) and
                      not((local-name(..)='TriangleSet2D') and
                      ((local-name()='solid' and (.='false'))))" />
        <xsl:variable name="notDefaultVolume"
                      select="not(((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))	and
                      ((local-name()='dimensions' and (.='1 1 1' or .='1.0 1.0 1.0')) or 
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      ((local-name()='contourStepSize' or local-name()='surfaceTolerance') and (.='0' or .='0.0'))) and
                      not(((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')) and
                      (local-name()='enabled' and .='true')) and
                      not((local-name(..)='BlendedVolumeStyle')	and
                      (((local-name()='weightConstant1' or local-name()='weightConstant2') and (.='.5' or .='0.5')) or
                       ((local-name()='weightFunction1' or local-name()='weightFunction2') and (.='CONSTANT')))) and
                      not((local-name(..)='BoundaryEnhancementVolumeStyle')	and
                      (((local-name()='boundaryOpacity') and (.='.9' or .='0.9')) or
                       ((local-name()='opacityFactor') and (.='2' or .='2.0')) or
                       ((local-name()='retainedOpacity') and (.='.2' or .='0.2')))) and
                      not((local-name(..)='CartoonVolumeStyle')	and
                      (((local-name()='colorSteps') and (.='4')) or
                       ((local-name()='orthogonalColor') and (.='1 1 1 1' or .='1.0 1.0 1.0 1.0')) or
                       ((local-name()='parallelColor') and (.='0 0 0 1' or .='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='EdgeEnhancementVolumeStyle')	and
                      (((local-name()='gradientThreshold') and (.='.4' or .='0.4')) or
                       ((local-name()='edgeColor') and (.='0 0 0 1' or .='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      (((local-name()='surfaceTolerance') and (.='0' or .='0.0')))) and
                      not((local-name(..)='ProjectionVolumeStyle')	and
                      (((local-name()='intensityThreshold') and (.='0' or .='0.0')) or
                       ((local-name()='type') and (.='MAX')))) and
                      not((local-name(..)='ShadedVolumeStyle')	and
                      (((local-name()='lighting' or local-name()='shadows') and (.='false')) or
                       ((local-name()='phaseFunction') and (.='Henyey-Greenstein')))) and
                      not((local-name(..)='SilhouetteEnhancementVolumeStyle')	and
                      (((local-name()='silhouetteBoundaryOpacity') and (.='0' or .='0.0')) or
                       ((local-name()='silhouetteRetainedOpacity') and (.='1' or .='1.0')) or
                       ((local-name()='silhouetteSharpness') and (.='.5' or .='0.5')))) and
                      not((local-name(..)='ToneMappedVolumeStyle')	and
                      (((local-name()='colorSteps') and (.='4')) or
                       ((local-name()='coolColor') and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0')) or
                       ((local-name()='warmColor') and (.='1 1 0 0' or .='1.0 1.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFollower"
                      select="not(contains(local-name(..),'Chaser') and
                      ((local-name()='duration' and (.='1' or .='1.0')))) and
                      not(contains(local-name(..),'Damper') and
                      ((local-name()='tau' and (.='.3' or .='0.3')) or
                      (local-name()='tolerance' and (.='-1' or .='-1.0')) or
                      (local-name()='order ' and (.='3')))) and
                      not((local-name(..)='ColorChaser' or local-name(..)='ColorDamper') and
                      ((local-name()='initialDestination' and (.='.8 .8 .8' or .='0.8 0.8 0.8')) or
                      (local-name()='initialValue' and (.='.8 .8 .8' or .='0.8 0.8 0.8')))) and
                      not((local-name(..)='CoordinateChaser' or local-name(..)='CoordinateDamper' or local-name(..)='PositionChaser' or local-name(..)='PositionDamper') and
                      ((local-name()='initialDestination' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='initialValue' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not((local-name(..)='PositionChaser2D' or local-name(..)='PositionDamper2D') and
                      ((local-name()='initialDestination' and (.='0 0' or .='0.0 0.0')) or
                      (local-name()='initialValue' and (.='0 0' or .='0.0 0.0')))) and
                      not((local-name(..)='OrientationChaser' or local-name(..)='OrientationDamper') and
                      ((local-name()='initialDestination' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 0 1 0' or .='0.0 0.0 1.0 0.0')) or
                      (local-name()='initialValue' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 0 1 0' or .='0.0 0.0 1.0 0.0')))) and
                      not((local-name(..)='ScalarChaser' or local-name(..)='ScalerDamper') and
                      ((local-name()='initialDestination' and (.='0' or .='0.0')) or
                      (local-name()='initialValue' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultShader"
                      select="not((local-name(..)='FloatVertexAttribute') and ((local-name()='numComponents' and (.='4'))))" />
		              <!-- retained due to importance:
                      and
                      not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and ((local-name()='type' and (.='VERTEX')))) -->
        <xsl:variable name="notDefaultRigidBodyPhysics"
                      select="not((local-name(..)='CollidableOffset' or local-name(..)='CollidableShape') and
                      (((local-name()='enabled') and (.='true')) or
                      ((local-name()='rotation') and (.='0 0 1 0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0.0 0.0 1.0 0.0')) or
                      ((local-name()='translation') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='bboxCenter')	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='bboxSize')	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='CollisionSpace') and
                      ((local-name()='enabled' and (.='true')) or
                      (local-name()='useGeometry' and (.='false')) or
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='BallJoint' or local-name(..)='DoubleAxisHingeJoint' or local-name(..)='MotorJoint' or local-name(..)='SingleAxisHingeJoint' or local-name(..)='SliderJoint' or local-name(..)='UniversalJoint') and
                      ((local-name()='forceOutput')	and	(.='&quot;NONE&quot;'))) and
                      not((local-name(..)='BallJoint') and
                      ((local-name()='anchorPoint')	and	(.='0 0 0' or .='0.0 0.0 0.0'))) and
                      not((local-name(..)='CollisionCollection') and
                      (((local-name()='appliedParameters') and (.='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce') and (.='0' or .='0.0')) or
                      ((local-name()='enabled') and (.='true')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipFactors' or local-name()='surfaceSpeed') and (.='0 0' or .='0.0 0.0')) or
                      ((local-name()='minBounceSpeed') and (.='.1' or .='0.1')) or
                      ((local-name()='softnessConstantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='CollisionSensor') and
                      (local-name()='enabled' and .='true')) and
                      not((local-name(..)='Contact') and
                      (((local-name()='appliedParameters') and (.='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce' or local-name()='depth' or local-name()='minbounceSpeed') and (.='0' or .='0.0')) or
                      ((local-name()='contactNormal') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipCoefficients' or local-name()='surfaceSpeed') and (.='0 0' or .='0.0 0.0')) or
                      ((local-name()='frictionDirection') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='position') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='softnessConstantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='DoubleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='desiredAngularVelocity1' or local-name()='desiredAngularVelocity2' or local-name()='maxTorque1' or local-name()='maxTorque2' or local-name()='stopBounce1' or local-name()='suspensionForce') and (.='0' or .='0.0')) or
                      ((local-name()='maxAngle1') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle1') and (.='-3.1416' or .='-3.14159' or .='-3.141593' or .='-3.1415926' or .='-3.14159263' or .='-3.141592653')) or
                      ((local-name()='stopConstantForceMix1') and (.='.0001' or .='0.0001')) or
                      ((local-name()='stopErrorCorrection1' or local-name()='suspensionErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='MotorJoint') and
                      (((local-name()='axis1Angle' or local-name()='axis2Angle' or local-name()='axis3Angle' or local-name()='axis1Torque' or local-name()='axis2Torque' or local-name()='axis3Torque' or local-name()='stop1Bounce' or local-name()='stop2Bounce' or local-name()='stop3Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection' or local-name()='stop3ErrorCorrection') and (.='.8' or .='0.8')) or
                      ((local-name()='motor1Axis' or local-name()='motor2Axis' or local-name()='motor3Axis') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='enabledAxes') and (.='1')) or
                      ((local-name()='autoCalc') and (.='false')))) and
                      not((local-name(..)='RigidBody') and
                      (((local-name()='angularDampingFactor') and (.='.001' or .='0.001')) or
                      ((local-name()='angularVelocity' or local-name()='centerOfMass' or local-name()='finiteRotationAxis' or local-name()='linearVelocity' or local-name()='position') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (.='0' or .='0.0')) or
                      ((local-name()='mass') and (.='1' or .='1.0')) or
                      ((local-name()='enabled' or local-name()='useGlobalGravity') and (.='true')) or
                      ((local-name()='autoDamp' or local-name()='autoDisable' or local-name()='fixed' or local-name()='useFiniteRotation') and (.='false')) or
                      ((local-name()='inertia') and (.='1 0 0 0 1 0 0 0 1' or .='1.0 0 0 0 1.0 0 0 0 1.0' or .='1.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 1.0')) or
                      ((local-name()='linearDampingFactor') and (.='.001' or .='0.001')) or
                      ((local-name()='orientation') and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')))) and
                      not((local-name(..)='RigidBodyCollection') and
                      (((local-name()='autoDisable' or local-name()='preferAccuracy') and (.='false')) or
                      ((local-name()='enabled') and (.='true')) or
                      ((local-name()='constantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='contactSurfaceThickness' or local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (.='0' or .='0.0')) or
                      ((local-name()='errorCorrection') and (.='.8' or .='0.8')) or
                      ((local-name()='gravity') and (.='0 -9.8 0' or .='0.0 -9.8 0.0')) or
                      ((local-name()='iterations') and (.='10')) or
                      ((local-name()='maxCorrectionSpeed') and (.='-1' or .='-1.0')))) and
                      not((local-name(..)='SingleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='maxAngle') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle') and (.='-3.1416' or .='-3.14159' or .='-3.141593' or .='-3.1415926' or .='-3.14159263' or .='-3.141592653')) or
                      ((local-name()='stopBounce') and (.='0' or .='0.0')) or
                      ((local-name()='stopErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='SliderJoint') and
                      (((local-name()='axis') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='maxSeparation' or local-name()='stopErrorCorrection') and (.='1' or .='1.0')) or
                      ((local-name()='minSeparation' or local-name()='sliderForce' or local-name()='stopBounce') and (.='0' or .='0.0')) or
                      ((local-name()='stopErrorCorrection') and (.='1' or .='1.0')))) and
                      not((local-name(..)='UniversalJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='stopBounce1' or local-name()='stop2Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection') and (.='.8' or .='0.8'))))" />
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
                $notDefaultHAnim       and
                $notDefaultNurbs       and
                $notDefaultGeometry2D  and
                $notDefaultVolume      and
                $notDefaultFollower    and
                $notDefaultShader      and
                $notDefaultRigidBodyPhysics and
                $notDefaultContainerField1  and
                $notDefaultContainerField2  and
                $notDefaultContainerField3  and
                not(local-name()='containerField' and .='') and
                not(local-name()='class' and .='') and
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
      <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
      <xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='protoField' and (local-name(..)='connect')">
      <xsl:text>&lt;font color=&quot;purple&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name()='nodeField' and local-name(..)='connect' and local-name(../..)='IS' and local-name(../../..)='Script') or (local-name()='name' and local-name(..)='field' and local-name(../..)='Script')">
      <xsl:text>&lt;font color=&quot;black&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:when>
    <!-- print out urls containing javascript source without further ado -->
    <xsl:when test="(local-name()='url' and starts-with(normalize-space(.),'javascript:'))">
      <xsl:text>&lt;PRE&gt;</xsl:text>
      <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
      <xsl:text>&lt;/PRE&gt;</xsl:text> blah 
    </xsl:when>
    <!-- protect simple text references as is -->
    <xsl:when test="(local-name(..)='meta') and (../@name='reference') and not(contains(.,'http://')) and not(contains(.,'https://')) and not(contains(.,'file:')) and contains(normalize-space(.),' ')">
      <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/></xsl:when>
    <!-- make single url reference into actual A HREF= link -->
    <xsl:when test="(local-name(..)='meta' and (../@name='url' or ../@name='filename' or ../@name='reference' or ../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or contains(../@name,'permission')) and local-name()='content') and not(contains(normalize-space(.),' '))">
      <xsl:text>&lt;a href=</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text></xsl:when>
<!-- <xsl:when test="(local-name(..)='meta' and (../@name='url' or ../@name='filename' or ../@name='reference' or ../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or contains(../@name,'permission')) and local-name()='content') and starts-with(normalize-space(.),'&quot;') and not(contains(normalize-space(.),'&quot; &quot;')) and (contains(.,'.') or starts-with(normalize-space(.),'Makefile')) and not(substring(normalize-space(.),string-length(normalize-space(.))) = '.')">
      <xsl:text>&lt;a href=</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&gt;</xsl:text><xsl:value-of select="substring-before(substring-after(normalize-space(.),'&quot;'),'&quot;')" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text></xsl:when> -->
    <!-- break and make multiple url references into actual A HREF= links -->
    <xsl:when test="(local-name()='url' or contains(local-name(), 'Url'))">
      <xsl:call-template name="URL-ize-MFString-elements">
        <xsl:with-param name="list" select="normalize-space(.)"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="(local-name(..)='field' or local-name(..)='fieldValue') and (contains(../@name, 'Url') or contains(../@name, 'url')) and (local-name() = 'value')">
      <xsl:call-template name="URL-ize-MFString-elements">
        <xsl:with-param name="list" select="normalize-space(.)"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and (../@name='url' or ../@name='filename' or ../@name='reference' or ../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or contains(../@name,'permission')) and local-name()='content') and starts-with(normalize-space(.),'&quot;') and contains(normalize-space(.),'&quot; &quot;')">
      <xsl:call-template name="URL-ize-MFString-elements">
        <xsl:with-param name="list" select="normalize-space(.)"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:when test="(local-name(..)='field' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare') and (local-name()='documentation')">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="starts-with(normalize-space(.),'http://') or starts-with(normalize-space(.),'https://')">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='content') and (../@name='mail' or ../@name='email' or ../@name='e-mail' or ../@name='contact')">
      <xsl:text>&lt;a href="</xsl:text>
      <xsl:if test="contains(.,'@') and not(contains(.,'mailto:'))">
        <xsl:text>mailto:</xsl:text>
      </xsl:if>
      <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
      <xsl:text>"&gt;</xsl:text>
      <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='content') and (../@name='drawing' or ../@name='image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='photo' or ../@name='photograph') and (contains(.,'http://') or contains(.,'https://') or contains(.,'file://') or not(contains(.,' ')))">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='generator') and starts-with(.,'Xvl3ToX3d, ')">
      <xsl:variable name="containedUrl" select="substring-after(.,'Xvl3ToX3d, ')"/>
      <xsl:text>Xvl3ToX3d, </xsl:text>
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>" target="_blank"&gt;</xsl:text><xsl:value-of select="$containedUrl" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="(local-name(..)='meta' and local-name()='content' and ../@name='generator') and (contains(.,'.') and (not(contains(.,' '))))">
      <xsl:text>&lt;a href="</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>"&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='url'">
      <xsl:text>&lt;font color=&quot;black&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='name' and (local-name(..)='field' or local-name(..)='fieldValue' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare' or local-name(..)='ProtoInstance')">
      <xsl:if test="(local-name()='name') and (local-name(..)='ProtoDeclare')">
         <xsl:text>&lt;a name=&quot;ProtoDeclare_</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      </xsl:if>
      <xsl:if test="(local-name()='name') and (local-name(..)='ExternProtoDeclare')">
         <xsl:text>&lt;a name=&quot;ExternProtoDeclare_</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      </xsl:if>
      <xsl:text>&lt;font color=&quot;purple&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/><xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:if test="(local-name()='name') and (local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare')">
         <xsl:text>&lt;/a&gt;</xsl:text>
      </xsl:if>
    </xsl:when>
    <xsl:when test="local-name()='DEF'">
      <xsl:text>&lt;a name=&quot;</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      <xsl:text>&lt;font color=&quot;maroon&quot;&gt;</xsl:text>
      <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
      <xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>
    <xsl:when test="local-name()='USE' or (local-name(..)='ROUTE' and contains(local-name(),'Node')) or (local-name(..)='USE' and local-name()='node')">
      <xsl:text>&lt;a href=&quot;#</xsl:text><xsl:value-of select="."/><xsl:text>"&gt;</xsl:text>
      <xsl:text>&lt;font color=&quot;maroon&quot;&gt;</xsl:text>
      <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
      <xsl:text>&lt;/font&gt;</xsl:text>
      <xsl:text>&lt;/a&gt;</xsl:text>
    </xsl:when>    
    <xsl:when test="local-name()='IS'">
      <xsl:call-template name="format-IS-pairs">
        <xsl:with-param name="list" select="normalize-space(.)"/>
      </xsl:call-template>
    </xsl:when>
    <!-- meta warning -->
    <xsl:when test="local-name(..)='meta' and (local-name()='name' and .='warning') or (../@*[local-name()='name' and .='warning'])">
      <!-- remove extraneous space for better formatting, even though this might obscure some content problems/preferences. -->
      <xsl:text>&lt;b&gt;&lt;font color=&quot;#cc5500&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(.)"/><xsl:text>&lt;/font&gt;&lt;/b&gt;</xsl:text>
    </xsl:when>
    <xsl:otherwise>
      <!-- remove extraneous space for better formatting, even though this might obscure some content problems/preferences. -->
      <xsl:text>&lt;font color=&quot;teal&quot;&gt;</xsl:text><xsl:value-of select="normalize-space(.)"/><xsl:text>&lt;/font&gt;</xsl:text>
    </xsl:otherwise>
 <!-- <xsl:text></xsl:text><xsl:value-of select="normalize-space(.)"/></xsl:otherwise> -->
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
  <xsl:variable name="wlist" select="concat(normalize-space($list),' ')"/>
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
  <xsl:variable name="wlist" select="concat(normalize-space($list),' ')"/>
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
<xsl:text>&amp;lt;!-- </xsl:text><xsl:value-of select="normalize-space(.)"/><xsl:text> --&amp;gt;</xsl:text>
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
<xsl:template match="Script[text() and not (normalize-space(.)='' or normalize-space(.)=' ')]">
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
           <xsl:when test="(normalize-space(.)='' or normalize-space(.)=' ') and preceding::field"></xsl:when><!--<xsl:text>// stripped LF before field&#10;</xsl:text> -->
           <xsl:when test="(normalize-space(.)='' or normalize-space(.)=' ') and following::field"></xsl:when><!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
           <!-- *** need to convert '<' to &lt; -->
           <xsl:otherwise>
           	<xsl:call-template name="escape-lessthan-characters">
           	  <xsl:with-param name="inputString" select="."/>
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
  <xsl:param name="inputString" select="0"/>
  <!-- <xsl:text>//######&#10;</xsl:text> -->
  <!-- <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
  <xsl:choose>
    <xsl:when test="contains($inputString,'&#60;')">
      <xsl:value-of select="substring-before($inputString,'&#60;')"/>
        <xsl:text>&amp;lt;</xsl:text>
        <xsl:call-template name="escape-lessthan-characters">
          <xsl:with-param name="inputString" select="substring-after($inputString,'&#60;')"/>
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
        <xsl:with-param name="inputString" select="substring-after($inputString,'&#38;&#38;')"/>
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

