<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
		version="2.0"
        xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions">
            <!--
        extension-element-prefixes="xs"
        extension-element-prefixes="saxon xs">
                saxon:trace="true"
                xmlns:saxon="http://icl.com/saxon"
                xmlns:date="http://exslt.org/dates-and-times"
                xmlns:xeena="../content/profile.dtd"
                xmlns:x3d="../content/x3d-3.3.xsd"
            -->
  <xsl:param name="LinkDom" select="true()"/>

<!--	XSL namespaces are in transition!  Tools are slow to catch up.
    ***	Edit the topmost stylesheet tag on line 2 of this file to match the xmlns namespace URI for your XSL tool. ***
	W3C:
	Saxon:           <xsl:stylesheet xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>
	IBM XSLEditor:   <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform/1.0'>
	IE 5:            <xsl:stylesheet xmlns:xsl='http://www.w3.org/TR/WD-xsl'>
	XT:              <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform'>
-->

<!--
  <head>
   <meta name="filename"    content="BuildSpecificationVrmlEncodingFromSchema.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="21 May 2015" />
   <meta name="description" content="XSL stylesheet to convert X3D Schema to HTML files for X3D specification." />
   <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/BuildSpecificationVrmlEncodingFromSchema.xslt" />
   <meta name="reference"   content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationVrmlEncodingFromSchema.xslt?view=markup" />
   <meta name="acknowledgement"   content="Heavily based on BuildSpecificationXmlEncodingFromSchema.xslt by Don Brutzman et al." />
  </head>

Recommended tool:
-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
   Especially necessary since this stylesheet uses saxon-specific extensions for file handling
- Netbeans 7.*

Invocation:
-  cd   C:\www.web3d.org\x3d\stylesheets
   c:\xml\saxon\saxon ../../specifications/x3d-3.3.xsd  BuildSpecificationVrmlEncodingFromSchema.xslt

TODO:
- consider mechanism for exposing containerField names of child nodes in content model
-->
<!-- &nbsp; is &#160; -->

<xsl:output method="xml" encoding="UTF-8" indent="yes" omit-xml-declaration="yes"/>

<xsl:strip-space elements="*" />

<!-- ===================================================================================== -->
<!-- Configuration values -->

  <xsl:variable name="nameVrmlEncodingOfNodesFile">
    <xsl:text>EncodingOfNodes.html</xsl:text>
  </xsl:variable>

  <xsl:variable name="nameVrmlEncodingOfStatementsFile">
    <xsl:text>EncodingOfStatements.html</xsl:text>
  </xsl:variable>

<!-- TODO needed?
  <xsl:variable name="nameUtf8EncodingsFile">
    <xsl:text>part04/Utf8Encodings.html</xsl:text>
  </xsl:variable>
  -->
  
  <!-- not needed: nameAllX3dElementsAttributesFile -->
  
<!-- ===================================================================================== -->
<!-- Global values -->

<xsl:variable name="schemaFullVersionNumber">
  <xsl:value-of select="//xs:schema/@version"/>
</xsl:variable>

<xsl:variable name="schemaVersionNumber">
  <xsl:value-of select="substring-before($schemaFullVersionNumber, '.')"/>
  <xsl:text>.</xsl:text>
  <xsl:value-of select="substring-before(substring-after($schemaFullVersionNumber, '.'), '.')"/>
</xsl:variable>

<xsl:variable name="X3dTooltipsFile">
    <xsl:text>x3d-</xsl:text>
    <xsl:value-of select="$schemaVersionNumber"/>
    <xsl:text>.profile.xml</xsl:text>
</xsl:variable>

<!-- ****************** root:  start of file ****************** -->
<xsl:template match="/">

<xsl:message>
  <xsl:text>BuildSpecificationVrmlEncodingFromSchema:  process X3D schema version </xsl:text>
  <xsl:value-of select="//xs:schema/@version"/>
  <xsl:text> using BuildSpecificationVrmlEncodingFromSchema.xslt </xsl:text>
 </xsl:message>

<!-- X3D schema validity checks  -->

<!-- check for duplicate accessType definitions -->
<xsl:for-each select="//xs:schema/xs:simpleType[contains(@name,'AccessType')]/xs:restriction/xs:enumeration">
  <xsl:variable name="enumerationValue">
  	<xsl:value-of select="@value"/>
  </xsl:variable>
  <xsl:variable name="reducedEnumerationValue">
    <xsl:choose>
      <xsl:when test="starts-with($enumerationValue,'set_')">
        <xsl:value-of select="substring-after($enumerationValue,'set_')"/>
      </xsl:when>
      <xsl:when test="contains($enumerationValue,'_changed')">
        <xsl:value-of select="substring-before($enumerationValue,'_changed')"/>
      </xsl:when>
    </xsl:choose>
  </xsl:variable>
  <!-- debug
  <xsl:message>
    <xsl:text>$reducedEnumerationValue=</xsl:text>
    <xsl:value-of select="$reducedEnumerationValue"/>
   </xsl:message>
   -->
  <xsl:if test="(count(preceding-sibling::*[@value=$enumerationValue])>1) and (count(following-sibling::*[@value=$enumerationValue])=0)">
    <xsl:message>
      <xsl:text>*** [Warning] accessType enumeration '</xsl:text>
      <xsl:value-of select="$enumerationValue"/>
      <xsl:text>' has </xsl:text>
      <xsl:value-of select="count(preceding-sibling::*[@value=$enumerationValue])+1"/>
      <xsl:text> definitions</xsl:text>
    </xsl:message>
  </xsl:if>
  <!-- don't need to flag missing inputOnly, outputOnly fields since they are not included in the element definitions
  <xsl:if test="not(//xs:attribute[@name=$enumerationValue]) and not(//xs:attribute[@name=$reducedEnumerationValue])">
    <xsl:message>
      <xsl:text>*** [Warning] accessType enumeration '</xsl:text>
      <xsl:value-of select="$enumerationValue"/>
      <xsl:text>' has no corresponding attribute definition</xsl:text>
    </xsl:message>
  </xsl:if>
    -->
</xsl:for-each>

