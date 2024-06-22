<?xml version='1.0'?>
<xsl:stylesheet version="2.0"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform" 
                xmlns:xs="http://www.w3.org/2001/XMLSchema"
                xmlns:fn="http://www.w3.org/2005/xpath-functions"
                xmlns:saxon="http://saxon.sf.net/"
                xmlns:xsd="http://www.w3.org/2001/XMLSchema-instance">
    
<!--    https://www.saxonica.com/html/documentation12/extensions/attributes
  <head>
   <meta name="filename"    content="X3dToX3dvClassicVrmlEncoding.xslt" />
   <meta name="author"      content="Don Brutzman, Duane Davis" />
   <meta name="created"     content="5 July 2004" />
   <meta name="description" content="XSLT stylesheet to convert X3D files to ClassicVRML encoding,
   				     simply by using X3dToVrml97.xslt" />
   <meta name="url"         content="https://www.web3d.org/x3d/content/X3dToX3dvClassicVrmlEncoding.xslt" />
  </head>
-->

  <!-- use xsl:import rather than xsl:include so that variable definitions are overridden -->
  <!-- requires special handling when used from inside a .jar -->
  <xsl:import href="X3dToVrml97.xslt"/>

  <xsl:variable name="fileEncoding"><xsl:text>ClassicVRML</xsl:text></xsl:variable>
  <xsl:variable name="outputDiagnostics"><xsl:text>false</xsl:text></xsl:variable>
  <xsl:variable name="disableIndent"><xsl:text>false</xsl:text></xsl:variable>

</xsl:stylesheet>
