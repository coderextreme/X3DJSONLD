<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="filename"    content="X3dDocumentMetaToMarkdown.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="7 April 2018" />
   <meta name="description" content="Read head/meta elements and produce simple markdown of form `attribute` = `value`." />
   <meta name="url"         content="http://www.web3d.org/x3d/stylesheets/X3dDocumentMetaToMarkdown.xslt" />
  </head>

Recommended tools:
- X3D-Edit, https://savage.nps.edu/X3D-Edit
- X3DJSAIL, http://www.web3d.org/specifications/java/X3DJSAIL.html
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
- XML Spy http://www.xmlspy.com
-->

<xsl:stylesheet version="2.0" exclude-result-prefixes="ds saxon"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#"
                xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
	<xsl:strip-space elements="*"/>
	<xsl:output encoding="UTF-8" media-type="text/text" omit-xml-declaration="yes" method="text"/>

	<xsl:variable name="title" select="//head/meta[@name = 'title']/@content"/>
	
	<xsl:template match="/">
		<xsl:text>## Model Metadata</xsl:text>
		<xsl:if test="(string-length($title) > 0)">
			<xsl:text> </xsl:text>
			<xsl:value-of select="$title"/>
		</xsl:if>
		<xsl:text>&#10;</xsl:text>
		<xsl:text>&#10;</xsl:text>
		
		<xsl:if test="(count(//head/meta) > 0) or true()">
			<xsl:text>| attribute     | value       |</xsl:text>
			<xsl:text>&#10;</xsl:text>
			<xsl:text>| ------------: | :---------- |</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>

		<xsl:apply-templates select="//head/meta"/>
		
	</xsl:template>
	
	<xsl:template match="meta" >
		
		<xsl:variable name="name"    select="@name"/>
		<xsl:variable name="content" select="@content"/>
		<xsl:variable name="normalizedValue" select="normalize-space(@content)"/>
		
		<xsl:variable name="isUrl"
			select="(name = 'title') or
					ends-with($normalizedValue,'.x3d') or
					ends-with($normalizedValue,'.x3dv') or
					ends-with($normalizedValue,'.x3db') or
					ends-with($normalizedValue,'.wrl') or
					ends-with($normalizedValue,'.exi') or
					ends-with($normalizedValue,'.gz') or
					ends-with($normalizedValue,'.zip') or
					ends-with($normalizedValue,'.MD5') or
					ends-with($normalizedValue,'.htm') or
					ends-with($normalizedValue,'.html') or
					ends-with($normalizedValue,'.xhtml') or
					ends-with($normalizedValue,'.png') or
					ends-with($normalizedValue,'.jpg') or
					ends-with($normalizedValue,'.jpeg') or
					ends-with($normalizedValue,'.tiff') or
					ends-with($normalizedValue,'.pdf') or
					ends-with($normalizedValue,'.stl') or
					ends-with($normalizedValue,'.ply') or
					ends-with($normalizedValue,'.3mf') or
					ends-with($normalizedValue,'.txt')"/>
		
		<xsl:text>| </xsl:text>
		<xsl:text>`</xsl:text>
		<xsl:value-of select="normalize-space($name)"/>
		<xsl:text>`</xsl:text>
		<xsl:text> | </xsl:text>
		<xsl:choose>
			<xsl:when test="$isUrl">
				<xsl:text>[</xsl:text>
				<xsl:value-of select="$content"/>
				<xsl:text>](</xsl:text>
				<xsl:value-of select="$content"/>
				<xsl:text>)</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="$content"/>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text> |</xsl:text>
		<xsl:text>&#10;</xsl:text>
		
	</xsl:template>

</xsl:stylesheet>