<!-- check for missing accessType definitions -->
<xsl:for-each select="//xs:attribute[not(@name='DEF' or @name='USE' or @name='containerField' or @name='class'
		or @name='AS' or @name='http-equiv' or @name='lang' or @name='profile'
		or @name='nodeField' or @name='protoField'  or @name='additionalInterface'
		or @name='inlineDEF' or @name='importedDEF' or @name='localDEF'
		or @name='fromNode'  or @name='fromField' or @name='toNode' or @name='toField')]">
  <xsl:variable name="attributeName"><xsl:value-of select="@name"/></xsl:variable>
  <xsl:variable name="elementName">
    <xsl:choose>
      <xsl:when test="../../../../@name">
        <xsl:value-of select="../../../../@name"/>
      </xsl:when>
      <xsl:when test="../../../@name">
        <xsl:value-of select="../../../@name"/>
      </xsl:when>
      <xsl:when test="../../@name">
        <xsl:value-of select="../../@name"/>
      </xsl:when>
      <xsl:when test="parent::*[@name!='']">
        <xsl:value-of select="parent::*[@name!='']/@name"/>
        <!--<xsl:message><xsl:text>[found parent name] </xsl:text></xsl:message>-->
      </xsl:when>
      <xsl:when test="(local-name(../../..)='enumeration')">
        <xsl:text>&gt;xs:enumeration value='</xsl:text>
        <xsl:value-of select="../../../@value"/>
        <xsl:text>'&lt;</xsl:text>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>NoNameFound</xsl:text>
        <xsl:message>
          <xsl:text>*** [Warning] </xsl:text>
          <xsl:value-of select="../../@name"/>
          <xsl:text> </xsl:text>
          <xsl:value-of select="../@name"/>
          <xsl:text> attribute '</xsl:text>
          <xsl:value-of select="@name"/>
          <xsl:text>' has no name definition</xsl:text>
        </xsl:message>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:variable>
  <!-- check attribute definition completeness -->
  <xsl:if test="not(($elementName='component') or ($elementName='field') or ($elementName='meta') or ($elementName='unit') or ($elementName='ExternProtoDeclare') or ($elementName='ProtoDeclare') or ($elementName='ROUTE')
 	 or ($elementName='X3DPrototype') or ($elementName='IMPORT') or ($elementName='fieldValue') or ($elementName='HAnimSite'))"> <!-- HAnimSite attribute @name has no default value -->
    <xsl:if test="not(@type) and not(xs:simpleType)">
      <xsl:message>
        <xsl:text>*** [Warning] </xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:text> attribute '</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>' has no type definition</xsl:text>
      </xsl:message>
    </xsl:if>
	<xsl:if test="(starts-with(@type,'SF') or (@type='xs:NMTOKEN')) and not($elementName='SFNode') and not(@type='SFString') and (not(@default) or (@default='')) and not((@fixed='inputOnlyField') or (@fixed='outputOnlyField')) and
			not((@name='componentName') and (string-length(@fixed) > 0)) and not(@name='name') and 
                        not(ends-with(@name,'Mapping')) and not(@name='synonym') and not(@name='id') and not(@name='mapping') and (string-length(@fixed) = 0) and
                        not(contains($elementName, 'xs:enumeration'))">
    <!-- TODO remove when confirmed
         or (@type='xs:NMTOKEN') ...
    <xsl:if test="(starts-with(@type,'SF')) and not($elementName='SFNode') and not(@type='SFString') and (not(@default) or (@default='')) and not((@fixed='inputOnlyField') or (@fixed='outputOnlyField'))
					and not((@name='componentName') and (string-length(@fixed) > 0)) and not(@name='name')"> -->
      <xsl:message>
        <xsl:text>*** [Warning] </xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:if test="parent::xs:appinfo">
          <xsl:text> appinfo</xsl:text>
        </xsl:if>
        <xsl:text> attribute '</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>' type </xsl:text>
        <xsl:value-of select="@type"/>
                  <xsl:choose>
                      <xsl:when test="(ancestor::xs:appinfo) and (string-length(@fixed) = 0)">
                        <xsl:text> has no default accessType in the @fixed attribute</xsl:text>
                      </xsl:when>
                      <xsl:otherwise>
        <xsl:text> has no default value</xsl:text>
                        <xsl:if test="($elementName='X3DLightNode') and (@name='global') and (@type='SFBool')">
                            <xsl:text> (since default values vary and are defined for each implementing node)</xsl:text>
                        </xsl:if>
                      </xsl:otherwise>
                  </xsl:choose>
      </xsl:message>
    </xsl:if>
  </xsl:if>
  <!-- accessType checks -->
  <xsl:choose>
    <xsl:when test="local-name(..)='appinfo'">
      <!-- ignore, documentation -->
    </xsl:when>
    <xsl:when test="($elementName='component') or ($elementName='field') or ($elementName='meta') or ($elementName='unit') or ($elementName='ExternProtoDeclare') or ($elementName='ProtoDeclare') or ($elementName='IMPORT') or ($elementName='ROUTE')">
      <!-- ignore, scene graph structural elements (not actual nodes) -->
    </xsl:when>
    <!-- incidentally ensure UrlNodes are on X3DNetworkSensorNode list, except for deliberate exceptions already in specification.
             specification bug submitted for DISEntityTypeMapping which should likely include this interface.
    <xsl:when test="($attributeName='url') and
                    ($elementName!='X3DUrlObject') and
                    ($elementName!='Anchor') and ($elementName!='DISEntityTypeMapping') and ($elementName!='GeoMetadata') and ($elementName!='Script') and
                    not(//xs:complexType[@name='X3DUrlObject']//xs:element[@ref=$elementName])">
      <xsl:message>
        <xsl:text>*** [Error]   </xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:text> has attribute '</xsl:text>
        <xsl:value-of select="$attributeName"/>
        <xsl:text>' and so needs to reference X3DUrlObject interface</xsl:text>
      </xsl:message>
    </xsl:when>
      -->
    <xsl:when test="contains(attributeName,'additionalInterface')">
      <xsl:message>
        <xsl:text>*** [Error]   </xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:text> attribute '</xsl:text>
        <xsl:value-of select="$attributeName"/>
        <xsl:text>' needs to be defined within appinfo, not as a regular attribute</xsl:text>
      </xsl:message>
    </xsl:when>
    <xsl:when test="not(//xs:enumeration[@value=$attributeName]) and not(preceding-sibling::*[@name=$attributeName])">
        <!-- TODO confirm or delete:  and starts-with(@type,'SF') -->
      <xsl:message>
        <xsl:text>*** [Warning] </xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:text> attribute '</xsl:text>
        <xsl:value-of select="$attributeName"/>
        <xsl:text>' has no corresponding *AccessTypes enumeration defined</xsl:text>
      </xsl:message>
    </xsl:when>
    <!-- corresponding accessType is found here -->
    <xsl:otherwise>
      <xsl:variable name="accessType">
        <xsl:choose>
          <xsl:when test="($attributeName='angle') and ($elementName='ConeEmitter')">
            <xsl:text>inputOutput</xsl:text>
          </xsl:when>
          <xsl:when test="($attributeName='name') and ($elementName='X3DVertexAttributeNode')">
            <xsl:text>initializeOnly</xsl:text>
          </xsl:when>
          <xsl:when test="($attributeName='name')">
            <xsl:text>inputOutput</xsl:text>
          </xsl:when>
          <xsl:when test="($attributeName='type') and (($elementName='ShaderPart') or ($elementName='ShaderProgram'))">
            <xsl:text>initializeOnly</xsl:text>
          </xsl:when>
          <xsl:when test="($attributeName='type')">
            <xsl:text>inputOutput</xsl:text>
          </xsl:when>
          <xsl:when test="($attributeName='info') and ($elementName='WorldInfo')">
            <xsl:text>initializeOnly</xsl:text>
          </xsl:when>
          <xsl:when test="($attributeName='info')">
            <xsl:text>inputOutput</xsl:text>
          </xsl:when>
          <xsl:otherwise>
            <xsl:variable name="schemaTableAccessTypeReference" select="//xs:simpleType[(xs:restriction/xs:enumeration/@value)=$attributeName][1]"/>
            <!-- debug section if more than one accessType is found and throwing an XSLT error
            <xsl:message>
              <xsl:value-of select="$elementName"/>
              <xsl:text> </xsl:text>
              <xsl:value-of select="$attributeName"/>
              <xsl:text>: </xsl:text>
              <xsl:value-of select="$schemaTableAccessTypeReference/@name"/>
            </xsl:message>
            -->
            <xsl:value-of select="substring-before($schemaTableAccessTypeReference,'AccessTypes')"/>
          </xsl:otherwise>
        </xsl:choose>
      </xsl:variable>
      <xsl:choose>
        <xsl:when test="not(starts-with(@type,'SF') or starts-with(@type,'MF'))">
		<!-- skip derived types -->
        </xsl:when>
        <xsl:when test="(@type='SFNode' or @type='MFNode') and (@default!='')">
          <xsl:message>
            <xsl:text>*** [Error]   </xsl:text>
            <xsl:value-of select="$elementName"/>
            <xsl:text> attribute '</xsl:text>
            <xsl:value-of select="$attributeName"/>
            <xsl:text>' has accessType </xsl:text>
            <xsl:value-of select="$accessType"/>
            <xsl:text>, type </xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text> with initializing value </xsl:text>
            <xsl:value-of select="@default"/>
           </xsl:message>
        </xsl:when>
        <xsl:when test="(@type='SFNode' or @type='MFNode')">
		<!-- no value is correct, no action -->
        </xsl:when>
        <xsl:when test="($accessType='inputOnly' or $accessType='outputOnly') and (@default!='')">
          <xsl:message>
            <xsl:text>*** [Error]   </xsl:text>
            <xsl:value-of select="$elementName"/>
            <xsl:text> attribute '</xsl:text>
            <xsl:value-of select="$attributeName"/>
            <xsl:text>' has accessType </xsl:text>
            <xsl:value-of select="$accessType"/>
            <xsl:text>, type </xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text> and initializing value</xsl:text>
            <xsl:value-of select="@default"/>
          </xsl:message>
        </xsl:when>
        <xsl:when test="($accessType='inputOnly' or $accessType='outputOnly')">
		<!-- no value is correct, no action -->
        </xsl:when>
        <xsl:when test="(@type='SFString')">
		<!-- SFString can be null -->
        </xsl:when>
        <xsl:when test="($accessType='initializeOnly' or $accessType='inputOutput') and starts-with(@type,'MF')">
                <!-- no value is allowed for MF types, no action -->
	</xsl:when>
	<xsl:when test="($accessType='initializeOnly' or $accessType='inputOutput') and not(@default)">
          <xsl:message>
            <xsl:text>*** [Error]   </xsl:text>
            <xsl:value-of select="$elementName"/>
            <xsl:text> attribute '</xsl:text>
            <xsl:value-of select="$attributeName"/>
            <xsl:text>' has accessType </xsl:text>
            <xsl:value-of select="$accessType"/>
            <xsl:text>, type </xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text> and no initializing value</xsl:text>
          </xsl:message>
        </xsl:when>
      </xsl:choose>
    </xsl:otherwise>
  </xsl:choose>
</xsl:for-each>

  <!-- <xsl:message><xsl:text>$LinkDom=</xsl:text><xsl:value-of select="$LinkDom"/><xsl:text>&#10;</xsl:text></xsl:message> -->
  
        <xsl:variable name="todaysDate">
          <xsl:value-of select="fn:day-from-date(current-date())"/>
          <xsl:text> </xsl:text>
    <!-- adapted from https://www.xsltfunctions.com/xsl/functx_month-name-en.html -->
          <xsl:sequence select="
                ('January', 'February', 'March', 'April', 'May', 'June',
                 'July', 'August', 'September', 'October', 'November', 'December')
                    [fn:month-from-date(current-date())]"/>
          <!-- <xsl:value-of select="fn:month-from-date(current-date())"/> -->
          <xsl:text> </xsl:text>
          <xsl:value-of select="fn:year-from-date(current-date())"/>
        </xsl:variable>

<!-- ===================================================================================== -->
<!-- Clause 6 Encoding of nodes -->

  <!-- create HTML output -->
  
<xsl:result-document href="{$nameVrmlEncodingOfNodesFile}" method="html" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

<!-- <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html>]]></xsl:text> -->
<!-- <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">]]></xsl:text> -->
    <!-- <xsl:text><!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"></xsl:text> -->
