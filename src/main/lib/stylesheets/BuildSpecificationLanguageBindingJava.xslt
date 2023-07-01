<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl  ="http://www.w3.org/1999/XSL/Transform" version="2.0"
				xmlns:xs   ="http://www.w3.org/2001/XMLSchema"
				xmlns:fn   ="http://www.w3.org/2005/xpath-functions"
				xmlns:saxon="http://saxon.sf.net/"><!-- http://www.saxonica.com/documentation9.5/extensions/attributes -->
            <!--
				extension-element-prefixes="saxon xs">
                saxon:trace="true"
                xmlns:saxon="http://icl.com/saxon"
                xmlns:date="http://exslt.org/dates-and-times"
                xmlns:xeena="../content/profile.dtd"
                xmlns:x3d="../content/x3d-3.3.xsd"
				extension-element-prefixes="xs"
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
   <meta name="filename"    content="BuildSpecificationLanguageBindingJava.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="13 July 2014" />
   <meta name="description" content="XSL stylesheet to create Scene Access Interface (SAI) interfaces as Java source code matching the X3D specification." />
   <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/BuildSpecificationLanguageBindingJava.xslt" />
   <meta name="reference"   content="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationLanguageBindingJava.xslt?revision=9169&view=markup" />
   <meta name="reference"   content="BuildSpecificationXmlEncodingFromSchema.xslt" />
  </head>

Recommended tool:
-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
   Especially necessary since this stylesheet uses saxon-specific extensions for file handling
- Netbeans 7.*

Invocation:
-  cd   C:\www.web3d.org\x3d\stylesheets
   c:\xml\saxon\saxon ../../specifications/x3d-3.3.xsd  BuildSpecificationLanguageBindingJava.xslt

TODO:
- consider mechanism for exposing containerField names of child nodes in content model
-->
<!-- &nbsp; is &#160; and linefeed character is &#10; -->

<xsl:output method="xml" encoding="UTF-8" indent="yes" omit-xml-declaration="yes"/>

<xsl:strip-space elements="*" />

<xsl:variable name="X3dTooltipsFile"><xsl:text>x3d-3.3.profile.xml</xsl:text></xsl:variable>

<xsl:variable name="specificationIndexUrl">
    <xsl:text>https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/</xsl:text>
</xsl:variable>

<xsl:variable name="includeAbstractSpecLinks" select="false()"/>

<!-- ****************** root:  start of file ****************** -->
<xsl:template match="/">

<xsl:message>
  <xsl:text>BuildSpecificationLanguageBindingJava: process X3D schema version </xsl:text>
  <xsl:value-of select="//xs:schema/@version"/>
  <xsl:text> using BuildSpecificationLanguageBindingJava.xslt </xsl:text>
 </xsl:message>
 
 <xsl:call-template name="schema-appinfo-warnings"/>

<!-- X3D schema validity checks are found in BuildSpecificationXmlEncodingFromSchema.xslt and are not duplicated here -->
<!-- check for duplicate accessType definitions -->
<!-- check for missing accessType definitions -->

<!-- <xsl:message><xsl:text>$LinkDom=</xsl:text><xsl:value-of select="$LinkDom"/><xsl:text>&#10;</xsl:text></xsl:message> -->

<!-- create HTML output -->

  <xsl:variable name="JavaSourceDirectoryRoot">
    <xsl:text>X3dSceneAccessInterfacesJava/</xsl:text>
  </xsl:variable>
  <xsl:variable name="ReadmeFile">
    <xsl:text>Readme.html</xsl:text>
  </xsl:variable>
  <xsl:variable name="JavaSourceDirectoryTree"> <!-- {$JavaSourceDirectoryTree} -->
    <xsl:text>src/org/web3d/x3d/sai/</xsl:text>
  </xsl:variable>
        
<!-- ===================================================================================== -->
<!-- Annex  B Node type interfaces -->
  
<xsl:result-document  href="JavaLanguageBinding.Part2.nodeTypeInterfaces.html" method="html" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

<xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
]]></xsl:text>
<!-- <xsl:text><!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"></xsl:text> -->
<xsl:text>&#10;</xsl:text>

<xsl:element name="html">
  <xsl:attribute name="lang"><xsl:text>en</xsl:text></xsl:attribute>
  <xsl:text>&#10;</xsl:text>
  <xsl:element name="head">
      
	<xsl:element name="title">
		<!-- mdash = 8212 &amp;#8212;&amp;#8212; -->
		<xsl:text disable-output-escaping="yes">ISO/IEC 19777-2:20xx -- X3D Java Binding -- Annex B Node type interfaces </xsl:text>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>identifier</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/documents/specifications/19777-2/V3.3/Part2/nodeTypeInterfaces.html</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/JavaLanguageBinding.Part2.nodeTypeInterfaces.html</xsl:text></xsl:attribute>
	</xsl:element>
        
        <xsl:call-template name="generate-html-meta-tags"/>
        
  </xsl:element>
  <xsl:element name="body">
      
	<xsl:text>&#10;</xsl:text>
        <xsl:comment> Autogenerated Java interface encodings for each X3D node follow </xsl:comment>
	<xsl:text>&#10;</xsl:text>
        <a name="top"/>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="div">
		<xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>x3dlogo</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/x3d.png</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>X3D logo</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>176</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>88</xsl:text></xsl:attribute>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="div">
		<xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>HeadingPart</xsl:text></xsl:attribute>
			<xsl:text disable-output-escaping="yes">Information technology &amp;mdash; Computer graphics, image processing and environmental data representation &amp;mdash; Extensible 3D (X3D) language bindings &amp;mdash;</xsl:text>
			<xsl:text>&#10;</xsl:text>
			<xsl:element name="br"/>
			<xsl:text>&#10;</xsl:text>
			<xsl:text>Part 2:  Java</xsl:text>
		</xsl:element>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
			<xsl:text>Annex B</xsl:text>
		</xsl:element>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>AnnexType</xsl:text></xsl:attribute>
			<xsl:text>(normative - draft)</xsl:text>
		</xsl:element>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
			<xsl:text>Node type interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

	<xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>IntroductionAndTopics</xsl:text></xsl:attribute>
		</xsl:element>
                <xsl:text>B.1&#160;&#160;Introduction and topics</xsl:text>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="h2">
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>Introduction</xsl:text></xsl:attribute>
			<xsl:text>B.1.1&#160;&#160;Introduction</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="p">
		<xsl:text>This annex provides the definition of the interface signature for each interface that represents the abstract node instance defined in </xsl:text>
		<xsl:text>&#10;</xsl:text>
		<xsl:element name="a">
			<xsl:attribute name="href"><xsl:text>references.html#[I19775_2]</xsl:text></xsl:attribute>
			<xsl:text>ISO/IEC 19775-2</xsl:text>
		</xsl:element>
		<xsl:text>.</xsl:text>
		<xsl:text>&#10;</xsl:text>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="h2">
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>Topics</xsl:text></xsl:attribute>
			<xsl:text>B.1.2&#160;&#160;Topics</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="p">
            <xsl:text>See </xsl:text>
            <xsl:element name="a">
                    <xsl:attribute name="href"><xsl:text>#TopicsTable</xsl:text></xsl:attribute>
                    <xsl:text>Table&#160;B.1</xsl:text>
            </xsl:element>
            <xsl:text> for the topics in this clause.</xsl:text>
            <xsl:text>&#10;</xsl:text>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="div">
		<xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>TableCaption</xsl:text></xsl:attribute>
			<xsl:element name="a">
				<xsl:attribute name="name"><xsl:text>TopicsTable</xsl:text></xsl:attribute>
				<!-- mdash = 8212 -->
				<xsl:text disable-output-escaping="yes">Table B.1 &amp;mdash; Topics</xsl:text>
			</xsl:element>
		</xsl:element>
		<xsl:text>&#10;</xsl:text>

		<!-- Loop over elements, build index -->

		<xsl:element name="table">
                    <xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
                    <xsl:attribute name="align"><xsl:text>center</xsl:text></xsl:attribute>
                    <xsl:attribute name="border"><xsl:text>1</xsl:text></xsl:attribute>
                    <xsl:attribute name="summary"><xsl:text>Table of contents</xsl:text></xsl:attribute>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:element name="tbody">
                    <xsl:element name="tr">
                        <xsl:attribute name="align"><xsl:text>left</xsl:text></xsl:attribute>
                        <xsl:text>&#10;</xsl:text>
                        
                        <xsl:element name="td">
                        <!--<xsl:attribute name="rowspan"><xsl:text>25</xsl:text></xsl:attribute> -->
                            <xsl:attribute name="width"><xsl:text>33%</xsl:text></xsl:attribute>
                            <xsl:attribute name="valign"><xsl:text>top</xsl:text></xsl:attribute>
                            
                            <ul>
                                <!-- ========== section ========== -->
                                <li>
                                    <xsl:element name="a">
                                            <xsl:attribute name="href"><xsl:text>#IntroductionAndTopics</xsl:text></xsl:attribute>
                                            <xsl:text>B.1&#160; Introduction and topics</xsl:text>
                                    </xsl:element>
                                    <ul>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#Introduction</xsl:text></xsl:attribute>
                                                    <xsl:text>B.1.1&#160;Introduction</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
                                                    <xsl:text>B.1.2&#160;Topics</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#Conventions</xsl:text></xsl:attribute>
                                                    <xsl:text>B.1.3&#160;Conventions</xsl:text>
                                            </xsl:element>
                                        </li>
                                    </ul>
                                </li>
                                <xsl:text>&#10;</xsl:text>

                                <!-- ========== section ========== -->
                                <li>
                                    <xsl:element name="a">
                                            <xsl:attribute name="href"><xsl:text>#NodeTypeInterfaces</xsl:text></xsl:attribute>
                                            <xsl:text>B.2&#160;Node type interfaces</xsl:text>
                                    </xsl:element>
                                    <xsl:text>&#10;</xsl:text>

                                    <ul>
                                        <!-- Table of Contents TOC loop for abstract node type interfaces -->
                                        <xsl:for-each select="//xs:schema/xs:complexType[ends-with(@name,'Node') or (@name='X3DPrototypeInstance')]">
                                            <xsl:sort select="lower-case(@name)"/>
                                            <!-- example: X3DAppearanceChildNode -->
                                            <li>
                                                <!-- html bookmarks -->
                                                <xsl:element name="a">
                                                    <xsl:attribute name="href">
                                                        <xsl:text>#</xsl:text>
                                                        <xsl:value-of select="@name"/>
                                                    </xsl:attribute>
                                                    <xsl:text>B.2.</xsl:text> 
                                                    <xsl:value-of select="position()"/>
                                                    <xsl:text>&#160;</xsl:text>
                                                    <xsl:value-of select="@name"/>
                                                </xsl:element>
                                                <xsl:text> </xsl:text>
                                                <xsl:element name="br"/>
                                                <xsl:text>&#10;</xsl:text>
                                            </li>
                                        </xsl:for-each>
                                    </ul>
                                </li>
                            </ul>
                            <!-- three-column index, insert column breaks -->
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text disable-output-escaping="yes"><![CDATA[</td>]]></xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text disable-output-escaping="yes"><![CDATA[<td valign="top" width="33%">]]></xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            
                            <ul>
                                <!-- ========== section ========== -->
                                <li>
                                    <xsl:element name="a">
                                        <xsl:attribute name="href"><xsl:text>#AuxiliaryNodeTypeInterfaces</xsl:text></xsl:attribute>
                                        <xsl:text>B.3&#160;Auxiliary node type interfaces</xsl:text>
                                    </xsl:element>
                                    <xsl:text>&#10;</xsl:text>
                                    
                                    <ul>
                                        <!-- TOC loop for abstract object interfaces -->
                                        <xsl:for-each select="//xs:schema/xs:complexType[ends-with(@name,'Object')]">
                                            <xsl:sort select="lower-case(@name)"/>

                                            <!-- example: X3DBoundedObject -->
                                            <li>
                                                <!-- html bookmarks -->
                                                <xsl:element name="a">
                                                    <xsl:attribute name="href">
                                                        <xsl:text>#</xsl:text>
                                                        <xsl:value-of select="@name"/>
                                                    </xsl:attribute>
                                                    <xsl:text>B.3.</xsl:text>
                                                    <xsl:value-of select="position()"/>
                                                    <xsl:text>&#160;</xsl:text>
                                                    <xsl:value-of select="@name"/>
                                                </xsl:element>
                                                <xsl:text> </xsl:text>
                                                <xsl:element name="br"/>
                                                <xsl:text>&#10;</xsl:text>
                                            </li>
                                        </xsl:for-each>
                                    </ul>
                                </li>

                                <!-- ========== section ========== -->
                                <li>
                                    <xsl:element name="a">
                                            <xsl:attribute name="href"><xsl:text>#FieldInterfaces</xsl:text></xsl:attribute>
                                            <xsl:text>B.4&#160; Field interfaces</xsl:text>
                                    </xsl:element>
                                    <xsl:text>&#10;</xsl:text>
                                    <ul>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#X3DFieldTypes</xsl:text></xsl:attribute>
                                                    <xsl:text>B.4.1&#160;X3DFieldTypes</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#X3DFieldEvent</xsl:text></xsl:attribute>
                                                    <xsl:text>B.4.2&#160;X3DFieldEvent</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#X3DFieldEventListener</xsl:text></xsl:attribute>
                                                    <xsl:text>B.4.3&#160;X3DFieldEventListener</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#X3DFieldDefinition</xsl:text></xsl:attribute>
                                                    <xsl:text>B.4.4&#160;X3DFieldDefinition</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#X3DField</xsl:text></xsl:attribute>
                                                    <xsl:text>B.4.5&#160;X3DField</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#MField</xsl:text></xsl:attribute>
                                                    <xsl:text>B.4.6&#160;MField</xsl:text>
                                            </xsl:element>
                                        </li>

                                        <!-- now append index entries for the pertinent field definitions -->
                                        <xsl:for-each select="//xs:schema/xs:simpleType[starts-with(@name,'SF') or starts-with(@name,'MF')]">
                                            <!-- sort SF before MF
                                            <xsl:sort select="starts-with(@name,'MF')"/>
                                            <xsl:sort select="starts-with(@name,'SF')"/> -->
                                            
                                            <!-- example SFBool -->
                                            
                                            <li>
                                                <!-- html bookmarks -->
                                                <xsl:element name="a">
                                                        <xsl:attribute name="href">
                                                            <xsl:text>#</xsl:text>
                                                            <xsl:value-of select="@name"/>
                                                        </xsl:attribute>
                                                        <xsl:text>B.4.</xsl:text>
                                                        <xsl:value-of select="position()+6"/>
                                                        <xsl:text>&#160;</xsl:text>
                                                        <xsl:value-of select="@name"/>
                                                </xsl:element>
                                                <xsl:text>&#10;</xsl:text>
                                            </li>
                                        </xsl:for-each>

                                    </ul>
                                </li>
                                                         
                                <!-- ========== section ========== -->
                                <li>
                                    <a href="#ServiceInterfaces">B.5 Service interfaces</a>
                                    <ul>
                                        <li>
                                            <a href="#BrowserEvent">B.5.1 BrowserEvent</a>
                                        </li>
                                        <li>
                                            <a href="#BrowserFactory">B.5.2 BrowserFactory</a>
                                        </li>
                                        <li>
                                            <a href="#ServiceX3DFieldEvent">B.5.3 X3DFieldEvent</a>
                                        </li>
                                        <li>
                                            <a href="#Matrix3">B.5.4 Matrix3</a>
                                        </li>
                                        <li>
                                            <a href="#Matrix4">B.5.5 Matrix4</a>
                                        </li>
                                    </ul>
                                </li>
                                
                                <!-- ========== section ========== -->
                                <li>
                                    <a href="#StatementInterfaces">B.6 Statement interfaces</a>
                                    <ul>
                                        <li>
                                            <a href="#ComponentInfo">B.6.1 ComponentInfo</a>
                                        </li>
                                        <li>
                                            <a href="#ProfileInfo">B.6.2 ProfileInfo</a>
                                        </li>
                                        <li>
                                            <a href="#UnitInfo">B.6.3 UnitInfo</a>
                                        </li>
                                    </ul>
                                </li>
                            </ul>
                                
                            <!-- three-column index, insert column breaks -->
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text disable-output-escaping="yes"><![CDATA[</td>]]></xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text disable-output-escaping="yes"><![CDATA[<td valign="top" width="34%">]]></xsl:text>
                            <xsl:text>&#10;</xsl:text>
                                
                                <!-- ========== section ========== -->
                            <ul>
                                <li>
                                    <a href="#ExceptionDefinitions">B.7 Exception definitions</a>
                                    <ul>
                                        <li>
                                            <a href="#X3DException">B.7.1 X3DException</a>
                                        </li>
                                        <li>
                                            <a href="#BrowserNotSharedException">B.7.2 BrowserNotSharedException</a>
                                        </li>
                                        <li>
                                            <a href="#ConnectionException">B.7.3 ConnectionException</a>
                                        </li>
                                        <li>
                                            <a href="#ImportedNodeException">B.7.4 ImportedNodeException</a>
                                        </li>
                                        <li>
                                            <a href="#InsufficientCapabilitiesException">B.7.5 
                                                InsufficientCapabilitiesException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidBrowserException">B.7.6 InvalidBrowserException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidDocumentException">B.7.7 InvalidDocumentException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidExecutionContextException">B.7.8 
                                                InvalidExecutionContextException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidFieldException">B.7.9 InvalidFieldException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidFieldValueException">B.7.10 InvalidFieldValueException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidNodeException">B.7.11 InvalidNodeException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidOperationTimingException">B.7.12 
                                                InvalidOperationTimingException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidProtoException">B.7.13 InvalidProtoException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidRouteException">B.7.14 InvalidRouteException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidURLException">B.7.15 InvalidURLException</a>
                                        </li>
                                        <li>
                                            <a href="#InvalidX3DException">B.7.16 InvalidX3DException</a>
                                        </li>
                                        <li>
                                            <a href="#NodeInUseException">B.7.17 NodeInUseException</a>
                                        </li>
                                        <li>
                                            <a href="#NodeUnavailableException">B.7.18 NodeUnavailableException</a>
                                        </li>
                                        <li>
                                            <a href="#NoSuchBrowserException">B.7.19 NoSuchBrowserException</a>
                                        </li>
                                        <li>
                                            <a href="#NotSupportedException">B.7.20 NotSupportedException</a>
                                        </li>
                                        <li>
                                            <a href="#URLUnavailableException">B.7.21 URLUnavailableException</a>
                                        </li>
                                    </ul>
                                </li>
                            </ul>
                            
                            <p>
                                <a href="#TODO">TODO</a>
                            </p>
                            
                            </xsl:element>
                        <xsl:text>&#10;</xsl:text>
                                
                        </xsl:element> <!-- tr -->
                        <xsl:text>&#10;</xsl:text>
                    </xsl:element> <!-- tbody -->
                    <xsl:text>&#10;</xsl:text>
		</xsl:element> <!-- table -->
		<xsl:text>&#10;</xsl:text>
		<xsl:text>&#10;</xsl:text>

	</xsl:element>  <!-- div CenterDiv -->
	<xsl:text>&#10;</xsl:text>
	<xsl:text>&#10;</xsl:text>

        <h2>
            <a name="Conventions"></a>B.1.3 Conventions</h2>

        <p>
            This annex describes all the known interfaces that represent abstract node
            types. It also defines the other types such as interfaces that represent fields
            scenes etc. The convention used is to provide the definition of the class using
            the Java language syntax as would be seen in a Java source file.
        </p>

        <p>
            The naming convention used by to construct interfaces follows these rules:
        </p>
        <ul>
            <li>The name of the interface is identical to the abstract type name.</li>
            <li>The interface extends interfaces defined by the abstract node type.</li>
            <li>Method names use the same name as the field. In addition, a get or
                set modifier is prepended and the first letter of the field name is
                capitalized. There is two exceptions to this rule - the
                <code>addChildren</code> and <code>removeChildren</code> methods of
                the grouping node are left untouched.</li>
            <li>Methods shall be provided to set and get every field of every node type
                regardless for initializeOnly and inputOutput access types. Exceptions
                shall be declared for the ability to read and write that field in
                accordance with the node lifecycle model. inputOnly fields shall have
                Setter methods defined, but no getters. OutputOnly fields shall have
                getters methods defined, but no setters.</li>
            <li>Fields that are represented by Java primitive value types, setter
                methods return the appropriate primitive value. </li>
            <li>Fields that are represented by Java primitive value types, getter
                methods take the appropriate primitive value and return void. Optionally
                the method may throw an InvalidFieldValue if there is range checking or
                other form of validity checking required.</li>
            <li>Fields that represent SFNode data types, there shall be two forms of the
                setter method. One form takes the most-derived form of the abstract type interface
                as possible (for example X3DMaterialNode for the setMaterial method of the
                X3DAppearanceNode interface). The other shall take an instance of
                X3DPrototypeInstance. This second method shall also declare an exception for
                the proto instance representing an invalid field type (the first node of
                the proto instance does not match the requirements of this field).</li>
            <li>Fields that represent SFNode data types, the getter shall always return
                X3DNode instances. (The user shall then determine whether the node is an
                X3DPrototypeInstance or other node type).</li>
            <li>Fields that represent MFNode data types the setter method shall take an
                array of X3DNode instances. It shall declare an exception for
                the any node isntance that represents a proto instance where that instances
                represents an invalid field type (the first node of
                the proto instance does not match the requirements of this field).</li>
            <li>Fields that represent an MFNode, the getter method shall take an array
                of X3DNode and copy the values into the user-provided array. The return type
                shall be void.</li>
            <li>Fields that represent any multi-valued data type, shall have getter methods
                that take an array of the appropriate primitive data type that the user
                supplies. The implementation then copies the values into that array. If the
                array is not big enough for the number of values, an ArrayIndexOutOfBoundsException
                may be thrown.</li>
            <li>Fields that represent any multi-valued data type, shall have a
                method to request the number of items currently valid in that field. The number
                represents the number of items of the data type, not the number of items in
                the array. For example, if the MFRotation field says it has 3 elements, the
                required array length to read the values will need to be 12 (3 * 4 floats per
                rotation value).</li>
            <li>Fields that represent any multi-valued data type shall have a setter that
                takes an array of the appropriate primitive data type.</li>
            <li><i>New.</i> Fields that represent an array of single-valued data types shall also have a setter that
                takes a singleton value of the appropriate primitive data type.
                This includes types like MFFloat, MFString etc. but does not include inherently multi-valued types like MFColor, MFRotation, MFVec3f etc.</li>
        </ul>

        <p>
            Extra convenience methods may be supplied by the interfaces on an as-desired
            basis.
        </p>

        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>NodeTypeInterfaces</xsl:text></xsl:attribute>
			<xsl:text>B.2&#160;&#160;Node type interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
                                    
        <p>
            The following abstract interfaces do not include getter/setter accessor methods for any fields defined in parent abstract types.
        </p>

	<!-- Document body: loop over elements, matching TOC loop for each detailed page entry -->
	<xsl:for-each select="//xs:schema/xs:complexType[ends-with(@name,'Node') or (@name='X3DPrototypeInstance')]">
            <xsl:sort select="lower-case(@name)"/>
            
            <!-- divider X3D separator bar that links back to Topics table -->
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

            <!-- example: X3DAppearanceChildNode -->
            <h2>
                <!-- html bookmarks -->
                <xsl:element name="a">
                    <xsl:attribute name="name">
                        <xsl:value-of select="@name"/>
                    </xsl:attribute>
                </xsl:element>
                <xsl:text>B.2.</xsl:text>
                <xsl:value-of select="position()"/>
                <xsl:text>&#160;</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>&#10;</xsl:text>
            </h2>

            <pre class="listing">
                
                <xsl:call-template name="java-source-from-schema-for-specification"/>
                
            </pre>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>
        </xsl:for-each>

        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>AuxiliaryNodeTypeInterfaces</xsl:text></xsl:attribute>
			<xsl:text>B.3&#160;&#160;Auxiliary node type interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>

	<!-- Document body: loop over elements, matching TOC loop for each detailed page entry -->
	<xsl:for-each select="//xs:schema/xs:complexType[ends-with(@name,'Object')]">
            <xsl:sort select="lower-case(@name)"/>
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

            <!-- example: X3DAppearanceChildNode -->
            <h2>
                <!-- html bookmarks -->
                <xsl:element name="a">
                    <xsl:attribute name="name">
                        <xsl:value-of select="@name"/>
                    </xsl:attribute>
                </xsl:element>
                <xsl:text>B.3.</xsl:text>
                <xsl:value-of select="position()"/>
                <xsl:text>&#160;</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>&#10;</xsl:text>
            </h2>
            
            <pre class="listing">
                
                <xsl:call-template name="java-source-from-schema-for-specification"/>

            </pre>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            
        </xsl:for-each>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>FieldInterfaces</xsl:text></xsl:attribute>
			<xsl:text>B.4&#160;&#160;Field interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>  
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>          

