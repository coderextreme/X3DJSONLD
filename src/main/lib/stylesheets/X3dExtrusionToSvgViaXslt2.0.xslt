<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:xlink="http://www.w3.org/1999/xlink" exclude-result-prefixes="xs" >

<!--
	<meta name="filename" content="X3dExtrusionToSvgViaXslt1.0.xslt.xslt"/>
	<meta name="description" content="This XSLT stylesheet converts Extrusion nodes in an .x3d scene to Scalable Vector Graphics (SVG) diagrams."/>
	<meta name="authors" content="Oliver Tan, Murat Onder, Don Brutzman"/>
	<meta name="created" content="17 March 2005"/>
	<meta name="revised" content="27 March 2005"/>
	<meta name="license" content="https://www.web3d.org/x3d/content/examples/license.html"/>
	<meta name="version" content="Version 1.0"/>
	<meta name="reference" content="XSLT Cookbook by Sal Mangano"/>
	<meta name="reference" content="XSLT 2.0 Programmer's Reference (Programmer to Programmer) by Michael Kay"/>
-->

	<xsl:strip-space elements="*"/>
	<xsl:output encoding="UTF-8" media-type="image/svg+xml" indent="yes" 
		omit-xml-declaration="no" method="xml" standalone="no" 
		doctype-system="http://www.w3.org/TR/2000/CR-SVG-20001102/DTD/svg-20001102.dtd" doctype-public="-//W3C//DTD SVG 20001102//EN" />
	
	<xsl:param name="plotWidth">900</xsl:param>
	<xsl:param name="plotHeight" >620</xsl:param>
	<xsl:param name="plotBoxColor">black</xsl:param>
	<xsl:param name="plotBoxFillColor">cyan</xsl:param>
	
	<xsl:param name="outlineColor" >none</xsl:param>
	<xsl:param name="fillColor" >lime</xsl:param>
	
	<xsl:param name="plotLineColor">blue</xsl:param>
	<xsl:param name="plotMarkerColor">red</xsl:param>
	<xsl:param name="plotMarkerSize">5</xsl:param>
	
	<xsl:param name="axisMarkerSize">0.05</xsl:param>
	<xsl:param name="axisMarkerInterval">0.2</xsl:param>
	
	<xsl:variable name="axisXOffset" select="$plotWidth div 2"/>
	<xsl:variable name="axisYOffset" select="$plotHeight div 2"/>
	<xsl:variable name="axisScale" select="100"/>
	<xsl:variable name="axisXScale" select="$axisScale"/>
	<xsl:variable name="axisYScale" select="-1 * $axisScale"/>
	<xsl:variable name="axisExtent" select="1.2"/>
	
	<xsl:template match="/">
		<svg width="{$plotWidth}" height="{$plotHeight}">
		<rect width="{$plotWidth}" height="{$plotHeight}" fill="{$plotBoxFillColor}" stroke="{$plotBoxColor}" />
		
		<xsl:variable name="extrusions" select="//Extrusion"/>

		<xsl:apply-templates select="$extrusions[1]">
			<xsl:with-param name="plotIndex" select="1"/>
		</xsl:apply-templates>
		</svg>
	</xsl:template>
	
	<xsl:template match="Extrusion" >
		<xsl:param name="plotIndex" select="1" />
		<xsl:variable name="points">
			<xsl:call-template name="buildPointTree">
				<xsl:with-param name="string"><xsl:value-of select="@crossSection"/></xsl:with-param>				
				<xsl:with-param name="delimiters" select="',&#x9;&#xA;'"/>
				<!-- 	&#x9; == '\t'
						&#xA; == '\n'
				-->
			</xsl:call-template>
		</xsl:variable>
		
			<xsl:variable name="minXPos">
				<xsl:call-template name="min">
					<xsl:with-param name="nodes" select="$points/xPos"/>
				</xsl:call-template>
			</xsl:variable>
			<xsl:variable name="maxXPos">
				<xsl:call-template name="max">
					<xsl:with-param name="nodes" select="$points/xPos"/>
				</xsl:call-template>
			</xsl:variable>			
			<xsl:variable name="minYPos">
				<xsl:call-template name="min">
					<xsl:with-param name="nodes" select="$points/yPos"/>
				</xsl:call-template>
			</xsl:variable>
			<xsl:variable name="maxYPos">
				<xsl:call-template name="max">
					<xsl:with-param name="nodes" select="$points/yPos"/>
				</xsl:call-template>
			</xsl:variable>

		<xsl:variable name="plotID" select="concat('plot',$plotIndex)"/>
		
		<xsl:comment>
		Extrusion Plot <xsl:value-of select="$plotID"/>
		CrossSection:<xsl:text>&#xA;</xsl:text><xsl:value-of select="@crossSection"/><xsl:text>&#xA;</xsl:text>
		</xsl:comment>
		
		<xsl:text>&#xA;</xsl:text>
		
		<xsl:text>&lt;!--</xsl:text>
			Tokenized form:
			Number of points = <xsl:value-of select="count($points)"/>
			<xsl:text>&#xA;</xsl:text>
			<xsl:for-each select="$points">
				<xsl:text>&lt;</xsl:text>
						<xsl:value-of select="node-name(.)"/>
				<xsl:text>&gt;</xsl:text>
					<xsl:for-each select="*">
						<xsl:text>&lt;</xsl:text>
							<xsl:value-of select="node-name(.)"/>
						<xsl:text>&gt;</xsl:text>
							<xsl:value-of select="."/>
						<xsl:text>&lt;/</xsl:text>
							<xsl:value-of select="node-name(.)"/>
						<xsl:text>&gt;</xsl:text>
					</xsl:for-each>
				<xsl:text>&lt;/</xsl:text>
					<xsl:value-of select="node-name(.)"/>
				<xsl:text>&gt;</xsl:text>
				<xsl:text>&#xA;</xsl:text>
			</xsl:for-each>

			Min xPos = <xsl:value-of select="$minXPos"/>
			Max xPos = <xsl:value-of select="$maxXPos"/>			
			Min yPos = <xsl:value-of select="$minYPos"/>
			Max yPos = <xsl:value-of select="$maxYPos"/>
			
		<xsl:text>&#xA;</xsl:text>
		<xsl:text>--&gt;</xsl:text>	

		<g id="{$plotID}" transform="translate({$axisXOffset} {$axisYOffset}) scale({$axisXScale} {$axisYScale})">
			<xsl:for-each select="$points">
				<xsl:if test="not(position()=last())">
					<xsl:variable name="startPoint" select="."/>
					<xsl:variable name="currIndex" select="position()"/>
					<xsl:variable name="endPoint" select="$points[$currIndex+1]"/>
					<xsl:element name="line">
						<xsl:attribute name="id">
							<xsl:value-of select="concat('line',position())"/>
						</xsl:attribute>
						<xsl:attribute name="style">
							<xsl:value-of select="concat('fill:none;stroke:',$plotLineColor,';stroke-width:0.02')"/>
						</xsl:attribute>
						<xsl:attribute name="x1">
							<xsl:value-of select="$startPoint/xPos"/>
						</xsl:attribute>
						<xsl:attribute name="y1">
							<xsl:value-of select="$startPoint/yPos"/>
						</xsl:attribute>
						<xsl:attribute name="x2">
							<xsl:value-of select="$endPoint/xPos"/>
						</xsl:attribute>
						<xsl:attribute name="y2">
							<xsl:value-of select="$endPoint/yPos"/>
						</xsl:attribute>
					</xsl:element>
				</xsl:if>
			</xsl:for-each>
			
			<xsl:for-each select="$points">
				<xsl:if test="not(position()=last())">
					<xsl:variable name="currPoint" select="."/>
					<xsl:element name="circle">
						<xsl:attribute name="id">
							<xsl:value-of select="concat('marker',position())"/>
						</xsl:attribute>
						<xsl:attribute name="style">
							<xsl:value-of select="concat('fill:',$plotMarkerColor,';stroke:',$plotMarkerColor,';stroke-width:0.001')"/>
						</xsl:attribute>
						<xsl:attribute name="cx">
							<xsl:value-of select="$currPoint/xPos"/>
						</xsl:attribute>
						<xsl:attribute name="cy">
							<xsl:value-of select="$currPoint/yPos"/>
						</xsl:attribute>
						<xsl:attribute name="r">
							<xsl:value-of select="$plotMarkerSize div $axisScale"/>
						</xsl:attribute>
					</xsl:element>
					<xsl:element name="set">
						<xsl:attribute name="xlink:href">
							<xsl:value-of select="concat('#markerText',position())"/>
						</xsl:attribute>
						<xsl:attribute name="attributeType">
							<xsl:value-of select="'CSS'"/>
						</xsl:attribute>
						<xsl:attribute name="attributeName">
							<xsl:value-of select="'visibility'"/>
						</xsl:attribute>
						<xsl:attribute name="to">
							<xsl:value-of select="'visible'"/>
						</xsl:attribute>
						<xsl:attribute name="begin">
							<xsl:value-of select="concat('marker',position(),'.mouseover')"/>
						</xsl:attribute>
						<xsl:attribute name="end">
							<xsl:value-of select="concat('marker',position(),'.mouseout')"/>
						</xsl:attribute>
					</xsl:element>
				</xsl:if>
			</xsl:for-each>
		</g>
		<g id="markerTexts" transform="translate({$axisXOffset} {$axisYOffset})">
			<xsl:for-each select="$points">
				<xsl:if test="not(position()=last())">
					<xsl:variable name="currPoint" select="."/>
					<xsl:element name="text">
						<xsl:attribute name="id">
							<xsl:value-of select="concat('markerText',position())"/>
						</xsl:attribute>
						<xsl:attribute name="style">
							<xsl:value-of select="'visibility:hidden;font-size:14;font-weight:bold; fill:green; stroke:none'"/>
						</xsl:attribute>
						<xsl:attribute name="x">
							<xsl:value-of select="($currPoint/xPos * $axisScale) + ($plotMarkerSize)"/>
						</xsl:attribute>
						<xsl:attribute name="y">
							<xsl:value-of select="(-1 * $currPoint/yPos * $axisScale) + (-1 * $plotMarkerSize)"/>
						</xsl:attribute>
						<xsl:text>(</xsl:text>
						<xsl:value-of select="$currPoint/xPos"/>
						<xsl:text>,</xsl:text>
						<xsl:value-of select="$currPoint/yPos"/>
						<xsl:text>)</xsl:text>
					</xsl:element>
				</xsl:if>
			</xsl:for-each>	
		</g>
		<xsl:text>&#xA;</xsl:text>	
		<g transform="translate({$axisXOffset} {$axisYOffset}) scale({$axisXScale} {$axisYScale})">
			<!--Draw the y-axis-->
			<line x1="0" y1="{$minYPos * $axisExtent}" x2="0" y2="{$maxYPos * $axisExtent}"
                style="fill:none;stroke:rgb(0,0,0);stroke-width:0.02"/>
			<!--Draw the x-axis-->
			<line x1="{$minXPos * $axisExtent}" y1="0" x2="{$maxXPos * $axisExtent}" y2="0"
                style="fill:none;stroke:rgb(0,0,0);stroke-width:0.02"/>
            <xsl:variable name="minXAxisMarkerPos">
				<xsl:call-template name="findMinMarkerPos">
					<xsl:with-param name="minPos" select="$minXPos * $axisExtent"/>
					<xsl:with-param name="currMarkerPos" select="0"/>
				</xsl:call-template>
			</xsl:variable>
            <xsl:variable name="maxXAxisMarkerPos">
				<xsl:call-template name="findMaxMarkerPos">
					<xsl:with-param name="maxPos" select="$maxXPos * $axisExtent"/>
					<xsl:with-param name="currMarkerPos" select="0"/>
				</xsl:call-template>
			</xsl:variable>
            <xsl:variable name="minYAxisMarkerPos">
				<xsl:call-template name="findMinMarkerPos">
					<xsl:with-param name="minPos" select="$minYPos * $axisExtent"/>
					<xsl:with-param name="currMarkerPos" select="0"/>
				</xsl:call-template>
			</xsl:variable>
            <xsl:variable name="maxYAxisMarkerPos">
				<xsl:call-template name="findMaxMarkerPos">
					<xsl:with-param name="maxPos" select="$maxYPos * $axisExtent"/>
					<xsl:with-param name="currMarkerPos" select="0"/>
				</xsl:call-template>
			</xsl:variable>						
			<xsl:call-template name="plotXAxisMarkers">
				<xsl:with-param name="markerPos" select="$minXAxisMarkerPos"/>
				<xsl:with-param name="maxXPos" select="$maxXAxisMarkerPos"/>        
			</xsl:call-template>
			<xsl:call-template name="plotYAxisMarkers">
				<xsl:with-param name="markerPos" select="$minYAxisMarkerPos"/>
				<xsl:with-param name="maxYPos" select="$maxYAxisMarkerPos"/>        
			</xsl:call-template>			
		</g>	
	</xsl:template>


