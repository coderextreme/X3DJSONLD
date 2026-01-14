<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="filename"    content="X3dToXhtml-4.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="15 February 2003" />
   <meta name="revised"     content="28 December 2005" />
   <meta name="description" content="XSL stylesheet to convert X3D source into an easily readable XHTML page.
   				This version applies color and style using Cascading Style Sheet (CSS) markup via HTML span, div tags." />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-4.xslt" />
  </head>

Recommended tools:
- X3D-Edit 3.2, https://www.web3d.org/x3d/tools/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- XML Spy https://www.xmlspy.com
--> 
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
	<xsl:strip-space elements="*"/>
	<xsl:output encoding="UTF-8" media-type="text/html" indent="yes" cdata-section-elements="Script" omit-xml-declaration="no" method="html"/>

	<xsl:template match="/">
		<html>
			<head>
				<title>
					<xsl:variable name="fileName" select="//head/meta[@name='title']/@content"/>
					<xsl:choose>
						<xsl:when test="//head/meta[@name='title']/@content!='*enter FileNameWithNoAbbreviations.x3d here*' ">
							<xsl:value-of select="$fileName"/>
							<xsl:text> (X3dToXhtml)</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:text> X3dToXhtml </xsl:text>
							<xsl:value-of select="$fileName"/>
						</xsl:otherwise>
					</xsl:choose>
				</title>
				<style type="text/css">