<h2><a name="X3DFieldTypes"></a>
B.4.1 X3DFieldTypes</h2>

<pre class="listing">public interface X3DFieldTypes {

    public int INPUT_ONLY = 1;
    public int INITIALIZE_ONLY = 2;
    public int INPUT_OUTPUT = 3;
    public int OUTPUT_ONLY = 4;

    public int SFBOOL = 1;
    public int MFBOOL = 2;
    public int SFCOLOR = 21;
    public int MFCOLOR = 22;
    public int SFCOLORRGBA = 23;
    public int MFCOLORRGBA = 24;
    public int SFDOUBLE = 7;
    public int MFDOUBLE = 8;
    public int SFFLOAT = 5;
    public int MFFLOAT = 6;
    public int SFIMAGE = 25;
    public int MFIMAGE = 26;
    public int SFINT32 = 3;
    public int MFINT32 = 4;
    public int SFNODE = 11;
    public int MFNODE = 12;
    public int SFROTATION = 19;
    public int MFROTATION = 20;
    public int SFSTRING = 27;
    public int MFSTRING = 28;
    public int SFTIME = 9;
    public int MFTIME = 10;
    public int SFVEC2F = 13;
    public int MFVEC2F = 14;
    public int SFVEC3F = 15;
    public int MFVEC3F = 16;
    public int SFVEC3D = 17;
    public int MFVEC3D = 18;
}
</pre>
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

<h2><a name="X3DFieldEvent"></a>
B.4.2 X3DFieldEvent</h2>

<pre class="listing">public class X3DFieldEvent extends java.util.EventObject {

    public X3DFieldEvent(Object src, double ts, Object data);

    public double getTime();

    public Object getData();
}
</pre>
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

<h2><a name="X3DFieldEventListener"></a>
B.4.3 X3DFieldEventListener</h2>

<pre class="listing">public interface X3DFieldEventListener extends java.util.EventListener {
    public void readableFieldChanged(X3DFieldEvent evt);
}
</pre>
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

<h2><a name="X3DFieldDefinition"></a>
B.4.4 X3DFieldDefinition</h2>

<pre class="listing">public interface X3DFieldDefinition {

    public String getName();

    public int getAccessType();

    public int getFieldType();

    public String getFieldTypeString();
}
</pre>
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

<h2><a name="X3DField"></a>
B.4.5 X3DField</h2>

<pre class="listing">public interface X3DField {

    public X3DFieldDefinition getDefinition();

    public boolean isReadable();

    public boolean isWritable();

    public void addX3DEventListener(X3DFieldEventListener l);

    public void removeX3DEventListener(X3DFieldEventListener l);

    public void setUserData(Object data);

    public Object getUserData();
}
</pre>
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

<h2><a name="MField"></a>
B.4.6 MField</h2>

<pre class="listing">public interface MField extends X3DField {

    public int size();

    public void clear();

    public void remove(int index);
}
</pre>

	<!-- Document body: loop over elements, matching TOC loop for each detailed page entry -->
	<xsl:for-each select="//xs:simpleType[starts-with(@name,'SF') or starts-with(@name,'MF')]">
            <!-- sort SF before MF
            <xsl:sort select="starts-with(@name,'MF')"/>
            <xsl:sort select="starts-with(@name,'SF')"/> -->
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            
            <!-- example SFBool -->
            <h2>
                <!-- html bookmarks -->
                <xsl:element name="a">
                    <xsl:attribute name="name">
                        <xsl:value-of select="@name"/>
                    </xsl:attribute>
                </xsl:element>
                <xsl:text>B.4.</xsl:text>
                <xsl:value-of select="position()+6"/>
                <xsl:text>&#160;</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>&#10;</xsl:text>
            </h2>
            
            <pre class="listing">
                
                <xsl:call-template name="java-source-from-simpleType"/>

            </pre>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            
        </xsl:for-each>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>ServiceInterfaces</xsl:text></xsl:attribute>
			<xsl:text>B.5&#160;&#160;Service interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>

<h2><a name="BrowserEvent"></a>
B.5.1 BrowserEvent</h2>

<pre class="listing">public class BrowserEvent extends EventObject
{
    public static final int INITIALIZED = 0;
    public static final int SHUTDOWN = 1;
    public static final int URL_ERROR = 2;
    public static final int CONNECTION_ERROR = 10;
    public static final int LAST_IDENTIFIER = 100;

    public BrowserEvent(Object browser, int action);
    public int getID();
}
</pre>

<h2><a name="BrowserFactory"></a>
B.5.2 BrowserFactory</h2>

<pre class="listing">public class BrowserFactory
{
    private BrowserFactory();

    public static void setBrowserFactoryImpl(
        BrowserFactoryImpl fac)
        throws IllegalArgumentException,
               X3DException,
               SecurityException;

    public static X3DComponent createX3DComponent(Map params)
        throws NotSupportedException;

    public static ExternalBrowser getBrowser(Applet applet)
        throws NotSupportedException,
               NoSuchBrowserException,
               ConnectionException;

    public static ExternalBrowser getBrowser(Applet applet,
                                             String frameName,
                                             int index)
        throws NotSupportedException,
               NoSuchBrowserException,
               ConnectionException;

    public static ExternalBrowser getBrowser(InetAddress address, int port)
        throws NotSupportedException,
               NoSuchBrowserException,
               UnknownHostException,
               ConnectionException;
}
</pre>

<h2><a name="ServiceX3DFieldEvent"></a>B.5.3 X3DFieldEvent</h2>

<pre class="listing">public class X3DFieldEvent extends EventObject
{
    public X3DFieldEvent(Object src, double ts, Object data);
    public double getTime();
    public Object getData();
}
</pre>

<h2><a name="Matrix3"></a>
B.5.4 Matrix3</h2>

<pre class="listing">public class Matrix3
{
	public Matrix3();
	public void setIdentity();
    public void set(int row, int column)
    public float get(int row, int column)
    public void setTransform(SFVec2f translation,
                             SFVec3f rotation,
                             SFVec2f scale,
                             SFVec3f scaleOrientation,
                             SFVec2f center)
    public void getTransform(SFVec2f translation,
                             SFVec3f rotation,
                             SFVec2f scale)
    public Matrix3 inverse()
    public Matrix3 transpose()
    public Matrix3 multiplyLeft(Matrix3 mat)
    public Matrix3 multiplyRight(Matrix3 mat)
    public Matrix3 multiplyRowVector(SFVec3f vec)
    public Matrix3 multiplyColVector(SFVec3f vec)
}
</pre>

<h2><a name="Matrix4"></a>
B.5.5 Matrix4</h2>

<pre class="listing">public class Matrix4
{
	public Matrix4();
	public void setIdentity();
    public void set(int row, int column)
    public float get(int row, int column)
    public void setTransform(SFVec3f translation,
                             SFRotation rotation,
                             SFVec3f scale,
                             SFRotation scaleOrientation,
                             SFVec3f center)
    public void getTransform(SFVec3f translation,
                             SFRotation rotation,
                             SFVec3f scale)
    public Matrix3 inverse()
    public Matrix3 transpose()
    public Matrix3 multiplyLeft(Matrix4 mat)
    public Matrix3 multiplyRight(Matrix4 mat)
    public Matrix3 multiplyRowVector(SFVec3f vec)
    public Matrix3 multiplyColVector(SFVec3f vec)
}
</pre>

        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>StatementInterfaces</xsl:text></xsl:attribute>
			<xsl:text>B.6&#160;&#160;Statement interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>

<h2><a name="ComponentInfo"></a>B.6.1 ComponentInfo</h2>

<pre class="listing">public interface ComponentInfo
{
    public String getName();
    public int getLevel();
    public String getTitle();
    public String getProviderURL();
    public String toX3DString();
}</pre>

<h2><a name="ProfileInfo"></a>B.6.2 ProfileInfo</h2>

<pre class="listing">public interface ProfileInfo
{
    public String getName();
    public String getTitle();
    public ComponentInfo[] getComponents();
    public String toX3DString();
}</pre>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>ExceptionDefinitions</xsl:text></xsl:attribute>
			<xsl:text>B.7&#160;&#160;Exception definitions</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
<h2><a name="X3DException"></a>
B.7.1 X3DException</h2>

<pre class="listing">public class X3DException extends RuntimeException
{
	public X3DException();
	public X3DException(String);
}
</pre>

<h2><a name="BrowserNotSharedException"></a>
B.7.2 BrowserNotSharedException</h2>

<pre class="listing">public class BrowserNotSharedException extends X3DException
{
	public BrowserNotSharedException();
	public BrowserNotSharedException(String);
}
</pre>

<h2><a name="ConnectionException"></a>
B.7.3 ConnectionException</h2>

<pre class="listing">public class ConnectionException extends X3DException
{
	public ConnectionException();
	public ConnectionException(String);
}
</pre>

<h2><a name="ImportedNodeException"></a>
B.7.4 ImportedNodeException</h2>

<pre class="listing">public class ImportedNodeException extends X3DException
{
	public ImportedNodeException();
	public ImportedNodeException(String);
}
</pre>

<h2><a name="InsufficientCapabilitiesException"></a>
B.7.5 InsufficientCapabilitiesException</h2>

<pre class="listing">public class InsufficientCapabilitiesException extends X3DException
{
	public InsufficientCapabilitiesException();
	public InsufficientCapabilitiesException(String);
}
</pre>

<h2><a name="InvalidBrowserException"></a>
B.7.6 InvalidBrowserException</h2>

<pre class="listing">public class InvalidBrowserException extends X3DException
{
	public InvalidBrowserException();
	public InvalidBrowserException(String);
}
</pre>

<h2><a name="InvalidDocumentException"></a>
B.7.7 InvalidDocumentException</h2>

<pre class="listing">public class InvalidDocumentException extends X3DException
{
	public InvalidDocumentException();
	public InvalidDocumentException(String);
}
</pre>

<h2><a name="InvalidExecutionContextException"></a>
B.7.8 InvalidExecutionContextException</h2>

<pre class="listing">public class InvalidExecutionContextException extends X3DException
{
	public InvalidExecutionContextException();
	public InvalidExecutionContextException(String);
}
</pre>

<h2><a name="InvalidFieldException"></a>
B.7.9 InvalidFieldException</h2>

<pre class="listing">public class InvalidFieldException extends X3DException
{
	public InvalidFieldException();
	public InvalidFieldException(String);
}
</pre>

<h2><a name="InvalidFieldValueException"></a>
B.7.10  InvalidFieldValueException</h2>

<pre class="listing">public class InvalidFieldValueException extends X3DException
{
	public InvalidFieldValueException();
	public InvalidFieldValueException(String);
}
</pre>

<h2><a name="InvalidNodeException"></a>
B.7.11 InvalidNodeException</h2>

