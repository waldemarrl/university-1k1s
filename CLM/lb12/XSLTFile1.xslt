<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="list">
  <xsl:copy>
    <xsl:for-each select="person">
      <xsl:sort select="name" order="descending" />
      <xsl:copy-of select="." />
    </xsl:for-each>
  </xsl:copy>
</xsl:template>
</xsl:stylesheet>
