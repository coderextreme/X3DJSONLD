<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:xlink="http://www.w3.org/1999/xlink" exclude-result-prefixes="xs">
	<!--
	<meta name="filename" content="X3dExtrusionToSvgViaXslt1.1.xslt"/>
	<meta name="description" content="This XSLT stylesheet converts Extrusion nodes in an .x3d scene to Scalable Vector Graphics (SVG) diagrams."/>
	<meta name="authors" content="Oliver Tan, Murat Onder, Don Brutzman"/>
	<meta name="created" content="17 March 2005"/>
	<meta name="identifier" content="https://www.web3d.org/x3d/stylesheets/X3dExtrusionToSvgViaXslt1.1.xslt"/>
	<meta name="license" content="https://www.web3d.org/x3d/content/examples/license.html"/>
	<meta name="version" content="Version 1.0"/>
	<meta name="reference" content="XSLT Cookbook by Sal Mangano"/>
	<meta name="reference" content="XSLT 2.0 Programmer's Reference (Programmer to Programmer) by Michael Kay"/>

	Worklist:
	- need to fix stylesheet to not depend on crossSection MFVec2f delimiting commas
	- clean up min/max routines
	- upgrade X3dToXhtml.xslt to also support MFVec2f field definitions, in Script and Prototype nodes
	- warn if odd number of values provided
	- support X3D Geometry2D component nodes
-->
	<xsl:param name="plotWidth">900</xsl:param>
	<xsl:param name="plotHeight">750</xsl:param>
	<xsl:param name="plotBoxColor">black</xsl:param>
	<xsl:param name="plotBoxFillColor">cyan</xsl:param>
	<xsl:param name="outlineColor">none</xsl:param>
	<xsl:param name="fillColor">lime</xsl:param>
	<xsl:param name="plotLineColor">blue</xsl:param>
	<xsl:param name="plotLineWidth">0.04</xsl:param>
	<xsl:param name="plotMarkerColor">red</xsl:param>
	<xsl:param name="plotMarkerSize">5</xsl:param>
	<xsl:param name="axisTickSize">0.03</xsl:param>
	<xsl:param name="axisLineWidth">0.03</xsl:param>
	<xsl:param name="axisTickInterval">0.2</xsl:param>
	
	<xsl:variable name="delimiter" select="' '"/><!-- c14n delimiter is space character -->
	
	<xsl:strip-space elements="*"/>
	<xsl:output encoding="UTF-8" media-type="image/svg+xml" indent="yes" omit-xml-declaration="yes" method="xml"/>
	<!--	<xsl:template match="/"> -->
	
	<xsl:template name="plotSvgExtrusionCrossSection">
		<xsl:param name="svgFilename">newX3dExtrusionCrossSection.svg</xsl:param>
	
		<xsl:variable name="axisXOffset" select="$plotWidth div 2"/>
		<xsl:variable name="axisYOffset" select="$plotHeight div 2"/>
		<xsl:variable name="axisScale"   select="100"/>
		<xsl:variable name="axisXScale"  select="$axisScale"/>
		<xsl:variable name="axisYScale"  select="-1 * $axisScale"/>
		<xsl:variable name="axisExtent"  select="1.1"/>
		
		<xsl:message>
			<xsl:text>plotSvgExtrusionCrossSection svgFilename=</xsl:text>
			<xsl:value-of select="$svgFilename"/>
		</xsl:message>