<pre class="listing">public class InvalidNodeException extends X3DException
{
	public InvalidNodeException();
	public InvalidNodeException(String);
}
</pre>

<h2><a name="InvalidOperationTimingException"></a>
B.7.12 InvalidOperationTimingException</h2>

<pre class="listing">public class InvalidOperationTimingException extends X3DException
{
	public InvalidOperationTimingException();
	public InvalidOperationTimingException(String);
}
</pre>

<h2><a name="InvalidProtoException"></a>
B.7.13 InvalidProtoException</h2>

<pre class="listing">public class InvalidProtoException extends X3DException
{
	public InvalidProtoException();
	public InvalidProtoException(String);
}
</pre>

<h2><a name="InvalidRouteException"></a>
B.7.14 InvalidRouteException</h2>

<pre class="listing">public class InvalidRouteException extends X3DException
{
	public InvalidRouteException();
	public InvalidRouteException(String);
}
</pre>

<h2><a name="InvalidURLException"></a>
B.7.15 InvalidURLException</h2>

<pre class="listing">public class InvalidURLException extends X3DException
{
	public InvalidURLException();
	public InvalidURLException(String);
}
</pre>

<h2><a name="InvalidX3DException"></a>
B.7.16 InvalidX3DException</h2>

<pre class="listing">public class InvalidX3DException extends X3DException
{
	public InvalidX3DException();
	public InvalidX3DException(String);
}
</pre>

<h2><a name="NodeInUseException"></a>
B.7.17 NodeInUseException</h2>

<pre class="listing">public class NodeInUseException extends X3DException
{
	public NodeInUseException();
	public NodeInUseException(String);
}
</pre>

<h2><a name="NodeUnavailableException"></a>
B.7.18 NodeUnavailableException</h2>

<pre class="listing">public class NodeUnavailableException extends X3DException
{
	public NodeUnavailableException();
	public NodeUnavailableException(String);
}
</pre>

<h2><a name="NoSuchBrowserException"></a>
B.7.19 NoSuchBrowserException</h2>

<pre class="listing">public class NoSuchBrowserException extends X3DException
{
	public NoSuchBrowserException();
	public NoSuchBrowserException(String);
}
</pre>

<h2><a name="NotSupportedException"></a>
B.7.20 NotSupportedException</h2>

<pre class="listing">public class NotSupportedException extends X3DException
{
	public NotSupportedException();
	public NotSupportedException(String);
}
</pre>

<h2><a name="URLUnavailableException"></a>
B.7.21 URLUnavailableException</h2>

<pre class="listing">public class URLUnavailableException extends X3DException
{
	public URLUnavailableException();
	public URLUnavailableException(String);
}
</pre>


        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <!-- ===================================================================================== -->
        
        <hr />
        
        <h2><a name="TODO"/> TODO </h2>

        <p>
            NOTE 1.  Revisions to this document are autogenerated based on X3D Schema updates.
        </p>

        <p>
            NOTE 2.  This TODO section needs to be removed when the actual specification document is submitted to ISO for review.
        </p>

        <p>
            TODO.  Continue node signature verification and best-practice design patterns.
        </p>
        
        <p>
            DONE.  Sections for Annex B.1 B.2 B.3 and B.4 are being generated.  Need to be re-verified to ensure that
            no side effects have crept in during incremental development.
        </p>

        <p>
            DONE.  Original code sections for Annex B.4.1 through B.4.6 needs to be inserted.
        </p>

        <p>
            DONE.  Original prose sections for Annex B.5 B.6 and B.7 has been inserted.
        </p>
        
        <p>
            URLs.
            <br />
            Autogenerated version online at
            <a href="https://www.web3d.org/specifications/JavaLanguageBinding/Part2/nodeTypeInterfaces.html">https://www.web3d.org/specifications/JavaLanguageBinding/Part2/nodeTypeInterfaces.html</a>
            <br />
            ISO-approved version online at
            <a href="https://www.web3d.org/documents/specifications/19777-2/V3.3/Part2/abstracts.html">https://www.web3d.org/documents/specifications/19777-2/V3.3/Part2/abstracts.html</a>
        </p>
        <hr />
        
  </xsl:element> <!-- body -->
  <xsl:text>&#10;</xsl:text>
</xsl:element> <!-- xhtml -->
<xsl:text>&#10;</xsl:text>
</xsl:result-document>

<!-- ===================================================================================== -->
<!-- Annex C Node interfaces -->
  
<xsl:result-document  href="JavaLanguageBinding.Part2.nodeInterfaces.html" method="html" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

<xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
]]></xsl:text>
<!-- <xsl:text><!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"></xsl:text> -->
<xsl:text>&#10;</xsl:text>

<xsl:element name="html">
  <xsl:attribute name="lang"><xsl:text>en</xsl:text></xsl:attribute>
  <xsl:text>&#10;</xsl:text>
  <xsl:element name="head">

	<xsl:element name="title">
		<!-- mdash = 8212 &amp;#8212;&amp;#8212; -->
		<xsl:text disable-output-escaping="yes">ISO/IEC 19777-2:2014 -- X3D Java Binding -- Annex C Node interfaces </xsl:text>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>identifier</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/documents/specifications/19777-2/V3.3/Part2/nodeInterfaces.html</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/JavaLanguageBinding.Part2.nodeInterfaces.html</xsl:text></xsl:attribute>
	</xsl:element>
        
        <xsl:call-template name="generate-html-meta-tags"/>
        
  </xsl:element>
  
  <xsl:element name="body">
      
	<xsl:text>&#10;</xsl:text>
        <a name="top"/>
	<xsl:text>&#10;</xsl:text>
        <xsl:comment> Autogenerated Java interface encodings for each X3D node follow </xsl:comment>
	<xsl:text>&#10;</xsl:text>
        <a name="top"/>

	<xsl:element name="div">
		<xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>x3dlogo</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/x3d.png</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>X3D logo</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>176</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>88</xsl:text></xsl:attribute>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="div">
		<xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>HeadingPart</xsl:text></xsl:attribute>
			<xsl:text>Extensible 3D (X3D) language bindings</xsl:text>
			<xsl:text>&#10;</xsl:text>
			<xsl:element name="br"/>
			<xsl:text>&#10;</xsl:text>
			<xsl:text>Part 2:  Java</xsl:text>
		</xsl:element>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
			<xsl:text>Annex C</xsl:text>
		</xsl:element>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>AnnexType</xsl:text></xsl:attribute>
			<xsl:text>(normative - draft)</xsl:text>
		</xsl:element>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
			<xsl:text>Node interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

	<xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>IntroductionAndTopics</xsl:text></xsl:attribute>
		</xsl:element>
                <xsl:text>C.1&#160;&#160;Introduction and topics</xsl:text>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>


	<xsl:element name="h2">
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>Introduction</xsl:text></xsl:attribute>
			<xsl:text>C.1.1&#160;&#160;Introduction</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="p">
		<xsl:text>This annex provides the definition of the rules to generate interface signatures for each interface that represents an X3D node as defined in IS0/IEC 19775-2 </xsl:text>
		<xsl:text>&#10;</xsl:text>
		<xsl:text>(see </xsl:text>
		<xsl:element name="a">
			<xsl:attribute name="href"><xsl:text>references.html#[I19775]</xsl:text></xsl:attribute>
			<xsl:text>2.[19775]</xsl:text>
		</xsl:element>
		<xsl:text>).</xsl:text>
		<xsl:text>&#10;</xsl:text>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="h2">
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>Topics</xsl:text></xsl:attribute>
			<xsl:text>C.1.2&#160;&#160;Topics</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="p">
            <xsl:text>See </xsl:text>
            <xsl:element name="a">
                    <xsl:attribute name="href"><xsl:text>#TopicsTable</xsl:text></xsl:attribute>
                    <xsl:text>Table&#160;C.1</xsl:text>
            </xsl:element>
            <xsl:text> for the topics in this clause.</xsl:text>
            <xsl:text>&#10;</xsl:text>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>

	<xsl:element name="div">
		<xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
		<xsl:element name="p">
			<xsl:attribute name="class"><xsl:text>TableCaption</xsl:text></xsl:attribute>
			<xsl:element name="a">
				<xsl:attribute name="name"><xsl:text>TopicsTable</xsl:text></xsl:attribute>
				<!-- mdash = 8212 -->
				<xsl:text disable-output-escaping="yes">Table C.1 &amp;mdash; Topics</xsl:text>
			</xsl:element>
		</xsl:element>
		<xsl:text>&#10;</xsl:text>

		<!-- Loop over elements, build index -->

		<xsl:element name="table">
                    <xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
                    <xsl:attribute name="align"><xsl:text>center</xsl:text></xsl:attribute>
                    <xsl:attribute name="border"><xsl:text>1</xsl:text></xsl:attribute>
                    <xsl:attribute name="summary"><xsl:text>Table of contents</xsl:text></xsl:attribute>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:element name="tbody">
                    <xsl:element name="tr">
                        <xsl:attribute name="align"><xsl:text>left</xsl:text></xsl:attribute>
                        <xsl:text>&#10;</xsl:text>
                        
                        <xsl:element name="td">
                        <!--<xsl:attribute name="rowspan"><xsl:text>25</xsl:text></xsl:attribute> -->
                            <xsl:attribute name="width"><xsl:text>33%</xsl:text></xsl:attribute>
                            <xsl:attribute name="valign"><xsl:text>top</xsl:text></xsl:attribute>
                            
                            <ul>
                                <!-- ========== section ========== -->
                                <li>
                                    <xsl:element name="a">
                                            <xsl:attribute name="href"><xsl:text>#IntroductionAndTopics</xsl:text></xsl:attribute>
                                            <xsl:text>C.1&#160; Introduction and topics</xsl:text>
                                    </xsl:element>
                                    <ul>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#Introduction</xsl:text></xsl:attribute>
                                                    <xsl:text>C.1.1&#160;Introduction</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
                                                    <xsl:text>C.1.2&#160;Topics</xsl:text>
                                            </xsl:element>
                                        </li>
                                    </ul>
                                </li>
                                <xsl:text>&#10;</xsl:text>
                                <!-- ========== section ========== -->
                                <li>
                                    <xsl:element name="a">
                                            <xsl:attribute name="href"><xsl:text>#GenerationRules</xsl:text></xsl:attribute>
                                            <xsl:text>C.2&#160; Generation rules</xsl:text>
                                    </xsl:element>
                                    <ul>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#PackageDefinition</xsl:text></xsl:attribute>
                                                    <xsl:text>C.2.1&#160;Package definition</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#ClassDefinitions</xsl:text></xsl:attribute>
                                                    <xsl:text>C.2.2&#160;Class definitions</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#ClassDerivation</xsl:text></xsl:attribute>
                                                    <xsl:text>C.2.3&#160;Class derivation</xsl:text>
                                            </xsl:element>
                                        </li>
                                        <li>
                                            <xsl:element name="a">
                                                    <xsl:attribute name="href"><xsl:text>#MethodDeclarations</xsl:text></xsl:attribute>
                                                    <xsl:text>C.2.4&#160;Method declarations</xsl:text>
                                            </xsl:element>
                                        </li>
                                    </ul>
                                </li>
                                <xsl:text>&#10;</xsl:text>

                                <!-- ========== section ========== -->
                                <li>
                                    <xsl:element name="a">
                                            <xsl:attribute name="href"><xsl:text>#NodeInterfaces</xsl:text></xsl:attribute>
                                            <xsl:text>C.3&#160;Node interfaces</xsl:text>
                                    </xsl:element>
                                    <xsl:text>&#10;</xsl:text>

                                    <ul>
                                        <!-- Table of Contents TOC loop for node interfaces -->
                                        <xsl:for-each select="//xs:schema/xs:element[not(@name='TODO')]">
                                            <xsl:sort select="lower-case(@name)"/>
        
                                            <!-- example: Appearance -->
                                            <li>
                                                <!-- html bookmarks -->
                                                <xsl:element name="a">
                                                    <xsl:attribute name="href">
                                                        <xsl:text>#</xsl:text>
                                                        <xsl:value-of select="@name"/>
                                                    </xsl:attribute>
                                                    <xsl:text>C.3.</xsl:text>
                                                    <xsl:value-of select="position()"/>
                                                    <xsl:text>&#160;</xsl:text>
                                                    <xsl:value-of select="@name"/>
                                                </xsl:element>
                                                <xsl:text> </xsl:text>
                                                <xsl:element name="br"/>
                                                <xsl:text>&#10;</xsl:text>
                                            </li>
                                            
                                            <!-- three-column index, the following numbers decide column breaks -->
                                            <xsl:if test="((position()=78) or (position()=165))">
                                                    <xsl:text>&#10;</xsl:text>
                                                    <xsl:text disable-output-escaping="yes"><![CDATA[</ul>]]></xsl:text>
                                                    <xsl:text>&#10;</xsl:text>
                                                    <xsl:text disable-output-escaping="yes"><![CDATA[</td>]]></xsl:text>
                                                    <xsl:text>&#10;</xsl:text>
                                                    <xsl:text disable-output-escaping="yes"><![CDATA[<td valign="top" width="25%">]]></xsl:text>
                                                    <xsl:text>&#10;</xsl:text>
                                                    <xsl:text disable-output-escaping="yes"><![CDATA[<ul>]]></xsl:text>
                                                    <xsl:text>&#10;</xsl:text>
                                            </xsl:if>
                                                
                                        </xsl:for-each>
                                    </ul>
                                </li>
                            </ul>
                            
                            <p>
                                <a href="#TODO">TODO</a>
                            </p>
                            
                            </xsl:element>
                        <xsl:text>&#10;</xsl:text>
                                
                        </xsl:element> <!-- tr -->
                        <xsl:text>&#10;</xsl:text>
                    </xsl:element> <!-- tbody -->
                    <xsl:text>&#10;</xsl:text>
		</xsl:element> <!-- table -->
		<xsl:text>&#10;</xsl:text>
		<xsl:text>&#10;</xsl:text>
	</xsl:element>  <!-- div CenterDiv -->
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>GenerationRules</xsl:text></xsl:attribute>
			<xsl:text>C.2&#160;&#160;Generation rules</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
<h2><a name="PackageDefinition"></a>C.2.1 Package definition</h2>

<p>Each concrete class shall belong to the sub-package name according to the component
formal name under the <code>org.web3d.x3d.sai</code> parent package. 
(See 3.3.1.4 Package Structure)</p>

<h2><a name="ClassDefinitions"></a>C.2.2 Class definitions</h2>

<p>Node interface representations in Java shall be expressed as public interfaces. </p>

<h2><a name="ClassDerivation"></a>C.2.3 Class derivation</h2>

<p>Each node interface shall extend the interfaces defined in Annex B as appropriate
for the abstract node requirements for each node type. For example, the Inline 
interface definition is</p>
<blockquote>
<pre>
    public interface Inline extends X3DChildNode, X3DBoundedObject, X3DUrlObject
    {
      ...
    }
</pre>
</blockquote>

<h2><a name="MethodDeclarations"></a>C.2.4 Method declarations</h2><p>Within each node interface there shall be methods to read and set the values for 
every field. The naming convention for each field method shall follow the definition
in <a href="nodeTypeInterfaces.html#Conventions">B.1.2 Conventions</a> for the abstract
interfaces. Where fields are already covered by the abstract interface, the concrete
interface is not required to redeclare the same methods. The concrete interface shall
declare methods that are not defined by the abstract node representation.</p>
        
        <!-- ===================================================================================== -->
        <a href="#top" title="to top">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:element name="h1">
		<xsl:element name="img">
			<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
			<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
			<xsl:attribute name="width"><xsl:text>20</xsl:text></xsl:attribute>
			<xsl:attribute name="height"><xsl:text>19</xsl:text></xsl:attribute>
		</xsl:element>
		<xsl:element name="a">
			<xsl:attribute name="name"><xsl:text>NodeInterfaces</xsl:text></xsl:attribute>
			<xsl:text>C.3&#160;&#160;Node interfaces</xsl:text>
		</xsl:element>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
                                    
        <p>
            The following node interfaces include getter/setter accessor methods for all fields, including those defined in parent abstract types.
        </p>

	<!-- Document body: loop over elements, matching TOC loop for each detailed page entry -->
	<xsl:for-each select="//xs:schema/xs:element[not(@name='TODO')]">
            <xsl:sort select="lower-case(@name)"/>
                                            
            <a href="#TopicsTable" title="to Topics">
                <xsl:element name="img">
                    <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                    <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                    <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                    <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                    <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
                </xsl:element>
                <xsl:text>&#10;</xsl:text>
            </a>
            
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>

            <!-- example: X3DAppearanceChildNode -->
            <h2>
                <!-- html bookmarks -->
                <xsl:element name="a">
                    <xsl:attribute name="name">
                        <xsl:value-of select="@name"/>
                    </xsl:attribute>
                </xsl:element>
                <xsl:text>C.3.</xsl:text>
                <xsl:value-of select="position()"/>
                <xsl:text>&#160;</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>&#10;</xsl:text>
            </h2>

            <pre class="listing">
                
                <xsl:call-template name="java-source-from-schema-for-specification">
                    <xsl:with-param name="abstract" select="false()"/>
                </xsl:call-template>
                
            </pre>
        </xsl:for-each>

        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
                                            
        <a href="#TopicsTable" title="to Topics">
            <xsl:element name="img">
                <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
                <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
                <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
                <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
                <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
            </xsl:element>
            <xsl:text>&#10;</xsl:text>
        </a>

        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>

        <!-- ===================================================================================== -->
        
        <h2><a name="TODO"/> TODO </h2>

        <p>
            NOTE 1.  Revisions to this document are autogenerated based on X3D Schema updates.
        </p>

        <p>
            NOTE 2.  This TODO section needs to be removed when the actual specification document is submitted to ISO for review.
        </p>

        <p>
            TODO.  Continue node signature verification and best-practice design patterns.
        </p>
        
        <p>
            DONE.  Much work has been accomplished in the schema to capture accessType inputOnly, initializeOnly, outputOnly field information 
            in a way that is readable by tools but does not interfere with XML schema validation of X3D scenes.
        </p>
        
        <p>
            DONE.  The node-generation blocks are successfully creating Annex C - Concrete node interfaces.
            A full set of additions to the X3D Schema now include inputOnly/outputOnly/SFNode/MFNode fields as appinfo entries.
            X3D version 3.3 is being used to generate the clause.  
        </p>
        
        <p>
            DONE.  When X3D v3.3 Schema corrections are complete, insert modifications into X3D v3.2 v3.1 and v3.0.
            Changes are checked in when publication checks and regression testing are complete.
        </p>
        
        <p>
            DONE.  Add GeoOrigin
            <a href="http://docs.oracle.com/javase/8/docs/technotes/guides/javadoc/deprecation/deprecation.html" target="_blank">deprecation</a>.
            See
            <a href="https://www.web3d.org/member-only/mantis/view.php?id=689">Mantis issue 689</a>.
        </p>
        
        <p>
			DONE.  Rename "<s>abstract interfaces</s>" to "Node type interfaces".
        </p>
        
        <p>
            DONE.  Rename "<s>concrete interfaces</s>" to "Node interfaces".
        </p>
        
        <p>
            FUTURE.  Review and improve design patterns for DEF/USE handling.  This appears to be a larger issue that affects 19775-2, Abstract SAI.
            See
            <a href="https://www.web3d.org/member-only/mantis/view.php?id=690">Mantis issue 690</a>.
        </p>
        
        <p>
            TODO.  getIsActive() method missing, might need other inherited field accessors also.
            Verify that API design pattern for outputOnly fields is defined and working properly.
        </p>
        
        <p>
            TODO.  The node-generation blocks will be adapted to create a package of
            actual source-code interfaces for compilation validation.  This will help tools
            and authors looking for a lightweight way to compile Script code written in Java.
            Also needed for confirming class hierarchy listings in 
            <a href="https://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/compilation.html">Annex A, Constructs in Compilation Order</a>.
            See
            <a href="https://www.web3d.org/member-only/mantis/view.php?id=673">Mantis issue 673</a>.
        </p>

        <p>
            URLs.
            <br />
            Autogenerated version online at
            <a href="https://www.web3d.org/specifications/JavaLanguageBinding/Part2/nodeInterfaces.html">https://www.web3d.org/specifications/JavaLanguageBinding/Part2/nodeInterfaces.html</a>
            <br />
            ISO-approved version online at
            <a href="https://www.web3d.org/documents/specifications/19777-2/V3.3/Part2/nodeInterfaces.html">https://www.web3d.org/documents/specifications/19777-2/V3.3/Part2/nodeInterfaces.html</a>
        </p>

	<xsl:text>&#10;</xsl:text>
	<xsl:text>&#10;</xsl:text>
  </xsl:element> <!-- end div -->
