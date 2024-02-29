<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<head>
				<title>Табель успеваемости студентов</title>
				<style>
					h1{
					margin: 0 0 20 200px;
					}
				</style>
			</head>

			<body>
				<h1>
					Табель успеваемости студентов
				</h1>
				<table border="1">
					<tr bgcolor="lightblue">
						<th>Name</th>
						<th>Math</th>
						<th>Phys</th>
						<th>IT</th>
                    </tr>
					<xsl:for-each select="ALL/STUDENTS/STUDENT">
						<xsl:sort select="NAME" order="ascending"/>
						<tr bgcolor="cyan">
							<td>
								<xsl:value-of select="NAME"/>
							</td>
								<xsl:choose>
									<xsl:when test="MATH &gt; 8">
										<td bgcolor="green">
											<xsl:value-of select="MATH"/>
										</td>
									</xsl:when>
									<xsl:when test="MATH &lt; 4">
										<td bgcolor="red">
											<xsl:value-of select="MATH"/>
										</td>
									</xsl:when>
									<xsl:otherwise>
										<td bgcolor="orange">
											<xsl:value-of select="MATH"/>
										</td>
									</xsl:otherwise>
								</xsl:choose>
							<xsl:choose>
								<xsl:when test="PHYS &gt; 8">
									<td bgcolor="green">
										<xsl:value-of select="PHYS"/>
									</td>
								</xsl:when>
								<xsl:when test="PHYS &lt; 4">
									<td bgcolor="red">
										<xsl:value-of select="PHYS"/>
									</td>
								</xsl:when>
								<xsl:otherwise>
									<td bgcolor="orange">
										<xsl:value-of select="PHYS"/>
									</td>
								</xsl:otherwise>
							</xsl:choose>
							<xsl:choose>
								<xsl:when test="IT &gt; 8">
									<td bgcolor="green">
										<xsl:value-of select="IT"/>
									</td>
								</xsl:when>
								<xsl:when test="IT &lt; 4">
									<td bgcolor="red">
										<xsl:value-of select="IT"/>
									</td>
								</xsl:when>
								<xsl:otherwise>
									<td bgcolor="orange">
										<xsl:value-of select="IT"/>
									</td>
								</xsl:otherwise>
							</xsl:choose>
						</tr>
						
					</xsl:for-each>
				</table>
			</body>
		</html>


	</xsl:template>
</xsl:stylesheet>