<!-- DOCTYPE is debatable in SVG2!
		<xsl:text disable-output-escaping="yes"><![CDATA[
<!DOCTYPE svg PUBLIC  "-//W3C//DTD SVG 1.1//EN" "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11-flat-20030114.dtd">
]]></xsl:text> -->
		<svg id="{$svgFilename}" width="{$plotWidth}" height="{$plotHeight}" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">
			<rect width="{$plotWidth}" height="{$plotHeight}" fill="{$plotBoxFillColor}" stroke="{$plotBoxColor}"/>
			<xsl:variable name="minXPos">
				<xsl:call-template name="getMinX">
					<xsl:with-param name="coords" select="normalize-space(@crossSection)"/>
				</xsl:call-template>
			</xsl:variable>
			<xsl:variable name="maxXPos">
				<xsl:call-template name="getMaxX">
					<xsl:with-param name="coords" select="normalize-space(@crossSection)"/>
				</xsl:call-template>
			</xsl:variable>
			<xsl:variable name="minYPos">
				<xsl:call-template name="getMinY">
					<xsl:with-param name="coords" select="normalize-space(@crossSection)"/>
				</xsl:call-template>
			</xsl:variable>
			<xsl:variable name="maxYPos">
				<xsl:call-template name="getMaxY">
					<xsl:with-param name="coords" select="normalize-space(@crossSection)"/>
				</xsl:call-template>
			</xsl:variable>
			<xsl:text>&#10;</xsl:text>
			<xsl:comment>
				<xsl:text>&lt;x3d:Extrusion crossSection='&#10;</xsl:text>
				<xsl:value-of select="@crossSection"/>
				<xsl:text>'/&gt;&#10;</xsl:text>
			</xsl:comment>
			<xsl:text>&#10;</xsl:text>
			<xsl:comment>
			Min xPos = <xsl:value-of select="$minXPos"/>
			Max xPos = <xsl:value-of select="$maxXPos"/>			
			Min yPos = <xsl:value-of select="$minYPos"/>
			Max yPos = <xsl:value-of select="$maxYPos"/>
			</xsl:comment>
			<xsl:text>&#10;</xsl:text>
			<g transform="translate({$axisXOffset} {$axisYOffset}) scale({$axisXScale} {$axisYScale})">
				<g style="{concat('fill:none;stroke:',$plotLineColor,';stroke-width:',$plotLineWidth)}">
                                    <xsl:call-template name="buildLines">
                                            <xsl:with-param name="string" select="normalize-space(@crossSection)"/>
                                    </xsl:call-template>
                                </g>
				<g style="{concat('fill:',$plotMarkerColor,';stroke:',$plotMarkerColor,';stroke-width:0.001')}">
				<xsl:call-template name="buildCircles">
					<xsl:with-param name="string" select="normalize-space(@crossSection)"/>
                    <xsl:with-param name="axisScale" select="$axisScale"/>
				</xsl:call-template>
                                </g>
			</g>
			<xsl:text>&#10;</xsl:text>
			<g id="markerTexts" transform="translate({$axisXOffset} {$axisYOffset})"
                           style="visibility:hidden;font-size:14;font-weight:bold; fill:green; stroke:none">
				<xsl:call-template name="buildLabels">
					<xsl:with-param name="string" select="@crossSection"/>
                    <xsl:with-param name="axisScale" select="$axisScale"/>
				</xsl:call-template>
			</g>
			<xsl:text>&#10;</xsl:text>
			<g transform="translate({$axisXOffset} {$axisYOffset}) scale({$axisXScale} {$axisYScale})"
                           style="fill:none;stroke:rgb(0,0,0);stroke-width:{$axisLineWidth}">
				<!--Draw the y-axis-->
				<line x1="0" y1="{$minYPos * $axisExtent}" x2="0" y2="{$maxYPos * $axisExtent}"/>
				<!--Draw the x-axis-->
				<line x1="{$minXPos * $axisExtent}" y1="0" x2="{$maxXPos * $axisExtent}" y2="0"/>
				<xsl:variable name="minXAxisTickPos">
					<xsl:call-template name="findMinTickPos">
						<xsl:with-param name="minPos" select="$minXPos * $axisExtent"/>
						<xsl:with-param name="currTickPos" select="0"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="maxXAxisTickPos">
					<xsl:call-template name="findMaxTickPos">
						<xsl:with-param name="maxPos" select="$maxXPos * $axisExtent"/>
						<xsl:with-param name="currTickPos" select="0"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="minYAxisTickPos">
					<xsl:call-template name="findMinTickPos">
						<xsl:with-param name="minPos" select="$minYPos * $axisExtent"/>
						<xsl:with-param name="currTickPos" select="0"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="maxYAxisTickPos">
					<xsl:call-template name="findMaxTickPos">
						<xsl:with-param name="maxPos" select="$maxYPos * $axisExtent"/>
						<xsl:with-param name="currTickPos" select="0"/>
					</xsl:call-template>
				</xsl:variable>
                                <!--
                                <xsl:message>
                                        <xsl:text>minXAxisTickPos=</xsl:text>
                                        <xsl:value-of select="$minXAxisTickPos"/>
                                        <xsl:text>, maxXAxisTickPos=</xsl:text>
                                        <xsl:value-of select="$maxXAxisTickPos"/>
                                        <xsl:text>, minYAxisTickPos=</xsl:text>
                                        <xsl:value-of select="$minYAxisTickPos"/>
                                        <xsl:text>, maxYAxisTickPos=</xsl:text>
                                        <xsl:value-of select="$maxYAxisTickPos"/>
                                        <xsl:text>;</xsl:text>
                                </xsl:message>
                                -->
                                <g  style="fill:none;stroke:rgb(0,0,0);stroke-width:{$axisTickSize}">
                                    <xsl:call-template name="plotXAxisTicks">
                                            <xsl:with-param name="tickPos" select="$minXAxisTickPos"/>
                                            <xsl:with-param name="maxXPos" select="$maxXAxisTickPos"/>
                                    </xsl:call-template>
                                    <xsl:call-template name="plotYAxisTicks">
                                            <xsl:with-param name="tickPos" select="$minYAxisTickPos"/>
                                            <xsl:with-param name="maxYPos" select="$maxYAxisTickPos"/>
                                    </xsl:call-template>
                                </g>
			</g>
			<xsl:text>&#10;</xsl:text>
		</svg>
	</xsl:template>
	
	<!-- Templates for data point extraction -->
	<xsl:template name="extractPoint">
		<xsl:param name="string" select="''"/>
		<xsl:choose>
			<!-- Nothing to do if empty string -->
			<xsl:when test="not($string)"/>
			<xsl:otherwise>
				<xsl:choose>
					<xsl:when test="contains($string, ',')">
						<xsl:value-of select="substring-before(normalize-space($string), ',')"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:value-of select="normalize-space($string)"/>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="extractXValue">
		<xsl:param name="string" select="''"/>
		<xsl:choose>
			<!-- Nothing to do if empty string -->
			<xsl:when test="not($string)"/>
			<xsl:otherwise>
				<xsl:value-of select="substring-before(normalize-space($string), ' ')"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="extractYValue">
		<xsl:param name="string" select="''"/>
		<xsl:choose>
			<!-- Nothing to do if empty string -->
			<xsl:when test="not($string)"/>
			<xsl:otherwise>
                                <!-- second element, space separated -->
				<xsl:value-of select="substring-before(substring-after(concat(normalize-space($string), ' '), ' '), ' ')"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<!-- Templates for plotting the lines, circles and labels -->
	<xsl:template name="buildLines">
		<xsl:param name="string"/>
		<xsl:param name="index" select="1"/>
		<xsl:choose>
			<!-- Nothing to do if empty string -->
			<xsl:when test="not(normalize-space($string))"/>
			<xsl:when test="contains($string,$delimiter)">
				<xsl:variable name="startPoint">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="$string"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="endPoint">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="substring-after(substring-after(concat($string,$delimiter),$delimiter),$delimiter)"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="startXPos">
					<xsl:call-template name="extractXValue">
						<xsl:with-param name="string" select="$startPoint"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="startYPos">
					<xsl:call-template name="extractYValue">
						<xsl:with-param name="string" select="$startPoint"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="endXPos">
					<xsl:call-template name="extractXValue">
						<xsl:with-param name="string" select="$endPoint"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="endYPos">
					<xsl:call-template name="extractYValue">
						<xsl:with-param name="string" select="$endPoint"/>
					</xsl:call-template>
				</xsl:variable>
                                <!-- Only proceed if sufficient values found -->
                                <xsl:if test="string-length($endYPos) > 0">
                                    <!--
                                    <xsl:message>
                                            <xsl:text>buildLines </xsl:text>
                                            <xsl:value-of select="$index"/>
                                            <xsl:text> startPoint=</xsl:text>
                                            <xsl:value-of select="$startPoint"/>
                                            <xsl:text>, endPoint=</xsl:text>
                                            <xsl:value-of select="$endPoint"/>
                                            <xsl:text>, startXPos=</xsl:text>
                                            <xsl:value-of select="$startXPos"/>
                                            <xsl:text>, startYPos=</xsl:text>
                                            <xsl:value-of select="$startYPos"/>
                                            <xsl:text>, endXPos=</xsl:text>
                                            <xsl:value-of select="$endXPos"/>
                                            <xsl:text>, endYPos=</xsl:text>
                                            <xsl:value-of select="$endYPos"/>
                                            <xsl:text>;</xsl:text>
                                    </xsl:message>
                                    -->
                                    <line id="{concat('line',$index)}"
                                          x1="{$startXPos}"
                                          y1="{$startYPos}"
                                          x2="{$endXPos}"
                                          y2="{$endYPos}"/>
                                    <!-- Recursive call to the same template. 
                                    Note that the current end point is the start point for the next line-->
                                    <xsl:call-template name="buildLines">
                                        <!-- only skip 2 -->
                                        <xsl:with-param name="string" select="substring-after(substring-after(concat($string,$delimiter),$delimiter),$delimiter)"/>
                                        <xsl:with-param name="index" select="$index+1"/>
                                    </xsl:call-template>
                                </xsl:if>
			</xsl:when>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="buildCircles">
		<xsl:param name="string"/>
		<xsl:param name="index" select="1"/>
		<xsl:param name="axisScale" select="100"/>
		<xsl:choose>
			<!-- Nothing to do if empty string -->
			<xsl:when test="not(normalize-space($string))"/>
			<xsl:otherwise>
				<xsl:variable name="point">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="$string"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="xPos">
					<xsl:call-template name="extractXValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="yPos">
					<xsl:call-template name="extractYValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
                                <!--
                                <xsl:message>
                                        <xsl:text>buildCircles </xsl:text>
                                        <xsl:value-of select="$index"/>
                                        <xsl:text> point=</xsl:text>
                                        <xsl:value-of select="$point"/>
                                        <xsl:text>, xPos=</xsl:text>
                                        <xsl:value-of select="$xPos"/>
                                        <xsl:text>, yPos=</xsl:text>
                                        <xsl:value-of select="$yPos"/>
                                        <xsl:text>;</xsl:text>
                                </xsl:message>
                                -->
				<circle id="{concat('marker',$index)}"
                                      cx="{$xPos}"
                                      cy="{$yPos}"
                                       r="{$plotMarkerSize div $axisScale}"
                                      />
				<set xlink:href="{concat('#markerText',$index)}"
                                      attributeType="CSS"
                                      attributeName="visibility"
                                      to="visible"
                                      begin="{concat('marker',$index,'.mouseover')}"
                                      end="{concat('marker',$index,'.mouseout')}"
                                      />
				<!-- Recursive Recursive call to the same template.-->
				<xsl:call-template name="buildCircles">
					<xsl:with-param name="string" select="substring-after(substring-after(concat($string,$delimiter),$delimiter),$delimiter)"/>
					<xsl:with-param name="index" select="$index+1"/>
				</xsl:call-template>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="buildLabels">
		<xsl:param name="string"/>
		<xsl:param name="index" select="1"/>
		<xsl:param name="axisScale" select="100"/>
		<xsl:choose>
			<!-- Nothing to do if empty string -->
			<xsl:when test="not(normalize-space($string))"/>
			<xsl:otherwise>
				<xsl:variable name="point">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="$string"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="xPos">
					<xsl:call-template name="extractXValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="yPos">
					<xsl:call-template name="extractYValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
                                <!--
                                <xsl:message>
                                        <xsl:text>point=</xsl:text>
                                        <xsl:value-of select="$point"/>
                                        <xsl:text>, xPos=</xsl:text>
                                        <xsl:value-of select="$xPos"/>
                                        <xsl:text>, yPos=</xsl:text>
                                        <xsl:value-of select="$yPos"/>
                                        <xsl:text>;</xsl:text>
                                </xsl:message>
                                -->
				<text  id="{concat('markerText',$index)}"
                                        x="{($xPos * $axisScale) + ($plotMarkerSize)}"
                                        y="{0 - ($yPos * $axisScale) - ($plotMarkerSize)}"
                                    >
					<xsl:text>(</xsl:text>
					<xsl:value-of select="$xPos"/>
					<xsl:text>,</xsl:text>
					<xsl:value-of select="$yPos"/>
					<xsl:text>)</xsl:text>
				</text>
				<!-- Recursive Recursive call to the same template, after skipping pair of values-->
				<xsl:call-template name="buildLabels">
					<xsl:with-param name="string" select="substring-after(substring-after(concat($string,$delimiter), $delimiter), $delimiter)"/>
					<xsl:with-param name="index" select="$index+1"/>
				</xsl:call-template>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<!-- Templates for finding the min and max xy coords -->
	<xsl:template name="getMinX">
		<xsl:param name="coords" select="''"/>
		<xsl:param name="minX" select="100000"/>
		<xsl:choose>
			<!-- Output minimum value found so far if empty string -->
			<xsl:when test="not($coords)">
				<xsl:value-of select="$minX"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:variable name="point">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="$coords"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="xPos">
					<xsl:call-template name="extractXValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:choose>
					<xsl:when test="$xPos &lt; $minX">
						<xsl:call-template name="getMinX">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="minX" select="$xPos"/>
						</xsl:call-template>
					</xsl:when>
					<xsl:otherwise>
						<xsl:call-template name="getMinX">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="minX" select="$minX"/>
						</xsl:call-template>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="getMinY">
		<xsl:param name="coords" select="''"/>
		<xsl:param name="minY" select="100000"/>
		<xsl:choose>
			<!-- Output minimum value found so far if empty string -->
			<xsl:when test="not($coords)">
				<xsl:value-of select="$minY"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:variable name="point">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="$coords"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="yPos">
					<xsl:call-template name="extractYValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:choose>
					<xsl:when test="$yPos &lt; $minY">
						<xsl:call-template name="getMinY">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="minY" select="$yPos"/>
						</xsl:call-template>
					</xsl:when>
					<xsl:otherwise>
						<xsl:call-template name="getMinY">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="minY" select="$minY"/>
						</xsl:call-template>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="getMaxX">
		<xsl:param name="coords" select="''"/>
		<xsl:param name="maxX" select="-100000"/>
		<xsl:choose>
			<!-- Output maximum value found so far if empty string -->
			<xsl:when test="not($coords)">
				<xsl:value-of select="$maxX"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:variable name="point">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="$coords"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="xPos">
					<xsl:call-template name="extractXValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:choose>
					<xsl:when test="$xPos &gt; $maxX">
						<xsl:call-template name="getMaxX">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="maxX" select="$xPos"/>
						</xsl:call-template>
					</xsl:when>
					<xsl:otherwise>
						<xsl:call-template name="getMaxX">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="maxX" select="$maxX"/>
						</xsl:call-template>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="getMaxY">
		<xsl:param name="coords" select="''"/>
		<xsl:param name="maxY" select="-100000"/>
		<xsl:choose>
			<!-- Output maximum value found so far if empty string -->
			<xsl:when test="not($coords)">
				<xsl:value-of select="$maxY"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:variable name="point">
					<xsl:call-template name="extractPoint">
						<xsl:with-param name="string" select="$coords"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="yPos">
					<xsl:call-template name="extractYValue">
						<xsl:with-param name="string" select="$point"/>
					</xsl:call-template>
				</xsl:variable>
				<xsl:choose>
					<xsl:when test="$yPos &gt; $maxY">
						<xsl:call-template name="getMaxY">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="maxY" select="$yPos"/>
						</xsl:call-template>
					</xsl:when>
					<xsl:otherwise>
						<xsl:call-template name="getMaxY">
							<xsl:with-param name="coords" select="substring-after($coords, $delimiter)"/>
							<xsl:with-param name="maxY" select="$maxY"/>
						</xsl:call-template>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<!-- Templates for drawing the axes -->
	<xsl:template name="findMinTickPos">
		<xsl:param name="minPos" select="0"/>
		<xsl:param name="currTickPos" select="0"/>
		<xsl:choose>
			<xsl:when test="$currTickPos &lt;= $minPos">
				<xsl:value-of select="$currTickPos + $axisTickInterval"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:call-template name="findMinTickPos">
					<xsl:with-param name="minPos" select="$minPos"/>
					<xsl:with-param name="currTickPos" select="$currTickPos - $axisTickInterval"/>
				</xsl:call-template>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="findMaxTickPos">
		<xsl:param name="maxPos" select="0"/>
		<xsl:param name="currTickPos" select="0"/>
		<xsl:choose>
			<xsl:when test="$currTickPos &gt;= $maxPos">
				<xsl:value-of select="$currTickPos - $axisTickInterval"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:call-template name="findMaxTickPos">
					<xsl:with-param name="maxPos" select="$maxPos"/>
					<xsl:with-param name="currTickPos" select="$currTickPos + $axisTickInterval"/>
				</xsl:call-template>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template name="plotXAxisTicks">
		<xsl:param name="tickPos" select="0"/>
		<xsl:param name="maxXPos" select="0"/>
		<xsl:if test="$tickPos &lt;= $maxXPos">
			<line x1="{$tickPos}" y1="{-1 * $axisTickSize}" x2="{$tickPos}" y2="{$axisTickSize}"/>
			<xsl:call-template name="plotXAxisTicks">
				<xsl:with-param name="tickPos" select="$tickPos + $axisTickInterval"/>
				<xsl:with-param name="maxXPos" select="$maxXPos"/>
			</xsl:call-template>
		</xsl:if>
	</xsl:template>
	
	<xsl:template name="plotYAxisTicks">
		<xsl:param name="tickPos" select="0"/>
		<xsl:param name="maxYPos" select="0"/>
		<xsl:if test="$tickPos &lt;= $maxYPos ">
			<line y1="{$tickPos}" x1="{-1 * $axisTickSize}" y2="{$tickPos}" x2="{$axisTickSize}"/>
			<xsl:call-template name="plotYAxisTicks">
				<xsl:with-param name="tickPos" select="$tickPos + $axisTickInterval"/>
				<xsl:with-param name="maxYPos" select="$maxYPos"/>
			</xsl:call-template>
		</xsl:if>
	</xsl:template>
</xsl:stylesheet>