<!-- Following templates are extracted and modified from S. Mangano,"XSLT Cookbook", O'Reilly, 2004 -->
<xsl:template name="buildPointTree">
     <xsl:param name="string" select="''" />
  <xsl:param name="delimiters" select="' &#x9;&#xA;'" />
  <xsl:choose>
     <!-- Nothing to do if empty string -->
    <xsl:when test="not($string)" />
   
    <xsl:otherwise>
      <xsl:call-template name="buildPoint">
        <xsl:with-param name="string" select="$string" />
        <xsl:with-param name="delimiters" select="$delimiters" />
      </xsl:call-template>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>
   
<xsl:template name="buildPoint">
  <xsl:param name="string" />
  <xsl:param name="delimiters" />
  <xsl:param name="last-delimit"/> 
  <!-- Extract a delimiter -->
  <xsl:variable name="delimiter" select="substring($delimiters, 1, 1)" />
  <xsl:choose>
     <!-- If the delimiter is empty we have a token -->
    <xsl:when test="not($delimiter)">
      <point>
		<xPos>
			  <xsl:value-of select="substring-before(normalize-space($string), ' ')"/>
		</xPos>
		<yPos>
			  <xsl:value-of select="substring-after(normalize-space($string), ' ')"/>
		</yPos>
	</point>
    </xsl:when>
     <!-- If the string contains at least one delimiter we must split it -->
    <xsl:when test="contains($string, $delimiter)">
      <!-- If it starts with the delimiter we don't need to handle the -->
       <!-- before part -->
      <xsl:if test="not(starts-with($string, $delimiter))">
         <!-- Handle the part that comes before the current delimiter -->
         <!-- with the next delimiter. If ther is no next the first test -->
         <!-- in this template will detect the token -->
        <xsl:call-template name="buildPoint">
          <xsl:with-param name="string" 
                          select="substring-before($string, $delimiter)" />
          <xsl:with-param name="delimiters" 
                          select="substring($delimiters, 2)" />
        </xsl:call-template>
      </xsl:if>
       <!-- Handle the part that comes after the delimiter using the -->
       <!-- current delimiter -->
      <xsl:call-template name="buildPoint">
        <xsl:with-param name="string" 
                        select="substring-after($string, $delimiter)" />
        <xsl:with-param name="delimiters" select="$delimiters" />
      </xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
       <!-- No occurances of current delimiter so move on to next -->
      <xsl:call-template name="buildPoint">
        <xsl:with-param name="string" 
                        select="$string" />
        <xsl:with-param name="delimiters" 
                        select="substring($delimiters, 2)" />
      </xsl:call-template>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>

