<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.1"
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
	xmlns:date="http://exslt.org/dates-and-times"
	xmlns:saxon="http://icl.com/saxon"
	saxon:trace="true"
	extension-element-prefixes="saxon">
  <xsl:param name="tooltipLanguage"/>
  <xsl:param name="version"><xsl:text>3.1</xsl:text></xsl:param>

<!-- Warning: this version is no longer in use, see tooltips project for latest version. -->

<!--
Copyright (c) 2001-2014 held by the author(s).  All rights reserved.

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
   <meta name="filename"    content="X3dToolTipConversions.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="15 April 2002" />
   <meta name="revised"     content="6 May 2006" />
   <meta name="description" content="XSL stylesheet to build the X3D Tooltips (originally used for SIGGRAPH Online pages).  Additional HTML improvements by Juan Gril and Jeff Weekley." />
   <meta name="url"         content="http://www.web3d.org/x3d/content/X3dToolTipConversions.xslt" />
  </head>

Recommended tools:
-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
   Especially necessary since this stylesheet uses saxon-specific extensions for file handling
-  XML Spy can be configured to use latest Saxon.  See README.txt in this directory.

Invocation:
-  cd   C:\www.web3d.org\x3d\content
   make tooltips
   (or)
   saxon -t -o X3dToolTips.html 	x3d-3.1.profile.xml X3dTooltipConversions.xslt
-->
	<xsl:strip-space elements="*"/>
	<xsl:output method="html" encoding="utf-8" media-type="text/html" indent="yes"/>
	
	<xsl:variable name="pageName">
		<xsl:text>X3dTooltips</xsl:text>
		<xsl:if test="$tooltipLanguage">
			<xsl:value-of select="$tooltipLanguage"/>
		</xsl:if>
		<xsl:text>.html</xsl:text>
	</xsl:variable>
	
	<xsl:variable name="todaysDate">
		<xsl:value-of select="date:day-in-month()"/>
		<xsl:text> </xsl:text>
		<xsl:value-of select="date:month-name()"/>
		<xsl:text> </xsl:text>
	</xsl:variable>
	
	<!-- ****** root:  start of file ****************************************************** -->
	<xsl:template match="/">
		<xsl:message>
			<xsl:text>Processsing X3D ToolTips</xsl:text>
			<xsl:if test="$tooltipLanguage">
				<xsl:text> in </xsl:text>
				<xsl:value-of select="$tooltipLanguage"/>
			</xsl:if>
			<xsl:text> ...</xsl:text>
		</xsl:message>
<xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">

]]></xsl:text>
		<!-- first pass through entire tooltip file generates the output HTML files. -->
		<xsl:apply-templates/>
		<xsl:message>X3D ToolTip help-page generation complete.</xsl:message>
		<!-- perform other versions and schema next -->

	</xsl:template>

	<!-- ****** DTDProfile: topmost element****************************************************** -->
	<xsl:template match="DTDProfile">

		<html>
			<head>
				<title>
					<xsl:text> X3D Tooltips </xsl:text>
							<xsl:choose>								
								<xsl:when test="$tooltipLanguage='Chinese'">
				              				<!--m17 add here for Chinese-->	
									<xsl:text> 中文版 </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='French'">
									<xsl:text> en Fran&#231;ais </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='German'">
									<xsl:text> auf Deutsch </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Italian'">
									<xsl:text> in Italiano </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Portuguese'">
									<xsl:text> em Portugu&#234;s </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Spanish'">
									<xsl:text> en Español </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage">
									<xsl:text> in </xsl:text>
									<xsl:value-of select="$tooltipLanguage"/>
								</xsl:when>
							</xsl:choose>
				</title>
				<link rel="shortcut icon" href="images/X3DtextIcon16.png" title="X3D" /> 
			</head>
			<!-- #000080 = navy -->
			<!--  marginheight="10" marginwidth="10" topmargin="10" leftmargin="0" -->
			<body bgcolor="#99cccc" link="navy" vlink="#447777" alink="#447777" style="margin: 10px">

					<h1 align="center">
						<xsl:element name="a">
							<xsl:attribute name="name">
								<xsl:text>top</xsl:text>
							</xsl:attribute>
							<xsl:text>&#10;</xsl:text>
							<xsl:text>Extensible&#160;3D&#160;(X3D) Tooltips</xsl:text>
							<xsl:choose>
								<!--m17 add here for Chinese-->
								<xsl:when test="$tooltipLanguage='Chinese'">
									<xsl:text> 中文版 </xsl:text>
								</xsl:when>								
								<xsl:when test="$tooltipLanguage='French'">
									<xsl:text> en&#160;Fran&#231;ais </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='German'">
									<xsl:text> auf Deutsch </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Italian'">
									<xsl:text> in Italiano </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Portuguese'">
									<xsl:text> Em&#160;Portugu&#234;s </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Spanish'">
									<xsl:text> en&#160;Español </xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='English'">
									<!-- no output -->
								</xsl:when>
								<xsl:when test="$tooltipLanguage">
									<xsl:text> in </xsl:text>
									<xsl:value-of select="$tooltipLanguage"/>
								</xsl:when>
							</xsl:choose>
						</xsl:element>
					</h1>
					<xsl:text>&#10;</xsl:text>

					<!-- introduction paragraph -->
					<table width="75%" summary="" align="center" border="0" cellspacing="0" cellpadding="6">
						<tr>
							<td>
	
							<!-- translations go here -->
							<xsl:choose>
								<!--m17 add here for Chinese-->
								<xsl:when test="$tooltipLanguage='Chinese'">
									<xsl:text>此工具提示提供了每个X3D节点(元素)和域(属性)的描述和创作技巧，也为 
									</xsl:text>
										<a href="README.X3D-Edit.html" target="_blank">X3D-Edit 创作工具</a>
									<xsl:text>提供了上下文敏感的支持，此工具提示也将整合到将来的
									</xsl:text>
										<a href="x3d-{$version}.xsd" target="_blank">X3D Schema</a>
									<xsl:text> 中。&#10;</xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='French'">
									<xsl:text>Ces tooltips fournissent des descriptions r&#232;capitulatives pour
									chaque noeud (&#232;l&#232;ment) et chaque zone (attribut) X3D. Ils fournissent un
									support pour le
									</xsl:text>
										<a href="README.X3D-Edit.html" target="_blank">authoring tool de X3D-Edit</a>
									<xsl:text>									
									et seront int&#232;gr&#232;s dans le prochain
									</xsl:text>
										<a href="x3d-{$version}.xsd" target="_blank">sch&#232;ma de X3D</a>
									<xsl:text>.</xsl:text>
									<xsl:text>&#10;</xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='German'">
									<xsl:text>F&#252;r alle X3D-Knoten (Elemente) und deren Felder (Attribute) existieren Tooltips mit kurzen Beschreibungen und
									Hinweisen f&#252;r Szenenautoren. Diese dienen als kontextsensitive Hilfe f&#252;r das
									</xsl:text>
										<a href="README.X3D-Edit.html" target="_blank">Autorenwerkzeug X3D-Edit</a>
									<xsl:text>									
									und werden auch im k&#252;nftigen 
									</xsl:text>
										<a href="x3d-{$version}.xsd" target="_blank">X3D Schema</a>
									<xsl:text> integriert sein.</xsl:text>
									<xsl:text>&#10;</xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Italian'">
									<xsl:text>Questi commenti forniscono delle descrizioni riassuntive e dei consigli
									utili per ogni nodo (elemento) e campo (attributo) di X3D. Essi
									forniscono supporto dipendente dal contesto per lo strumento di sviluppo 
									</xsl:text>
										<a href="README.X3D-Edit.html" target="_blank">X3D-Edit</a>
									<xsl:text> e saranno integrati nel futuro 
									</xsl:text>
										<a href="x3d-{$version}.xsd" target="_blank">Schema X3D</a>
									<xsl:text>.&#10;</xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Portuguese'">
									<xsl:text>Estas dicas de ferramentas (tooltips) fornecem uma descri&#231;&#227;o
									resumida e dicas de uso para cada n&#243; X3D (elemento) e campo (atributo).
									Elas fornecem ajuda sens&#237;vel ao contexto para a ferramenta de edi&#231;&#227;o
									</xsl:text>
										<a href="README.X3D-Edit.html" target="_blank">X3D-Edit</a>
									<xsl:text>
									e ser&#225; integrada com o
									</xsl:text>
										<a href="x3d-{$version}.xsd" target="_blank">X3D Schema</a>
									<xsl:text>
									que esta para surgir.&#10;</xsl:text>
								</xsl:when>
								<xsl:when test="$tooltipLanguage='Spanish'">
									<xsl:text>Estas notas de ayuda proporcionan descripciones resumidas y sugerencias de
									autor&#237;a para cada nodo (elemento) X3D y campo (atributo). Proporcionan
									ayuda contextual en la herramienta de autor 
									</xsl:text>
										<a href="README.X3D-Edit.html" target="_blank">X3D-Edit</a>
									<xsl:text> y se integrar&#225;n en el pr&#243;ximo 
									</xsl:text>
										<a href="x3d-{$version}.xsd" target="_blank">X3D Schema</a>
									<xsl:text>.&#10;</xsl:text>
								</xsl:when>
 
								<xsl:otherwise>
									<xsl:text>
										These tooltips provide summary descriptions and authoring hints for each
										X3D node (element) and field (attribute).
										They provide context-sensitive support for the
									</xsl:text>
										<a href="README.X3D-Edit.html" target="_blank">X3D-Edit authoring tool</a>
									<xsl:text> and will be integrated with the
									</xsl:text>
										<a href="x3d-{$version}.xsd" target="_blank">X3D Schema</a>
									<xsl:text>.&#10;</xsl:text>
								</xsl:otherwise>
							</xsl:choose>
	
							</td>
						</tr>
					</table>

				<xsl:apply-templates/>
			
			</body>
		</html>
			
	</xsl:template>


	<!-- ****** "elements" element****************************************************** -->
	<xsl:template match="elements">
	
		<!-- table of contents index, which would be better as a sorted column -->

		<blockquote>
			<xsl:text>&#10;</xsl:text>
			<xsl:for-each select="element[not(starts-with(@name,'XML_')) and not(@name='USE')]">
				<xsl:sort select="@name" order="ascending"/>
				<font size="-1">
					<xsl:element name="a">
						<xsl:attribute name="href">
							<xsl:text>#</xsl:text>
							<xsl:value-of select="@name"/>
						</xsl:attribute>
						<xsl:value-of select="@name"/>
					</xsl:element>
				</font>
				<xsl:text>&#160;&#160;&#10;</xsl:text>
				<!-- &#160; = &nbsp; -->
			</xsl:for-each>
		</blockquote>
		<xsl:text>&#10;&#10;</xsl:text>


		<!-- Detailed table containing names and tooltips for elements, attributes -->
		
		<blockquote>
		<!-- width="900" -->
		<table summary="" align="center" width="98%" border="1" cellspacing="0" cellpadding="1">

			<xsl:apply-templates select="element[not(starts-with(@name,'XML_'))]">
			   <xsl:sort select="@name" order="ascending"/>
			</xsl:apply-templates>

		</table>
		<xsl:text>&#10;&#10;</xsl:text>

		<!-- Summary information table  -->
						
		<xsl:element name="a">
			<xsl:attribute name="name">
				<xsl:text>credits</xsl:text>
			</xsl:attribute>
			<xsl:text>&#160;</xsl:text>
		</xsl:element>
		<xsl:text>&#10;</xsl:text>
		<table summary="" width="95%" align="center" border="0" cellspacing="0" cellpadding="1">


			<tr>
				<td colspan="3">
					<h3>
						<xsl:text>Credits</xsl:text>
					</h3>
					<xsl:text>Many thanks to our contributors and translators.</xsl:text>
				
			 		<ul>
						<li>	<b><a href="X3dTooltipsChinese.html">Chinese tooltips</a></b>
							<xsl:text>:  </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:m17design@hotmail.com(yiqi%20meng)?subject=X3D%20tooltips%20translation%20feedback%20">yiqi meng</a>
							<xsl:text> of </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="http://m17design.myetang.com/x3d" target="blank"> Nanjing Art Institute</a>
							<xsl:text>, Nanjing China.</xsl:text>
						</li>
						<li>	<b><a href="X3dTooltips.html">English tooltips</a></b>
							<xsl:text> (primary tooltips document):  </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:brutzman@nps.edu(Don%20Brutzman)?subject=X3D%20tooltips%20translation%20feedback%20">Don Brutzman</a>
							<xsl:text>&#10;</xsl:text>
							<xsl:text> and students of the U.S. </xsl:text>
							<a href="http://www.nps.navy.mil" target="blank">Naval Postgraduate School (NPS)</a>
							<xsl:text>, Monterey California USA.</xsl:text>
						</li>
						<li>	<b><a href="X3dTooltipsFrench.html">French tooltips</a></b>
							<xsl:text>:  </xsl:text>
							<xsl:text>&#10;</xsl:text>
							Antony Beis,
							<a href="mailto:froussille@yahoo.com(Frederic%20Roussille)?subject=X3D%20tooltips%20translation%20feedback%20">Frederic Roussille</a>, 
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:Adrien.GRUNEISEN@wanadoo.fr(Adrien%20Gruneisen)?subject=X3D%20tooltips%20translation%20feedback%20">Adrien Gruneisen</a>
							et
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:nasayann@netcourrier.com(Yann%20Henriet)?subject=X3D%20tooltips%20translation%20feedback%20">Yann Henriet</a>
							<br />
							<xsl:text>of </xsl:text>
							<a href="http://www.enit.fr" target="blank">Ecole Nationale des Ingenieurs de Tarbes (ENIT)</a>
							<xsl:text>, Tarbes France.</xsl:text>
						</li>
						<li>	<b><a href="X3dTooltipsGerman.html">German tooltips</a></b>
							<xsl:text>:  </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:dachselt@inf.tu-dresden.de(Raimund%20Dachselt)?subject=X3D%20tooltips%20translation%20feedback%20">Raimund Dachselt</a>
							<xsl:text>&#10;</xsl:text>
							<xsl:text> and </xsl:text>
							<a href="mailto:johnnyri@web.de(Johannes%20Richter)?subject=X3D%20tooltips%20translation%20feedback%20">Johannes Richter</a>
							<xsl:text>&#10;</xsl:text>
							<xsl:text> of the </xsl:text>
							<a href="http://www-mmt.inf.tu-dresden.de" target="blank">Multimedia Technology Group</a>
							<xsl:text>, </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="http://www.tu-dresden.de" target="blank">Dresden University of Technology</a>
							<xsl:text>, Germany.</xsl:text>
						</li>
						<li>	<b><a href="X3dTooltipsItalian.html">Italian tooltips</a></b>
							<xsl:text>:  </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:ranon@dimi.uniud.it(Roberto%20Ranon)?subject=X3D%20tooltips%20translation%20feedback%20">Roberto Ranon</a>
							<xsl:text>&#10;</xsl:text>
							<xsl:text> of the </xsl:text>
							<a href="http://www.uniud.it" target="blank">L'Universita degli Studi di Udine</a>
							<xsl:text>, Italy.</xsl:text>
						</li>
						<li>	<b><a href="X3dTooltipsPortuguese.html">Portuguese tooltips</a></b>
							<xsl:text>:  </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:lsoares@lsi.usp.br(Luciano%20Pereira%20Soares)?subject=X3D%20tooltips%20translation%20feedback%20">Luciano Pereira Soares</a>
							<xsl:text>&#10;</xsl:text>
							<xsl:text> of the </xsl:text>
							<a href="http://www.lsi.usp.br" target="blank">Laborat&#211;rio de Sistemas Integr&#225;veis, Escola Polit&#233;cnica - Universidade de S&#227;o Paulo</a>
							<xsl:text>, Brasil.</xsl:text>
						</li>
						<li>	<b><a href="X3dTooltipsSpanish.html">Spanish tooltips</a></b>
							<xsl:text>:  </xsl:text>
							<xsl:text>&#10;</xsl:text>
							<a href="mailto:gmunoz@escet.urjc.es(Guadalupe%20Munoz%20Martin)?subject=X3D%20tooltips%20translation%20feedback%20">Guadalupe Munoz Martin</a>
							<xsl:text>&#10;</xsl:text>
							<xsl:text> of </xsl:text>
							<a href="http://www.urjc.es" target="blank">University Rey Juan Carlos</a>
							<xsl:text>, Madrid Espana.</xsl:text>
						</li>
					</ul>
				</td>
			</tr>
			
		<!-- 	<tr>
				<td colspan="3">
						<xsl:text>&#160;</xsl:text>
				</td>
			</tr>
		 -->	
			<tr>
				<td align="left">
					<xsl:text>URL for this file: </xsl:text>
					<xsl:element name="a">
						<xsl:attribute name="href">
							<xsl:text>http://www.web3d.org/x3d/content/X3dTooltips</xsl:text>
							<xsl:if test="$tooltipLanguage">
								<xsl:value-of select="$tooltipLanguage"/>
							</xsl:if>
							<xsl:text>.html</xsl:text>
						</xsl:attribute>
							<xsl:text>http://www.web3d.org/x3d/content/X3dTooltips</xsl:text>
							<xsl:if test="$tooltipLanguage">
								<xsl:value-of select="$tooltipLanguage"/>
							</xsl:if>
							<xsl:text>.html</xsl:text>
					</xsl:element>
				</td>
				<td>
					<xsl:text>&#160;</xsl:text>
					<!-- &#160; = &nbsp; -->
				</td>
				<td align="right">
					<xsl:element name="a">
						<xsl:attribute name="href">
							<xsl:text>x3d-</xsl:text>
							<xsl:value-of select="$version"/>
							<xsl:text>.dtd</xsl:text>
						</xsl:attribute>
							<xsl:text>x3d-</xsl:text>
							<xsl:value-of select="$version"/>
							<xsl:text>.dtd</xsl:text>
					</xsl:element>
					<br />
					<xsl:element name="a">
						<xsl:attribute name="href">
							<xsl:text>x3d-</xsl:text>
							<xsl:value-of select="$version"/>
							<xsl:text>-InputOutputFields.dtd</xsl:text>
						</xsl:attribute>
							<xsl:text>x3d-</xsl:text>
							<xsl:value-of select="$version"/>
							<xsl:text>-InputOutputFields.dtd</xsl:text>
					</xsl:element>
				</td>
			</tr>

			<tr>
				<td align="left">
					<xsl:text>X3D Tooltips Conversion Stylesheet: </xsl:text>
					<xsl:element name="a">
						<xsl:attribute name="href">
							<xsl:text>X3dTooltipConversions.xslt</xsl:text>
						</xsl:attribute>
							<xsl:text>X3dTooltipConversions.xslt</xsl:text>
					</xsl:element>
				</td>
				<td>
					<xsl:text>&#160;</xsl:text>
					<!-- &#160; = &nbsp; -->
				</td>
				<td align="right">
					<xsl:element name="a">
						<xsl:attribute name="href">
							<xsl:text>x3d-</xsl:text>
							<xsl:value-of select="$version"/>
							<xsl:text>.profile</xsl:text>
							<xsl:if test="$tooltipLanguage">
								<xsl:value-of select="$tooltipLanguage"/>
							</xsl:if>
							<xsl:text>.xml</xsl:text>
						</xsl:attribute>
							<xsl:text>x3d-</xsl:text>
							<xsl:value-of select="$version"/>
							<xsl:text>.profile</xsl:text>
							<xsl:if test="$tooltipLanguage">
								<xsl:value-of select="$tooltipLanguage"/>
							</xsl:if>
							<xsl:text>.xml</xsl:text>
					</xsl:element>
				</td>
			</tr>
			<tr>
				<td align="left">
					<xsl:text>Contact:</xsl:text>
					<xsl:text>&#10;</xsl:text>
					<xsl:element name="a">
						<!-- Reference:  "The mailto URL scheme"  ftp://ftp.isi.edu/in-notes/rfc2368.txt July 1998 by
						     P. Hoffman (Internet Mail Consortium), L. Masinter (Xerox Corporation), J. Zawinski (Netscape Communications) -->
						<xsl:attribute name="href">
							<xsl:text>mailto:brutzman@nps.edu(Don%20Brutzman)?subject=X3D%20Tooltips</xsl:text>
							<xsl:if test="$tooltipLanguage">
								<xsl:text>%20in%20</xsl:text>
								<xsl:value-of select="$tooltipLanguage"/>
							</xsl:if>
						</xsl:attribute>
						<xsl:attribute name="onMouseOver">
							<xsl:text>status='Click to send mail if you have comments.</xsl:text>
							<xsl:text>';return true</xsl:text>
						</xsl:attribute>
						<xsl:attribute name="onMouseOut">
							<xsl:text>status='';return true</xsl:text>
						</xsl:attribute>
						<font color="blue">
							<xsl:text>Don Brutzman</xsl:text>
						</font>
					</xsl:element>
					<xsl:text>&#10;</xsl:text>
					
					<xsl:text> (</xsl:text>
					<xsl:element name="a">
						<!-- Reference:  "The mailto URL scheme"  ftp://ftp.isi.edu/in-notes/rfc2368.txt July 1998 by
						     P. Hoffman (Internet Mail Consortium), L. Masinter (Xerox Corporation), J. Zawinski (Netscape Communications) -->
						<xsl:attribute name="href">
							<xsl:text>mailto:brutzman@nps.edu(Don%20Brutzman)?subject=X3D%20Tooltips</xsl:text>
							<xsl:if test="$tooltipLanguage">
								<xsl:text>%20in%20</xsl:text>
								<xsl:value-of select="$tooltipLanguage"/>
							</xsl:if>
						</xsl:attribute>
						<xsl:attribute name="onMouseOver">
							<xsl:text>status='Click to send mail if you have comments.</xsl:text>
							<xsl:text>';return true</xsl:text>
						</xsl:attribute>
						<xsl:attribute name="onMouseOut">
							<xsl:text>status='';return true</xsl:text>
						</xsl:attribute>
						<font color="blue">
							<xsl:text>brutzman&#160;at&#160;nps.edu</xsl:text>
						</font>
					</xsl:element>
					<xsl:text>)&#10;</xsl:text>
				</td>
				<td>
					<xsl:text>&#160;</xsl:text>
					<!-- &#160; = &nbsp; -->
				</td>
				<td align="right">
					<xsl:text>Autogenerated </xsl:text>
					<xsl:value-of select="$todaysDate"/>
				</td>
			</tr>

		</table>
		</blockquote>
		
	</xsl:template>

	<!-- ****** "element" element ****************************************************** -->
	<xsl:template match="element[not(@name='USE')]">
	<!-- USE tooltip retained in profile for content correction and debugging, but it is not a valid element -->

		<!-- new row  	width="800"	-->
		<tr align="left">

			<td bgcolor="#669999" align="right" valign="top">
				<!-- bookmark -->
				<xsl:element name="a">
					<xsl:attribute name="name"><xsl:value-of select="@name"/></xsl:attribute>
					<font size="-1">
						<xsl:text>&#160;</xsl:text>
						<!-- &#160; = &nbsp; -->
					</font>
				</xsl:element>
			</td>
			<!--m17 add here "width="600"" for word wrap 	width="600"-->
			<td bgcolor="#669999" align="right" valign="top">
				<!-- bookmarks -->
				<xsl:element name="a">
				<!--	<xsl:attribute name="href"><xsl:value-of select="$pageName"/></xsl:attribute> -->
				<!--	<xsl:attribute name="target"><xsl:text>_self</xsl:text></xsl:attribute> -->
					<xsl:attribute name="href"><xsl:text>#top</xsl:text></xsl:attribute>
					<font size="-1" color="black">
						<xsl:text>top</xsl:text>
						<!-- &#160; = &nbsp; -->
					</font>
				</xsl:element>
				<xsl:text>&#160;&#160;&#160;</xsl:text>
				<xsl:element name="a">
					<xsl:attribute name="href"><xsl:text>examples/help.html</xsl:text></xsl:attribute>
					<xsl:attribute name="target"><xsl:text>_blank</xsl:text></xsl:attribute>
					<font size="-1" color="black">
						<xsl:text>help</xsl:text>
						<!-- &#160; = &nbsp; -->
					</font>
				</xsl:element>
				<xsl:text>&#160;&#160;&#160;</xsl:text>
				<xsl:element name="a">
					<xsl:attribute name="href"><xsl:text>#credits</xsl:text></xsl:attribute>
					<font size="-1" color="black">
						<xsl:text>credits</xsl:text>
						<!-- &#160; = &nbsp; -->
					</font>
				</xsl:element>
			</td>
		</tr>
		<!--	 width="800" -->
		<tr align="left">
			<!--  valign="top" -->
			<td bgcolor="white">
				<xsl:choose>
					<xsl:when test="@icon">
						<xsl:element name="img">
							<xsl:attribute name="src"><xsl:value-of select="@icon"/></xsl:attribute>
							<xsl:attribute name="alt"><xsl:value-of select="@name"/></xsl:attribute>
						</xsl:element>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>&#160;&#160;&#160;</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
				<xsl:text>&#10;</xsl:text>
				<xsl:if test="string-length(@name) > 18">
					<br /><!-- skip to next line, below icon -->
				</xsl:if>
				<b>
					<xsl:element name="font">
						<xsl:attribute name="color">navy</xsl:attribute>
						<xsl:choose>
						  <xsl:when test="string-length(@name) > 28">
							<xsl:attribute name="size">-1</xsl:attribute>
						  </xsl:when>
						  <xsl:when test="string-length(@name) > 18">
							<xsl:attribute name="size">0</xsl:attribute>
						  </xsl:when>
						  <xsl:otherwise>
							<xsl:attribute name="size">+1</xsl:attribute>
						  </xsl:otherwise>
						</xsl:choose>
						<xsl:value-of select="@name"/>
					</xsl:element>
				</b>
			</td>

			<!--m17 add here "width="600"" for word wrap	width="600"-->
			<td bgcolor="white" >
				<xsl:text>&#10;</xsl:text>
				<b>
					<font color="navy">
					<!--	<xsl:value-of select="@tooltip"/> -->
						<!-- recursive colorizing and bolding of Hint: and Warning: keywords -->
						<xsl:call-template name="highlight-HintsWarnings">
							<xsl:with-param name="inputString" select="@tooltip"/>
						</xsl:call-template>
					</font>
				</b>
			</td>

		</tr>

		<xsl:apply-templates select="attribute"/>
		
	</xsl:template>

	<!-- ****** "attribute" element****************************************************** -->
	<xsl:template match="attribute">

		<!-- error checking -->
		<xsl:if test="contains(@tooltip,'[') and not(contains(@tooltip,']'))">
			<xsl:message>
				<xsl:text>[Error] element '</xsl:text>
				<xsl:value-of select="../@name"/>
				<xsl:text>' attribute '</xsl:text>
				<xsl:value-of select="@name"/>
				<xsl:text>' has unmatched [ bracket</xsl:text>
			</xsl:message>
		</xsl:if>
		<xsl:if test="contains(@tooltip,']') and not(contains(@tooltip,'['))">
			<xsl:message>
				<xsl:text>[Error] element '</xsl:text>
				<xsl:value-of select="../@name"/>
				<xsl:text>' attribute '</xsl:text>
				<xsl:value-of select="@name"/>
				<xsl:text>' has unmatched ] bracket</xsl:text>
			</xsl:message>
		</xsl:if>
		<xsl:variable name="signatureSummary" select="substring-before(@tooltip,']')"/>
		<xsl:if test="$signatureSummary and not(@name='DEF') and not(@name='USE') and not(@name='class') and not(@name='containerField') and not(../@name='component') and not(../@name='connect') and not(../@name='field') and not(../@name='fieldValue') and not(../@name='meta') and not(../@name='IMPORT') and not(../@name='EXPORT') and not(../@name='ExternProtoDeclare') and not(../@name='ProtoDeclare') and not(../@name='ProtoInstance') and not(../@name='ROUTE') and not(../@name='X3D') and not(../@name='XvlShell')">
			<xsl:if test="not(contains($signatureSummary,'initializeOnly')) and not(contains($signatureSummary,'inputOnly')) and not(contains($signatureSummary,'outputOnly')) and not(contains($signatureSummary,'inputOutput'))">
				<xsl:message>
					<xsl:text>[Error] element '</xsl:text>
					<xsl:value-of select="../@name"/>
					<xsl:text>' attribute '</xsl:text>
					<xsl:value-of select="@name"/>
					<xsl:text>' is missing accessType information</xsl:text>
				</xsl:message>
			</xsl:if>
			<!-- note that character entities are replaced during parsing prior to applying this test, so no ampersands are included -->
			<xsl:if test="not(contains($signatureSummary,'SF')) and not(contains($signatureSummary,'MF')) and not(contains($signatureSummary,'CDATA')) and not(contains($signatureSummary,'IDREF')) and not(contains($signatureSummary,'NMTOKEN')) and not(contains($signatureSummary,'(') and contains($signatureSummary,')'))">
				<xsl:message>
					<xsl:text>[Error] element '</xsl:text>
					<xsl:value-of select="../@name"/>
					<xsl:text>' attribute '</xsl:text>
					<xsl:value-of select="@name"/>
					<xsl:text>' is missing type information</xsl:text>
				</xsl:message>
			</xsl:if>
		</xsl:if>

		<!-- new row  width="800"-->
		<tr align="left">
				
			<td bgcolor="#eeffee" align="left" valign="top">
				<!-- &#160;&#160;&#160;&#160;&#160;&#160; <xsl:text>&#160;</xsl:text>-->
				
				<!-- &#160; = &nbsp; -->
				<xsl:if test="@name">
					<b>
					<xsl:element name="font">
						<xsl:attribute name="color">black</xsl:attribute>
						<xsl:choose>
						  <xsl:when test="string-length(@name) > 30">
							<xsl:attribute name="size">-2</xsl:attribute>
						  </xsl:when>
						  <xsl:when test="string-length(@name) > 25">
							<xsl:attribute name="size">-1</xsl:attribute>
						  </xsl:when>
						  <xsl:when test="string-length(@name) > 20">
							<xsl:attribute name="size">0</xsl:attribute>
						  </xsl:when>
						  <xsl:otherwise>
							<xsl:attribute name="size">1</xsl:attribute>
						  </xsl:otherwise>
						</xsl:choose>
						<xsl:value-of select="@name"/>
					</xsl:element>
					</b>
				</xsl:if>
			</td>

			<!--m17 add here "width="600"" for word wrap 	width="600"-->
			<td bgcolor="#eeffee">
				<xsl:variable name="AttributeSpecification">
					<xsl:if test="contains(@tooltip,']')">
						<xsl:value-of select="substring-before(@tooltip,']')"/>
						<xsl:text>]</xsl:text>
					</xsl:if>
				</xsl:variable>
				<xsl:if test="$AttributeSpecification">
					<b>
						<xsl:value-of select="$AttributeSpecification"/>
					</b>
					<br />
				</xsl:if>
				<xsl:variable name="AttributeTooltip">
					<xsl:value-of select="substring-after(@tooltip,$AttributeSpecification)"/>
				</xsl:variable>
				<!-- recursive colorizing and bolding of Hint: and Warning: keywords -->
				<xsl:call-template name="highlight-HintsWarnings">
					<xsl:with-param name="inputString" select="$AttributeTooltip"/>
				</xsl:call-template>
			<!--	<xsl:call-template name="highlight-Warnings">
					<xsl:with-param name="inputString" select="$HintedTooltip"/>
				</xsl:call-template>
				<xsl:value-of select="$HintedTooltip"/>
			-->
			</td>

			<xsl:apply-templates/>

		</tr>
		
	</xsl:template>

