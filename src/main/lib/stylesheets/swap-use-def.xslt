<?xml version="1.0" encoding="UTF-8"?>
<!--
  swap-use-def.xsl  (v2 corrected)
  ==================================
  Swaps every USE/DEF node pair where ALL of the following hold:

    1. Both nodes share the same element tag name (local-name).
    2. Both nodes share the same attribute value  (USE="X" vs DEF="X").
    3. The USE node appears BEFORE its DEF partner in document order.
    4. Only the FIRST USE node for a given tag+value triggers the swap.
       Subsequent USE nodes with the same value are left unchanged.

  v2 fixes vs v1
    - Added [1] predicate on $defNode and $useNode so that a multi-node
      set is never passed to xsl:copy-of or xsl:apply-templates when
      duplicate DEF/USE values exist in the document.
    - Simplified the DEF template: because $useNode is already [1]
      (the first match), no separate $earlierUse variable is needed
      inside that template.

  Requires XSLT 1.0.
  Uses the Kaysian method for document-order comparison (no operator).

  Kaysian method
    count(A | B/preceding::*) = count(B/preceding::*)
  is TRUE when A is already a member of B's preceding axis,
  meaning A strictly precedes B in document order.

  Scope note
  The XPath // selectors are document-wide, which is correct when the
  entire input is one unified scene (X3D, SVG, etc.).  Do not wrap
  independent sub-scenes inside a single file; each scene file should
  be transformed separately.
-->
<xsl:stylesheet version="1.0"
  xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <xsl:output method="xml" indent="yes" encoding="UTF-8"/>
  <xsl:strip-space elements="*"/>


  <!-- ============================================================
       1. IDENTITY TRANSFORM
       Copies every node and attribute unchanged unless a more
       specific template overrides it below.
       ============================================================ -->
  <xsl:template match="@* | node()">
    <xsl:copy>
      <xsl:apply-templates select="@* | node()"/>
    </xsl:copy>
  </xsl:template>


  <!-- ============================================================
       2. USE NODE TEMPLATE
       Fires for every element carrying a USE attribute.

       Emits the matching DEF node content here ONLY when:
         (a) a [1] DEF partner with the same tag+value exists
         (b) no other node with the same tag+USE value precedes this
             one, i.e. this is the FIRST USE node for that value
         (c) the DEF partner comes AFTER this node in document order

       Otherwise falls through to the identity copy.

       If an element carries BOTH @USE and @DEF the two templates
       have equal priority (0). XSLT 1.0 treats this as a recoverable
       error; the last template in stylesheet order wins, which is the
       DEF template below. Add explicit priority attributes to change
       that behaviour.
       ============================================================ -->
  <xsl:template match="*[@USE]">
    <xsl:variable name="useVal"  select="string(@USE)"/>
    <xsl:variable name="tagName" select="local-name()"/>

    <!-- First DEF partner: same tag, same value.
         [1] prevents a multi-node set when duplicate DEFs exist. -->
    <xsl:variable name="defNode"
      select="(//*[local-name() = $tagName and @DEF = $useVal])[1]"/>

    <!--
      $hasEarlierUse: is there any node with the same tag+USE value
      that already precedes the current node in document order?

      Kaysian test: count(candidate | current()/preceding::*)
                      = count(current()/preceding::*)
      is TRUE when 'candidate' lives in current()'s preceding axis.
      A node cannot precede itself, so current() is safely excluded.
    -->
    <xsl:variable name="hasEarlierUse"
      select="//*[local-name()  = $tagName
                  and @USE      = $useVal
                  and count(. | current()/preceding::*)
                      = count(current()/preceding::*)]"/>

    <xsl:choose>

      <!-- All three conditions met: emit DEF node content in this slot -->
      <xsl:when test="$defNode
                      and not($hasEarlierUse)
                      and count(. | $defNode/preceding::*)
                          = count($defNode/preceding::*)">
        <xsl:element name="{$tagName}">
          <xsl:copy-of  select="$defNode/@*"/>
          <xsl:apply-templates select="$defNode/node()"/>
        </xsl:element>
      </xsl:when>

      <!-- Conditions not met: copy this node unchanged -->
      <xsl:otherwise>
        <xsl:copy>
          <xsl:apply-templates select="@* | node()"/>
        </xsl:copy>
      </xsl:otherwise>

    </xsl:choose>
  </xsl:template>


  <!-- ============================================================
       3. DEF NODE TEMPLATE
       Fires for every element carrying a DEF attribute.

       Emits the matching USE node content here ONLY when:
         (a) the [1] USE partner with the same tag+value exists
         (b) that USE partner came BEFORE this node in document order

       Selecting [1] automatically picks the earliest USE node so no
       separate "is this the first?" check is required here.

       Otherwise falls through to the identity copy.
       ============================================================ -->
  <xsl:template match="*[@DEF]">
    <xsl:variable name="defVal"  select="string(@DEF)"/>
    <xsl:variable name="tagName" select="local-name()"/>

    <!-- First USE partner: same tag, same value.
         [1] picks the earliest USE and avoids a multi-node set. -->
    <xsl:variable name="useNode"
      select="(//*[local-name() = $tagName and @USE = $defVal])[1]"/>

    <xsl:choose>

      <!-- USE partner exists and precedes this DEF node -->
      <xsl:when test="$useNode
                      and count($useNode | preceding::*)
                          = count(preceding::*)">
        <xsl:element name="{$tagName}">
          <xsl:copy-of  select="$useNode/@*"/>
          <xsl:apply-templates select="$useNode/node()"/>
        </xsl:element>
      </xsl:when>

      <!-- Conditions not met: copy this node unchanged -->
      <xsl:otherwise>
        <xsl:copy>
          <xsl:apply-templates select="@* | node()"/>
        </xsl:copy>
      </xsl:otherwise>

    </xsl:choose>
  </xsl:template>

</xsl:stylesheet>
