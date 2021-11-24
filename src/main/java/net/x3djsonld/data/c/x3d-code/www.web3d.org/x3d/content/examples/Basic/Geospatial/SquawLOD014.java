package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> ESRI GeoVRML export subscene of Squaw Valley California USA. </p>
 <p> Related links: <a href="../../../Geospatial/SquawLOD014.java">SquawLOD014.java</a> source, <a href="../../../Geospatial/SquawLOD014Index.html" target="_top">SquawLOD014 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/SquawLOD014.x3d">SquawLOD014.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> ESRI GeoVRML export subscene of Squaw Valley California USA. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Salvador Bayarri, ESRI </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 22 April 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.geovrml.org/examples" target="_blank">http://www.geovrml.org/examples</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D geospatial example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD014.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD014.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Geospatial/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Salvador Bayarri, ESRI
 */

public class SquawLOD014
{
	/** Default constructor to create this object. */
	public SquawLOD014 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SquawLOD014.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("ESRI GeoVRML export subscene of Squaw Valley California USA."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Salvador Bayarri, ESRI"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("22 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/examples"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D geospatial example"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD014.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SquawLOD014.x3d"))
    .addChild(new GeoLOD().setCenter(4342525.411173,740603.999947,2002.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(16133.333).setChild1Url(new String[] {"SquawLOD015.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD015.x3d"})
      .setGeoOrigin(new GeoOrigin("ORIGIN").setGeoCoords(4342525.5,740604.0,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setRotateYUp(true))
      .addRootNode(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
          .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw007.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw007.jpg"})))
        .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4341718.744506,739994.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(25).setXSpacing(50.750000).setZDimension(33).setZSpacing(50.416667).setHeight(getGeoElevationGrid_5_20_height())
          .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
          .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_6_21_point()))))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_5_20_height_1()
		{
			double[] value = {2022.2698,2026.6069,2038.6284,2048.0354,2058.314,2065.4639,2074.064,2072.0552,2060.424,2060.6135,2077.657,2095.0415,2105.3855,2113.0557,2112.8523,2109.6177,2101.1816,2090.9932,2077.5215,2062.364,2052.143,2049.8716,2047.0251,2037.2216,2022.9431,2002.825,2014.6218,2026.875,2033.825,2036.5,2045.9313,2055.6562,2055.9219,2047.9375,2047.375,2066.7563,2081.225,2084.625,2101.6,2114.5562,2118.525,2110.2375,2098.0781,2084.4688,2066.8843,2058.275,2055.1594,2051.125,2041.5032,2028.175,1988.4584,1996.5083,2003.9166,2010.7417,2009.7667,2022.7583,2030.4625,2032.4166,2028.7167,2039.6979,2054.7876,2068.1,2076.1667,2090.473,2109.6833,2123.4958,2119.9333,2104.7917,2089.529,2072.302,2066.2334,2061.2417,2052.6667,2042.35,2029.3,1969.4083,1975.3417,1981.4166,1987.4917,1988.9917,1997.6833,2004.2084,2006.2084,2007.825,2025.45,2041.7104,2059.7031,2077.9583,2093.2551,2108.45,2121.4822,2125.3584,2112.7917,2096.6084,2085.3699,2077.275,2069.5667,2059.4167,2047.2667,2036.0792};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_2()
		{
			double[] value = {1945.2,1952.175,1957.25,1961.0,1968.8,1973.475,1977.0,1979.0,1993.1,2009.1,2032.4,2057.625,2078.0,2095.15,2107.45,2121.45,2129.0,2122.625,2110.1,2099.95,2091.8,2081.65,2068.75,2058.35,2047.2,1925.9333,1930.05,1934.0834,1937.4833,1945.2333,1948.2886,1949.898,1960.5938,1978.0458,1999.7916,2024.3104,2048.5,2070.875,2084.1416,2098.223,2113.5916,2124.2583,2127.573,2121.1375,2112.0134,2104.4834,2095.775,2083.625,2069.475,2058.325,1907.9333,1911.7645,1914.75,1919.0188,1926.0667,1929.225,1940.9791,1953.7084,1967.9333,1985.85,2008.9166,2032.45,2053.6667,2071.898,2088.4333,2104.2834,2114.05,2118.0938,2120.6667,2116.8271,2112.4834,2107.4917,2097.6667,2084.775,2071.4666,1896.9625,1898.9031,1901.125,1908.2,1911.8,1917.175,1931.85,1943.0,1953.025,1967.725,1989.9812,2015.1344,2035.625,2052.8,2077.4812,2093.397,2099.625,2101.625,2102.625,2105.7344,2111.475,2112.45,2106.625,2097.475,2084.55};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_3()
		{
			double[] value = {1888.85,1888.0,1894.3334,1903.1583,1905.8334,1910.0542,1920.225,1930.9166,1938.95,1956.4708,1974.9,1994.0333,2016.3334,2036.8,2063.5417,2079.95,2083.75,2085.3333,2085.875,2091.55,2100.7,2109.175,2110.25,2103.204,2094.6167,1885.7916,1886.175,1888.8438,1894.3739,1898.9833,1900.2667,1909.1188,1919.8334,1929.6833,1943.9083,1959.775,1975.225,1999.5834,2023.0177,2049.2124,2064.6,2067.375,2067.0364,2066.9583,2071.0083,2080.2417,2090.3083,2097.7083,2098.5833,2098.1,1883.0,1884.7937,1887.0,1888.75,1889.75,1894.225,1899.3,1908.6562,1919.65,1933.85,1950.9375,1968.2,1988.25,2009.8562,2033.45,2046.225,2049.775,2050.3438,2049.25,2050.1687,2058.3,2065.425,2070.75,2076.9438,2084.65,1882.0,1883.1239,1885.1771,1886.7084,1887.7084,1889.0,1892.2583,1899.9584,1912.1083,1924.9667,1938.9667,1955.9,1976.125,1997.0802,2015.2833,2026.35,2028.8334,2036.7916,2038.4166,2037.125,2038.4333,2045.1833,2051.4062,2058.775,2066.2876};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_4()
		{
			double[] value = {1882.0,1882.175,1884.0,1885.0,1885.8,1886.0,1887.0,1896.5,1907.6,1913.4417,1926.9833,1943.0333,1961.3334,1978.275,1993.6333,2001.8917,2005.4333,2016.2084,2022.45,2022.3334,2020.1333,2021.7916,2031.1666,2041.475,2055.1,1882.0,1882.0,1883.0,1883.0,1883.775,1883.625,1886.55,1901.3906,1906.4375,1905.7344,1913.8562,1931.6031,1950.25,1964.0531,1973.65,1979.2094,1982.9125,1996.625,2006.325,2009.875,2008.65,2006.5032,2009.375,2023.8,2042.475,1882.0,1882.0,1882.0,1882.1896,1883.0,1883.1979,1886.55,1901.4688,1902.175,1897.5834,1906.7792,1920.9417,1938.1666,1952.2417,1955.8375,1957.3334,1963.1083,1977.3438,1985.9125,1996.4938,1997.5834,1997.5834,1999.9166,2006.7438,2025.35,1882.0,1882.0,1882.0,1882.0,1882.4,1884.7594,1887.55,1891.7084,1892.0625,1888.5416,1897.6333,1910.4343,1925.625,1935.7,1940.475,1938.625,1947.225,1960.2084,1972.4417,1987.0667,1991.325,1992.5416,1994.2916,1997.3667,2011.6833};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_5()
		{
			double[] value = {1882.0,1882.0,1882.0,1882.0,1882.0,1884.475,1887.0,1888.0,1887.5,1888.0,1890.275,1901.8125,1912.0,1921.1125,1925.0,1926.0,1935.25,1948.625,1965.575,1977.025,1985.6,1987.5,1988.375,1990.825,1999.75,1883.9542,1882.0,1882.0,1882.0,1882.0,1883.0,1884.7562,1885.4584,1885.4584,1886.8782,1888.3895,1894.1907,1904.4584,1910.5333,1914.0667,1916.6,1924.5167,1938.0416,1950.725,1964.7261,1969.9166,1968.9667,1971.2916,1976.0365,1986.2208,1885.0,1883.0,1882.4375,1882.0,1882.0,1882.1979,1882.4166,1883.0,1884.0,1885.4166,1886.9125,1888.0,1894.25,1903.4917,1906.4166,1908.5104,1915.1417,1924.7396,1937.9208,1950.825,1964.0167,1957.9313,1951.25,1958.1417,1969.675,1884.0,1884.0,1883.75,1883.0,1882.0,1881.0,1881.0,1882.0,1883.0,1883.8594,1884.9062,1886.9531,1889.0,1894.825,1897.9,1899.4594,1904.4625,1914.5,1924.8187,1939.325,1951.7,1956.8219,1947.25,1947.375,1953.3};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_6()
		{
			double[] value = {1885.6,1884.55,1883.9166,1883.0,1882.4,1882.0,1881.0,1881.0,1881.0,1882.0,1883.2833,1885.925,1888.0,1889.0,1890.3334,1890.6666,1896.2667,1905.4166,1913.5667,1925.8917,1938.8,1951.0083,1944.8334,1939.3917,1942.5667,1886.9708,1885.0,1884.0,1883.675,1883.0,1882.0,1882.0,1881.0,1881.0,1881.0,1882.85,1884.925,1886.2916,1887.0,1887.2916,1888.0,1889.0875,1895.9584,1904.352,1913.2615,1923.3667,1935.5167,1938.8334,1934.4156,1934.5542,1887.675,1886.0,1885.0,1884.0,1883.0,1882.0,1882.0,1881.2812,1881.0,1881.0,1882.0,1883.0,1884.25,1885.25,1885.2125,1886.0563,1887.075,1889.0,1892.95,1899.275,1905.1,1919.775,1928.0625,1929.25,1928.25,1888.9791,1887.9635,1886.0,1885.0,1883.7916,1883.0,1883.0,1882.0,1881.0,1881.0,1881.0,1882.0,1883.0,1883.0,1884.0,1885.0,1886.0,1887.0,1888.0,1888.2084,1891.825,1903.7177,1914.3334,1920.6583,1919.4375};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_7()
		{
			double[] value = {1893.6333,1888.0,1887.0,1885.675,1884.9333,1883.9208,1883.0,1882.0,1881.0,1881.0,1881.0,1881.1666,1881.0,1882.0,1883.0,1883.0,1884.0,1885.0,1886.0,1886.0875,1887.1,1888.1666,1894.1666,1903.325,1903.7667,1897.6625,1889.0,1888.0,1887.0,1886.525,1885.875,1884.9437,1883.3281,1882.2625,1881.0,1881.0,1881.0,1881.0,1881.0,1881.125,1882.0,1882.125,1883.0,1883.0563,1883.125,1884.125,1886.0,1887.0,1888.125,1888.125,1903.9083,1900.6438,1893.5834,1889.0,1888.0,1887.0,1886.0,1885.0,1883.9166,1882.2063,1881.0,1881.0,1881.0,1881.0,1881.0,1881.0,1881.0,1881.0,1881.0,1881.0834,1882.0,1883.0,1884.0625,1885.0687,1886.0,1909.8583,1905.7906,1900.4584,1892.6198,1889.9584,1888.9802,1887.977,1887.0,1886.0,1884.9677,1883.0,1882.0719,1881.9584,1881.0,1881.0,1881.0,1880.0,1880.0,1880.0,1880.0,1880.0,1880.0416,1881.0416,1882.8323,1883.0375};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_8()
		{
			double[] value = {1917.8,1910.65,1902.5,1901.0,1900.6,1896.525,1890.45,1888.375,1888.0,1887.225,1886.0,1885.0,1884.0,1883.0,1882.0,1882.0,1882.0,1881.0,1880.0,1880.0,1880.0,1880.0,1880.0,1880.825,1881.0,1925.8833,1918.7823,1915.125,1914.125,1912.1083,1908.6698,1903.5938,1899.151,1903.0958,1898.6073,1889.0604,1887.1135,1886.0416,1885.0,1884.0416,1883.7844,1883.7125,1883.0,1882.0,1881.0198,1880.0,1879.0281,1879.0,1879.7906,1879.9584,1939.2333,1935.1438,1930.3334,1930.0354,1928.9333,1923.775,1918.6542,1917.8438,1918.275,1911.6813,1903.4667,1889.0188,1887.0,1886.0834,1886.0,1885.0,1884.0834,1883.625,1883.0,1882.5188,1881.4,1880.0,1878.0,1877.9166,1877.9166,1964.525,1957.275,1951.75,1953.5,1949.15,1936.175,1927.575,1921.1719,1925.9625,1918.9688,1914.2562,1898.55,1889.125,1887.9343,1886.8688,1886.0969,1885.7375,1885.0469,1884.125,1883.5406,1882.05,1880.0406,1879.0,1877.2781,1876.0125};
			return value;
		}
		private double[] getGeoElevationGrid_5_20_height_9()
		{
			double[] value = {1987.8167,1981.3167,1973.9166,1973.9042,1962.3,1949.1167,1933.0667,1924.4791,1922.0,1919.3917,1917.4584,1911.575,1901.5,1890.4,1888.1666,1888.0,1887.75,1887.0,1886.1666,1885.5625,1883.4,1882.0,1880.375,1879.3125,1878.1666};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_6_21_point_1()
		{
			double[] value = {0.00391,0.00391,0.04167,0.00391,0.08333,0.00391,0.125,0.00391,0.16667,0.00391,0.20833,0.00391,0.25,0.00391,0.29167,0.00391,0.33333,0.00391,0.375,0.00391,0.41667,0.00391,0.45833,0.00391,0.5,0.00391,0.54167,0.00391,0.58333,0.00391,0.625,0.00391,0.66667,0.00391,0.70833,0.00391,0.75,0.00391,0.79167,0.00391,0.83333,0.00391,0.875,0.00391,0.91667,0.00391,0.95833,0.00391,0.99609,0.00391,0.00391,0.03125,0.04167,0.03125,0.08333,0.03125,0.125,0.03125,0.16667,0.03125,0.20833,0.03125,0.25,0.03125,0.29167,0.03125,0.33333,0.03125,0.375,0.03125,0.41667,0.03125,0.45833,0.03125,0.5,0.03125,0.54167,0.03125,0.58333,0.03125,0.625,0.03125,0.66667,0.03125,0.70833,0.03125,0.75,0.03125,0.79167,0.03125,0.83333,0.03125,0.875,0.03125,0.91667,0.03125,0.95833,0.03125,0.99609,0.03125,0.00391,0.0625,0.04167,0.0625,0.08333,0.0625,0.125,0.0625,0.16667,0.0625,0.20833,0.0625,0.25,0.0625,0.29167,0.0625,0.33333,0.0625,0.375,0.0625,0.41667,0.0625,0.45833,0.0625,0.5,0.0625,0.54167,0.0625,0.58333,0.0625,0.625,0.0625,0.66667,0.0625,0.70833,0.0625,0.75,0.0625,0.79167,0.0625,0.83333,0.0625,0.875,0.0625,0.91667,0.0625,0.95833,0.0625,0.99609,0.0625,0.00391,0.09375,0.04167,0.09375,0.08333,0.09375,0.125,0.09375,0.16667,0.09375,0.20833,0.09375,0.25,0.09375,0.29167,0.09375,0.33333,0.09375,0.375,0.09375,0.41667,0.09375,0.45833,0.09375,0.5,0.09375,0.54167,0.09375,0.58333,0.09375,0.625,0.09375,0.66667,0.09375,0.70833,0.09375,0.75,0.09375,0.79167,0.09375,0.83333,0.09375,0.875,0.09375,0.91667,0.09375,0.95833,0.09375,0.99609,0.09375};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_2()
		{
			double[] value = {0.00391,0.125,0.04167,0.125,0.08333,0.125,0.125,0.125,0.16667,0.125,0.20833,0.125,0.25,0.125,0.29167,0.125,0.33333,0.125,0.375,0.125,0.41667,0.125,0.45833,0.125,0.5,0.125,0.54167,0.125,0.58333,0.125,0.625,0.125,0.66667,0.125,0.70833,0.125,0.75,0.125,0.79167,0.125,0.83333,0.125,0.875,0.125,0.91667,0.125,0.95833,0.125,0.99609,0.125,0.00391,0.15625,0.04167,0.15625,0.08333,0.15625,0.125,0.15625,0.16667,0.15625,0.20833,0.15625,0.25,0.15625,0.29167,0.15625,0.33333,0.15625,0.375,0.15625,0.41667,0.15625,0.45833,0.15625,0.5,0.15625,0.54167,0.15625,0.58333,0.15625,0.625,0.15625,0.66667,0.15625,0.70833,0.15625,0.75,0.15625,0.79167,0.15625,0.83333,0.15625,0.875,0.15625,0.91667,0.15625,0.95833,0.15625,0.99609,0.15625,0.00391,0.1875,0.04167,0.1875,0.08333,0.1875,0.125,0.1875,0.16667,0.1875,0.20833,0.1875,0.25,0.1875,0.29167,0.1875,0.33333,0.1875,0.375,0.1875,0.41667,0.1875,0.45833,0.1875,0.5,0.1875,0.54167,0.1875,0.58333,0.1875,0.625,0.1875,0.66667,0.1875,0.70833,0.1875,0.75,0.1875,0.79167,0.1875,0.83333,0.1875,0.875,0.1875,0.91667,0.1875,0.95833,0.1875,0.99609,0.1875,0.00391,0.21875,0.04167,0.21875,0.08333,0.21875,0.125,0.21875,0.16667,0.21875,0.20833,0.21875,0.25,0.21875,0.29167,0.21875,0.33333,0.21875,0.375,0.21875,0.41667,0.21875,0.45833,0.21875,0.5,0.21875,0.54167,0.21875,0.58333,0.21875,0.625,0.21875,0.66667,0.21875,0.70833,0.21875,0.75,0.21875,0.79167,0.21875,0.83333,0.21875,0.875,0.21875,0.91667,0.21875,0.95833,0.21875,0.99609,0.21875};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_3()
		{
			double[] value = {0.00391,0.25,0.04167,0.25,0.08333,0.25,0.125,0.25,0.16667,0.25,0.20833,0.25,0.25,0.25,0.29167,0.25,0.33333,0.25,0.375,0.25,0.41667,0.25,0.45833,0.25,0.5,0.25,0.54167,0.25,0.58333,0.25,0.625,0.25,0.66667,0.25,0.70833,0.25,0.75,0.25,0.79167,0.25,0.83333,0.25,0.875,0.25,0.91667,0.25,0.95833,0.25,0.99609,0.25,0.00391,0.28125,0.04167,0.28125,0.08333,0.28125,0.125,0.28125,0.16667,0.28125,0.20833,0.28125,0.25,0.28125,0.29167,0.28125,0.33333,0.28125,0.375,0.28125,0.41667,0.28125,0.45833,0.28125,0.5,0.28125,0.54167,0.28125,0.58333,0.28125,0.625,0.28125,0.66667,0.28125,0.70833,0.28125,0.75,0.28125,0.79167,0.28125,0.83333,0.28125,0.875,0.28125,0.91667,0.28125,0.95833,0.28125,0.99609,0.28125,0.00391,0.3125,0.04167,0.3125,0.08333,0.3125,0.125,0.3125,0.16667,0.3125,0.20833,0.3125,0.25,0.3125,0.29167,0.3125,0.33333,0.3125,0.375,0.3125,0.41667,0.3125,0.45833,0.3125,0.5,0.3125,0.54167,0.3125,0.58333,0.3125,0.625,0.3125,0.66667,0.3125,0.70833,0.3125,0.75,0.3125,0.79167,0.3125,0.83333,0.3125,0.875,0.3125,0.91667,0.3125,0.95833,0.3125,0.99609,0.3125,0.00391,0.34375,0.04167,0.34375,0.08333,0.34375,0.125,0.34375,0.16667,0.34375,0.20833,0.34375,0.25,0.34375,0.29167,0.34375,0.33333,0.34375,0.375,0.34375,0.41667,0.34375,0.45833,0.34375,0.5,0.34375,0.54167,0.34375,0.58333,0.34375,0.625,0.34375,0.66667,0.34375,0.70833,0.34375,0.75,0.34375,0.79167,0.34375,0.83333,0.34375,0.875,0.34375,0.91667,0.34375,0.95833,0.34375,0.99609,0.34375};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_4()
		{
			double[] value = {0.00391,0.375,0.04167,0.375,0.08333,0.375,0.125,0.375,0.16667,0.375,0.20833,0.375,0.25,0.375,0.29167,0.375,0.33333,0.375,0.375,0.375,0.41667,0.375,0.45833,0.375,0.5,0.375,0.54167,0.375,0.58333,0.375,0.625,0.375,0.66667,0.375,0.70833,0.375,0.75,0.375,0.79167,0.375,0.83333,0.375,0.875,0.375,0.91667,0.375,0.95833,0.375,0.99609,0.375,0.00391,0.40625,0.04167,0.40625,0.08333,0.40625,0.125,0.40625,0.16667,0.40625,0.20833,0.40625,0.25,0.40625,0.29167,0.40625,0.33333,0.40625,0.375,0.40625,0.41667,0.40625,0.45833,0.40625,0.5,0.40625,0.54167,0.40625,0.58333,0.40625,0.625,0.40625,0.66667,0.40625,0.70833,0.40625,0.75,0.40625,0.79167,0.40625,0.83333,0.40625,0.875,0.40625,0.91667,0.40625,0.95833,0.40625,0.99609,0.40625,0.00391,0.4375,0.04167,0.4375,0.08333,0.4375,0.125,0.4375,0.16667,0.4375,0.20833,0.4375,0.25,0.4375,0.29167,0.4375,0.33333,0.4375,0.375,0.4375,0.41667,0.4375,0.45833,0.4375,0.5,0.4375,0.54167,0.4375,0.58333,0.4375,0.625,0.4375,0.66667,0.4375,0.70833,0.4375,0.75,0.4375,0.79167,0.4375,0.83333,0.4375,0.875,0.4375,0.91667,0.4375,0.95833,0.4375,0.99609,0.4375,0.00391,0.46875,0.04167,0.46875,0.08333,0.46875,0.125,0.46875,0.16667,0.46875,0.20833,0.46875,0.25,0.46875,0.29167,0.46875,0.33333,0.46875,0.375,0.46875,0.41667,0.46875,0.45833,0.46875,0.5,0.46875,0.54167,0.46875,0.58333,0.46875,0.625,0.46875,0.66667,0.46875,0.70833,0.46875,0.75,0.46875,0.79167,0.46875,0.83333,0.46875,0.875,0.46875,0.91667,0.46875,0.95833,0.46875,0.99609,0.46875};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_5()
		{
			double[] value = {0.00391,0.5,0.04167,0.5,0.08333,0.5,0.125,0.5,0.16667,0.5,0.20833,0.5,0.25,0.5,0.29167,0.5,0.33333,0.5,0.375,0.5,0.41667,0.5,0.45833,0.5,0.5,0.5,0.54167,0.5,0.58333,0.5,0.625,0.5,0.66667,0.5,0.70833,0.5,0.75,0.5,0.79167,0.5,0.83333,0.5,0.875,0.5,0.91667,0.5,0.95833,0.5,0.99609,0.5,0.00391,0.53125,0.04167,0.53125,0.08333,0.53125,0.125,0.53125,0.16667,0.53125,0.20833,0.53125,0.25,0.53125,0.29167,0.53125,0.33333,0.53125,0.375,0.53125,0.41667,0.53125,0.45833,0.53125,0.5,0.53125,0.54167,0.53125,0.58333,0.53125,0.625,0.53125,0.66667,0.53125,0.70833,0.53125,0.75,0.53125,0.79167,0.53125,0.83333,0.53125,0.875,0.53125,0.91667,0.53125,0.95833,0.53125,0.99609,0.53125,0.00391,0.5625,0.04167,0.5625,0.08333,0.5625,0.125,0.5625,0.16667,0.5625,0.20833,0.5625,0.25,0.5625,0.29167,0.5625,0.33333,0.5625,0.375,0.5625,0.41667,0.5625,0.45833,0.5625,0.5,0.5625,0.54167,0.5625,0.58333,0.5625,0.625,0.5625,0.66667,0.5625,0.70833,0.5625,0.75,0.5625,0.79167,0.5625,0.83333,0.5625,0.875,0.5625,0.91667,0.5625,0.95833,0.5625,0.99609,0.5625,0.00391,0.59375,0.04167,0.59375,0.08333,0.59375,0.125,0.59375,0.16667,0.59375,0.20833,0.59375,0.25,0.59375,0.29167,0.59375,0.33333,0.59375,0.375,0.59375,0.41667,0.59375,0.45833,0.59375,0.5,0.59375,0.54167,0.59375,0.58333,0.59375,0.625,0.59375,0.66667,0.59375,0.70833,0.59375,0.75,0.59375,0.79167,0.59375,0.83333,0.59375,0.875,0.59375,0.91667,0.59375,0.95833,0.59375,0.99609,0.59375};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_6()
		{
			double[] value = {0.00391,0.625,0.04167,0.625,0.08333,0.625,0.125,0.625,0.16667,0.625,0.20833,0.625,0.25,0.625,0.29167,0.625,0.33333,0.625,0.375,0.625,0.41667,0.625,0.45833,0.625,0.5,0.625,0.54167,0.625,0.58333,0.625,0.625,0.625,0.66667,0.625,0.70833,0.625,0.75,0.625,0.79167,0.625,0.83333,0.625,0.875,0.625,0.91667,0.625,0.95833,0.625,0.99609,0.625,0.00391,0.65625,0.04167,0.65625,0.08333,0.65625,0.125,0.65625,0.16667,0.65625,0.20833,0.65625,0.25,0.65625,0.29167,0.65625,0.33333,0.65625,0.375,0.65625,0.41667,0.65625,0.45833,0.65625,0.5,0.65625,0.54167,0.65625,0.58333,0.65625,0.625,0.65625,0.66667,0.65625,0.70833,0.65625,0.75,0.65625,0.79167,0.65625,0.83333,0.65625,0.875,0.65625,0.91667,0.65625,0.95833,0.65625,0.99609,0.65625,0.00391,0.6875,0.04167,0.6875,0.08333,0.6875,0.125,0.6875,0.16667,0.6875,0.20833,0.6875,0.25,0.6875,0.29167,0.6875,0.33333,0.6875,0.375,0.6875,0.41667,0.6875,0.45833,0.6875,0.5,0.6875,0.54167,0.6875,0.58333,0.6875,0.625,0.6875,0.66667,0.6875,0.70833,0.6875,0.75,0.6875,0.79167,0.6875,0.83333,0.6875,0.875,0.6875,0.91667,0.6875,0.95833,0.6875,0.99609,0.6875,0.00391,0.71875,0.04167,0.71875,0.08333,0.71875,0.125,0.71875,0.16667,0.71875,0.20833,0.71875,0.25,0.71875,0.29167,0.71875,0.33333,0.71875,0.375,0.71875,0.41667,0.71875,0.45833,0.71875,0.5,0.71875,0.54167,0.71875,0.58333,0.71875,0.625,0.71875,0.66667,0.71875,0.70833,0.71875,0.75,0.71875,0.79167,0.71875,0.83333,0.71875,0.875,0.71875,0.91667,0.71875,0.95833,0.71875,0.99609,0.71875};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_7()
		{
			double[] value = {0.00391,0.75,0.04167,0.75,0.08333,0.75,0.125,0.75,0.16667,0.75,0.20833,0.75,0.25,0.75,0.29167,0.75,0.33333,0.75,0.375,0.75,0.41667,0.75,0.45833,0.75,0.5,0.75,0.54167,0.75,0.58333,0.75,0.625,0.75,0.66667,0.75,0.70833,0.75,0.75,0.75,0.79167,0.75,0.83333,0.75,0.875,0.75,0.91667,0.75,0.95833,0.75,0.99609,0.75,0.00391,0.78125,0.04167,0.78125,0.08333,0.78125,0.125,0.78125,0.16667,0.78125,0.20833,0.78125,0.25,0.78125,0.29167,0.78125,0.33333,0.78125,0.375,0.78125,0.41667,0.78125,0.45833,0.78125,0.5,0.78125,0.54167,0.78125,0.58333,0.78125,0.625,0.78125,0.66667,0.78125,0.70833,0.78125,0.75,0.78125,0.79167,0.78125,0.83333,0.78125,0.875,0.78125,0.91667,0.78125,0.95833,0.78125,0.99609,0.78125,0.00391,0.8125,0.04167,0.8125,0.08333,0.8125,0.125,0.8125,0.16667,0.8125,0.20833,0.8125,0.25,0.8125,0.29167,0.8125,0.33333,0.8125,0.375,0.8125,0.41667,0.8125,0.45833,0.8125,0.5,0.8125,0.54167,0.8125,0.58333,0.8125,0.625,0.8125,0.66667,0.8125,0.70833,0.8125,0.75,0.8125,0.79167,0.8125,0.83333,0.8125,0.875,0.8125,0.91667,0.8125,0.95833,0.8125,0.99609,0.8125,0.00391,0.84375,0.04167,0.84375,0.08333,0.84375,0.125,0.84375,0.16667,0.84375,0.20833,0.84375,0.25,0.84375,0.29167,0.84375,0.33333,0.84375,0.375,0.84375,0.41667,0.84375,0.45833,0.84375,0.5,0.84375,0.54167,0.84375,0.58333,0.84375,0.625,0.84375,0.66667,0.84375,0.70833,0.84375,0.75,0.84375,0.79167,0.84375,0.83333,0.84375,0.875,0.84375,0.91667,0.84375,0.95833,0.84375,0.99609,0.84375};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_8()
		{
			double[] value = {0.00391,0.875,0.04167,0.875,0.08333,0.875,0.125,0.875,0.16667,0.875,0.20833,0.875,0.25,0.875,0.29167,0.875,0.33333,0.875,0.375,0.875,0.41667,0.875,0.45833,0.875,0.5,0.875,0.54167,0.875,0.58333,0.875,0.625,0.875,0.66667,0.875,0.70833,0.875,0.75,0.875,0.79167,0.875,0.83333,0.875,0.875,0.875,0.91667,0.875,0.95833,0.875,0.99609,0.875,0.00391,0.90625,0.04167,0.90625,0.08333,0.90625,0.125,0.90625,0.16667,0.90625,0.20833,0.90625,0.25,0.90625,0.29167,0.90625,0.33333,0.90625,0.375,0.90625,0.41667,0.90625,0.45833,0.90625,0.5,0.90625,0.54167,0.90625,0.58333,0.90625,0.625,0.90625,0.66667,0.90625,0.70833,0.90625,0.75,0.90625,0.79167,0.90625,0.83333,0.90625,0.875,0.90625,0.91667,0.90625,0.95833,0.90625,0.99609,0.90625,0.00391,0.9375,0.04167,0.9375,0.08333,0.9375,0.125,0.9375,0.16667,0.9375,0.20833,0.9375,0.25,0.9375,0.29167,0.9375,0.33333,0.9375,0.375,0.9375,0.41667,0.9375,0.45833,0.9375,0.5,0.9375,0.54167,0.9375,0.58333,0.9375,0.625,0.9375,0.66667,0.9375,0.70833,0.9375,0.75,0.9375,0.79167,0.9375,0.83333,0.9375,0.875,0.9375,0.91667,0.9375,0.95833,0.9375,0.99609,0.9375,0.00391,0.96875,0.04167,0.96875,0.08333,0.96875,0.125,0.96875,0.16667,0.96875,0.20833,0.96875,0.25,0.96875,0.29167,0.96875,0.33333,0.96875,0.375,0.96875,0.41667,0.96875,0.45833,0.96875,0.5,0.96875,0.54167,0.96875,0.58333,0.96875,0.625,0.96875,0.66667,0.96875,0.70833,0.96875,0.75,0.96875,0.79167,0.96875,0.83333,0.96875,0.875,0.96875,0.91667,0.96875,0.95833,0.96875,0.99609,0.96875};
			return value;
		}
		private double[] getTextureCoordinate_6_21_point_9()
		{
			double[] value = {0.00391,0.99609,0.04167,0.99609,0.08333,0.99609,0.125,0.99609,0.16667,0.99609,0.20833,0.99609,0.25,0.99609,0.29167,0.99609,0.33333,0.99609,0.375,0.99609,0.41667,0.99609,0.45833,0.99609,0.5,0.99609,0.54167,0.99609,0.58333,0.99609,0.625,0.99609,0.66667,0.99609,0.70833,0.99609,0.75,0.99609,0.79167,0.99609,0.83333,0.99609,0.875,0.99609,0.91667,0.99609,0.95833,0.99609,0.99609,0.99609};
			return value;
		}

		/** Large attribute array: GeoElevationGrid height field, scene-graph level=5, element #20, 825 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_5_20_height()
		{
			MFDouble GeoElevationGrid_5_20_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_5_20_height_1()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_2()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_3()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_4()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_5()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_6()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_7()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_8()))
				.append(new MFDouble(getGeoElevationGrid_5_20_height_9()));
			return GeoElevationGrid_5_20_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=6, element #21, 1650 total numbers made up of 825 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_6_21_point()
		{
			MFVec2f TextureCoordinate_6_21_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_6_21_point_1()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_2()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_3()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_4()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_5()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_6()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_7()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_8()))
				.append(new MFVec2f(getTextureCoordinate_6_21_point_9()));
			return TextureCoordinate_6_21_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SquawLOD014 model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new SquawLOD014().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.SquawLOD014\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SquawLOD014\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
