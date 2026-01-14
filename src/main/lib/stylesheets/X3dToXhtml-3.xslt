<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="filename"    content="X3dToXhtml-3.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="13 February 2003" />
   <meta name="revised"     content="28 December 2005" />
   <meta name="description" content="XSL stylesheet to convert X3D source into an easily readable XHTML page.
   				This version applies color and style using Cascading Style Sheet (CSS) markup via HTML span, div tags." />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-3.xslt" />
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
a.prototype {color: purple}
div.center {text-align: center}
div.indent {margin-left:25px}
b.warning {color: #CC5500}
b.error {color: #CC0000}]]>
				</style>
				<meta name="generator" content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-3.xslt"></meta>
			</head>
			<body>
<pre>
&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;
&lt;!DOCTYPE X3D PUBLIC &quot;https://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;/www.web3d.org/TaskGroups/x3d/content/x3d-3.0.dtd&quot;&gt;
</pre>
				<xsl:apply-templates select="*" />
			</body>
		</html>
	</xsl:template>
    
	<xsl:template match="*" >
		<p>
		<xsl:choose>
			<xsl:when test="*">
				<!-- open tag for current element, which is a parent -->
				<xsl:text>&lt;</xsl:text>
				<span class="element">
					<xsl:value-of select="local-name()"></xsl:value-of>
				</span>
				<!-- handle attribute(s) if any -->
				<xsl:choose>
					<!-- handle specially ordered cases first -->
					<xsl:when test="local-name()='meta'">
						<xsl:apply-templates select="@name" />
						<xsl:apply-templates select="@content" />
						<xsl:apply-templates select="@*[local-name()!='name' and local-name()!='content']" />
					</xsl:when>
					<xsl:otherwise>
						<xsl:apply-templates select="@*" />
					</xsl:otherwise>
				</xsl:choose>
				<xsl:text>&gt;</xsl:text>
				<!-- indent children -->
				<div class="indent">
					<xsl:apply-templates select="*" />
				</div>
				<!-- close tag for this element -->
				<xsl:text>&lt;/</xsl:text>
				<span class="element">
					<xsl:value-of select="local-name()"></xsl:value-of>
				</span>
				<xsl:text>&gt;</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<!-- single tag, no children -->
				<xsl:text>&lt;</xsl:text>
				<span class="element">
					<xsl:value-of select="local-name()"></xsl:value-of>
				</span>
				<!-- warning:  attribute-handling code duplicated here.  need to isolate in single block. -->
				<!-- handle attribute(s) if any -->
				<xsl:choose>
					<!-- handle specially ordered cases first -->
					<xsl:when test="local-name()='meta'">
						<xsl:apply-templates select="@name" />
						<xsl:apply-templates select="@content" />
						<xsl:apply-templates select="@*[local-name()!='name' and local-name()!='content']" />
					</xsl:when>
					<xsl:otherwise>
						<xsl:apply-templates select="@*" />
					</xsl:otherwise>
				</xsl:choose>
				<xsl:text>/&gt;</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		</p>
		
	</xsl:template>
    
	<xsl:template match="@*" >
		<xsl:text> </xsl:text>
		<span class="attribute">
			<xsl:value-of select="local-name()"></xsl:value-of>
		</span>
		<xsl:text>='</xsl:text>
		<span class="value">
			<xsl:value-of select="."></xsl:value-of>
		</span>
		<xsl:text>'</xsl:text>
		
	</xsl:template>

</xsl:stylesheet>