<!-- <xsl:text>&#10;</xsl:text> -->

    <xsl:element name="html">
      <xsl:attribute name="lang"><xsl:text>en</xsl:text></xsl:attribute>
      <xsl:text>&#10;</xsl:text>
      <xsl:element name="head">
	<xsl:element name="title">
	  <!-- mdash = 8212 -->
	  <xsl:text disable-output-escaping="yes">ISO/IEC 19776-2:202x &amp;#8212; Classic VRML encoding &amp;#8212; 6 Encoding of nodes</xsl:text>
	</xsl:element> <!-- title -->
	<xsl:element name="link">
          <xsl:attribute name="rel"><xsl:text>stylesheet</xsl:text></xsl:attribute>
          <xsl:attribute name="href"><xsl:text>X3D.css</xsl:text></xsl:attribute>
          <xsl:attribute name="type"><xsl:text>text/css</xsl:text></xsl:attribute>
	</xsl:element> <!-- link -->
	<xsl:text>&#10;</xsl:text>
        <xsl:element name="meta">
          <xsl:attribute name="http-equiv"><xsl:text>Content-Type</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>text/html; charset=utf-8</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>created</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:value-of select="$todaysDate"/>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>creator</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>Don Brutzman, Dick Puk, Leonard Daly, Roy Walmsley</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>description</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>This stylesheet uses the latest X3D XML Schema to autogenerate the following specification document: </xsl:text>
        <xsl:text>ISO/IEC 19776-2:201x Extensible 3D (X3D) encodings Part 2 Classic VRML encoding, Clause 6 Encoding of nodes</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/VrmlEncoding/Part2/EncodingOfNodes.html</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>version</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:value-of select="$schemaVersionNumber"/></xsl:attribute>
        </xsl:element> <!-- meta -->
	<xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>identifier</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>https://www.web3d.org/files/specifications/19776-2/V</xsl:text>
            <xsl:value-of select="$schemaVersionNumber"/>
            <xsl:text>/Part02/VrmlEncodingOfNodes.html</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/standards/active</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>https://www.web3d.org/specifications/x3d-</xsl:text>
            <xsl:value-of select="$schemaVersionNumber"/>
            <xsl:text>.xsd</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications/x3d-schema-changelog.txt</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>https://x3d.svn.sourceforge.net/viewvc/x3d/www.web3d.org/specifications/x3d-</xsl:text>
            <xsl:value-of select="$schemaVersionNumber"/>
            <xsl:text>.xsd?view=log</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/BuildSpecificationVrmlEncodingFromSchema.xslt</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationVrmlEncodingFromSchema.xslt?view=log</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->

        <!-- css not working...
          <xsl:text>&#10;</xsl:text>
          <style type="text/css">node.source {background-color:#f4f4f4;}</style>
          -->
      </xsl:element> <!-- head -->
      <xsl:text>&#10;</xsl:text>

      <xsl:element name="body">
    <xsl:attribute name="style"><xsl:text>background-position: top center; background-attachment: fixed; background-image:url(../Images/WatermarkWorkingDraft.png);</xsl:text></xsl:attribute>
    <xsl:text>&#10;</xsl:text>
        <xsl:comment> Autogenerated field-attribute encodings for each X3D node follow </xsl:comment>
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="div">
          <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>X3D_ClassicVRML.html</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>to index page</xsl:text></xsl:attribute>
        <xsl:text>&#10;</xsl:text>
          <xsl:element name="img">
            <xsl:attribute name="class"><xsl:text>x3dlogo</xsl:text></xsl:attribute>
            <xsl:attribute name="src"><xsl:text>../Images/x3d.png</xsl:text></xsl:attribute>
            <xsl:attribute name="alt"><xsl:text>X3D logo</xsl:text></xsl:attribute>
            <xsl:attribute name="style"><xsl:text>border-width: 0px; width: 176px; height: 88px</xsl:text></xsl:attribute>
          </xsl:element> <!-- img -->
         </xsl:element> <!-- a -->    
        </xsl:element> <!-- div -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="div">
          <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
        <xsl:element name="p"> <!-- p -->
            <xsl:attribute name="class"><xsl:text>HeadingPart</xsl:text></xsl:attribute>
            <xsl:text>Extensible 3D (X3D) encodings</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:element name="br"/>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>Part 2: Classic VRML encoding</xsl:text>
          </xsl:element> <!-- p -->
          <xsl:element name="p">
            <xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
            <xsl:text>6 Encoding of nodes</xsl:text>
          </xsl:element> <!-- p -->
      
            <xsl:element name="p">
              <xsl:element name="span">
                  <xsl:attribute name="class"><xsl:text>editorsNote</xsl:text></xsl:attribute>
                  <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
                  <xsl:text>(NOTE this is an autogenerated page, produced using </xsl:text>
                  <xsl:element name="a">  
                    <xsl:attribute name="href"><xsl:text>https://www.web3d.org/specifications/X3dSchemaDocumentation4.0/x3d-4.0.html</xsl:text></xsl:attribute>
                    <xsl:attribute name="target"><xsl:text>_blank</xsl:text></xsl:attribute>
                    <xsl:text>X3D XML Schema version 4.0</xsl:text>
                  </xsl:element>
                  <xsl:text>)</xsl:text>
              </xsl:element>
            </xsl:element> 
            
        </xsl:element> <!-- div CenterDiv -->
	<xsl:text>&#10;</xsl:text>
                    
            <!-- divider X3D separator bar that links back to top -->
            <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#</xsl:text></xsl:attribute>
              <xsl:attribute name="title"><xsl:text>to top</xsl:text></xsl:attribute>
              <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
              </xsl:element>  <!-- img -->
              <xsl:text>&#10;</xsl:text>
            </xsl:element> <!-- a-->
            <xsl:text>&#10;</xsl:text>

        <xsl:element name="h1">
          <xsl:element name="img">
            <xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
            <xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
            <xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
          </xsl:element> <!-- </img> -->
          <xsl:element name="a">
            <xsl:attribute name="id"><xsl:text>Introduction</xsl:text></xsl:attribute>
            <xsl:text>6.1&#160;&#160;Introduction</xsl:text>
          </xsl:element> <!-- a -->
	</xsl:element> <!-- h1 -->
	<xsl:text>&#10;</xsl:text>

    <xsl:element name="h2">
      <xsl:element name="a">
        <xsl:attribute name="id"><xsl:text>Topics</xsl:text></xsl:attribute>
	<xsl:text>6.1.1&#160;&#160;Topics</xsl:text>
      </xsl:element> <!-- a-->
    </xsl:element> <!-- h2 -->
    <xsl:text>&#10;</xsl:text>

        <xsl:element name="p">
          <xsl:text>This clause provides a detailed specification of the Classic</xsl:text>
	  <xsl:text>&#10;</xsl:text>
          <xsl:text>VRML encoding for each node defined in </xsl:text>
          <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>#references.html#I19775_1</xsl:text></xsl:attribute>
            <xsl:text>ISO/IEC 19775-1 X3D Architecture</xsl:text>
          </xsl:element> <!-- a -->
	  <xsl:text>.&#10; The topics in this clause are listed in </xsl:text>
          <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>#t-Topics</xsl:text></xsl:attribute>
            <xsl:text>Table&#160;6.1</xsl:text>
          </xsl:element> <!-- a -->
          <xsl:text>.</xsl:text>
        </xsl:element> <!-- p -->
	<xsl:text>&#10;</xsl:text>

        <xsl:element name="div">
          <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
          <xsl:element name="p">
            <xsl:attribute name="class"><xsl:text>TableCaption</xsl:text></xsl:attribute>
            <xsl:element name="a">
              <xsl:attribute name="id"><xsl:text>t-Topics</xsl:text></xsl:attribute>
              <!-- mdash = 8212 -->
              <xsl:text disable-output-escaping="yes">Table 6.1 &#8212; Topics in this clause</xsl:text>
            </xsl:element>  <!-- a -->
          </xsl:element> <!-- p -->
          <xsl:text>&#10;</xsl:text>


          <!-- Loop over elements, build index -->

          <xsl:element name="table">
            <xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
            <xsl:attribute name="align"><xsl:text>center</xsl:text></xsl:attribute>
            <xsl:attribute name="border"><xsl:text>1</xsl:text></xsl:attribute>
            <xsl:attribute name="summary"><xsl:text>Table of contents</xsl:text></xsl:attribute>
            <xsl:text>&#10;</xsl:text>

            <xsl:element name="tr">
              <xsl:attribute name="align"><xsl:text>left</xsl:text></xsl:attribute>
              <xsl:text>&#10;</xsl:text>
              
              <xsl:element name="td">
                <!-- <xsl:attribute name="rowspan"><xsl:text>25</xsl:text></xsl:attribute> -->
                <xsl:attribute name="width"><xsl:text>25%</xsl:text></xsl:attribute>
                <xsl:attribute name="valign"><xsl:text>top</xsl:text></xsl:attribute>
                <xsl:text>&#10;</xsl:text>
		<xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#Introduction</xsl:text></xsl:attribute>
                  <xsl:text>6.1&#160;Introduction</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                <xsl:text>&#10;</xsl:text>


                <xsl:text>&#10;&#160;&#160;</xsl:text>
                <xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
                  <xsl:text>6.1.1&#160;Topics</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                
                <xsl:text>&#160;&#160;</xsl:text>
		<xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#NodeEncodingDescription</xsl:text></xsl:attribute>
                  <xsl:text>6.1.2&#160;Node encoding description</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                <xsl:element name="br"/>
                <xsl:text>&#10;</xsl:text>
                
		<xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#Nodes</xsl:text></xsl:attribute>
                  <xsl:text>6.2&#160;Nodes</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                <xsl:text>&#10;</xsl:text>
                
                <xsl:for-each select="//xs:schema/xs:element[not(@name='ProtoDeclare' or @name='ProtoInterface' or @name='ProtoBody' or @name='ExternProtoDeclare'
                                                               or @name='component' or @name='head' or @name='meta' or @name='unit' or @name='IS' or @name='connect'
                                                               or @name='IMPORT' or @name='EXPORT' or @name='ROUTE' or @name='Scene' or @name='X3D'
                                                               or @name='inputCoord' or @name='outputCoord' or @name='inputTransform' or @name='rootNodeType'
                                                               or @name='humanoidBodyType' or @name='field' or @name='fieldValue' or @name='ProtoInstance')]">
                  <xsl:sort select="@name"/>
                  <!-- <xsl:text>&#10;</xsl:text> -->
                  <!-- html bookmarks -->
                  <xsl:text>&#160;&#160;</xsl:text>
                  <xsl:element name="a">
                    <xsl:attribute name="href">
                      <xsl:text>#</xsl:text>
                      <xsl:value-of select="@name"/>
                    </xsl:attribute>
                    <xsl:text>6.2.</xsl:text>
                    <xsl:value-of select="position()"/>
                    <xsl:text>&#160;</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:choose>
                      <xsl:when test="@name='GeoOrigin'"><xsl:text> (deprecated)</xsl:text></xsl:when>
                    </xsl:choose>
                  </xsl:element> <!-- a -->
		  <!-- <xsl:text> </xsl:text> -->
                  <xsl:element name="br"/>
                  <xsl:text>&#10;</xsl:text>
                  <!-- three-column index, the following numbers decide column splits -->
                  <xsl:if test="((position()=83) or (position()=171))">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text disable-output-escaping="yes"><![CDATA[</td>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
		<xsl:text disable-output-escaping="yes"><![CDATA[<td valign="top">]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
                  </xsl:if>
                </xsl:for-each>
            <xsl:element name="br"/>
                                
              </xsl:element>  <!-- td-->
            </xsl:element> <!-- tr-->
          </xsl:element> <!-- table-->
        </xsl:element> <!-- div -->
	<xsl:text>&#10;</xsl:text>
	<xsl:text>&#10;</xsl:text>

        <xsl:element name="h2">
          <xsl:element name="a">
            <xsl:attribute name="id"><xsl:text>NodeEncodingDescription</xsl:text></xsl:attribute>
            <xsl:text>6.1.2&#160;&#160;Node encoding description</xsl:text>
          </xsl:element> <!-- a -->
        </xsl:element> <!-- h2 -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:element name="p">
            <xsl:text>Each node subclause specifies the Classic VRML encoding of the public </xsl:text>
            <xsl:text>declaration for the node.&#10;</xsl:text>
          
            <xsl:element name="span">
                <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
                <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
                <xsl:text>The initial declaration defines the names and types&#10;</xsl:text>
                <xsl:text>of the fields for the node.&#10;</xsl:text>
                <xsl:text>Next, example usage is shown.&#10;</xsl:text>
            </xsl:element>
          
            <xsl:element name="span">
                <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
                <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
                <xsl:element name="br"/>
                <xsl:text>The node declaration defines the names and types&#10;</xsl:text>
                <xsl:text>of the fields for the node.</xsl:text>
            </xsl:element>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:element name="p">
          <xsl:text>For example, the following defines the Collision node declaration:</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:element name="pre">
          <xsl:attribute name="class"><xsl:text>node</xsl:text></xsl:attribute>
          <xsl:text>Collision {&#10;</xsl:text>
          <xsl:text>  inputOnly      MFNode  addChildren&#10;</xsl:text>
          <xsl:text>  inputOnly      MFNode  removeChildren&#10;</xsl:text>
          <xsl:text>  inputOutput    MFNode  children&#10;</xsl:text>
          <xsl:text>  inputOutput    SFBool  enabled&#10;</xsl:text>
          <xsl:text>  inputOutput    SFNode  metadata&#10;</xsl:text>
          <xsl:text>  outputOnly     SFTime  collideTime&#10;</xsl:text>
          <xsl:text>  outputOnly     SFBool  isActive&#10;</xsl:text>
          <xsl:text>  initializeOnly SFVec3f bboxCenter&#10;</xsl:text>
          <xsl:text>  initializeOnly SFVec3f bboxSize&#10;</xsl:text>
          <xsl:text>  initializeOnly SFNode  proxy&#10;</xsl:text>
          <xsl:text>}&#10;</xsl:text>
        </xsl:element> <!-- </pre> -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="p">
          
            <xsl:element name="span">
                <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
                <xsl:text>Next, the</xsl:text>
            </xsl:element>
            <xsl:text> </xsl:text>
            <xsl:element name="span">
                <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
                <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
                <xsl:text>The</xsl:text>
            </xsl:element>
            <xsl:text> </xsl:text>
            
          <xsl:text>following is an example of a Collision node in a Classic VRML </xsl:text>
          <xsl:text>encoded X3D file:</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="pre">
          <xsl:attribute name="class"><xsl:text>node</xsl:text></xsl:attribute>
          <xsl:text>Collision {&#10;</xsl:text>
          <xsl:text>   enabled    TRUE&#10;</xsl:text>
          <xsl:text>   bboxCenter 0,0,0&#10;</xsl:text>
          <xsl:text>   bboxSize   10,10,10&#10;</xsl:text>
          <xsl:text>   proxy      Shape {...}&#10;</xsl:text>
          <xsl:text>   children   [Shape {...}]&#10;</xsl:text>
          <xsl:text>   metadata   MetadataString ["Main structure"]&#10;</xsl:text>
          <xsl:text>}&#10;</xsl:text>
        </xsl:element> <!-- </pre> -->
        <xsl:text>&#10;</xsl:text>
                                              
        <xsl:element name="p">
          <xsl:text>Actual node usage does not specify the access type or the data type,&#10;</xsl:text>
          <xsl:text>and does provide a value for the field. Not all fields need be present&#10;</xsl:text>
          <xsl:text>in any particular use of a node. Fields not provided will take on their&#10;</xsl:text>
          <xsl:text>default values. Only the syntax for the nodes is shown. Semantics for&#10;</xsl:text>
          <xsl:text>the nodes, as well as the default values and value ranges for &#10;</xsl:text>
            <xsl:element name="span">
                <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
                <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
                <xsl:text>node</xsl:text>
            </xsl:element>
            <xsl:text> </xsl:text>
          <xsl:text>fields, can be found in </xsl:text>
          <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#19775-1</xsl:text></xsl:attribute>
            <xsl:text>ISO/IEC 19775-1 X3D Architecture</xsl:text>
          </xsl:element>
          <xsl:text>.</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>

            <!-- divider X3D separator bar that links back to top -->
            <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#</xsl:text></xsl:attribute>
              <xsl:attribute name="title"><xsl:text>to top</xsl:text></xsl:attribute>
              <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
              </xsl:element>  <!-- img -->
              <xsl:text>&#10;</xsl:text>
            </xsl:element> <!-- a-->
            <xsl:text>&#10;</xsl:text>
            
        <xsl:element name="h1">
          <xsl:element name="img">
            <xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
            <xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
            <xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
          </xsl:element> <!-- </img> -->
          <xsl:element name="a">
            <xsl:attribute name="id"><xsl:text>Nodes</xsl:text></xsl:attribute>
            <xsl:text>6.2&#160;&#160;Nodes</xsl:text>
          </xsl:element> <!-- a -->
        </xsl:element> <!-- h1 -->
        <xsl:text>&#10;</xsl:text>

        <!-- Loop over elements, for each detailed page entry -->
        <xsl:for-each select="//xs:schema/xs:element[not(@name='ProtoDeclare' or @name='ProtoInterface' or @name='ProtoBody' or @name='ExternProtoDeclare'
                                                               or @name='component' or @name='head' or @name='meta' or @name='unit' or @name='IS' or @name='connect'
                                                               or @name='IMPORT' or @name='EXPORT' or @name='ROUTE' or @name='Scene' or @name='X3D'
                                                               or @name='inputCoord' or @name='outputCoord' or @name='inputTransform' or @name='rootNodeType'
                                                               or @name='humanoidBodyType' or @name='field' or @name='fieldValue' or @name='ProtoInstance')]">
          <xsl:sort select="@name"/>
          <xsl:variable name="nodeName" select="@name"/>
          <xsl:variable name="nodeType">
            <xsl:value-of select="xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="parentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="grandParentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="greatGrandParentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="greatGreatGrandParentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="nonNodeFieldList" select="
			      //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$nodeType]/xs:attribute
			    | xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
                            | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$nodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | xs:annotation/xs:appinfo/xs:attribute
			    | xs:complexType/xs:attribute">
          </xsl:variable>
          <xsl:variable name="nodeFieldList" select="
                              //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$nodeType]/xs:annotation/xs:appinfo/xs:element
                            | xs:annotation/xs:appinfo/xs:element">
          </xsl:variable>
          <xsl:variable name="allFieldList" select="$nonNodeFieldList[(@name!='containerField') and (@name!='additionalInterface') and (@name!='componentLevel') and (@name!='componentName') and (@name!='sourceCode') ] | $nodeFieldList[(@name!='IS')]">             
          </xsl:variable>
          
          <xsl:element name="h2">
            <xsl:element name="a">
              <xsl:attribute name="id"><xsl:value-of select="$nodeName"/></xsl:attribute>
              <xsl:text>6.2.</xsl:text>
              <xsl:value-of select="position()"/>
              <xsl:text>&#160;&#160;</xsl:text>
              <xsl:value-of select="$nodeName"/>
              <xsl:choose>
                <xsl:when test="$nodeName='GeoOrigin'"><xsl:text> (deprecated)</xsl:text></xsl:when>
              </xsl:choose>
            </xsl:element> <!-- a -->
          </xsl:element> <!-- h2 -->
          <xsl:text>&#10;</xsl:text>
          
        <xsl:element name="p">
          <xsl:text>Node signature listing accessType and type for each field:</xsl:text>
          </xsl:element> <!-- p -->
          <xsl:text>&#10;</xsl:text>
          
          <xsl:element name="pre">
            <xsl:attribute name="class"><xsl:text>node</xsl:text></xsl:attribute>
            <xsl:value-of select="$nodeName"/>
            <xsl:text> {&#10;</xsl:text>
            <xsl:for-each select="$allFieldList">
              <!-- TODO sort field definitions last -->
              <xsl:sort select="(attributeName = 'field')"/>
              <xsl:sort select="@name"/>
              <xsl:text>  </xsl:text>
              <!-- First entry is the access type -->
              <xsl:variable name="attributeName" select="@name"/>
              <xsl:variable name="accessType">
                <xsl:choose>
                  <xsl:when test="@fixed"><xsl:value-of select="fn:substring-before(@fixed, 'Field')" /></xsl:when>
 		  <xsl:when test="(($nodeName='GeoCoordinate') and ($attributeName='point')) or
				  (($nodeName='Extrusion') and ($attributeName='scale' or $attributeName='orientation')) or
				  (($nodeName='FloatVertexAttribute') and ($attributeName='name')) or
				  (($nodeName='Matrix3VertexAttribute') and ($attributeName='name')) or
				  (($nodeName='Matrix4VertexAttribute') and ($attributeName='name')) or
				  (($nodeName='X3DVertexAttributeNode') and ($attributeName='name')) or
                                  (($nodeName='Box' or $nodeName='FontStyle' or $nodeName='Rectangle2D' or $nodeName='GeneratedCubeMapTexture') and ($attributeName='size')) or
				  (($nodeName='ShaderPart' or $nodeName='ShaderProgram') and ($attributeName='type')) or
				  (($nodeName='WorldInfo') and ($attributeName='info'))">initializeOnly</xsl:when>
                  <xsl:when test="(($nodeName='ConeEmitter') and ($attributeName='angle')) or
  				  (($nodeName='GeoElevationGrid') and ($attributeName='yScale')) or
				  (($nodeName='HAnimDisplacer') and ($attributeName='coordIndex')) or
                                  (($nodeName='HAnimSegment' or $nodeName='RigidBody') and ($attributeName='mass')) or
				  ( contains($nodeName,'Light') and ($attributeName='radius')) or
                                  (($nodeName='LayerSet') and ($attributeName='order')) or
				  (($nodeName='NurbsPositionInterpolator') and ($attributeName='order')) or
				  ($attributeName='name') or
				  ($attributeName='type') or
				  ($attributeName='info')">inputOutput</xsl:when>
                  <xsl:when test="($attributeName='field')">fieldAccess</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='inputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">inputOnly</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='outputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">outputOnly</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='inputOutputAccessTypes']//xs:enumeration[@value=$attributeName]">inputOutput</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='initializeOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">initializeOnly</xsl:when>
                </xsl:choose>
              </xsl:variable>
              <xsl:variable name="paddedAccessType">
                <xsl:choose>
                    <xsl:when test="$accessType='inputOnly'"     >inputOnly      </xsl:when>
                    <xsl:when test="$accessType='outputOnly'"    >outputOnly     </xsl:when>
                    <xsl:when test="$accessType='inputOutput'"   >inputOutput    </xsl:when>
                    <xsl:when test="$accessType='initializeOnly'">initializeOnly </xsl:when>
                    <xsl:when test="$accessType='fieldAccess'"   >fieldAccess    </xsl:when>
                </xsl:choose>    
              </xsl:variable>
              <xsl:value-of select="$paddedAccessType"/> 
              <!-- Second entry is the X3D field type -->
              <xsl:variable name="type" select="@type"/>
              <xsl:variable name="constrainedTypeParent" select="//xs:schema/xs:simpleType[@name=$type]/xs:restriction/@base"/>
              <xsl:variable name="constrainedTypeGrandParent" select="//xs:schema/xs:simpleType[@name=$constrainedTypeParent]/xs:restriction/@base"/>
              <xsl:variable name="X3dType">
                <xsl:choose>
                  <xsl:when test="($attributeName='field')">
                    <xsl:text>fieldType</xsl:text>
                  </xsl:when>
                  <xsl:when test="starts-with(@type,'SF') or starts-with(@type,'MF')">
                    <xsl:value-of select="@type"/>
                  </xsl:when>
                  <xsl:when test="(@type ='NMTOKEN')">
                    <xsl:text>SFString</xsl:text>
                  </xsl:when>
                  <xsl:when test="(@type ='NMTOKENS')">
                    <xsl:text>MFString</xsl:text>
                  </xsl:when>
                  <xsl:when test="starts-with(xs:simpleType/xs:restriction/@base,'SF') or starts-with(xs:simpleType/xs:restriction/@base,'MF')">
                    <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
                  </xsl:when>
                  <xsl:when test="starts-with($constrainedTypeParent,'SF') or starts-with($constrainedTypeParent,'MF')">
                    <xsl:value-of select="$constrainedTypeParent"/>
                  </xsl:when>
                  <xsl:when test="$constrainedTypeParent">
                    <xsl:choose>
                      <xsl:when test="($constrainedTypeParent='xs:token')">SFString</xsl:when>
                      <xsl:when test="starts-with($constrainedTypeParent,'xs:')">
                        <xsl:value-of select="substring-after($constrainedTypeParent,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="$constrainedTypeParent"/>
                      </xsl:otherwise>
		    </xsl:choose>
                  </xsl:when>
                  <xsl:when test="$constrainedTypeGrandParent">
                    <xsl:choose>
                      <xsl:when test="($constrainedTypeGrandParent='xs:token')">SFString</xsl:when>
                      <xsl:when test="starts-with($constrainedTypeGrandParent,'xs:')">
                        <xsl:value-of select="substring-after($constrainedTypeGrandParent,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="$constrainedTypeGrandParent"/>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:when>
                  <xsl:otherwise>
                    <xsl:choose>
                      <xsl:when test="starts-with(@type,'xs:')">
                        <xsl:value-of select="substring-after(@type,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="@type"/>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:otherwise>
                </xsl:choose>
              </xsl:variable>
              <xsl:variable name="paddedX3dType" select="fn:concat($X3dType, substring('           ', string-length($X3dType)))"/>
              <xsl:value-of select="$paddedX3dType"/> 
              <!-- Third entry is the field name -->
              <xsl:value-of select="@name"/> 
              <xsl:text>&#10;</xsl:text>
            </xsl:for-each>
            <xsl:text>}&#10;</xsl:text>
          </xsl:element> <!-- </pre> -->
          <xsl:text>&#10;</xsl:text>

          <xsl:element name="p">
            <xsl:text>Example </xsl:text>
            <xsl:value-of select="@name"/> 
            <xsl:text> node in Classic VRML encoding with all fields set to default values.</xsl:text>
          </xsl:element> <!-- p -->
          <xsl:text>&#10;</xsl:text>

          <xsl:element name="pre">
            <xsl:attribute name="class"><xsl:text>node</xsl:text></xsl:attribute>
            <xsl:value-of select="$nodeName"/>
            <xsl:text> {&#10;</xsl:text>

            <xsl:for-each select="$allFieldList">
              <xsl:sort select="@name"/>
              <!-- We need to know the access type as the file can only contain initializeOnly and inputOutput fields -->
              <xsl:variable name="attributeName" select="@name"/>
              <xsl:variable name="accessType">
                <xsl:choose>
                  <xsl:when test="@fixed"><xsl:value-of select="fn:substring-before(@fixed, 'Field')" /></xsl:when>
 		  <xsl:when test="(($nodeName='GeoCoordinate') and ($attributeName='point')) or
				  (($nodeName='Extrusion') and ($attributeName='scale')) or
				  (($nodeName='FloatVertexAttribute') and ($attributeName='name')) or
				  (($nodeName='Matrix3VertexAttribute') and ($attributeName='name')) or
				  (($nodeName='Matrix4VertexAttribute') and ($attributeName='name')) or
				  (($nodeName='X3DVertexAttributeNode') and ($attributeName='name')) or
				  (($nodeName='ShaderPart' or $nodeName='ShaderProgram') and ($attributeName='type')) or
				  (($nodeName='WorldInfo') and ($attributeName='info'))">initializeOnly</xsl:when>
                  <xsl:when test="(($nodeName='ConeEmitter') and ($attributeName='angle')) or
  				  (($nodeName='GeoElevationGrid') and ($attributeName='yScale')) or
				  (($nodeName='HAnimDisplacer') and ($attributeName='coordIndex')) or
                                  (($nodeName='HAnimSegment' or $nodeName='RigidBody') and ($attributeName='mass')) or
				  ( contains($nodeName,'Light') and ($attributeName='radius')) or
				  (($nodeName='NurbsPositionInterpolator') and ($attributeName='order')) or
				  (($nodeName='Viewpoint') and ($attributeName='orientation')) or
				  ($attributeName='name') or
				  ($attributeName='type') or
				  ($attributeName='info')">inputOutput</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='inputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">inputOnly</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='outputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">outputOnly</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='inputOutputAccessTypes']//xs:enumeration[@value=$attributeName]">inputOutput</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='initializeOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">initializeOnly</xsl:when>
                </xsl:choose>
              </xsl:variable>
              <xsl:variable name="type" select="@type"/>
              <xsl:variable name="constrainedTypeParent" select="//xs:schema/xs:simpleType[@name=$type]/xs:restriction/@base"/>
              <xsl:variable name="constrainedTypeGrandParent" select="//xs:schema/xs:simpleType[@name=$constrainedTypeParent]/xs:restriction/@base"/>
              <xsl:variable name="X3dType">
                <xsl:choose>
                  <xsl:when test="starts-with(@type,'SF') or starts-with(@type,'MF')">
                    <xsl:value-of select="@type"/>
                  </xsl:when>
                  <xsl:when test="(@type ='NMTOKEN')">
                    <xsl:text>SFString</xsl:text>
                  </xsl:when>
                  <xsl:when test="(@type ='NMTOKENS')">
                    <xsl:text>MFString</xsl:text>
                  </xsl:when>
                  <xsl:when test="starts-with(xs:simpleType/xs:restriction/@base,'SF') or starts-with(xs:simpleType/xs:restriction/@base,'MF')">
                    <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
                  </xsl:when>
                  <xsl:when test="starts-with($constrainedTypeParent,'SF') or starts-with($constrainedTypeParent,'MF')">
                    <xsl:value-of select="$constrainedTypeParent"/>
                  </xsl:when>
                  <xsl:when test="$constrainedTypeParent">
                    <xsl:choose>
                      <xsl:when test="($constrainedTypeParent='xs:token')">SFString</xsl:when>
                      <xsl:when test="starts-with($constrainedTypeParent,'xs:')">
                        <xsl:value-of select="substring-after($constrainedTypeParent,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="$constrainedTypeParent"/>
                      </xsl:otherwise>
		    </xsl:choose>
                  </xsl:when>
                  <xsl:when test="$constrainedTypeGrandParent">
                    <xsl:choose>
                      <xsl:when test="($constrainedTypeGrandParent='xs:token')">SFString</xsl:when>
                      <xsl:when test="starts-with($constrainedTypeGrandParent,'xs:')">
                        <xsl:value-of select="substring-after($constrainedTypeGrandParent,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="$constrainedTypeGrandParent"/>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:when>
                  <xsl:otherwise>
                    <xsl:choose>
                      <xsl:when test="starts-with(@type,'xs:')">
                        <xsl:value-of select="substring-after(@type,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="@type"/>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:otherwise>
                </xsl:choose>
              </xsl:variable>
              <xsl:if test="(($accessType='initializeOnly') or ($accessType='inputOutput'))">
                <!-- First entry is the field name -->
                <xsl:text>  </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:value-of select="substring('                                          ', string-length(@name))"/>
                <!-- Second entry is the default value or an example value -->
                <xsl:choose>
                    <xsl:when test="($X3dType='SFNode')"><xsl:text>NULL</xsl:text></xsl:when>    
                  <xsl:when test="($X3dType='MFNode')"><xsl:text>[]</xsl:text></xsl:when>    
                  <xsl:when test="starts-with($X3dType, 'SF') or ($X3dType='NMTOKEN') or ($X3dType='string')">
                    <xsl:choose>
                      <xsl:when test="($X3dType='SFBool') and (@default='true')">
                        <xsl:text>TRUE</xsl:text>
                      </xsl:when>
                      <xsl:when test="($X3dType='SFBool') and (@default='false')">
                        <xsl:text>FALSE</xsl:text>
                      </xsl:when>
                      <xsl:when test="(@default) and (($X3dType='SFString') or ($X3dType='NMTOKEN') or ($X3dType='string'))">
                        <xsl:text>"</xsl:text>
                        <xsl:value-of select="@default"/>
                        <xsl:text>"</xsl:text>
                      </xsl:when>
                      <xsl:when test="(not (@default)) and (($X3dType='SFString') or ($X3dType='NMTOKEN') or ($X3dType='string'))">
                        <xsl:text>"</xsl:text>
                        <xsl:text>"</xsl:text>
                      </xsl:when>
                      <xsl:when test="@default"><xsl:value-of select="@default"/></xsl:when>
                      <xsl:otherwise>
                        <xsl:text>No default value for </xsl:text>
                        <xsl:value-of select="$X3dType"/>
                        <xsl:text> field</xsl:text>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:when>
                  <xsl:when test="starts-with($X3dType, 'MF') or ($X3dType='NMTOKENS')">
                    <xsl:choose>
                      <xsl:when test="not (@default)"><xsl:text>[]</xsl:text></xsl:when>
                      <xsl:otherwise>
                        <xsl:text>[</xsl:text>
                        <xsl:value-of select="@default"/>
                        <xsl:text>]</xsl:text>
                      </xsl:otherwise>      
                    </xsl:choose>    
                  </xsl:when>    
                  <xsl:otherwise>
                      <xsl:text>(BAD FIELD TYPE </xsl:text>
                      <xsl:value-of select="$X3dType"/>
                      <xsl:text>)</xsl:text>
                  </xsl:otherwise>    
                </xsl:choose>
                <xsl:text>&#10;</xsl:text>
              </xsl:if>
            </xsl:for-each>

            <xsl:text>}&#10;</xsl:text>
          </xsl:element> <!-- </pre> -->
          <xsl:text>&#10;</xsl:text>

            <!-- divider X3D separator bar that links back to top -->
            <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#</xsl:text></xsl:attribute>
              <xsl:attribute name="title"><xsl:text>to top</xsl:text></xsl:attribute>
              <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
              </xsl:element>  <!-- img -->
              <xsl:text>&#10;</xsl:text>
            </xsl:element> <!-- a-->
            <xsl:text>&#10;</xsl:text>

        </xsl:for-each>

        <xsl:text>&#10;</xsl:text>

      </xsl:element> <!-- </body> -->
    </xsl:element> <!-- </html> -->
    
  </xsl:result-document>

<!-- ===================================================================================== -->
<!-- Clause 7 Encoding of statements -->

  <!-- create HTML output -->
  
<xsl:result-document href="{$nameVrmlEncodingOfStatementsFile}" method="html" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

<!-- <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html>]]></xsl:text> -->
<!-- <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">]]></xsl:text> -->
    <!-- <xsl:text><!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"></xsl:text> -->
