<?xml version="1.0" encoding="UTF-8"?>
<!--
  swap-use-def.xsl  (v4)
  ==================================
  Invariant guaranteed in the output:
    For every value X, the element with DEF="X" precedes all elements
    with USE="X" in document order, and every USE="X" element carries
    ONLY the USE attribute (plus containerField if present).  All other
    attributes on a USE node are spurious and are removed.

  Three cases are handled for any element carrying @USE:

    A. DEF="X" already precedes USE="X"
         The USE element is rewritten with only @USE (and @containerField
         if present).  All other attributes are stripped.

    B. USE="X" precedes DEF="X"  (first such USE only)
         The two nodes are swapped: the DEF node's content is emitted at
         the USE position and the USE node's content is emitted at the
         DEF position.  After the swap DEF is at the earliest position,
         satisfying the invariant.

    C. Everything else (duplicate USE, no DEF partner, etc.)
         Identity copy — node is left unchanged.

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

       Case A — DEF partner exists and precedes this USE:
         Emit a clean element with ONLY @USE and @containerField.
         All other attributes are stripped (they are spurious copies
         of the DEF node's data that must not appear on a USE node).

       Case B — This USE precedes its DEF partner (first such USE only):
         Emit the DEF node's content here so that after the paired
         DEF template fires, DEF will occupy the earlier position.

       Case C — All other situations:
         Identity copy (duplicate USE, no DEF partner, etc.).

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
      $defPrecedesUse: is the DEF partner earlier in document order
      than the current USE node?

      Kaysian test: count($defNode | preceding::*)
                      = count(preceding::*)
      is TRUE when $defNode lives in the current node's preceding axis.
    -->
    <xsl:variable name="defPrecedesUse"
      select="boolean($defNode and
                      count($defNode | preceding::*)
                          = count(preceding::*))"/>

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

      <!-- Case A: DEF precedes USE — emit a clean USE-only element.
           @containerField is preserved because it controls where this
           node sits in the parent's field list, not what it references. -->
      <xsl:when test="$defPrecedesUse">
        <xsl:element name="{$tagName}">
          <xsl:copy-of select="@USE"/>
          <xsl:if test="@containerField">
            <xsl:copy-of select="@containerField"/>
          </xsl:if>
        </xsl:element>
      </xsl:when>

      <!-- Case B: USE precedes DEF (first occurrence) — emit DEF content
           here so DEF occupies the earliest position after the swap. -->
      <xsl:when test="$defNode
                      and not($hasEarlierUse)
                      and count(. | $defNode/preceding::*)
                          = count($defNode/preceding::*)">
        <xsl:element name="{$tagName}">
          <xsl:copy-of select="$defNode/@*"/>
          <xsl:apply-templates select="$defNode/node()"/>
        </xsl:element>
      </xsl:when>

      <!-- Case C: identity copy -->
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

       When the [1] USE partner exists and precedes this DEF node
       (Case B swap), emit the USE node's content here.

       When DEF already precedes USE (Case A), this node is copied
       unchanged: it is already in the correct position.
       ============================================================ -->
  <xsl:template match="*[@DEF]">
    <xsl:variable name="defVal"  select="string(@DEF)"/>
    <xsl:variable name="tagName" select="local-name()"/>

    <!-- First USE partner: same tag, same value.
         [1] picks the earliest USE and avoids a multi-node set. -->
    <xsl:variable name="useNode"
      select="(//*[local-name() = $tagName and @USE = $defVal])[1]"/>

    <xsl:choose>

      <!-- USE partner exists and precedes this DEF node (Case B):
           emit USE content here to complete the swap. -->
      <xsl:when test="$useNode
                      and count($useNode | preceding::*)
                          = count(preceding::*)">
        <xsl:element name="{$tagName}">
          <xsl:copy-of select="$useNode/@*"/>
          <xsl:apply-templates select="$useNode/node()"/>
        </xsl:element>
      </xsl:when>

      <!-- DEF already precedes USE (Case A), or no USE partner:
           copy unchanged. -->
      <xsl:otherwise>
        <xsl:copy>
          <xsl:apply-templates select="@* | node()"/>
        </xsl:copy>
      </xsl:otherwise>

    </xsl:choose>
  </xsl:template>

</xsl:stylesheet>