</xsl:element> <!-- end body -->

<xsl:text>&#10;</xsl:text>
</xsl:result-document>
</xsl:template>

<xsl:template name="outputContentModelGroupName">
  <xsl:param name="contentModelGroupName"></xsl:param>

        <xsl:text>&#160;&#160;&#160;&lt;!--&#160;</xsl:text>
        <!-- html bookmarks -->
        <xsl:element name="a">
                <xsl:attribute name="href">
                        <xsl:text>#</xsl:text>
                        <xsl:value-of select="$contentModelGroupName"/>
                </xsl:attribute>
                <xsl:value-of select="$contentModelGroupName"/>
        </xsl:element>
        <xsl:text>&#160;--&gt;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:element name="br"/>
        <xsl:text>&#10;</xsl:text>
</xsl:template>

<xsl:template name="includes-containerField">
  <xsl:param name="inputAttributeNodeList"></xsl:param>
	<!--
	<xsl:message>
	  <xsl:value-of select="local-name ($inputAttributeNodeList[1])"/>
	  <xsl:text> </xsl:text>
	  <xsl:value-of select="$inputAttributeNodeList[1]/@name"/>
	 </xsl:message>
	-->
  <xsl:choose>
    <xsl:when test="count($inputAttributeNodeList)=0">
		<!-- <xsl:message><xsl:text>$inputAttributeNodeList length 0, return false</xsl:text></xsl:message> -->
		<xsl:text>false</xsl:text>
    </xsl:when>
    <xsl:when test="$inputAttributeNodeList[1]/@name='containerField'">
		<!-- <xsl:message><xsl:text>containerField found, return true</xsl:text></xsl:message> -->
		<xsl:text>true</xsl:text>
    </xsl:when>
    <xsl:otherwise>
		<!-- recurse on remainder -->
		<xsl:call-template name="includes-containerField">
			<xsl:with-param name="inputAttributeNodeList" select="$inputAttributeNodeList[position()!=1]"/>
		</xsl:call-template>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>