<!-- <xsl:text>&#10;</xsl:text> -->

    <xsl:element name="html">
      <xsl:attribute name="lang"><xsl:text>en</xsl:text></xsl:attribute>
      <xsl:text>&#10;</xsl:text>
      <xsl:element name="head">
	<xsl:element name="title">
	  <!-- mdash = 8212 -->
	  <xsl:text disable-output-escaping="yes">ISO/IEC 19776-2:202x &amp;#8212; Classic VRML encoding &amp;#8212; 7 Encoding of statements</xsl:text>
	</xsl:element> <!-- title -->
	<xsl:element name="link">
          <xsl:attribute name="rel"><xsl:text>stylesheet</xsl:text></xsl:attribute>
          <xsl:attribute name="href"><xsl:text>X3D.css</xsl:text></xsl:attribute>
          <xsl:attribute name="type"><xsl:text>text/css</xsl:text></xsl:attribute>
	</xsl:element> <!-- link -->
	<xsl:text>&#10;</xsl:text>
        <xsl:element name="meta">
          <xsl:attribute name="http-equiv"><xsl:text>Content-Type</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>text/html; charset=utf-8</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>created</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:value-of select="$todaysDate"/>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>creator</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>Don Brutzman, Dick Puk, Leonard Daly, Roy Walmsley</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>description</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>This stylesheet uses the latest X3D XML Schema to autogenerate the following specification document: </xsl:text>
        <xsl:text>ISO/IEC 19776-2:201x Extensible 3D (X3D) encodings Part 2 Classic VRML encoding, 7 Encoding of statements</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/VrmlEncoding/Part2/EncodingOfStatements.html</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>version</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:value-of select="$schemaVersionNumber"/></xsl:attribute>
        </xsl:element> <!-- meta -->
	<xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>identifier</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>https://www.web3d.org/files/specifications/19776-2/V</xsl:text>
            <xsl:value-of select="$schemaVersionNumber"/>
            <xsl:text>/Part02/EncodingOfStatements.html</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/standards/active</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>https://www.web3d.org/specifications/x3d-</xsl:text>
            <xsl:value-of select="$schemaVersionNumber"/>
            <xsl:text>.xsd</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications/x3d-schema-changelog.txt</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
          <xsl:attribute name="content">
            <xsl:text>https://x3d.svn.sourceforge.net/viewvc/x3d/www.web3d.org/specifications/x3d-</xsl:text>
            <xsl:value-of select="$schemaVersionNumber"/>
            <xsl:text>.xsd?view=log</xsl:text>
          </xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/BuildSpecificationVrmlEncodingFromSchema.xslt</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->
        <xsl:element name="meta">
          <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
          <xsl:attribute name="content"><xsl:text>https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationVrmlEncodingFromSchema.xslt?view=log</xsl:text></xsl:attribute>
        </xsl:element> <!-- meta -->

        <!-- css not working...
          <xsl:text>&#10;</xsl:text>
          <style type="text/css">node.source {background-color:#f4f4f4;}</style>
          -->
      </xsl:element> <!-- head -->
      <xsl:text>&#10;</xsl:text>

      <xsl:element name="body">
    <xsl:attribute name="style"><xsl:text>background-position: top center; background-attachment: fixed; background-image:url(../Images/WatermarkWorkingDraft.png);</xsl:text></xsl:attribute>
    <xsl:text>&#10;</xsl:text>
        <xsl:comment> Autogenerated field-attribute encodings for each X3D statement follow </xsl:comment>
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="div">
          <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>X3D_ClassicVRML.html</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>to index page</xsl:text></xsl:attribute>
        <xsl:text>&#10;</xsl:text>
          <xsl:element name="img">
            <xsl:attribute name="class"><xsl:text>x3dlogo</xsl:text></xsl:attribute>
            <xsl:attribute name="src"><xsl:text>../Images/x3d.png</xsl:text></xsl:attribute>
            <xsl:attribute name="alt"><xsl:text>X3D logo</xsl:text></xsl:attribute>
            <xsl:attribute name="style"><xsl:text>border-width: 0px; width: 176px; height: 88px</xsl:text></xsl:attribute>
          </xsl:element> <!-- img -->
         </xsl:element> <!-- a -->    
        </xsl:element> <!-- div -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="div">
          <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
        <xsl:element name="p"> <!-- p -->
            <xsl:attribute name="class"><xsl:text>HeadingPart</xsl:text></xsl:attribute>
            <xsl:text>Extensible 3D (X3D) encodings</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:element name="br"/>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>Part 2: Classic VRML encoding</xsl:text>
          </xsl:element> <!-- p -->
          <xsl:element name="p">
            <xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
            <xsl:text>7 Encoding of statements</xsl:text>
          </xsl:element> <!-- p -->
      
            <xsl:element name="p">
              <xsl:element name="span">
                  <xsl:attribute name="class"><xsl:text>editorsNote</xsl:text></xsl:attribute>
                  <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
                  <xsl:text>(NOTE this is an autogenerated page, produced using </xsl:text>
                  <xsl:element name="a">  
                    <xsl:attribute name="href"><xsl:text>https://www.web3d.org/specifications/X3dSchemaDocumentation4.0/x3d-4.0.html</xsl:text></xsl:attribute>
                    <xsl:attribute name="target"><xsl:text>_blank</xsl:text></xsl:attribute>
                    <xsl:text>X3D XML Schema version 4.0</xsl:text>
                  </xsl:element>
                  <xsl:text>)</xsl:text>
              </xsl:element>
            </xsl:element> 
            
        </xsl:element> <!-- div CenterDiv -->
	<xsl:text>&#10;</xsl:text>
                    
            <!-- divider X3D separator bar that links back to top -->
            <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#</xsl:text></xsl:attribute>
              <xsl:attribute name="title"><xsl:text>to top</xsl:text></xsl:attribute>
              <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
              </xsl:element>  <!-- img -->
              <xsl:text>&#10;</xsl:text>
            </xsl:element> <!-- a-->
            <xsl:text>&#10;</xsl:text>

            <xsl:element name="div">
                <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
                <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>

        <xsl:element name="h1">
          <xsl:element name="img">
            <xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
            <xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
            <xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
          </xsl:element> <!-- </img> -->
          <xsl:element name="a">
            <xsl:attribute name="id"><xsl:text>Introduction</xsl:text></xsl:attribute>
            <xsl:text>7.1&#160;&#160;Introduction</xsl:text>
          </xsl:element> <!-- a -->
	</xsl:element> <!-- h1 -->
	<xsl:text>&#10;</xsl:text>

    <xsl:element name="h2">
      <xsl:element name="a">
        <xsl:attribute name="id"><xsl:text>Topics</xsl:text></xsl:attribute>
	<xsl:text>7.1.1&#160;&#160;Topics</xsl:text>
      </xsl:element> <!-- a-->
    </xsl:element> <!-- h2 -->
    <xsl:text>&#10;</xsl:text>

        <xsl:element name="p">
          <xsl:text>This clause provides a detailed specification of the Classic</xsl:text>
	  <xsl:text>&#10;</xsl:text>
          <xsl:text>VRML encoding for each statement defined in </xsl:text>
          <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>#references.html#I19775_1</xsl:text></xsl:attribute>
            <xsl:text>ISO/IEC 19775-1 X3D Architecture</xsl:text>
          </xsl:element> <!-- a -->
	  <xsl:text>.&#10; The topics in this clause are listed in </xsl:text>
          <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>#t-Topics</xsl:text></xsl:attribute>
            <xsl:text>Table&#160;7.1</xsl:text>
          </xsl:element> <!-- a -->
          <xsl:text>.</xsl:text>
        </xsl:element> <!-- p -->
	<xsl:text>&#10;</xsl:text>

        <xsl:element name="div">
          <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
          <xsl:element name="p">
            <xsl:attribute name="class"><xsl:text>TableCaption</xsl:text></xsl:attribute>
            <xsl:element name="a">
              <xsl:attribute name="id"><xsl:text>t-Topics</xsl:text></xsl:attribute>
              <!-- mdash = 8212 -->
              <xsl:text disable-output-escaping="yes">Table 7.1 &#8212; Topics in this clause</xsl:text>
            </xsl:element>  <!-- a -->
          </xsl:element> <!-- p -->
          <xsl:text>&#10;</xsl:text>


          <!-- Loop over elements, build index -->

          <xsl:element name="table">
            <xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
            <xsl:attribute name="align"><xsl:text>center</xsl:text></xsl:attribute>
            <xsl:attribute name="border"><xsl:text>1</xsl:text></xsl:attribute>
            <xsl:attribute name="summary"><xsl:text>Table of contents</xsl:text></xsl:attribute>
            <xsl:text>&#10;</xsl:text>

            <xsl:element name="tr">
              <xsl:attribute name="align"><xsl:text>left</xsl:text></xsl:attribute>
              <xsl:text>&#10;</xsl:text>
              
              <xsl:element name="td">
                <!-- <xsl:attribute name="rowspan"><xsl:text>25</xsl:text></xsl:attribute> -->
                <xsl:attribute name="width"><xsl:text>25%</xsl:text></xsl:attribute>
                <xsl:attribute name="valign"><xsl:text>top</xsl:text></xsl:attribute>
                <xsl:text>&#10;</xsl:text>
		<xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#Introduction</xsl:text></xsl:attribute>
                  <xsl:text>7.1&#160;Introduction</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                <xsl:text>&#10;</xsl:text>


                <xsl:text>&#10;&#160;&#160;</xsl:text>
                <xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
                  <xsl:text>7.1.1&#160;Topics</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                
                <xsl:text>&#160;&#160;</xsl:text>
		<xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#StatementEncodingDescription</xsl:text></xsl:attribute>
                  <xsl:text>7.1.2&#160;Statement encoding description</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                <xsl:element name="br"/>
                <xsl:text>&#10;</xsl:text>
                
		<xsl:element name="a">
                  <xsl:attribute name="href"><xsl:text>#Statements</xsl:text></xsl:attribute>
                  <xsl:text>7.2&#160;Statements</xsl:text>
                </xsl:element> <!-- a -->
                <xsl:element name="br"/>
                <xsl:text>&#10;</xsl:text>
                
                <xsl:for-each select="//xs:schema/xs:element[(@name='ProtoDeclare' or @name='ProtoInterface' or @name='ProtoBody' or @name='ExternProtoDeclare'
                                                               or @name='component' or @name='head' or @name='meta' or @name='unit' or @name='IS' or @name='connect'
                                                               or @name='IMPORT' or @name='EXPORT' or @name='ROUTE' or @name='Scene' or @name='X3D'
                                                               or @name='field' or @name='fieldValue' or @name='ProtoInstance')]">
                  <xsl:sort select="lower-case(@name)"/>
                  <!-- <xsl:text>&#10;</xsl:text> -->
                  <!-- html bookmarks -->
                  <xsl:text>&#160;&#160;</xsl:text>
                  <xsl:element name="a">
                    <xsl:attribute name="href">
                      <xsl:text>#</xsl:text>
                      <xsl:value-of select="@name"/>
                    </xsl:attribute>
                    <xsl:text>7.2.</xsl:text>
                    <xsl:value-of select="position()"/>
                    <xsl:text>&#160;</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:choose>
                      <xsl:when test="@name='GeoOrigin'"><xsl:text> (deprecated)</xsl:text></xsl:when>
                    </xsl:choose>
                  </xsl:element> <!-- a -->
		  <!-- <xsl:text> </xsl:text> -->
                  <xsl:element name="br"/>
                  <xsl:text>&#10;</xsl:text>
                  <!-- three-column index, the following numbers decide column splits -->
                  <xsl:if test="((position()=83) or (position()=171))">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text disable-output-escaping="yes"><![CDATA[</td>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
		<xsl:text disable-output-escaping="yes"><![CDATA[<td valign="top">]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
                  </xsl:if>
                </xsl:for-each>
            <xsl:element name="br"/>
                                
              </xsl:element>  <!-- td-->
            </xsl:element> <!-- tr-->
          </xsl:element> <!-- table-->
        </xsl:element> <!-- div -->
	<xsl:text>&#10;</xsl:text>
	<xsl:text>&#10;</xsl:text>

        <xsl:element name="h2">
          <xsl:element name="a">
            <xsl:attribute name="id"><xsl:text>StatementEncodingDescription</xsl:text></xsl:attribute>
            <xsl:text>7.1.2&#160;&#160;Statement encoding description</xsl:text>
          </xsl:element> <!-- a -->
        </xsl:element> <!-- h2 -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:element name="p">
            <xsl:text>Each statement subclause specifies the Classic VRML encoding of the public </xsl:text>
            <xsl:text>declaration for the statement.&#10;</xsl:text>
          
            <xsl:text>The initial declaration defines the names and types&#10;</xsl:text>
            <xsl:text>of the fields for the statement.&#10;</xsl:text>
            <xsl:text>Next, example usage is shown.&#10;</xsl:text>
          
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>
                                              
        <xsl:element name="p">
          <xsl:text>Actual statement usage does not specify the access type or the data type,&#10;</xsl:text>
          <xsl:text>and does provide a value for the field. Not all fields need be present&#10;</xsl:text>
          <xsl:text>in any particular use of a statement. Fields not provided will take on their&#10;</xsl:text>
          <xsl:text>default values. Only the syntax for the statements is shown. Semantics for&#10;</xsl:text>
          <xsl:text>the statements, as well as the default values and value ranges for &#10;</xsl:text>
          <xsl:text>statement parameters, can be found in&#10;</xsl:text>
          <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#19775-1</xsl:text></xsl:attribute>
            <xsl:text>ISO/IEC 19775-1 X3D Architecture</xsl:text>
          </xsl:element>
          <xsl:text>.</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>

            <!-- divider X3D separator bar that links back to top -->
            <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#</xsl:text></xsl:attribute>
              <xsl:attribute name="title"><xsl:text>to top</xsl:text></xsl:attribute>
              <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
              </xsl:element>  <!-- img -->
              <xsl:text>&#10;</xsl:text>
            </xsl:element> <!-- a-->
            <xsl:text>&#10;</xsl:text>
            
        <xsl:element name="h1">
          <xsl:element name="img">
            <xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
            <xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
            <xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
            <xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
          </xsl:element> <!-- </img> -->
          <xsl:element name="a">
            <xsl:attribute name="id"><xsl:text>Statements</xsl:text></xsl:attribute>
            <xsl:text>7.2&#160;&#160;Statements</xsl:text>
          </xsl:element> <!-- a -->
        </xsl:element> <!-- h1 -->
        <xsl:text>&#10;</xsl:text>

        <!-- Loop over elements, for each detailed page entry -->
        <xsl:for-each select="//xs:schema/xs:element[(@name='ProtoDeclare' or @name='ProtoInterface' or @name='ProtoBody' or @name='ExternProtoDeclare'
                                                               or @name='component' or @name='head' or @name='meta' or @name='unit' or @name='IS' or @name='connect'
                                                               or @name='IMPORT' or @name='EXPORT' or @name='ROUTE' or @name='Scene' or @name='X3D'
                                                               or @name='field' or @name='fieldValue' or @name='ProtoInstance')]">
                  <xsl:sort select="lower-case(@name)"/>
          <xsl:variable name="nodeName" select="@name"/>
          <xsl:variable name="nodeType">
            <xsl:value-of select="xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="parentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="grandParentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="greatGrandParentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="greatGreatGrandParentNodeType">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
          </xsl:variable>
          <xsl:variable name="nonNodeFieldList" select="
			      //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attribute
			    | //xs:schema/xs:complexType[@name=$nodeType]/xs:attribute
			    | xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
                            | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | //xs:schema/xs:complexType[@name=$nodeType]/xs:annotation/xs:appinfo/xs:attribute
                            | xs:annotation/xs:appinfo/xs:attribute
			    | xs:complexType/xs:attribute">
          </xsl:variable>
          <xsl:variable name="nodeFieldList" select="
                              //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$nodeType]/xs:annotation/xs:appinfo/xs:element
                            | xs:annotation/xs:appinfo/xs:element">
          </xsl:variable>
          <xsl:variable name="allFieldList" select="$nonNodeFieldList[(@name!='containerField') and (@name!='additionalInterface') and (@name!='componentLevel') and (@name!='componentName') and (@name!='sourceCode') ] | $nodeFieldList[(@name!='IS')]">             
          </xsl:variable>
          
          <xsl:element name="h2">
            <xsl:element name="a">
              <xsl:attribute name="id"><xsl:value-of select="$nodeName"/></xsl:attribute>
              <xsl:text>7.2.</xsl:text>
              <xsl:value-of select="position()"/>
              <xsl:text>&#160;&#160;</xsl:text>
              <xsl:value-of select="$nodeName"/>
              <xsl:choose>
                <xsl:when test="$nodeName='GeoOrigin'"><xsl:text> (deprecated)</xsl:text></xsl:when>
              </xsl:choose>
            </xsl:element> <!-- a -->
          </xsl:element> <!-- h2 -->
          <xsl:text>&#10;</xsl:text>

          <xsl:element name="p">
            <xsl:text>Example </xsl:text>
            <xsl:value-of select="@name"/> 
            <xsl:text> statement in Classic VRML encoding with all parameters set to default values.</xsl:text>
          </xsl:element> <!-- p -->
          <xsl:text>&#10;</xsl:text>

          <xsl:element name="pre">
            <xsl:attribute name="class"><xsl:text>node</xsl:text></xsl:attribute>
            <xsl:value-of select="$nodeName"/>
            <xsl:text> {&#10;</xsl:text>

            <xsl:for-each select="$allFieldList">
              <xsl:sort select="@name"/>
              <!-- We need to know the access type as the file can only contain initializeOnly and inputOutput fields -->
              <xsl:variable name="attributeName" select="@name"/>
              <xsl:variable name="accessType">
                <xsl:choose>
                  <xsl:when test="@fixed"><xsl:value-of select="fn:substring-before(@fixed, 'Field')" /></xsl:when>
 		  <xsl:when test="(($nodeName='GeoCoordinate') and ($attributeName='point')) or
				  (($nodeName='Extrusion') and ($attributeName='scale')) or
				  (($nodeName='FloatVertexAttribute') and ($attributeName='name')) or
				  (($nodeName='Matrix3VertexAttribute') and ($attributeName='name')) or
				  (($nodeName='Matrix4VertexAttribute') and ($attributeName='name')) or
				  (($nodeName='X3DVertexAttributeNode') and ($attributeName='name')) or
				  (($nodeName='ShaderPart' or $nodeName='ShaderProgram') and ($attributeName='type')) or
				  (($nodeName='WorldInfo') and ($attributeName='info'))">initializeOnly</xsl:when>
                  <xsl:when test="(($nodeName='ConeEmitter') and ($attributeName='angle')) or
  				  (($nodeName='GeoElevationGrid') and ($attributeName='yScale')) or
				  (($nodeName='HAnimDisplacer') and ($attributeName='coordIndex')) or
                                  (($nodeName='HAnimSegment' or $nodeName='RigidBody') and ($attributeName='mass')) or
				  ( contains($nodeName,'Light') and ($attributeName='radius')) or
				  (($nodeName='NurbsPositionInterpolator') and ($attributeName='order')) or
				  (($nodeName='Viewpoint') and ($attributeName='orientation')) or
				  ($attributeName='name') or
				  ($attributeName='type') or
				  ($attributeName='info')">inputOutput</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='inputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">inputOnly</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='outputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">outputOnly</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='inputOutputAccessTypes']//xs:enumeration[@value=$attributeName]">inputOutput</xsl:when>
                  <xsl:when test="//xs:simpleType[@name='initializeOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">initializeOnly</xsl:when>
                </xsl:choose>
              </xsl:variable>
              <xsl:variable name="type" select="@type"/>
              <xsl:variable name="constrainedTypeParent" select="//xs:schema/xs:simpleType[@name=$type]/xs:restriction/@base"/>
              <xsl:variable name="constrainedTypeGrandParent" select="//xs:schema/xs:simpleType[@name=$constrainedTypeParent]/xs:restriction/@base"/>
              <xsl:variable name="X3dType">
                <xsl:choose>
                  <xsl:when test="starts-with(@type,'SF') or starts-with(@type,'MF')">
                    <xsl:value-of select="@type"/>
                  </xsl:when>
                  <xsl:when test="(@type ='NMTOKEN')">
                    <xsl:text>SFString</xsl:text>
                  </xsl:when>
                  <xsl:when test="(@type ='NMTOKENS')">
                    <xsl:text>MFString</xsl:text>
                  </xsl:when>
                  <xsl:when test="starts-with(xs:simpleType/xs:restriction/@base,'SF') or starts-with(xs:simpleType/xs:restriction/@base,'MF')">
                    <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
                  </xsl:when>
                  <xsl:when test="starts-with($constrainedTypeParent,'SF') or starts-with($constrainedTypeParent,'MF')">
                    <xsl:value-of select="$constrainedTypeParent"/>
                  </xsl:when>
                  <xsl:when test="$constrainedTypeParent">
                    <xsl:choose>
                      <xsl:when test="($constrainedTypeParent='xs:token')">SFString</xsl:when>
                      <xsl:when test="starts-with($constrainedTypeParent,'xs:')">
                        <xsl:value-of select="substring-after($constrainedTypeParent,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="$constrainedTypeParent"/>
                      </xsl:otherwise>
		    </xsl:choose>
                  </xsl:when>
                  <xsl:when test="$constrainedTypeGrandParent">
                    <xsl:choose>
                      <xsl:when test="($constrainedTypeGrandParent='xs:token')">SFString</xsl:when>
                      <xsl:when test="starts-with($constrainedTypeGrandParent,'xs:')">
                        <xsl:value-of select="substring-after($constrainedTypeGrandParent,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="$constrainedTypeGrandParent"/>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:when>
                  <xsl:otherwise>
                    <xsl:choose>
                      <xsl:when test="starts-with(@type,'xs:')">
                        <xsl:value-of select="substring-after(@type,'xs:')"/>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:value-of select="@type"/>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:otherwise>
                </xsl:choose>
              </xsl:variable>
              <xsl:if test="(($accessType='initializeOnly') or ($accessType='inputOutput'))">
                <!-- First entry is the field name -->
                <xsl:text>  </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:value-of select="substring('                                          ', string-length(@name))"/>
                <!-- Second entry is the default value or an example value -->
                <xsl:choose>
                    <xsl:when test="($X3dType='SFNode')"><xsl:text>NULL</xsl:text></xsl:when>    
                  <xsl:when test="($X3dType='MFNode')"><xsl:text>[]</xsl:text></xsl:when>    
                  <xsl:when test="starts-with($X3dType, 'SF') or ($X3dType='NMTOKEN') or ($X3dType='string')">
                    <xsl:choose>
                      <xsl:when test="($X3dType='SFBool') and (@default='true')">
                        <xsl:text>TRUE</xsl:text>
                      </xsl:when>
                      <xsl:when test="($X3dType='SFBool') and (@default='false')">
                        <xsl:text>FALSE</xsl:text>
                      </xsl:when>
                      <xsl:when test="(@default) and (($X3dType='SFString') or ($X3dType='NMTOKEN') or ($X3dType='string'))">
                        <xsl:text>"</xsl:text>
                        <xsl:value-of select="@default"/>
                        <xsl:text>"</xsl:text>
                      </xsl:when>
                      <xsl:when test="(not (@default)) and (($X3dType='SFString') or ($X3dType='NMTOKEN') or ($X3dType='string'))">
                        <xsl:text>"</xsl:text>
                        <xsl:text>"</xsl:text>
                      </xsl:when>
                      <xsl:when test="@default"><xsl:value-of select="@default"/></xsl:when>
                      <xsl:otherwise>
                        <xsl:text>No default value for </xsl:text>
                        <xsl:value-of select="$X3dType"/>
                        <xsl:text> field</xsl:text>
                      </xsl:otherwise>
                    </xsl:choose>
                  </xsl:when>
                  <xsl:when test="starts-with($X3dType, 'MF') or ($X3dType='NMTOKENS')">
                    <xsl:choose>
                      <xsl:when test="not (@default)"><xsl:text>[]</xsl:text></xsl:when>
                      <xsl:otherwise>
                        <xsl:text>[</xsl:text>
                        <xsl:value-of select="@default"/>
                        <xsl:text>]</xsl:text>
                      </xsl:otherwise>      
                    </xsl:choose>    
                  </xsl:when>    
                  <xsl:otherwise>
                      <xsl:text>(BAD FIELD TYPE </xsl:text>
                      <xsl:value-of select="$X3dType"/>
                      <xsl:text>)</xsl:text>
                  </xsl:otherwise>    
                </xsl:choose>
                <xsl:text>&#10;</xsl:text>
              </xsl:if>
            </xsl:for-each>

            <xsl:text>}&#10;</xsl:text>
          </xsl:element> <!-- </pre> -->
          <xsl:text>&#10;</xsl:text>

            <!-- divider X3D separator bar that links back to top -->
            <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#</xsl:text></xsl:attribute>
              <xsl:attribute name="title"><xsl:text>to top</xsl:text></xsl:attribute>
              <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
              </xsl:element>  <!-- img -->
              <xsl:text>&#10;</xsl:text>
            </xsl:element> <!-- a-->
            <xsl:text>&#10;</xsl:text>

        </xsl:for-each>

        <xsl:text>&#10;</xsl:text>
        
            </xsl:element><!-- div proposed -->
            <xsl:text>&#10;</xsl:text>

      </xsl:element> <!-- </body> -->
    </xsl:element> <!-- </html> -->
    
  </xsl:result-document>
</xsl:template>

</xsl:stylesheet>