<xsl:template name="min">
   <xsl:param name="nodes" select="/.." />
   <xsl:choose>
      <xsl:when test="not($nodes)">NaN</xsl:when>
      <xsl:otherwise>
         <xsl:for-each select="$nodes">
            <xsl:sort data-type="number" />
            <xsl:if test="position(  ) = 1">
               <xsl:value-of select="number(.)" />
            </xsl:if>
         </xsl:for-each>
      </xsl:otherwise>
   </xsl:choose>
</xsl:template>
   
<xsl:template name="max">
   <xsl:param name="nodes" select="/.." />
   <xsl:choose>
      <xsl:when test="not($nodes)">NaN</xsl:when>
      <xsl:otherwise>
         <xsl:for-each select="$nodes">
            <xsl:sort data-type="number" order="descending" />
            <xsl:if test="position(  ) = 1">
               <xsl:value-of select="number(.)" />
            </xsl:if>
         </xsl:for-each>
      </xsl:otherwise>
   </xsl:choose>
</xsl:template>

<xsl:template name="findMinMarkerPos">
	<xsl:param name="minPos" select="0"/>
	<xsl:param name="currMarkerPos" select="0"/>
	<xsl:choose>
		<xsl:when test="$currMarkerPos &lt;= $minPos">
			<xsl:value-of select="$currMarkerPos + $axisMarkerInterval"/>
		</xsl:when>
		<xsl:otherwise>
			<xsl:call-template name="findMinMarkerPos">
				<xsl:with-param name="minPos" select="$minPos"/>
				<xsl:with-param name="currMarkerPos" select="$currMarkerPos - $axisMarkerInterval"/>
			</xsl:call-template>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template name="findMaxMarkerPos">
	<xsl:param name="maxPos" select="0"/>
	<xsl:param name="currMarkerPos" select="0"/>
	<xsl:choose>
		<xsl:when test="$currMarkerPos &gt;= $maxPos">
			<xsl:value-of select="$currMarkerPos - $axisMarkerInterval"/>
		</xsl:when>
		<xsl:otherwise>
			<xsl:call-template name="findMaxMarkerPos">
				<xsl:with-param name="maxPos" select="$maxPos"/>
				<xsl:with-param name="currMarkerPos" select="$currMarkerPos + $axisMarkerInterval"/>
			</xsl:call-template>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<xsl:template name="plotXAxisMarkers">
	<xsl:param name="markerPos" select="0"/>
	<xsl:param name="maxXPos" select="0"/>
	<xsl:if test="$markerPos &lt;= $maxXPos">
		<line x1="{$markerPos}" y1="{-1 * $axisMarkerSize}" x2="{$markerPos}" y2="{$axisMarkerSize}"
                style="fill:none;stroke:rgb(0,0,0);stroke-width:0.02"/>
        <xsl:call-template name="plotXAxisMarkers">
			<xsl:with-param name="markerPos" select="$markerPos + $axisMarkerInterval"/>
			<xsl:with-param name="maxXPos" select="$maxXPos"/>
		</xsl:call-template>
	</xsl:if>
</xsl:template>

<xsl:template name="plotYAxisMarkers">
	<xsl:param name="markerPos" select="0"/>
	<xsl:param name="maxYPos" select="0"/>
	<xsl:if test="$markerPos &lt;= $maxYPos ">
		<line y1="{$markerPos}" x1="{-1 * $axisMarkerSize}" y2="{$markerPos}" x2="{$axisMarkerSize}"
                style="fill:none;stroke:rgb(0,0,0);stroke-width:0.02"/>
        <xsl:call-template name="plotYAxisMarkers">
			<xsl:with-param name="markerPos" select="$markerPos + $axisMarkerInterval"/>
			<xsl:with-param name="maxYPos" select="$maxYPos"/>
		</xsl:call-template>
	</xsl:if>
</xsl:template>
</xsl:stylesheet>