<![CDATA[span.element {color: navy}
span.attribute {color: green}
span.value {color: teal}
span.prototype {color: purple}
span.route {color: red}
span.nodeName {color: maroon}
a.prototype {color: purple}
div.center {text-align: center}
div.indent {margin-left:25px}
b.warning {color: #CC5500}
b.error {color: #CC0000}]]>
				</style>
				<meta name="generator" content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-4.xslt"></meta>
			</head>
			<body>
<pre>
&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;
&lt;!DOCTYPE X3D PUBLIC &quot;https://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;/www.web3d.org/TaskGroups/x3d/content/x3d-3.0.dtd&quot;&gt;
</pre>
				<xsl:apply-templates select="* | comment()" />

				<!-- build color key as XML comment -->
				<p>
				<xsl:text>&#10;</xsl:text>
				<xsl:text>&#10;&lt;!-- Tag color codes:&#10;</xsl:text>
				<xsl:text>&lt;</xsl:text>
				<span class="element">
					<xsl:text>Node</xsl:text>
				</span>
				<xsl:if test="//*[@DEF]">
					<span class="nodeName">
						<xsl:text> DEF</xsl:text>
					</span>
					<xsl:text>='</xsl:text>
					<span class="nodeName">
						<xsl:text>NodeName</xsl:text>
					</span>
					<xsl:text>'</xsl:text>
				</xsl:if>
				<xsl:text> </xsl:text>
				<span class="attribute">
					<xsl:text>attribute</xsl:text>
				</span>
				<xsl:text>='</xsl:text>
				<span class="value">
					<xsl:text>value</xsl:text>
				</span>
				<xsl:text>'/&gt;</xsl:text>
				<!-- ends node, begin Prototype -->
				<xsl:if test="//*[contains(local-name(),'Proto')]">
					<xsl:text>&#10;&lt;</xsl:text>
					<span class="prototype">
						<xsl:text>Prototype</xsl:text>
					</span>
					<xsl:text> </xsl:text>
					<span class="attribute">
						<xsl:text>name</xsl:text>
					</span>
					<xsl:text>='</xsl:text>
					<span class="prototype">
						<xsl:text>ProtoName</xsl:text>
					</span>
					<xsl:text>'&gt;</xsl:text>
					<xsl:text>&#10;	&lt;</xsl:text>
					<span class="prototype">
						<xsl:text>field</xsl:text>
					</span>
					<span class="attribute">
						<xsl:text>name</xsl:text>
					</span>
					<xsl:text>='</xsl:text>
					<span class="prototype">
						<xsl:text>fieldName</xsl:text>
					</span>
					<xsl:text>'/&gt;</xsl:text>
					<xsl:text> &lt;/</xsl:text>
					<span class="prototype">
						<xsl:text>Prototype</xsl:text>
					</span>
					<xsl:text>&gt;</xsl:text>
				</xsl:if>
				<xsl:text> --&gt;&#10;</xsl:text>
				</p>
			</body>
		</html>
	</xsl:template>
    
	<xsl:template match="*" >
		<!-- break to new line if needed -->
		<xsl:if test="position() > 1"><br/></xsl:if>
		<!-- process element tags.  manually control generation of brackets since they are unaffected by styles.  -->
		<xsl:choose>
			<xsl:when test="*">
				<!-- open tag for current element, which is a parent -->
				<xsl:text>&lt;</xsl:text>
				<xsl:call-template name="style-element-name" />
				<!-- handle attribute(s) if any -->
				<xsl:call-template name="process-attributes-in-order" />
				
				<!-- finish initial tag of pair -->
				<xsl:text>&gt;&#10;</xsl:text>
				<!-- indent children -->
				<div class="indent">
					<xsl:apply-templates select="* | comment()" />
				</div>
				<!-- close tag for this element -->
				<xsl:text>&lt;/</xsl:text>
				<xsl:call-template name="style-element-name" />
				<xsl:text>&gt;&#10;</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<!-- single tag, no children -->
				<xsl:text>&lt;</xsl:text>
				<xsl:call-template name="style-element-name" />
				<!-- handle attribute(s) if any -->
				<xsl:call-template name="process-attributes-in-order" />
				
				<!-- finish singleton tag -->
				<xsl:text>/&gt;&#10;</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		
	</xsl:template>

	<xsl:template name="style-element-name">
		<xsl:choose>
			<xsl:when test="contains(local-name(),'Proto') or starts-with(local-name(),'field')">
				<span class="prototype">
					<xsl:value-of select="local-name()"></xsl:value-of>
				</span>
			</xsl:when>
			<xsl:when test="local-name()='ROUTE'">
				<span class="route">
					<xsl:value-of select="local-name()"></xsl:value-of>
				</span>
			</xsl:when>
			<xsl:otherwise>
				<span class="element">
					<xsl:value-of select="local-name()"></xsl:value-of>
				</span>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<xsl:template name="process-attributes-in-order">
		<xsl:choose>
			<!-- handle specially ordered cases first -->
			<xsl:when test="local-name()='meta'">
				<xsl:apply-templates select="@name" />
				<xsl:apply-templates select="@content" />
				<xsl:apply-templates select="@*[local-name()!='name' and local-name()!='content']" />
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
			<!-- otherwise not a special case, process DEF/USE first and urls last -->
			<xsl:otherwise>
				<xsl:apply-templates select="@DEF | @USE | @*[not(contains(local-name(), 'url') or contains(local-name(), 'Url'))]"/>
				<xsl:apply-templates select="@*[contains(local-name(), 'url') or contains(local-name(), 'Url')]"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<xsl:template match="@*" >
		<xsl:text>&#10;	</xsl:text> <!-- carriage return, tab -->
		<span class="attribute">
			<xsl:value-of select="local-name()"></xsl:value-of>
		</span>
		<xsl:text>='</xsl:text>
		<!-- style payload data, as appropriate -->
		<xsl:choose>
			<!-- handle special cases first -->
			<xsl:when test="local-name(..)='meta' and ../@name='warning'">
				<b class="warning">
					<xsl:value-of select="."/>
				</b>
			</xsl:when>
			<xsl:when test="local-name(..)='meta' and ../@name='error'">
				<b class="error">
					<xsl:value-of select="."/>
				</b>
			</xsl:when>
			<xsl:when test="(contains(local-name(..),'Proto') or starts-with(local-name(..),'field')) and local-name()='name'">
				<span class="prototype">
					<xsl:value-of select="local-name()"></xsl:value-of>
				</span>
			</xsl:when>
			<xsl:otherwise>
				<span class="value">
					<xsl:value-of select="."/>
				</span>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>'</xsl:text>
	</xsl:template>

	<!-- ****** XML comments ****** -->
	<xsl:template match="comment()">
		<xsl:text>&#10;</xsl:text>
		<br />
		<xsl:text>&#10; </xsl:text>
		<!-- wrap comment in blanks in case it ends with hyphen, since - is not a valid comment terminator -->
		<xsl:text>&lt;!-- </xsl:text><xsl:value-of select="normalize-space(string(.))"/><xsl:text> --&gt;</xsl:text>
	</xsl:template>

</xsl:stylesheet>