<xsl:template name="highlight-HintsWarnings"> <!-- &#38; is &amp; -->
  <xsl:param name="inputString" select="0"/>
  <!--	<xsl:text>//###amp###&#10;</xsl:text>
	<xsl:text>### inputString received: </xsl:text>
	<xsl:value-of select="$inputString"/>
	<xsl:text>&#10;</xsl:text> -->
  <xsl:choose>
    <!-- [X3D 3.1] prefix -->
    <xsl:when test="starts-with($inputString,'[X3D 3.1]')">
      <font color="black"><xsl:text>[X3D 3.1]</xsl:text></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'[X3D 3.1]')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- [X3D 3.2] prefix -->
    <xsl:when test="starts-with($inputString,'[X3D 3.2]')">
      <font color="black"><xsl:text>[X3D 3.2]</xsl:text></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'[X3D 3.2]')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Interchange profile hint English -->
    <xsl:when test="contains($inputString,'Interchange profile hint:')    and not(contains(substring-before($inputString,'Interchange profile hint:'),   'Warning:'))">
      <xsl:value-of select="substring-before($inputString,'Interchange profile hint:')"/>
      <br />
      <font color="#553377"><b><xsl:text>Interchange profile hint:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Interchange profile hint:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- hint English -->
    <xsl:when test="contains($inputString,'Hint:')    and not(contains(substring-before($inputString,'Hint:'),   'Warning:'))">
      <xsl:value-of select="substring-before($inputString,'Hint:')"/>
      <br />
      <font color="#447777"><b><xsl:text>Hint:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Hint:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Interchange profile hint Italian -->
    <xsl:when test="contains($inputString,'Suggerimento per il profilo Interchange:')    and not(contains(substring-before($inputString,'Interchange profile hint:'),   'Attenzione:'))">
      <xsl:value-of select="substring-before($inputString,'Suggerimento per il profilo Interchange:')"/>
      <br />
      <font color="#553377"><b><xsl:text>Suggerimento per il profilo Interchange:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Suggerimento per il profilo Interchange:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- hint Italian -->
    <xsl:when test="contains($inputString,'Suggerimento:')    and not(contains(substring-before($inputString,'Suggerimento:'),   'Attenzione:'))">
      <xsl:value-of select="substring-before($inputString,'Suggerimento:')"/>
      <br />
      <font color="#447777"><b><xsl:text>Suggerimento:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Suggerimento:')"/>
      </xsl:call-template>
    </xsl:when>
    <!--m17 add here for Chinese-->
    <!-- Interchange profile hint Chinese -->
    <xsl:when test="contains($inputString,'概貌互换提示:')
        and (not(contains(substring-before($inputString,'概貌互换提示:'),   '警告:'))  and not(contains(substring-before($inputString,'概貌互换提示:'),   '提示:')))
        ">
      <xsl:value-of select="substring-before($inputString,'概貌互换提示:')"/>
      <br />
      <font color="#553377"><b><xsl:text>概貌互换提示:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'概貌互换提示:')"/>
      </xsl:call-template>
    </xsl:when>
    <!--m17 add here for Chinese-->
    <!-- hint Chinese -->
    <xsl:when test="contains($inputString,'提示:')    and not(contains(substring-before($inputString,'提示:'),   '警告:'))">
      <xsl:value-of select="substring-before($inputString,'提示:')"/>
      <br />
      <font color="#447777"><b><xsl:text>提示:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'提示:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- hint French -->
    <xsl:when test="contains($inputString,'Conseil:') and not(contains(substring-before($inputString,'Conseil:'),'Attention:'))">
      <xsl:value-of select="substring-before($inputString,'Conseil:')"/>
      <br />
      <font color="#447777"><b><xsl:text>Conseil:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Conseil:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- hint German -->
    <xsl:when test="contains($inputString,'Hinweis:') and not(contains(substring-before($inputString,'Nota:'),'Warnung:'))">
      <xsl:value-of select="substring-before($inputString,'Hinweis:')"/>
      <br />
      <font color="#447777"><b><xsl:text>Hinweis:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Hinweis:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- hint Portuguese -->
    <xsl:when test="contains($inputString,'Dica:') and not(contains(substring-before($inputString,'Dica:'),'Aten&#231;&#227;o:'))">
      <xsl:value-of select="substring-before($inputString,'Dica:')"/>
      <br />
      <font color="#447777"><b><xsl:text>Dica:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Dica:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- hint Spanish -->
    <xsl:when test="contains($inputString,'Nota:') and not(contains(substring-before($inputString,'Nota:'),'Advertencia:'))">
      <xsl:value-of select="substring-before($inputString,'Nota:')"/>
      <br />
      <font color="#447777"><b><xsl:text>Nota:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Nota:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Warning English -->
    <xsl:when test="contains($inputString,'Warning:')">
      <xsl:value-of select="substring-before($inputString,'Warning:')"/>
      <br />
      <font color="#ee5500"><b><xsl:text>Warning:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Warning:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Warning Italian -->
    <xsl:when test="contains($inputString,'Attenzione:')">
      <xsl:value-of select="substring-before($inputString,'Attenzione:')"/>
      <br />
      <font color="#ee5500"><b><xsl:text>Attenzione:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Attenzione:')"/>
      </xsl:call-template>
    </xsl:when>
	 <!--m17 add here for Chinese-->
    <!-- Warning Chinese -->
    <xsl:when test="contains($inputString,'警告:')">
      <xsl:value-of select="substring-before($inputString,'警告:')"/>
      <br />
      <font color="#ee5500"><b><xsl:text>警告:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'警告:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Warning French -->
    <xsl:when test="contains($inputString,'Attention:')">
      <xsl:value-of select="substring-before($inputString,'Attention:')"/>
      <br />
      <font color="#ee5500"><b><xsl:text>Attention:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Attention:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Warning German -->
    <xsl:when test="contains($inputString,'Warnung:')">
      <xsl:value-of select="substring-before($inputString,'Warnung:')"/>
      <br />
      <font color="#ee5500"><b><xsl:text>Warnung:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Warnung:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Warning Portuguese -->
    <xsl:when test="contains($inputString,'Aten&#231;&#227;o:')">
      <xsl:value-of select="substring-before($inputString,'Aten&#231;&#227;o:')"/>
      <br />
      <font color="#ee5500"><b><xsl:text>Aten&#231;&#227;o:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Aten&#231;&#227;o:')"/>
      </xsl:call-template>
    </xsl:when>
    <!-- Warning Spanish -->
    <xsl:when test="contains($inputString,'Advertencia:')">
      <xsl:value-of select="substring-before($inputString,'Advertencia:')"/>
      <br />
      <font color="#ee5500"><b><xsl:text>Advertencia:</xsl:text></b></font>
      <xsl:call-template name="highlight-HintsWarnings">
        <xsl:with-param name="inputString" select="substring-after($inputString,'Advertencia:')"/>
      </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
      <xsl:value-of select="$inputString"/>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>

</xsl:stylesheet>