<xsl:template name="list-restrictions">
    <xsl:variable name="originalType" select="@type"/>
    <xsl:variable name="isEnumerationType" select="xs:simpleType/xs:restriction/@base"/>
    <xsl:variable name="enumerationValues">
		<xsl:if test="xs:simpleType/xs:restriction[(@base='xs:token') or (@base='SFString') or (@base='MFString')]/xs:enumeration">
			<xsl:text>[</xsl:text>
			<xsl:for-each                    select="xs:simpleType/xs:restriction[(@base='xs:token') or (@base='SFString') or (@base='MFString')]/xs:enumeration">
				<xsl:text>"</xsl:text>
				<xsl:value-of select="@value"/>
				<xsl:text>"</xsl:text>
				<xsl:if test="not(position() = last())">
					<xsl:text>|</xsl:text>
				</xsl:if>
			</xsl:for-each>
			<xsl:text>]</xsl:text>
		</xsl:if>
    </xsl:variable>
    <xsl:choose>
        <xsl:when test="(@type='SFBool') or (@type='MFBool') or (@type='featurePointNames') or (@type='jointNames') or (@type='segmentNames') or (@type='siteNames')">
            <!-- no restriction-->
        </xsl:when>
        <xsl:when test="(@type='boundingBoxSizeType')">
            <xsl:text>[0,&#8734;) or −1 −1 −1 </xsl:text>
        </xsl:when>
        <xsl:when test="contains(@type,'RGBA')">
            <xsl:text>using RGBA values [0..1] </xsl:text>
        </xsl:when>
        <xsl:when test="contains(@type,'Color') or contains(@name,'Color') or contains(@name,'color')">
            <xsl:text>using RGB values [0..1] </xsl:text>
        </xsl:when>
        <xsl:when test="(@name='objectType')">
            <xsl:text>["ALL","NONE","TERRAIN",...] </xsl:text>
        </xsl:when>
        <xsl:when test="(@name='type') and (ancestor::xs:element[@name='NavigationInfo'])">
            <xsl:text>["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] </xsl:text>
        </xsl:when>
        <xsl:when test="(@name='transitionType') and (ancestor::xs:element[@name='NavigationInfo'])">
            <xsl:text>["TELEPORT","LINEAR","ANIMATE",...] </xsl:text>
        </xsl:when>
        <xsl:when test="(@name='GeoOrigin') or (@name='geoOrigin')">
            <!-- http://docs.oracle.com/javase/8/docs/technotes/guides/javadoc/deprecation/deprecation.html -->
            <xsl:text>(deprecated node, optional) </xsl:text>
        </xsl:when>
        <xsl:when test="((@type='SFString') or (@type='MFString')) and (string-length(xs:annotation/xs:documentation) > 0)">
            <xsl:value-of select="normalize-space(xs:annotation/xs:documentation)"/>
            <xsl:text> </xsl:text>
        </xsl:when>
        <xsl:when test="(string-length($enumerationValues) > 0)">
            <xsl:value-of select="$enumerationValues"/>
            <xsl:text> </xsl:text>
        </xsl:when>
        <xsl:when test="((@type='SFString') or (@type='MFString')) and (string-length(xs:simpleType/xs:restriction/@base) > 0)">
            <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
            <xsl:text> </xsl:text>
        </xsl:when>
        <xsl:when test="((@type='SFString') or (@type='MFString'))">
            <!-- no restriction-->
        </xsl:when>
        <xsl:when test="not(*//xs:minInclusive) and not(*//xs:minExclusive) and not(*//xs:maxInclusive) and not(*//xs:maxExclusive)">
            <!-- no restriction-->
        </xsl:when>
        <xsl:when test="xs:simpleType/xs:restriction">
            <xsl:choose>
                <xsl:when test="xs:simpleType/xs:restriction/xs:minInclusive">
                    <xsl:text>[</xsl:text>
                    <xsl:value-of select="xs:simpleType/xs:restriction/xs:minInclusive/@value"/>
                </xsl:when>
                <xsl:when test="xs:simpleType/xs:restriction/xs:minExclusive">
                    <xsl:text>(</xsl:text>
                    <xsl:value-of select="xs:simpleType/xs:restriction/xs:minExclusive/@value"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>(-&#8734;</xsl:text> <!-- &infin; infinity symbol -->
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>,</xsl:text>
            <xsl:choose>
                <xsl:when test="xs:simpleType/xs:restriction/xs:maxInclusive">
                    <xsl:value-of select="xs:simpleType/xs:restriction/xs:maxInclusive/@value"/>
                    <xsl:text>)</xsl:text>
                </xsl:when>
                <xsl:when test="xs:simpleType/xs:restriction/xs:maxExclusive">
                    <xsl:value-of select="xs:simpleType/xs:restriction/xs:maxExclusive/@value"/>
                    <xsl:text>)</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>&#8734;)</xsl:text> <!-- &infin; infinity symbol -->
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text> </xsl:text>
        </xsl:when>
        <!-- retrieve range for specially defined simpleTypes, e.g. intensityType -->
        <xsl:when test="/xs:schema/xs:simpleType[@name=$originalType]/xs:restriction">
            <xsl:choose>
                <xsl:when test="/xs:schema/xs:simpleType[@name=$originalType]/xs:restriction/xs:minInclusive">
                    <xsl:text>[</xsl:text>
                    <xsl:value-of select="/xs:schema/xs:simpleType[@name=$originalType]/xs:restriction/xs:minInclusive/@value"/>
                </xsl:when>
                <xsl:when test="/xs:schema/xs:simpleType[@name=$originalType]/xs:restriction/xs:minExclusive">
                    <xsl:text>(</xsl:text>
                    <xsl:value-of select="/xs:schema/xs:simpleType[@name=$originalType]/xs:restriction/xs:minExclusive/@value"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>(-&#8734;</xsl:text> <!-- &infin; infinity symbol -->
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>,</xsl:text>
            <xsl:choose>
                <xsl:when test="/xs:schema/xs:simpleType[@name=$originalType]/xs:restriction/xs:maxInclusive">
                    <xsl:value-of select="/xs:schema/xs:simpleType/xs:restriction/xs:maxInclusive/@value"/>
                    <xsl:text>)</xsl:text>
                </xsl:when>
                <xsl:when test="/xs:schema/xs:simpleType[@name=$originalType]/xs:restriction/xs:maxExclusive">
                    <xsl:value-of select="/xs:schema/xs:simpleType/xs:restriction/xs:maxExclusive/@value"/>
                    <xsl:text>)</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>&#8734;)</xsl:text> <!-- &infin; infinity symbol -->
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text> </xsl:text>
        </xsl:when>
    </xsl:choose>
</xsl:template>

<xsl:template name="java-restrictions">
    <xsl:variable name="restrictions">
        <xsl:call-template name="list-restrictions"/>
    </xsl:variable>
    <xsl:choose>
        <xsl:when test="(string-length($restrictions) > 0) and not(@type='SFString') and not(@type='MFString')
                        and not((@type='jointNames') or (@type='featurePointNames') or (@type='segmentNames') or (@type='siteNames'))
                        and not(contains($restrictions,'(-&#8734;,&#8734;)'))">
            <xsl:text> throws InvalidFieldValueException;</xsl:text>
            <!-- verbose output, javadoc is sufficient:
            
            <xsl:text> // valid range </xsl:text>
            <xsl:value-of select="$restrictions"/>
            -->
        </xsl:when>
        <xsl:otherwise>
            <!-- no restrictions -->
            <xsl:text>;</xsl:text>
        </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template name="x3dType-from-schemaType">
    <xsl:param name="schemaType" />
    <xsl:param name="default" select="@default"/>
    
    <xsl:choose>
        <xsl:when test="($schemaType='xs:boolean')">
            <xsl:text>SFBool</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='xs:integer') or ($schemaType='xs:positiveInteger')">
            <xsl:text>SFInt32</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='xs:float')">
            <xsl:text>SFFloat</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='xs:double')">
            <xsl:text>SFDouble</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='xs:string') or ($schemaType='xs:NMTOKEN') or ($schemaType='xs:token')">
            <xsl:text>SFString</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='SFNode') and (string-length($default) > 0)">
            <xsl:value-of select="@default"/>
        </xsl:when>
        <xsl:when test="($schemaType='MFNode') and (string-length($default) > 0)">
            <xsl:value-of select="@default"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$schemaType"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template name="javaType-from-schemaType">
    <xsl:param name="schemaType" />
    <xsl:param name="default" select="@default"/>
    
    <xsl:choose>
        <xsl:when test="($schemaType='SFBool') or ($schemaType='xs:boolean')">
            <xsl:text>boolean</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='MFBool')">
            <xsl:text>boolean[]</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='SFInt32') or ($schemaType='xs:integer') or ($schemaType='xs:positiveInteger')">
            <xsl:text>int</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='SFFloat') or ($schemaType='xs:float')">
            <xsl:text>float</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='SFDouble') or ($schemaType='SFTime') or ($schemaType='xs:double')">
            <xsl:text>double</xsl:text>
        </xsl:when>
        <xsl:when test="( contains(@name,'Color'))   or ($schemaType='SFColor')    or ($schemaType='SFColorRGBA') or ($schemaType='SFRotation') or ($schemaType='SFVec2f') or ($schemaType='SFVec3f') or ($schemaType='SFVec4f') or
                          ($schemaType='MFFloat')    or ($schemaType='MFColor')    or ($schemaType='MFColorRGBA') or ($schemaType='MFRotation') or ($schemaType='MFVec2f') or ($schemaType='MFVec3f') or ($schemaType='MFVec4f') or
                          ($schemaType='SFMatrix3f') or ($schemaType='MFMatrix3f') or ($schemaType='SFMatrix4f')  or ($schemaType='MFMatrix4f')">
            <xsl:text>float[]</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='MFTime')     or ($schemaType='SFVec2d')    or ($schemaType='SFVec3d')    or ($schemaType='SFVec4d') or
                        ($schemaType='MFDouble')   or ($schemaType='MFVec2d')    or ($schemaType='MFVec3d')    or ($schemaType='MFVec4d') or
                        ($schemaType='SFMatrix3d') or ($schemaType='MFMatrix3d') or ($schemaType='SFMatrix4d') or ($schemaType='MFMatrix4d')">
            <xsl:text>double[]</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='SFString') or ($schemaType='xs:string') or ($schemaType='xs:NMTOKEN') or ($schemaType='xs:token')">
            <xsl:text>String</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='MFString')">
            <xsl:text>String[]</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='SFNode') and (string-length($default) > 0)">
            <xsl:value-of select="@default"/>
        </xsl:when>
        <xsl:when test="($schemaType='MFNode') and (string-length($default) > 0)">
            <xsl:value-of select="@default"/>
            <xsl:text>[]</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='SFNode')">
            <xsl:text>X3DNode</xsl:text>
        </xsl:when>
        <xsl:when test="($schemaType='MFNode')">
            <xsl:text>X3DNode[]</xsl:text>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$schemaType"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template name="java-source-from-simpleType">
    <xsl:param name="includeExternalLinks" select="false()"/>
    
    <xsl:variable name="type">
        <xsl:value-of select="@name"/>
        <!--
        <xsl:choose>
            <xsl:when test="string-length(xs:restriction/@base) > 1">
                <xsl:value-of select="xs:restriction/@base"/>
            </xsl:when>
            <xsl:when test="string-length(xs:list/@itemType) > 1">
                <xsl:value-of select="xs:restriction/@base"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="@name"/>
            </xsl:otherwise>
        </xsl:choose>
        -->
    </xsl:variable>
    <xsl:variable name="isEnumerationType" select="false()"/>
    <xsl:variable name="x3dType">
        <xsl:call-template name="x3dType-from-schemaType">
            <xsl:with-param name="schemaType" select="$type"/>
        </xsl:call-template>
    </xsl:variable>
    <xsl:variable name="javaType">
        <xsl:call-template name="javaType-from-schemaType">
            <xsl:with-param name="schemaType" select="$type"/>
        </xsl:call-template>
    </xsl:variable>
    <xsl:variable name="tupleNess">
        <xsl:choose>
            <xsl:when test="contains($type,'FVec2')">
                <xsl:text>2-tuple </xsl:text>
            </xsl:when>
            <xsl:when test="contains($type,'FVec3') or ends-with($type,'FColor')">
                <xsl:text>3-tuple </xsl:text>
            </xsl:when>
            <xsl:when test="contains($type,'FVec4') or ends-with($type,'FRotation') or contains($type,'FColorRGBA')">
                <xsl:text>4-tuple </xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($type,'MF')">
                <!-- <xsl:text>1-tuple </xsl:text> -->
            </xsl:when>
        </xsl:choose>
    </xsl:variable>
    <xsl:variable name="defaultParameterName">
        <xsl:choose>
            <xsl:when test="contains(@name,'otation')">
                <xsl:text>angle</xsl:text>
            </xsl:when>
            <xsl:when test="contains(@name,'olor')">
                <xsl:text>color</xsl:text>
            </xsl:when>
            <xsl:when test="contains($type,'FTime')">
                <xsl:text>timestamp</xsl:text>
            </xsl:when>
            <xsl:when test="contains($type,'FNode')">
                <xsl:text>node</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>value</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:if test="starts-with($type,'MF')">
            <xsl:text>s</xsl:text>
        </xsl:if>
    </xsl:variable>
    <xsl:variable name="camelCaseName">
        <xsl:choose>
            <xsl:when test="starts-with(@name,'set_')">
                <xsl:value-of select="translate(substring(substring-after(@name,'set_'),1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                <xsl:value-of select="substring(substring-after(@name,'set_'),2)"/>
            </xsl:when>
            <xsl:when test="starts-with(@name,'set')">
                <xsl:value-of select="translate(substring(substring-after(@name,'set'),1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                <xsl:value-of select="substring(substring-after(@name,'set'),2)"/>
            </xsl:when>
            <xsl:when test="contains(@name,'_changed')">
                <xsl:value-of select="translate(substring(substring-before(@name,'_changed'),1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                <xsl:value-of select="substring(substring-before(@name,'_changed'),2)"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="translate(substring(@name,1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                <xsl:value-of select="substring(@name,2)"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    
            <!-- Javadoc -->
            <xsl:text>/** </xsl:text>
            <xsl:choose>
                <xsl:when test="$includeExternalLinks">
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$specificationIndexUrl"/>
                            <xsl:text>fieldsDef.html#S</xsl:text>
                            <xsl:value-of select="substring(@name,2)"/>
                            <xsl:text>AndM</xsl:text>
                            <xsl:value-of select="substring(@name,2)"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="@name"/>
                    </xsl:element>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="@name"/>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text> defines a node type interface.</xsl:text>
            <xsl:variable name="appinfo">
                <xsl:value-of select="normalize-space(xs:annotation/xs:appinfo/text())"/>
            </xsl:variable>
            <xsl:if test="string-length($appinfo) > 0">
                <xsl:text>&#10;</xsl:text>
                <xsl:text>  * </xsl:text>
                <xsl:value-of select="$appinfo"/>
            </xsl:if>
            <xsl:text> */</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            
            <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
                <xsl:text>@Deprecated </xsl:text>
            </xsl:if>
            <xsl:text>public interface </xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text> extends </xsl:text>
            <xsl:choose>
                <xsl:when test="starts-with(@name,'SF')">
                    <xsl:text>X3DField</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>MField</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>{</xsl:text>

    <xsl:choose>
        <xsl:when test="(@name='SFImage')">
<xsl:text disable-output-escaping="yes">
    /** Get image width in pixels */
    public int getWidth ();

    /** Get image height in pixels */
    public int getHeight ();

    /** Get number of components in an image:
      * 1 (intensity), 2 (intensity alpha), 3 (red green blue), 4 (red green blue alpha-opacity).*/
    public int getComponents();

    /** Get array of pixel values [0-255] */
    public void getPixels (int[] pixels);

    /** Get &lt;a href="http://docs.oracle.com/javase/8/docs/api/java/awt/image/WritableRenderedImage.html"&gt;java.awt.image.WritableRenderedImage&lt;/a&gt; version of image */
    public  java.awt.image.WritableRenderedImage getImage();

    /** Initialize image */
    public void setValue (int width,
                          int height,
                          int components,
                          int[] pixels);

    /** Assign a new image as current image */
    public void setImage (java.awt.image.RenderedImage image);

    /** Assign a portion of a new image as part of current image */
    public void setSubImage (java.awt.image.RenderedImage image,
                             int srcWidth,
                             int srcHeight,
                             int srcXOffset,
                             int srcYOffset,
                             int destXOffset,
                             int destYOffset);
</xsl:text>
            </xsl:when>
            <xsl:when test="(@name='MFImage')">
<xsl:text>
    /** Get selected image width in pixels */
    public int getWidth (int imageIndex) throws ArrayIndexOutOfBoundsException;

    /** Get selected image height in pixels */
    public int getHeight (int imageIndex) throws ArrayIndexOutOfBoundsException;

    /** Get number of components in selected image:
      * 1 (intensity), 2 (intensity alpha), 3 (red green blue), 4 (red green blue alpha-opacity).*/
    public int getComponents (int imageIndex) throws ArrayIndexOutOfBoundsException;

    /** Get array of pixel values [0-255] in selected image */
    public void getPixels (int imageIndex, int[] pixels) throws ArrayIndexOutOfBoundsException;

    /** Get &lt;a href="http://docs.oracle.com/javase/8/docs/api/java/awt/image/WritableRenderedImage.html"&gt;java.awt.image.WritableRenderedImage&lt;/a&gt; version of selected image */
    public WritableRenderedImage getImage(int imageIndex) throws ArrayIndexOutOfBoundsException;

    /** Assign a new image as a replacement image within the current image array */
    public void setImage (int imageIndex, RenderedImage img) throws ArrayIndexOutOfBoundsException;

    /** Assign a portion of a new image as part of current selected image in array */
    public void setSubImage (int imageIndex,
                             RenderedImage img,
                             int srcWidth,
                             int srcHeight,
                             int srcXOffset,
                             int srcYOffset,
                             int destXOffset,
                             int destYOffset) throws ArrayIndexOutOfBoundsException;

    /** Utility method to set all values for selected image in array */
    public void set1Value (int imageIndex, int value) throws ArrayIndexOutOfBoundsException;

    /** Initialize selected image */
    public void set1Value (int imageIndex,
                           int width,
                           int height,
                           int components,
                           int[] pixels) throws ArrayIndexOutOfBoundsException;

    /** Utility method to set all values for all images in array */
    public void setValue (int[] value);

    /** Assign a new image array as current image array */
    public void setImage (RenderedImage[] img);

    /** Append a new image to current image array */
    public void append (RenderedImage value);

    /** Insert a new image in the current image array */
    public void insertValue (int imageIndex, RenderedImage value) throws ArrayIndexOutOfBoundsException;
</xsl:text>
        </xsl:when>
        <xsl:otherwise>
            <xsl:text>&#10;</xsl:text>
            <!-- Javadoc -->
            <xsl:variable name="javadocProse">
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/**</xsl:text>
                <xsl:text> Provide </xsl:text>
                <xsl:choose>
                    <xsl:when test="contains($javaType,'[]')">
                        <xsl:text>array of </xsl:text>
                        <xsl:value-of select="$tupleNess"/>
                        <xsl:value-of select="substring-before($javaType,'[]')"/>
                        <xsl:if test="$isEnumerationType">
                            <xsl:text> enumeration</xsl:text>
                        </xsl:if>
                        <xsl:text> results array </xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$tupleNess"/>
                        <xsl:value-of select="$javaType"/>
                        <xsl:if test="$isEnumerationType">
                            <xsl:text> enumeration</xsl:text>
                        </xsl:if>
                        <xsl:text> value </xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- value restrictions, if any -->
                <xsl:choose>
                    <xsl:when test="contains($type,'RGBA')">
                        <xsl:text>using RGBA values [0..1] </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Color')">
                        <xsl:text>using RGB values [0..1] </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'otation') or contains(@name,'otation') or contains(@name,'angle') or contains(@name,'Angle')">
                        <xsl:text>in radians </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Time')">
                        <xsl:text>in seconds </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>(using a properly typed node or X3DPrototypeInstance) </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>(using a properly typed node array or X3DPrototypeInstance array) </xsl:text>
                    </xsl:when>
                </xsl:choose>
				<xsl:call-template name="list-restrictions"/>
                <xsl:text>from type </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> */</xsl:text>
            </xsl:variable>
            
            <xsl:value-of select="$javadocProse"/>
            <xsl:text>&#10;</xsl:text>
            <!-- getter -->
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>public </xsl:text>
            <xsl:choose>
                <xsl:when test="contains($type,'FVec') or contains($type,'FColor') or contains($type,'FNode')">
                    <xsl:text>void</xsl:text>
                    <xsl:text> </xsl:text>
                    <xsl:text>getValue</xsl:text>
                    <xsl:text> (</xsl:text>
                    <xsl:choose>
                        <!-- restore basic javaType for SFNode/MFNode in case overridden by schema; a prototype instance might be returned -->
                        <xsl:when test="($type='SFNode')">
                            <xsl:text>X3DNode</xsl:text>
                        </xsl:when>
                        <xsl:when test="($type='MFNode')">
                            <xsl:text>X3DNode[]</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$javaType"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text> result</xsl:text>
                    <xsl:text>)</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$javaType"/>
                    <xsl:text> </xsl:text>
                    <xsl:text>getValue ()</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            
            <xsl:if test="(@name='SFTime')">
                <!-- http://docs.oracle.com/javase/8/docs/api/java/lang/System.html#nanoTime- - (omit preceding space character from url) -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Provide long value in nanoseconds from type SFTime */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <!-- getter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public long getJavaValue ();</xsl:text>
            <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <!-- additional getters for array types -->
            <xsl:if test="starts-with(@name,'MF') and (contains(@name,'Color') or contains(@name,'Rotation') or contains(@name,'FVec') or contains(@name,'Matrix'))">
                <xsl:text>&#10;</xsl:text>
                <xsl:value-of select="$javadocProse"/>
                <xsl:text>&#10;</xsl:text>
                <!-- getter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public </xsl:text>
                <xsl:text>void</xsl:text>
                <xsl:text> </xsl:text>
                <xsl:text>getValue</xsl:text>
                <xsl:text> (</xsl:text>
                <xsl:choose>
                    <!-- restore basic javaType for SFNode/MFNode in case overridden by schema; a prototype instance might be returned -->
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>X3DNode[]</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$javaType"/>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- utility method, square array -->
                <xsl:text>[]</xsl:text>
                <xsl:text> result</xsl:text>
                <xsl:text>)</xsl:text>
                <xsl:text>; // overloaded method for convenience</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:if test="starts-with(@name,'MF')">
                <!-- get1Value getter -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Utility method to provide single </xsl:text>
                <xsl:value-of select="$tupleNess"/>
                <xsl:text>value from </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> array */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public </xsl:text>
                <xsl:choose>
                    <xsl:when test="contains($type,'FVec') or contains($type,'FColor') or contains($type,'FNode')">
                        <xsl:text>void</xsl:text>
                        <xsl:text> </xsl:text>
                        <xsl:text>get1Value</xsl:text>
                        <xsl:text> (int index, </xsl:text>
                        <xsl:choose>
                            <!-- restore basic javaType for SFNode/MFNode in case overridden by schema; a prototype instance might be returned -->
                            <xsl:when test="($type='SFNode')">
                                <xsl:text>X3DNode</xsl:text>
                            </xsl:when>
                            <xsl:when test="($type='MFNode')">
                                <xsl:text>X3DNode</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- demote type to singleton SF type -->
                                <xsl:call-template name="javaType-from-schemaType">
                                    <xsl:with-param name="schemaType" select="concat('S',substring($type,2))"/>
                                </xsl:call-template>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:text> result</xsl:text>
                        <xsl:text>)</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- demote type to singleton SF type -->
                        <xsl:call-template name="javaType-from-schemaType">
                            <xsl:with-param name="schemaType" select="concat('S',substring($type,2))"/>
                        </xsl:call-template>
                        <xsl:text> </xsl:text>
                        <xsl:text>get1Value (int index)</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text>;</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:if test="(@name='MFTime')">
                <!-- http://docs.oracle.com/javase/8/docs/api/java/lang/System.html#nanoTime- - (omit preceding space character from url) -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Utility method to provide single long value in nanoseconds from MFTime array */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <!-- getter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public long get1JavaValue (int index);</xsl:text>
            <xsl:text>&#10;</xsl:text>
            </xsl:if>
            
            <!-- input methods -->
            <xsl:text>&#10;</xsl:text>
            <!-- Javadoc -->
            <xsl:value-of select="$javadocProse"/>
            <xsl:text>&#10;</xsl:text>
            <!-- setter -->
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
                <xsl:text>@Deprecated </xsl:text>
            </xsl:if>
            <xsl:text>public void </xsl:text>
            <xsl:text>setValue</xsl:text>
            <xsl:text> (</xsl:text>
            <xsl:if test="starts-with(@name,'MF')">
                <xsl:text>int size, </xsl:text>
            </xsl:if>
            <xsl:choose>
                <xsl:when test="contains($javaType,'|') and (@type='SFNode')">
                    <xsl:text>X3DNode</xsl:text>
                </xsl:when>
                <xsl:when test="contains($javaType,'|') and (@type='MFNode')">
                    <xsl:text>X3DNode[]</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$javaType"/>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text> </xsl:text>
            <xsl:value-of select="$defaultParameterName"/>
            <xsl:text>)</xsl:text>
            <xsl:call-template name="java-restrictions"/>
            <xsl:text>&#10;</xsl:text>
            <xsl:if test="(@name='SFTime')">
                <!-- http://docs.oracle.com/javase/8/docs/api/java/lang/System.html#nanoTime- - (omit preceding space character from url) -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Assign long value in nanoseconds using System.nanoTime() to type SFTime */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <!-- getter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public void setValue (long value);</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:if test="(@name='MFTime')">
                <!-- http://docs.oracle.com/javase/8/docs/api/java/lang/System.html#nanoTime- - (omit preceding space character from url) -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Assign long array in nanoseconds to type MFTime */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <!-- getter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public void setValue (int size, long[] values);</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <!-- add custom method for ProtoInstance if default node type used.  don't do this for MFNode array since it can already be a mix of typed and ProtoInstance nodes. -->
            <xsl:if test="(@type='SFNode') and not((@name='addChildren') or (@name='removeChildren')) and (string-length(@default) > 0)">
                <xsl:text>&#10;</xsl:text>
                <xsl:value-of select="substring-before($javadocProse,' node')"/>
                <xsl:text> protoInstance) */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <!-- alternate setter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public void </xsl:text>
                <xsl:text>set</xsl:text>
                <xsl:value-of select="$camelCaseName"/>
                <xsl:text> (X3DPrototypeInstance protoInstance) throws InvalidFieldValueException;</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:if test="starts-with(@name,'MF') and (contains(@name,'Color') or contains(@name,'Rotation') or contains(@name,'FVec') or contains(@name,'Matrix'))">
                <xsl:text>&#10;</xsl:text>
                <xsl:value-of select="$javadocProse"/>
                <xsl:text>&#10;</xsl:text>
                <!-- setter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public void </xsl:text>
                <xsl:text>setValue</xsl:text>
                <xsl:text> (</xsl:text>
                <xsl:choose>
                    <xsl:when test="contains($javaType,'|') and (@type='SFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($javaType,'|') and (@type='MFNode')">
                        <xsl:text>X3DNode[]</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$javaType"/>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- utility method, square array -->
                <xsl:text>[]</xsl:text>
                <xsl:text> </xsl:text>
                <xsl:value-of select="$defaultParameterName"/>
                <xsl:text>)</xsl:text>
                <xsl:call-template name="java-restrictions"/>
                <xsl:text> // overloaded method for convenience</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:if test="starts-with(@name,'MF')">
                <!-- set1Value setter -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Utility method to set a single </xsl:text>
                <xsl:value-of select="$tupleNess"/>
                <xsl:text>value in </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> array */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public </xsl:text>
                <xsl:text>void</xsl:text>
                <xsl:text> </xsl:text>
                <xsl:text>set1Value</xsl:text>
                <xsl:text> (int index, </xsl:text>
                <xsl:choose>
                    <!-- restore basic javaType for SFNode/MFNode in case overridden by schema; a prototype instance might be returned -->
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- demote type to singleton SF type -->
                        <xsl:call-template name="javaType-from-schemaType">
                            <xsl:with-param name="schemaType" select="concat('S',substring($type,2))"/>
                        </xsl:call-template>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> </xsl:text>
                <!-- remove plural 's' from $defaultParameterName -->
                <xsl:value-of select="substring($defaultParameterName,1,string-length($defaultParameterName)-1)"/>
                <xsl:text>)</xsl:text>
                <xsl:text> throws ArrayIndexOutOfBoundsException;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                
                <xsl:if test="(@name='MFTime')">
                    <!-- http://docs.oracle.com/javase/8/docs/api/java/lang/System.html#nanoTime- - (omit preceding space character from url) -->
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>&#160;&#160;</xsl:text>
                    <xsl:text>/** Utility method to set a single long value in nanoseconds using System.nanoTime() in MFTime array */</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <!-- getter -->
                    <xsl:text>&#160;&#160;</xsl:text>
                    <xsl:text>public void set1Value (int index, long value) throws ArrayIndexOutOfBoundsException;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                <!-- additional setters for array types -->
                <!-- append setter -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Utility method to append a single </xsl:text>
                <xsl:value-of select="$tupleNess"/>
                <xsl:text>value to </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> array */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public </xsl:text>
                <xsl:text>void</xsl:text>
                <xsl:text> </xsl:text>
                <xsl:text>append</xsl:text>
                <xsl:text> (</xsl:text>
                <xsl:choose>
                    <!-- restore basic javaType for SFNode/MFNode in case overridden by schema; a prototype instance might be returned -->
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- demote type to singleton SF type -->
                        <xsl:call-template name="javaType-from-schemaType">
                            <xsl:with-param name="schemaType" select="concat('S',substring($type,2))"/>
                        </xsl:call-template>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> </xsl:text>
                <!-- remove plural 's' from $defaultParameterName -->
                <xsl:value-of select="substring($defaultParameterName,1,string-length($defaultParameterName)-1)"/>
                <xsl:text>)</xsl:text>
                <xsl:text>;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                
                <!-- insertValue setter -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Utility method to insert a single </xsl:text>
                <xsl:value-of select="$tupleNess"/>
                <xsl:text>value in </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> array */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public </xsl:text>
                <xsl:text>void</xsl:text>
                <xsl:text> </xsl:text>
                <xsl:text>insertValue</xsl:text>
                <xsl:text> (int index, </xsl:text>
                <xsl:choose>
                    <!-- restore basic javaType for SFNode/MFNode in case overridden by schema; a prototype instance might be returned -->
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- demote type to singleton SF type -->
                        <xsl:call-template name="javaType-from-schemaType">
                            <xsl:with-param name="schemaType" select="concat('S',substring($type,2))"/>
                        </xsl:call-template>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> </xsl:text>
                <!-- remove plural 's' from $defaultParameterName -->
                <xsl:value-of select="substring($defaultParameterName,1,string-length($defaultParameterName)-1)"/>
                <xsl:text>)</xsl:text>
                <xsl:text> throws ArrayIndexOutOfBoundsException;</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if> <!-- end MF type handling -->
        </xsl:otherwise>
    </xsl:choose>
            
    <xsl:text>}</xsl:text>
    <xsl:text>&#10;</xsl:text>
            
    <xsl:choose>
        <xsl:when test="starts-with(@name,'SF')">
        </xsl:when>
        <xsl:when test="starts-with(@name,'MF')">
            
        </xsl:when>
    </xsl:choose>
</xsl:template>

<xsl:template name="java-source-from-schema-for-specification">
    <xsl:param name="abstract" select="true()"/>
    <xsl:param name="includeExternalLinks" select="true()"/><!-- ISO version might not have external links in final version, this is a committee draft issue -->
    
    <xsl:variable name="baseInterface" select="descendant::xs:complexContent/xs:extension/@base"/> <!-- handle abstract type or element -->
    
    <xsl:variable name="ancestorInterface1" select="/xs:schema/xs:complexType[@name=$baseInterface]//xs:complexContent/xs:extension/@base"/>
    <xsl:variable name="ancestorInterface2" select="/xs:schema/xs:complexType[@name=$ancestorInterface1]//xs:complexContent/xs:extension/@base"/>
    <xsl:variable name="ancestorInterface3" select="/xs:schema/xs:complexType[@name=$ancestorInterface2]//xs:complexContent/xs:extension/@base"/>
    <xsl:variable name="ancestorInterface4" select="/xs:schema/xs:complexType[@name=$ancestorInterface3]//xs:complexContent/xs:extension/@base"/>
    
    <!-- debug
    <xsl:if test="$abstract=false()">
        <p>
            <xsl:text>/* </xsl:text>
            <xsl:text>baseInterface=</xsl:text>
            <xsl:value-of select="$baseInterface"/>
            <xsl:if test="(string-length($ancestorInterface1) > 1)">
                <xsl:text>, ancestorInterface1</xsl:text>
                <xsl:text>=</xsl:text>
                <xsl:value-of select="$ancestorInterface1"/>
            </xsl:if>
            <xsl:if test="(string-length($ancestorInterface2) > 1)">
                <xsl:text>, ancestorInterface2</xsl:text>
                <xsl:text>=</xsl:text>
                <xsl:value-of select="$ancestorInterface2"/>
            </xsl:if>
            <xsl:if test="(string-length($ancestorInterface3) > 1)">
                <xsl:text>, ancestorInterface3</xsl:text>
                <xsl:text>=</xsl:text>
                <xsl:value-of select="$ancestorInterface3"/>
            </xsl:if>
            <xsl:if test="(string-length($ancestorInterface4) > 1)">
                <xsl:text>, ancestorInterface4</xsl:text>
                <xsl:text>=</xsl:text>
                <xsl:value-of select="$ancestorInterface4"/>
            </xsl:if>
            <xsl:text> */</xsl:text>
        </p>
    </xsl:if>
     -->
    <!-- Javadoc -->
    <xsl:text>/** </xsl:text>
    <xsl:choose>
        <xsl:when test="$includeExternalLinks">
            <xsl:element name="a">
                <xsl:attribute name="href">
                    <xsl:value-of select="$specificationIndexUrl"/>
                    <xsl:text>versionContent.html#</xsl:text>
                    <xsl:value-of select="@name"/>
                </xsl:attribute>
                <xsl:attribute name="target">
                    <xsl:text>_blank</xsl:text>
                </xsl:attribute>
                <xsl:value-of select="@name"/>
            </xsl:element>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="@name"/>
        </xsl:otherwise>
    </xsl:choose>
    <xsl:text> defines </xsl:text>
    <xsl:choose>
        <xsl:when test="$abstract">
            <xsl:text>an abstract </xsl:text>
            <xsl:if test="contains(@name, 'Node')">
                <xsl:text>node </xsl:text>
            </xsl:if>
            <xsl:text>interface</xsl:text>
            <xsl:if test="(string-length($baseInterface) > 0)">
                <xsl:text> that extends interface</xsl:text>
                <xsl:if test="(string-length($ancestorInterface1) > 0)">
                    <xsl:text>s</xsl:text>
                </xsl:if>
                <xsl:text> </xsl:text>
<!--            <xsl:if test="(string-length(xs:complexType/xs:complexContent/xs:extension/@base) > 0)"> Commented out as this is an unnecessary duplicate -->
                <xsl:choose>
                    <xsl:when test="//xs:complexType[@name = $baseInterface]">
                        <xsl:element name="a">
                            <xsl:attribute name="href">
                                <!-- nodeTypeInterfaces.html -->
                                <xsl:text>#</xsl:text>
                                <xsl:value-of select="$baseInterface"/>
                            </xsl:attribute>
                            <!-- relative links stay in same target -->
                            <xsl:value-of select="$baseInterface"/>
                        </xsl:element>
                    </xsl:when>
                    <xsl:when test="$includeExternalLinks">
                        <xsl:element name="a">
                            <xsl:attribute name="href">
                                <xsl:value-of select="$specificationIndexUrl"/>
                                <xsl:text>versionContent.html#</xsl:text>
                                <xsl:value-of select="$baseInterface"/>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:text>_blank</xsl:text>
                            </xsl:attribute>
                            <xsl:value-of select="$baseInterface"/>
                        </xsl:element>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$baseInterface"/>
                    </xsl:otherwise>
                </xsl:choose>
<!--            </xsl:if> -->
                <xsl:if test="(string-length($ancestorInterface1) > 0)">
                    <xsl:choose>
                        <xsl:when test="(string-length($ancestorInterface2) > 0)">
                            <xsl:text>, </xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text> and </xsl:text>
                        </xsl:otherwise>                        
                    </xsl:choose>
                    <xsl:choose>
                        <xsl:when test="//xs:complexType[@name = $ancestorInterface1]">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <!-- nodeTypeInterfaces.html -->
                                    <xsl:text>#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface1"/>
                                </xsl:attribute>
                                <!-- relative links stay in same target -->
                                <xsl:value-of select="$ancestorInterface1"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:when test="$includeExternalLinks">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="$specificationIndexUrl"/>
                                    <xsl:text>versionContent.html#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface1"/>
                                </xsl:attribute>
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                <xsl:value-of select="$ancestorInterface1"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$ancestorInterface1"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:if>
                <xsl:if test="(string-length($ancestorInterface2) > 0)">
                    <xsl:choose>
                        <xsl:when test="(string-length($ancestorInterface3) > 0)">
                            <xsl:text>, </xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>, and </xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:choose>
                        <xsl:when test="//xs:complexType[@name = $ancestorInterface2]">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <!-- nodeTypeInterfaces.html -->
                                    <xsl:text>#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface2"/>
                                </xsl:attribute>
                                <!-- relative links stay in same target -->
                                <xsl:value-of select="$ancestorInterface2"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:when test="$includeExternalLinks">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="$specificationIndexUrl"/>
                                    <xsl:text>versionContent.html#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface2"/>
                                </xsl:attribute>
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                <xsl:value-of select="$ancestorInterface2"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$ancestorInterface2"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:if>
                <xsl:if test="(string-length($ancestorInterface3) > 0)">
                    <xsl:choose>
                        <xsl:when test="(string-length($ancestorInterface4) > 0)">
                            <xsl:text>, </xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>, and </xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:choose>
                        <xsl:when test="//xs:complexType[@name = $ancestorInterface3]">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <!-- nodeTypeInterfaces.html -->
                                    <xsl:text>#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface3"/>
                                </xsl:attribute>
                                <!-- relative links stay in same target -->
                                <xsl:value-of select="$ancestorInterface3"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:when test="$includeExternalLinks">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="$specificationIndexUrl"/>
                                    <xsl:text>versionContent.html#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface3"/>
                                </xsl:attribute>
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                <xsl:value-of select="$ancestorInterface3"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$ancestorInterface3"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:if>
                <xsl:if test="(string-length($ancestorInterface4) > 0)">
                    <xsl:text>, and </xsl:text>
                    <xsl:choose>
                        <xsl:when test="//xs:complexType[@name = $ancestorInterface4]">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <!-- nodeTypeInterfaces.html -->
                                    <xsl:text>#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface4"/>
                                </xsl:attribute>
                                <!-- relative links stay in same target -->
                                <xsl:value-of select="$ancestorInterface4"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:when test="$includeExternalLinks">
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="$specificationIndexUrl"/>
                                    <xsl:text>versionContent.html#</xsl:text>
                                    <xsl:value-of select="$ancestorInterface4"/>
                                </xsl:attribute>
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                <xsl:value-of select="$ancestorInterface4"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$ancestorInterface4"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:if>
            </xsl:if>
        </xsl:when>
        <xsl:otherwise>
            <xsl:text>a node interface that extends interface</xsl:text>
            <xsl:if test="xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface']">
                <xsl:text>s</xsl:text>
            </xsl:if>
            <xsl:text> </xsl:text>
            <xsl:if test="(string-length(xs:complexType/xs:complexContent/xs:extension/@base) > 0)">
                <xsl:element name="a">
                    <xsl:attribute name="href">
                        <!-- relative link preferred
                        <xsl:value-of select="$specificationIndexUrl"/>
                        <xsl:text>versionContent.html#</xsl:text>
                        -->
                        <xsl:text>nodeTypeInterfaces.html#</xsl:text>
                        <xsl:value-of select="xs:complexType/xs:complexContent/xs:extension/@base"/>
                    </xsl:attribute>
                    <xsl:attribute name="target">
                        <xsl:text>_abstracts</xsl:text>
                    </xsl:attribute>
                    <xsl:value-of select="xs:complexType/xs:complexContent/xs:extension/@base"/>
                </xsl:element>
            </xsl:if>
            <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface']">
                <xsl:text>, </xsl:text>
                <xsl:element name="a">
                    <xsl:attribute name="href">
                        <!--
                        <xsl:value-of select="$specificationIndexUrl"/>
                        <xsl:text>versionContent.html#</xsl:text>
                        -->
                        <xsl:text>nodeTypeInterfaces.html#</xsl:text>
                        <xsl:value-of select="@default"/>
                    </xsl:attribute>
                    <xsl:attribute name="target">
                        <xsl:text>_abstracts</xsl:text>
                    </xsl:attribute>
                    <xsl:value-of select="@default"/>
                </xsl:element>
            </xsl:for-each>
        </xsl:otherwise>
    </xsl:choose>
    <xsl:text>.</xsl:text>
    <xsl:variable name="appinfo">
        <xsl:value-of select="normalize-space(xs:annotation/xs:appinfo/text())"/>
    </xsl:variable>
    <xsl:if test="string-length($appinfo) > 0">
        <xsl:text>&#10;</xsl:text>
        <xsl:text>  * </xsl:text>
        <xsl:value-of select="$appinfo"/>
    </xsl:if>
    <xsl:text> */</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
        <xsl:text>@Deprecated </xsl:text>
    </xsl:if>
    <xsl:text>public interface </xsl:text>
    <xsl:value-of select="@name"/>
    <xsl:if test="(string-length($baseInterface) > 0) or xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface'][contains(@default,'Node')]"> <!-- TODO: There is a problem here with X3DScriptNode, which doesn't extend from X3DNode -->
        <xsl:text> extends </xsl:text>
    </xsl:if>
    <xsl:choose>
        <!-- the only use of xs:restriction in the schema is for simple types, so xs:extension works OK here-->
        <xsl:when test="$abstract">
            <xsl:value-of select="$baseInterface"/>
        </xsl:when>
        <xsl:when test="$abstract=false()">
            <xsl:value-of select="xs:complexType/xs:complexContent/xs:extension/@base"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="xs:complexType/xs:complexContent/xs:extension/@base"/>
        </xsl:otherwise>
    </xsl:choose>
    <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface']">
<!--    <xsl:if test="(string-length(xs:complexType/xs:complexContent/xs:extension/@base) > 0) or (position() > 1)"> trying simpler alternative -->
        <xsl:if test="(string-length($baseInterface) > 0) or (position() > 1)">
            <xsl:text>, </xsl:text>
        </xsl:if>
        <xsl:value-of select="@default"/>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>{</xsl:text>

    <!-- generate field access methods -->
    
    <xsl:choose>
        <xsl:when test="$abstract">
<!--        <xsl:for-each select="xs:complexContent//xs:attribute                                     [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] | 
                                  xs:attribute                                                        [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  xs:complexType/xs:complexContent//xs:attribute                      [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] | 
                                  xs:annotation/xs:appinfo/xs:element |
                                  xs:annotation/xs:appinfo/xs:attribute                               [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                       /xs:schema/xs:complexType[@name=$baseInterface]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')]"> Testing simplified alternative -->
            <xsl:for-each select="xs:complexContent//xs:attribute                                     [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] | 
                                  xs:attribute                                                        [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  xs:annotation/xs:appinfo/xs:element |
                                  xs:annotation/xs:appinfo/xs:attribute                               [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')]">
                <!-- simple types first -->
                <xsl:sort select="contains(@type,'SFNode')"/>
                <xsl:sort select="contains(@type,'MFNode')"/>
                
                <!-- debug
                <xsl:if test="(name()='xs:element')">
                    <br />
                    <xsl:text>Found abstract xs:element name='</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text>'</xsl:text>
                </xsl:if>
                -->
                
                <xsl:call-template name="attribute-signature-output"/>
            </xsl:for-each>
            
            <!-- next: inherited fields shown for parent node type interfaces -->
            <xsl:for-each select="/xs:schema/xs:complexType[@name=$baseInterface     ]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface1]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface2]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface3]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface4]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$baseInterface     ]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface1]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface2]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface3]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface4]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$baseInterface     ]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface1]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface2]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface3]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface4]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')]">
                <!-- simple types first -->
                <xsl:sort select="contains(@type,'SFNode')"/>
                <xsl:sort select="contains(@type,'MFNode')"/>
                
                <!-- debug trace -->
                <xsl:if test="(position() = 1)">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>  // ===== methods for fields inherited from parent interfaces =====</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                
                <xsl:if test="(local-name()='xs:element')">
                    <p>
                        <xsl:text>Found xs:element name='</xsl:text>
                        <xsl:value-of select="@name"/>
                        <xsl:text>'</xsl:text>
                    </p>
                </xsl:if>
                
                <xsl:call-template name="attribute-signature-output"/>
            </xsl:for-each>
        </xsl:when>
        <xsl:otherwise> <!-- node interfaces -->
            <xsl:for-each select="xs:complexContent//xs:attribute               [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] | 
                                  xs:complexType/xs:attribute                   [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] | 
                                  xs:attribute                                  [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  xs:complexType/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] | 
                                  xs:annotation/xs:appinfo/xs:element | 
                                  xs:annotation/xs:appinfo/xs:attribute         [not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')]">
                <!-- simple types first -->
                <xsl:sort select="contains(@type,'SFNode')"/>
                <xsl:sort select="contains(@type,'MFNode')"/>
                
                <!-- debug
                <xsl:if test="(name()='xs:element')">
                    <br />
                    <xsl:text>Found xs:element name='</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text>'</xsl:text>
                </xsl:if>
                -->
                
                <xsl:call-template name="attribute-signature-output"/>
            </xsl:for-each>
            
            <!-- next: inherited fields shown for parent node type interfaces -->
            <xsl:for-each select="/xs:schema/xs:complexType[@name=$baseInterface     ]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface1]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface2]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface3]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface4]/xs:complexContent//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$baseInterface     ]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface1]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface2]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface3]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface4]/xs:annotation/xs:appinfo//xs:element |
                                  /xs:schema/xs:complexType[@name=$baseInterface     ]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface1]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface2]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface3]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')] |
                                  /xs:schema/xs:complexType[@name=$ancestorInterface4]/xs:annotation/xs:appinfo//xs:attribute[not(@name='containerField')][not(@name='additionalInterface')][not(@name='componentName')][not(@name='componentLevel')]">
                <!-- simple types first -->
                <xsl:sort select="contains(@type,'SFNode')"/>
                <xsl:sort select="contains(@type,'MFNode')"/>
                
                <!-- debug trace -->
                <xsl:if test="(position() = 1)">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>  // ===== methods for fields inherited from parent interfaces =====</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                
                <xsl:if test="(local-name()='xs:element')">
                    <p>
                        <xsl:text>Found xs:element name='</xsl:text>
                        <xsl:value-of select="@name"/>
                        <xsl:text>'</xsl:text>
                    </p>
                </xsl:if>
                
                <xsl:call-template name="attribute-signature-output"/>
            </xsl:for-each>
        </xsl:otherwise>
    </xsl:choose>

    <!-- Utility methods -->
    <xsl:choose>
        <xsl:when test="(@name='X3DNode')">
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>/** Dispose of this node's resources. */</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>void dispose();</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <!-- ========== -->
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>/** Get a field for this node by name. */</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>X3DField getField (String name);</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <!-- ========== -->
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>/** Get list of available fields in this node. */</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>X3DFieldDefinition[] getFieldDefinitions();</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <!-- ========== -->
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>/** Get the name of this node. */</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>String getNodeName();</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <!-- ========== -->
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>/** Determine if node setup is completed. */</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>boolean isRealized ();</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <!-- ========== -->
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>/** Notify node that setup stage is complete. */</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:text>void realize ();</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <!-- ========== -->
        </xsl:when>
    </xsl:choose>
    <xsl:text>}</xsl:text>
    <xsl:text>&#10;</xsl:text>
                
</xsl:template>

<!-- ****************** catch-all ****************** -->

<xsl:template name="generate-html-meta-tags">
	<xsl:text>&#10;</xsl:text>
	<xsl:element name="link">
		<xsl:attribute name="rel"><xsl:text>stylesheet</xsl:text></xsl:attribute>
		<xsl:attribute name="href"><xsl:text>Web3D_LB.css</xsl:text></xsl:attribute>
		<xsl:attribute name="type"><xsl:text>text/css</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>title</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>{$ReadmeFile}</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="http-equiv"><xsl:text>Content-Type</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>text/html; charset=utf-8</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:text>&#10;</xsl:text>
        
	<xsl:variable name="todaysDate">
		<xsl:value-of select="fn:day-from-date(current-date())"/>
		<xsl:text> </xsl:text>
                <!-- adapted from http://www.xsltfunctions.com/xsl/functx_month-name-en.html -->
                <xsl:sequence select="
   ('January', 'February', 'March', 'April', 'May', 'June',
    'July', 'August', 'September', 'October', 'November', 'December')
   [fn:month-from-date(current-date())]"/>
	   <!-- <xsl:value-of select="fn:month-from-date(current-date())"/> -->
		<xsl:text> </xsl:text>
		<xsl:value-of select="fn:year-from-date(current-date())"/>
	</xsl:variable>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>created</xsl:text></xsl:attribute>
		<xsl:attribute name="content">
			<xsl:value-of select="$todaysDate"/>
		</xsl:attribute>
	</xsl:element>
        
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>creator</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>Don Brutzman</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>description</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>This stylesheet generates X3D Scene Access Interface (SAI) bindings in Java the latest X3D Schema to autogenerate all interface definitions.</xsl:text>
                </xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>X3D Abstract Scene Access Interface (SAI), https://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/X3D_SAI.html</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>X3D language bindings: Java, https://www.web3d.org/documents/specifications/19777-2/V3.3/Part2/X3D_Java.html</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/standards</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications/x3d-3.3.xsd</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications/x3d-schema-changelog.txt</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>http://x3d.svn.sourceforge.net/viewvc/x3d/www.web3d.org/specifications/x3d-3.3.xsd?view=log</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/BuildSpecificationLanguageBindingJava.xslt</xsl:text></xsl:attribute>
	</xsl:element>
	<xsl:element name="meta">
		<xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
		<xsl:attribute name="content"><xsl:text>http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationLanguageBindingJava.xslt?view=log</xsl:text></xsl:attribute>
	</xsl:element>

<!-- css not working...
	<xsl:text>&#10;</xsl:text>
	 <style type="text/css">
node.source {background-color:#f4f4f4;}
     </style>
     -->

</xsl:template>

<xsl:template name="attribute-signature-output">

        <xsl:variable name="name" select="@name"/>
        <xsl:variable name="nodeName" select="ancestor::xs:element/@name"/>
        <xsl:variable name="attributeName" select="@name"/>
        <xsl:variable name="camelCaseName">
            <xsl:choose>
                <xsl:when test="starts-with(@name,'set_')">
                    <xsl:value-of select="translate(substring(substring-after(@name,'set_'),1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                    <xsl:value-of select="substring(substring-after(@name,'set_'),2)"/>
                </xsl:when>
                <xsl:when test="starts-with(@name,'set')">
                    <xsl:value-of select="translate(substring(substring-after(@name,'set'),1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                    <xsl:value-of select="substring(substring-after(@name,'set'),2)"/>
                </xsl:when>
                <xsl:when test="contains(@name,'_changed')">
                    <xsl:value-of select="translate(substring(substring-before(@name,'_changed'),1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                    <xsl:value-of select="substring(substring-before(@name,'_changed'),2)"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="translate(substring(@name,1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                    <xsl:value-of select="substring(@name,2)"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="originalType" select="@type"/>
        <xsl:variable name="isEnumerationType" select="//xs:simpleType[@name = $originalType]/xs:restriction[@base='xs:token']"/>
        <xsl:variable name="enumerationValues">
            <xsl:for-each                    select="//xs:simpleType[@name = $originalType]/xs:restriction[@base='xs:token']/xs:enumeration">
                <xsl:text>"</xsl:text>
                <xsl:value-of select="@value"/>
                <xsl:text>"</xsl:text>
                <xsl:if test="not(position() = last())">
                    <xsl:text>|</xsl:text>
                </xsl:if>
            </xsl:for-each>
        </xsl:variable>
        <xsl:variable name="type">
            <xsl:choose>
                <xsl:when test="starts-with(@type,'SF') or starts-with(@type,'MF')">
                    <xsl:value-of select="@type"/>
                </xsl:when>
                <xsl:when test="$isEnumerationType">
                    <xsl:text>SFString</xsl:text>
                </xsl:when>
                <xsl:when test="xs:simpleType/xs:restriction">
                    <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
                </xsl:when>
                <xsl:when test="//xs:simpleType[@name = $originalType]">
                    <xsl:value-of select="//xs:simpleType[@name = $originalType]/xs:restriction/@base"/>
                    <!-- diagnostic
                    <xsl:message>
                        <xsl:text>*** type found for </xsl:text>
                        <xsl:value-of select="$originalType"/>
                    </xsl:message> -->
                </xsl:when>
                <xsl:when test="string-length(@type) > 0">
                    <xsl:value-of select="@type"/>
                </xsl:when>
                <xsl:when test="(string-length(xs:simpleType/xs:restriction/@base) > 0)">
                    <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>errorNotFound</xsl:text>
                    <xsl:message>
                        <xsl:text>*** no type found for complexContent </xsl:text>
                        <xsl:value-of select="../../@name"/>
                        <xsl:text> attribute </xsl:text>
                        <xsl:value-of select="@name"/>
                    </xsl:message>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
		<xsl:variable name="x3dType">
			<xsl:call-template name="x3dType-from-schemaType">
				<xsl:with-param name="schemaType" select="$type"/>
			</xsl:call-template>
		</xsl:variable>
        <xsl:variable name="javaType">
            <xsl:call-template name="javaType-from-schemaType">
                <xsl:with-param name="schemaType" select="$type"/>
            </xsl:call-template>
        </xsl:variable>
        <xsl:variable name="javaSingletonType">
            <xsl:choose>
                <xsl:when test="contains($javaType,'|') and (@type='SFNode')">
                    <xsl:text>X3DNode</xsl:text>
                </xsl:when>
                <xsl:when test="contains($javaType,'|') and (@type='MFNode')">
                    <xsl:text>X3DNode[]</xsl:text>
                </xsl:when>
                <xsl:when test="contains($javaType,'[]')">
                    <xsl:value-of select="substring-before($javaType,'[]')"/>
                </xsl:when>
                <xsl:when test="starts-with($javaType,'MF')">
                    <xsl:text>S</xsl:text>
                    <xsl:value-of select="substring($javaType,2)"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$javaType"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="tupleNess">
            <xsl:choose>
                <xsl:when test="contains($type,'FVec2')">
                    <xsl:text>2-tuple </xsl:text>
                </xsl:when>
                <xsl:when test="contains($type,'FVec3') or ends-with($type,'FColor')">
                    <xsl:text>3-tuple </xsl:text>
                </xsl:when>
                <xsl:when test="contains($type,'FVec4') or ends-with($type,'FRotation') or contains($type,'FColorRGBA')">
                    <xsl:text>4-tuple </xsl:text>
                </xsl:when>
                <xsl:when test="starts-with($type,'MF')">
                    <!-- <xsl:text>1-tuple </xsl:text> -->
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="accessType">
            <xsl:choose>
                <xsl:when test="(@fixed='inputOnly') or (@fixed='inputOnlyField')">
                    <xsl:text>inputOnly</xsl:text>
                </xsl:when>
                <xsl:when test="(@fixed='outputOnly') or (@fixed='outputOnlyField')">
                    <xsl:text>outputOnly</xsl:text>
                </xsl:when>
                <xsl:when test="(@fixed='initializeOnly') or (@fixed='initializeOnlyField')">
                    <xsl:text>initializeOnly</xsl:text>
                </xsl:when>
                <xsl:when test="(@fixed='inputOutput') or (@fixed='inputOutputField')">
                    <xsl:text>inputOutput</xsl:text>
                </xsl:when>
                <!-- next handle special case accessTypes -->
                <xsl:when test="(($nodeName='GeoCoordinate') and ($attributeName='point')) or
                                (($nodeName='GeoOrigin') and ($attributeName='geoSystem')) or
                                (($nodeName='Extrusion') and ($attributeName='scale' or $attributeName='orientation')) or
                                (($nodeName='FloatVertexAttribute') and ($attributeName='name')) or
                                (($nodeName='Matrix3VertexAttribute') and ($attributeName='name')) or
                                (($nodeName='Matrix4VertexAttribute') and ($attributeName='name')) or
                                (($nodeName='X3DVertexAttributeNode') and ($attributeName='name')) or
                                (($nodeName='ShaderPart' or $nodeName='ShaderProgram') and ($attributeName='type')) or
                                (($nodeName='WorldInfo') and ($attributeName='info'))">
                        <xsl:text>initializeOnly</xsl:text>
                </xsl:when>
                <xsl:when test="(($nodeName='ConeEmitter') and ($attributeName='angle')) or
                                (($nodeName='GeoElevationGrid') and ($attributeName='yScale')) or
                                (($nodeName='GeoProximitySensor') and ($attributeName='size')) or
                                (($nodeName='HAnimDisplacer') and ($attributeName='coordIndex')) or
                                ( contains($nodeName,'Light') and ($attributeName='radius')) or
                                (($nodeName='LayerSet') and ($attributeName='order')) or
                                (($nodeName='NurbsPositionInterpolator') and ($attributeName='order')) or
                                (($nodeName='ProximitySensor' or $nodeName='VisibilitySensor') and ($attributeName='size')) or
                                ($attributeName='name') or
                                ($attributeName='type') or
                                ($attributeName='info')">
                        <xsl:text>inputOutput</xsl:text>
                </xsl:when>
                <xsl:when test="//xs:simpleType[@name='initializeOnlyAccessTypes']/xs:restriction/xs:enumeration[@value = $name]">
                    <xsl:text>initializeOnly</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>inputOutput</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="defaultParameterName">
            <xsl:choose>
                <xsl:when test="contains(@name,'ngle')">
                    <xsl:text>angle</xsl:text>
                </xsl:when>
                <xsl:when test="contains(@name,'olor')">
                    <xsl:text>color</xsl:text>
                </xsl:when>
                <xsl:when test="contains($type,'FTime')">
                    <xsl:text>timestamp</xsl:text>
                </xsl:when>
                <xsl:when test="contains($type,'FNode')">
                    <xsl:text>node</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>value</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:if test="starts-with($type,'MF')">
                <xsl:text>s</xsl:text>
            </xsl:if>
        </xsl:variable>
        
        <!-- output methods -->
        <xsl:if test="not($accessType='inputOnly')"> 
            <xsl:text>&#10;</xsl:text>
            <!-- Javadoc -->
            <xsl:variable name="javadocProse">
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/**</xsl:text>
                <xsl:text> Provide </xsl:text>
                <xsl:choose>
                    <xsl:when test="contains($javaType,'[]')">
                        <xsl:text>array of </xsl:text>
                        <xsl:value-of select="$tupleNess"/>
                        <xsl:value-of select="substring-before($javaType,'[]')"/>
                        <xsl:if test="$isEnumerationType">
                            <xsl:text> enumeration</xsl:text>
                        </xsl:if>
                        <xsl:text> results array </xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$tupleNess"/>
                        <xsl:value-of select="$javaType"/>
                        <xsl:if test="$isEnumerationType">
                            <xsl:text> enumeration</xsl:text>
                        </xsl:if>
                        <xsl:text> value </xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- value restrictions, if any -->
                <xsl:choose>
                    <xsl:when test="(@name='GeoOrigin') or (@name='geoOrigin')">
                        <xsl:text>(deprecated node, optional) </xsl:text>
                    </xsl:when>
                    <xsl:when test="$isEnumerationType">
                        <xsl:text>(</xsl:text>
                        <xsl:value-of select="$enumerationValues"/>
                        <xsl:text>) </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'RGBA')">
                        <xsl:text>using RGBA values [0..1] </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Color')">
                        <xsl:text>using RGB values [0..1] </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'otation') or contains(@name,'otation') or contains(@name,'angle') or contains(@name,'Angle')">
                        <xsl:text>in radians </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Time')">
                        <xsl:text>in seconds </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>(using a properly typed node or X3DPrototypeInstance) </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>(using a properly typed node array or X3DPrototypeInstance array) </xsl:text>
                    </xsl:when>
                </xsl:choose>
                <xsl:call-template name="list-restrictions"/>
                <xsl:text>from </xsl:text>
                <xsl:value-of select="$accessType"/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="$x3dType"/>
                <xsl:if test="not(starts-with($x3dType,'SF') or starts-with($x3dType,'MF'))">
                    <xsl:text> type</xsl:text>
                </xsl:if>
                <xsl:text> field named "</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>". */</xsl:text>
            </xsl:variable>
            <xsl:value-of select="$javadocProse"/>
            <xsl:text>&#10;</xsl:text>
            <!-- getter -->
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
                <xsl:text>@Deprecated </xsl:text>
            </xsl:if>
            <xsl:text>public </xsl:text>
            <xsl:choose>
                <xsl:when test="contains($type,'FVec') or contains($type,'FColor') or contains($type,'FNode')">
                    <xsl:text>void</xsl:text>
                    <xsl:text> </xsl:text>
                    <xsl:text>get</xsl:text>
                    <xsl:value-of select="$camelCaseName"/>
                    <xsl:text> (</xsl:text>
                    <xsl:choose>
                        <!-- restore basic javaType for SFNode/MFNode in case overridden by schema; a prototype instance might be returned -->
                        <xsl:when test="($type='SFNode')">
                            <xsl:text>X3DNode</xsl:text>
                        </xsl:when>
                        <xsl:when test="($type='MFNode')">
                            <xsl:text>X3DNode[]</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$javaType"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text> result</xsl:text>
                    <xsl:text>)</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$javaType"/>
                    <xsl:text> </xsl:text>
                    <xsl:text>get</xsl:text>
                    <xsl:value-of select="$camelCaseName"/>
                    <xsl:text> ()</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:if test="starts-with($type,'MF')">
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/**</xsl:text>
                <xsl:text> Provide number of </xsl:text>
                <xsl:value-of select="$tupleNess"/>
                <xsl:choose>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>nodes</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>primitive values</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> in "</xsl:text>
                <xsl:value-of select="$name"/>
                <xsl:text>" array </xsl:text>
                <xsl:text>*/</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>public int </xsl:text>
                <xsl:text>getNum</xsl:text>
                <xsl:value-of select="$camelCaseName"/>
                <xsl:text> ();</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
        </xsl:if>
        <!-- input methods -->
        <xsl:if test="not($accessType='outputOnly')">
            <xsl:text>&#10;</xsl:text>
            <!-- Javadoc -->
            <xsl:variable name="javadocProse">
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/**</xsl:text>
                <xsl:text> Assign </xsl:text>
                <xsl:value-of select="$tupleNess"/>
                <xsl:choose>
                    <xsl:when test="contains($javaType,'[]')">
                        <xsl:value-of select="substring-before($javaType,'[]')"/>
                        <xsl:if test="$isEnumerationType">
                            <xsl:text> enumeration</xsl:text>
                        </xsl:if>
                        <xsl:text> array </xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$javaType"/>
                        <xsl:if test="$isEnumerationType">
                            <xsl:text> enumeration</xsl:text>
                        </xsl:if>
                        <xsl:text> value </xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- value restrictions, if any -->
                <xsl:choose>
                    <xsl:when test="(@name='GeoOrigin') or (@name='geoOrigin')">
                        <xsl:text>(deprecated node, optional) </xsl:text>
                    </xsl:when>
                    <xsl:when test="$isEnumerationType">
                        <xsl:text>(</xsl:text>
                        <xsl:value-of select="$enumerationValues"/>
                        <xsl:text>) </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'RGBA')">
                        <xsl:text>using RGBA values [0..1] </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Color')">
                        <xsl:text>using RGB values [0..1] </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'otation') or contains(@name,'otation') or contains(@name,'angle') or contains(@name,'Angle')">
                        <xsl:text>in radians </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Time')">
                        <xsl:text>in seconds </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>(using a properly typed node) </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>(using a properly typed node array) </xsl:text>
                    </xsl:when>
                </xsl:choose>
				<xsl:call-template name="list-restrictions"/>
                <xsl:text>to </xsl:text>
                <xsl:value-of select="$accessType"/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="$x3dType"/>
                <xsl:if test="not(starts-with($x3dType,'SF') or starts-with($x3dType,'MF'))">
                    <xsl:text> type</xsl:text>
                </xsl:if>
                <xsl:text> field named "</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>". */</xsl:text>
            </xsl:variable>
            <xsl:value-of select="$javadocProse"/>
            <xsl:text>&#10;</xsl:text>
            <!-- setter -->
            <xsl:text>&#160;&#160;</xsl:text>
            <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
                <xsl:text>@Deprecated </xsl:text>
            </xsl:if>
            <xsl:text>public void </xsl:text>
            <xsl:choose>
                <xsl:when test="(@name='addChildren') or (@name='removeChildren')">
                    <xsl:value-of select="@name"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>set</xsl:text>
                    <xsl:value-of select="$camelCaseName"/>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text> (</xsl:text>
            <xsl:choose>
                <xsl:when test="contains($javaType,'|') and (@type='SFNode')">
                    <xsl:text>X3DNode</xsl:text>
                </xsl:when>
                <xsl:when test="contains($javaType,'|') and (@type='MFNode')">
                    <xsl:text>X3DNode[]</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$javaType"/>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text> </xsl:text>
            <xsl:value-of select="$defaultParameterName"/>
            <xsl:text>)</xsl:text>
            <xsl:call-template name="java-restrictions"/>
            <xsl:text>&#10;</xsl:text>
            <!-- add custom method for ProtoInstance if default node type used.  don't do this for MFNode array since it can already be a mix of typed and ProtoInstance nodes. -->
            <xsl:if test="(@type='SFNode') and not((@name='addChildren') or (@name='removeChildren')) and (string-length(@default) > 0)">
                <xsl:text>&#10;</xsl:text>
                <xsl:value-of select="substring-before($javadocProse,' node')"/>
                <xsl:text> protoInstance) */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <!-- alternate setter -->
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
                    <xsl:text>@Deprecated </xsl:text>
                </xsl:if>
                <xsl:text>public void </xsl:text>
                <xsl:text>set</xsl:text>
                <xsl:value-of select="$camelCaseName"/>
                <xsl:text> (X3DPrototypeInstance protoInstance) throws InvalidFieldValueException;</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
                
            <xsl:if test="starts-with(@type,'MF') and not(contains(@type,'Matrix')) and not(contains(@type,'Color')) and not(contains(@type,'Rotation')) and not(contains(@type,'Vec'))">
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:text>/** Assign single </xsl:text>
                <xsl:value-of select="$javaSingletonType"/>
                <xsl:text> value </xsl:text>
                <!-- value restrictions, if any -->
                <xsl:choose>
                    <xsl:when test="(@name='GeoOrigin') or (@name='geoOrigin')">
                        <xsl:text>(deprecated node, optional) </xsl:text>
                    </xsl:when>
                    <xsl:when test="$isEnumerationType">
                        <xsl:text>(</xsl:text>
                        <xsl:value-of select="$enumerationValues"/>
                        <xsl:text>) </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'RGBA')">
                        <xsl:text>using RGBA values [0..1] </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Color')">
                        <xsl:text>using RGB values [0..1] </xsl:text>
                    </xsl:when>
                        <xsl:when test="contains($type,'otation') or contains(@name,'otation') or contains(@name,'angle') or contains(@name,'Angle')">
                        <xsl:text>in radians </xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($type,'Time')">
                        <xsl:text>in seconds </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='SFNode')">
                        <xsl:text>(using a properly typed node) </xsl:text>
                    </xsl:when>
                    <xsl:when test="($type='MFNode')">
                        <xsl:text>(using a properly typed node) </xsl:text>
                    </xsl:when>
                </xsl:choose>
				<xsl:call-template name="list-restrictions"/>
                <xsl:text>as the </xsl:text>
                <xsl:value-of select="@type"/>
                <xsl:text> array for </xsl:text>
                <xsl:value-of select="$accessType"/>
                <xsl:text> field named "</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>" */</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>&#160;&#160;</xsl:text>
                <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
                    <xsl:text>@Deprecated </xsl:text>
                </xsl:if>
                <xsl:text>public void </xsl:text>
                <xsl:choose>
                    <xsl:when test="(@name='addChildren') or (@name='removeChildren')">
                        <xsl:value-of select="@name"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>set</xsl:text>
                        <xsl:value-of select="$camelCaseName"/>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> (</xsl:text>
                <xsl:choose>
                    <xsl:when test="contains($javaType,'|')">
                        <xsl:text>X3DNode</xsl:text>
                    </xsl:when>
                    <xsl:when test="contains($javaType,'[]')">
                        <xsl:value-of select="$javaSingletonType"/>
                    </xsl:when>
                    <xsl:when test="starts-with($javaType,'MF')">
                        <xsl:value-of select="$javaSingletonType"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$javaType"/>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> </xsl:text>
                <!-- singular -->
                <xsl:value-of select="substring($defaultParameterName,1,string-length($defaultParameterName)-1)"/>
                <xsl:text>)</xsl:text>
                <xsl:call-template name="java-restrictions"/>
                <xsl:text>&#10;</xsl:text>
                <xsl:if test="contains(@type,'FNode')">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:choose>
                        <xsl:when test="contains($javadocProse,' nodes')">
                            <xsl:value-of select="substring-before($javadocProse,' nodes')"/>
                            <xsl:text> protoInstance</xsl:text>
                            <xsl:value-of select="substring-after($javadocProse,' nodes')"/>
                        </xsl:when>
                        <xsl:when test="contains($javadocProse,' node')">
                            <xsl:value-of select="substring-before($javadocProse,' node')"/>
                            <xsl:text> protoInstance</xsl:text>
                            <xsl:value-of select="substring-after($javadocProse,' node')"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$javadocProse"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>&#160;&#160;</xsl:text>
                    <xsl:if test="(@name='GeoOrigin') or (@name='geoOrigin')">
                        <xsl:text>@Deprecated </xsl:text>
                    </xsl:if>
                    <xsl:text>public void </xsl:text>
                    <xsl:choose>
                        <xsl:when test="(@name='addChildren') or (@name='removeChildren')">
                            <xsl:value-of select="@name"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>set</xsl:text>
                            <xsl:value-of select="$camelCaseName"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text> (X3DPrototypeInstance </xsl:text>
                    <!-- singular -->
                    <xsl:value-of select="substring($defaultParameterName,1,string-length($defaultParameterName)-1)"/>
                    <xsl:text>)</xsl:text>
                    <xsl:call-template name="java-restrictions"/>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                <xsl:if test="(@type = 'MFNode') and not(contains($javaType,'|'))">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:choose>
                        <xsl:when test="contains($javadocProse,' nodes')">
                            <xsl:value-of select="substring-before($javadocProse,' nodes')"/>
                            <xsl:text> nodes</xsl:text>
                            <xsl:value-of select="substring-after($javadocProse,' nodes')"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$javadocProse"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>&#160;&#160;</xsl:text>
                    <xsl:text>public void </xsl:text>
                    <xsl:choose>
                        <xsl:when test="(@name='addChildren') or (@name='removeChildren')">
                            <xsl:value-of select="@name"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>set</xsl:text>
                            <xsl:value-of select="$camelCaseName"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text> (X3DNode[] </xsl:text>
                    <!-- singular -->
                    <xsl:value-of select="$defaultParameterName"/>
                    <xsl:text>)</xsl:text>
                    <xsl:call-template name="java-restrictions"/>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
            </xsl:if>
        </xsl:if>
            
</xsl:template>

<!-- ****************** schema-appinfo-warnings ****************** -->

<xsl:template name="schema-appinfo-warnings">
    <!-- check type OK for attributes -->
    <xsl:for-each select="//*[(local-name='xs:complexType') or (local-name='xs:element')]/xs:annotation/xs:appinfo/xs:attribute[(@type='SFNode') or (@type='MFNode')]">
        <xsl:message>
            <xsl:text>*** Schema annotation error: X3D node type with appinfo/attribute instead of appinfo/element. </xsl:text>
            <xsl:choose>
                <xsl:when test='ancestor::xs:complexType'>
                    <xsl:text>[xs:complexType name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:complexType/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
                <xsl:when test='ancestor::xs:element'>
                    <xsl:text>[xs:element name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:element/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text>[xs:attribute name="</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>" type="</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>"]</xsl:text>
        </xsl:message>
    </xsl:for-each>
    
    <!-- check type OK for elements -->
    <xsl:for-each select="//xs:annotation/xs:appinfo/xs:element[not((@type='SFNode') or (@type='MFNode'))]">
        <xsl:message>
            <xsl:text>*** Schema annotation error: X3D field type with appinfo/element instead of appinfo/attribute. </xsl:text>
            <xsl:choose>
                <xsl:when test='ancestor::xs:complexType'>
                    <xsl:text>[xs:complexType name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:complexType/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
                <xsl:when test='ancestor::xs:element'>
                    <xsl:text>[xs:element name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:element/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text>[xs:element name="</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>" type="</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>"]</xsl:text>
        </xsl:message>
    </xsl:for-each>
    
    <!-- check default OK for inputOnly and outputOnly elements -->
    <xsl:for-each select="//xs:annotation/xs:appinfo/xs:element[string-length(@default) = 0]">
        <xsl:message>
            <xsl:text>*** Schema annotation error: X3D appinfo/element has no default value. </xsl:text>
            <xsl:choose>
                <xsl:when test='ancestor::xs:complexType'>
                    <xsl:text>[xs:complexType name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:complexType/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
                <xsl:when test='ancestor::xs:element'>
                    <xsl:text>[xs:element name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:element/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text>[xs:element name="</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>" type="</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>" accessType fixed="</xsl:text>
            <xsl:value-of select="@fixed"/>
            <xsl:text>" default="</xsl:text>
            <xsl:value-of select="@default"/>
            <xsl:text>"]</xsl:text>
        </xsl:message>
    </xsl:for-each>
    
    <!-- inheritance test #1: check elements derive from node type interface and not abstract objects; ignore special cases -->
    <xsl:for-each select="//xs:element[string-length(@name) > 0]/xs:complexType/xs:complexContent/
                          *[not(starts-with(@base,'X3D') and ends-with(@base,'Node')) and 
                            not(@base='SceneGraphStructureStatement') and not(@base='X3DStatement') and not(@base='X3DMetadataObject') and not(@base='X3DPrototype') and not(@base='X3DNodeMixedContent')]">
        <xsl:if test="not(ancestor::xs:element/xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface' and starts-with(@default,'X3D') and ends-with(@default,'Node')])
                      ">
            <xsl:message>
                <xsl:text>*** Schema error: element type not derived from X3D*Node interface. </xsl:text>
                <xsl:text>[xs:element name="</xsl:text>
                <xsl:value-of select="ancestor::xs:element/@name"/>
                <xsl:text>"]/xs:complexType/xs:complexContent/[xs:</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> base="</xsl:text>
                <xsl:value-of select="@base"/>
                <xsl:text>"]</xsl:text>
            </xsl:message>
        </xsl:if>
    </xsl:for-each>
    
    <!-- inheritance test #2: check elements derive from node type interface and not abstract objects -->
    <xsl:for-each select="//xs:element[string-length(@name) > 0]/xs:complexType[count(xs:complexContent) = 0]">
        <xsl:if test="not(ancestor::xs:element/xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface' and starts-with(@default,'X3D') and ends-with(@default,'Node')])">
            <xsl:message>
                <xsl:text>*** Schema error: element type not derived from X3D*Node interface using complexType/complexContent </xsl:text>
                <xsl:text>[xs:element name="</xsl:text>
                <xsl:value-of select="../@name"/>
                <xsl:text>"]</xsl:text>
            </xsl:message>
        </xsl:if>
    </xsl:for-each>
    
    <!-- check @fixed OK for accessType -->
    <xsl:for-each select="//xs:annotation/xs:appinfo/xs:element  [not((@fixed='initializeOnlyField') or (@fixed='inputOnlyField') or (@fixed='outputOnlyField') or (@fixed='inputOutputField'))] | 
                          //xs:annotation/xs:appinfo/xs:attribute[not((@fixed='initializeOnlyField') or (@fixed='inputOnlyField') or (@fixed='outputOnlyField') or (@fixed='inputOutputField'))][not(@name='additionalInterface') and not(@name='componentName') and not(@name='componentLevel')] | 
                          //xs:annotation/xs:appinfo/xs:attribute[starts-with(@name,'set_')     and not(@fixed='inputOnlyField')] |
                          //xs:annotation/xs:appinfo/xs:attribute[  ends-with(@name,'_changed') and not(@fixed='outputOnlyField')]">
		<xsl:choose>
			<xsl:when test="(local-name() = 'element') and (string-length(@fixed) = 0)">
				<!-- element annotation @fixed="" is not used -->
			</xsl:when>
			<xsl:when test="(local-name() = 'attribute') and (string-length(@fixed) = 0)">
				<!-- attribute annotation @fixed="" means that given enumerations are optional and other values may be provided by author -->
			</xsl:when>
			<xsl:when test="count(ancestor::*[(name()='xs:enumeration')]) = 0">
			  <xsl:message>
				<xsl:text>*** Schema info: </xsl:text>
				<xsl:choose>
					<xsl:when test='ancestor::xs:complexType'>
						<xsl:text>[xs:complexType name="</xsl:text>
						<xsl:value-of select="ancestor::xs:complexType/@name"/>
						<xsl:text>"] </xsl:text>
					</xsl:when>
					<xsl:when test='ancestor::xs:element'>
						<xsl:text>[xs:element name="</xsl:text>
						<xsl:value-of select="ancestor::xs:element/@name"/>
						<xsl:text>"] </xsl:text>
					</xsl:when>
				</xsl:choose>
				<xsl:text>annotation appinfo [</xsl:text>
				<xsl:value-of select="local-name()"/>
				<xsl:text> name="</xsl:text>
				<xsl:value-of select="@name"/>
				<xsl:text>" fixed="</xsl:text>
				<xsl:value-of select="@fixed"/>
				<xsl:text>"]</xsl:text>
			  </xsl:message>
			</xsl:when>
		</xsl:choose>
    </xsl:for-each>
    
    <!-- check that enumerations of field names have a corresponding field attribute defined -->
    <xsl:for-each select="//xs:simpleType[ends-with(@name,'AccessTypes')]/xs:restriction/xs:enumeration">
        <xsl:variable name="enumerationName"  select="@value"/>
        <xsl:if test="not(//xs:attribute[@name = $enumerationName]) and not(//xs:element[@name = $enumerationName])">
            <xsl:message>
                <xsl:text>*** Schema definition error: field name enumerations need matching attribute or element </xsl:text>
                <xsl:text>[xs:simpleType @name="</xsl:text>
                <xsl:value-of select="../../@name"/>
                <xsl:text>", xs:enumeration name="</xsl:text>
                <xsl:value-of select="$enumerationName"/>
                <xsl:text>"]</xsl:text>
            </xsl:message>
        </xsl:if>
    </xsl:for-each>
    
    <!-- check that MFString default values (if provided) are quoted -->
    <xsl:for-each select="//xs:attribute[(@type = 'MFString') and (string-length(@default) > 0) and not(contains(@default,'&quot;'))]">
        <xsl:message>
            <xsl:text>*** Schema definition error: MFString attribute values need to be quoted </xsl:text>
            <xsl:choose>
                <xsl:when test='ancestor::xs:complexType'>
                    <xsl:text>[xs:complexType name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:complexType/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
                <xsl:when test='ancestor::xs:element'>
                    <xsl:text>[xs:element name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:element/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text>[xs:attribute name="</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>" type="</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>" default="</xsl:text>
            <xsl:value-of select="@default"/>
            <xsl:text>"]</xsl:text>
        </xsl:message>
    </xsl:for-each>
    
    <!-- check annotations not missing intermediate appinfo for element definitions -->
    <xsl:for-each select="//xs:element[contains(@default,',') or contains(@default,'[') or contains(@default,']')]">
        <xsl:message>
            <xsl:text>*** Schema annotation error: multiple X3D element defaults </xsl:text>
            <xsl:if test="contains(@default,',')">
                <xsl:text>are separated by | rather than comma characters </xsl:text>
            </xsl:if>
            <xsl:if test="contains(@default,'[') or contains(@default,']')">
                <xsl:text>- avoid use of [square brackets] for node sets </xsl:text>
            </xsl:if>
            <xsl:text>&#10;    </xsl:text>
            <xsl:choose>
                <xsl:when test='ancestor::xs:complexType'>
                    <xsl:text>[xs:complexType name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:complexType/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
                <xsl:when test='ancestor::xs:element'>
                    <xsl:text>[xs:element name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:element/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text>[</xsl:text>
            <xsl:if test="ancestor::xs:appinfo">
                <xsl:text>xs:annotation/xs:appinfo/</xsl:text>
            </xsl:if>
            <xsl:text>xs:element name="</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>" type="</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>" fixed="</xsl:text>
            <xsl:value-of select="@fixed"/>
            <xsl:text>" default="</xsl:text>
            <xsl:value-of select="@default"/>
            <xsl:text>"]</xsl:text>
            <xsl:text>&#10;</xsl:text>
        </xsl:message>
    </xsl:for-each>
    
    <!-- check annotations not missing intermediate appinfo for element definitions -->
    <xsl:for-each select="//xs:annotation/xs:element">
        <xsl:message>
            <xsl:text>*** Schema annotation error: X3D node type with annotation/element instead of annotation/appinfo/element. </xsl:text>
            <xsl:choose>
                <xsl:when test='ancestor::xs:complexType'>
                    <xsl:text>[xs:complexType name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:complexType/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
                <xsl:when test='ancestor::xs:element'>
                    <xsl:text>[xs:element name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:element/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text>[xs:element name="</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>" type="</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>" fixed="</xsl:text>
            <xsl:value-of select="@fixed"/>
            <xsl:text>"]</xsl:text>
        </xsl:message>
    </xsl:for-each>
    
    <!-- check annotations not missing intermediate appinfo for attribute definitions -->
    <xsl:for-each select="//xs:annotation/xs:attribute">
        <xsl:message>
            <xsl:text>*** Schema annotation error: X3D node type with annotation/attribute instead of annotation/appinfo/attribute. </xsl:text>
            <xsl:choose>
                <xsl:when test='ancestor::xs:complexType'>
                    <xsl:text>[xs:complexType name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:complexType/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
                <xsl:when test='ancestor::xs:element'>
                    <xsl:text>[xs:element name="</xsl:text>
                    <xsl:value-of select="ancestor::xs:element/@name"/>
                    <xsl:text>"] </xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text>[xs:attribute name="</xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text>" type="</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>" fixed="</xsl:text>
            <xsl:value-of select="@fixed"/>
            <xsl:text>"]</xsl:text>
        </xsl:message>
    </xsl:for-each>
    
    <!-- TODO confirm field lists consistent for each specification version -->
    
    <!-- TODO check duplicates -->
            
</xsl:template>

<!-- ****************** catch-all ****************** -->

<xsl:template match="*">

<xsl:text>&#10;/* catch-all template:  </xsl:text>
<xsl:value-of select="local-name ()"/>
<xsl:text> */&#10;</xsl:text>

	<xsl:apply-templates/>

</xsl:template>


</xsl:stylesheet>

