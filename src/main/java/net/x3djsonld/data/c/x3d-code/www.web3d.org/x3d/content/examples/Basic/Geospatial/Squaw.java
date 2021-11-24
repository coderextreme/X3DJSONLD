package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This model was output using the GeoVRML export capabilities of ESRI's 3D Analyst Extension for ArcView/ArcInfo 8.1 product (official release date Q1 2001). This example is created by combining an ortho image (retouched to have a blue color) with a DEM of the squaw valley, near Lake Tahoe. Coordinates are UTM. </p>
 <p> Related links: <a href="../../../Geospatial/Squaw.java">Squaw.java</a> source, <a href="../../../Geospatial/SquawIndex.html" target="_top">Squaw catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/Squaw.x3d">Squaw.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This model was output using the GeoVRML export capabilities of ESRI's 3D Analyst Extension for ArcView/ArcInfo 8.1 product (official release date Q1 2001). This example is created by combining an ortho image (retouched to have a blue color) with a DEM of the squaw valley, near Lake Tahoe. Coordinates are UTM. </td>
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
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> check GeoOrigin JSON Schema errors </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Squaw.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Squaw.x3d</a> </td>
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

public class Squaw
{
	/** Default constructor to create this object. */
	public Squaw ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Squaw.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This model was output using the GeoVRML export capabilities of ESRI's 3D Analyst Extension for ArcView/ArcInfo 8.1 product (official release date Q1 2001). This example is created by combining an ortho image (retouched to have a blue color) with a DEM of the squaw valley, near Lake Tahoe. Coordinates are UTM."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Salvador Bayarri, ESRI"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("22 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("check GeoOrigin JSON Schema errors"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/examples"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D geospatial example"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Squaw.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setInfo(new String[] {"Generated by ArcScene"}).setTitle("ArcScene Document"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new DirectionalLight().setAmbientIntensity(0.3).setDirection(0.612372,-0.612372,-0.5))
    .addChild(new DirectionalLight().setAmbientIntensity(0.3).setDirection(-0.612372,0.612372,0.5))
    .addChild(new GeoViewpoint().setDescription("default").setFieldOfView(0.3).setGeoSystem(new String[] {"UTM","Z10","N"}).setOrientation(1.0,0.0,0.0,-1.570796).setPosition(4342525.5,740604.0,26366.119141)
      .setGeoOrigin(new GeoOrigin("ORIGIN").setGeoCoords(4342525.5,740604.0,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setRotateYUp(true)))
    .addChild(new Group()
      .addChild(new Group()
        .addChild(new Group()
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4340965.855617,738223.363583,2183.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD000.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD000.x3d","SquawLOD000.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD000.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw000.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw000.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4340105.411173,737558.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_26_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_27_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4342525.411173,738223.363583,2096.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD002.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD002.x3d","SquawLOD002.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD002.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw001.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw001.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4341718.744506,737558.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_36_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_37_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4344084.966729,738223.363583,2307.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD004.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD004.x3d","SquawLOD004.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD004.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw002.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw002.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4343332.077840,737558.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_46_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_47_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4340965.855617,739385.999947,2137.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD006.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD006.x3d","SquawLOD006.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD006.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw003.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw003.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4340105.411173,738776.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_56_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_57_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4342525.411173,739385.999947,2078.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD008.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD008.x3d","SquawLOD008.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD008.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw004.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw004.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4341718.744506,738776.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_66_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_67_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4344084.966729,739385.999947,2160.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD010.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD010.x3d","SquawLOD010.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD010.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw005.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw005.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4343332.077840,738776.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_76_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_77_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4340965.855617,740603.999947,2054.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD012.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD012.x3d","SquawLOD012.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD012.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw006.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw006.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4340105.411173,739994.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_86_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_87_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4342525.411173,740603.999947,2001.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD014.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD014.x3d","SquawLOD014.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD014.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw007.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw007.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4341718.744506,739994.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_96_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_97_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4344084.966729,740603.999947,1993.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD016.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD016.x3d","SquawLOD016.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD016.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw008.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw008.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4343332.077840,739994.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_106_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_107_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4340965.855617,741821.999947,1999.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD018.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD018.x3d","SquawLOD018.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD018.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw009.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw009.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4340105.411173,741212.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_116_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_117_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4342525.411173,741821.999947,1974.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD020.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD020.x3d","SquawLOD020.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD020.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw010.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw010.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4341718.744506,741212.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_126_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_127_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4344084.966729,741821.999947,1968.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD022.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD022.x3d","SquawLOD022.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD022.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw011.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw011.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4343332.077840,741212.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_136_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_137_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4340965.855617,742984.636311,2110.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD024.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD024.x3d","SquawLOD024.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD024.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw012.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw012.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4340105.411173,742430.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_146_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_147_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4342525.411173,742984.636311,2139.000000).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666).setChild1Url(new String[] {"SquawLOD026.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD026.x3d"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw013.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw13.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4341718.744506,742430.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_156_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_157_point()))))))
          .addChild(new Group()
            .addChild(new GeoLOD().setCenter(4344084.966729,742984.636311,2146.5).setGeoSystem(new String[] {"UTM","Z10","N"}).setRange(32266.666016).setChild1Url(new String[] {"SquawLOD028.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD028.x3d","SquawLOD028.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD028.wrl"})
              .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
              .addRootNode(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.9).setDiffuseColor(1.0,1.0,1.0).setShininess(1.0))
                  .setTexture(new ImageTexture().setUrl(new String[] {"images/squaw014.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw014.jpg"})))
                .setGeometry(new GeoElevationGrid().setCcw(false).setCreaseAngle(0.5).setGeoGridOrigin(4343332.077840,742430.999947,0.0).setGeoSystem(new String[] {"UTM","Z10","N"}).setSolid(false).setXDimension(12).setXSpacing(110.727273).setZDimension(16).setZSpacing(107.555556).setHeight(getGeoElevationGrid_9_166_height())
                  .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
                  .setTexCoord(new TextureCoordinate().setPoint(getTextureCoordinate_10_167_point()))))))))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_26_height_1()
		{
			double[] value = {2329.3235,2313.5854,2299.391,2275.616,2256.039,2260.0962,2289.158,2271.813,2238.2546,2197.2583,2197.0254,2191.4873,2347.3486,2335.9705,2334.4636,2310.3198,2300.1436,2301.7083,2327.3105,2306.9065,2269.2075,2272.4438,2277.2268,2259.9924,2324.4512,2327.937,2327.8057,2355.8127,2351.5278,2327.844,2359.7432,2348.2917,2344.7896,2346.933,2351.8403,2317.3809,2260.7942,2244.5767,2278.2122,2316.3586,2369.1987,2361.4321,2400.2903,2433.8323,2417.2075,2405.2341,2375.6465,2319.5723,2212.3452,2208.6716,2234.9226,2267.0046,2337.9177,2392.6184,2426.8293,2398.9465,2362.3994,2354.4067,2328.372,2282.9204,2167.161,2181.4133,2213.636,2236.2078,2313.598,2374.3333,2407.246,2363.7896,2303.0686,2293.6387,2270.1267,2237.201,2132.7415,2144.4775,2174.186,2210.1062,2280.8323,2301.4646,2355.8303,2340.571,2277.2136,2242.3328,2212.0452,2177.2761,2115.583,2112.4795,2145.5403,2181.982,2215.5664,2251.8013,2302.9058,2334.7576,2261.484,2216.8936,2168.3252,2124.937,2114.5303,2094.5557,2110.916,2140.6736};
			return value;
		}
		private double[] getGeoElevationGrid_9_26_height_2()
		{
			double[] value = {2160.4922,2189.18,2247.8813,2290.4324,2232.3865,2196.364,2145.4688,2097.808,2125.037,2094.0676,2085.1157,2102.8755,2117.5635,2139.3987,2178.549,2216.4192,2215.9407,2183.5945,2152.8882,2092.8313,2146.487,2106.3318,2076.0364,2070.912,2066.6345,2091.1626,2115.5227,2140.9346,2170.787,2133.0254,2149.257,2098.3916,2160.4246,2120.979,2080.5337,2041.1898,2033.8505,2034.8027,2054.8235,2068.0283,2074.1362,2067.1904,2111.412,2088.023,2173.7083,2143.2349,2099.622,2046.184,2012.2407,2003.6333,2011.8926,2016.37,2010.5881,2026.3867,2051.0427,2074.8013,2142.583,2130.767,2115.1829,2062.7073,2020.409,1997.4125,1976.6835,1974.5184,1972.6257,1988.7704,2006.338,2031.0764,2154.8599,2122.5051,2114.582,2090.3965,2051.5745,2013.7977,1980.3584,1954.7443,1948.5576,1957.8701,1971.0928,1984.4761,2180.9685,2148.4246,2149.0056,2137.7288,2113.009,2056.9636,1995.1066,1964.7443,1938.6082,1933.9183,1935.9152,1944.5244};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_27_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_27_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_36_height_1()
		{
			double[] value = {2180.9685,2148.4246,2149.0056,2137.7288,2113.009,2056.9636,1995.1066,1964.7443,1938.6082,1933.9183,1935.9152,1944.5244,2209.458,2216.7104,2204.653,2198.453,2182.4434,2091.891,2018.3699,1969.1554,1936.018,1910.8464,1899.8698,1912.1348,2264.5613,2272.577,2256.3728,2258.9214,2194.878,2115.1028,2030.0139,1972.2294,1933.6703,1906.0397,1899.0,1905.0,2317.1863,2295.0413,2276.7664,2235.2446,2116.6594,2038.4,1971.9784,1935.3444,1909.4764,1897.692,1897.9,1901.0,2257.7222,2239.9724,2197.4197,2123.6772,2037.7554,1983.4236,1929.5378,1909.9863,1898.404,1897.0,1897.0,1897.0767,2202.869,2191.7654,2142.4949,2053.548,1990.2023,1939.548,1911.5261,1902.9148,1900.7291,1897.8802,1898.0,1899.6111,2152.1667,2169.2693,2094.893,2012.7882,1957.3932,1922.2246,1911.6998,1909.3667,1906.1112,1903.2538,1904.3667,1910.5613,2100.5112,2123.9849,2064.5093,1991.5566,1953.2466,1926.5347,1918.6604,1918.037,1912.1222,1911.1222,1915.2053,1922.7178,2055.9517,2088.1155,2017.1643,1971.5265};
			return value;
		}
		private double[] getGeoElevationGrid_9_36_height_2()
		{
			double[] value = {1956.4977,1948.9252,1933.8778,1932.5585,1931.2076,1934.9789,1955.269,1945.6333,2032.0068,2035.5822,1991.371,1959.7269,1960.7255,1959.6333,1949.1263,1962.0962,1968.4854,1972.013,1978.4016,1987.7893,2001.1986,1991.2222,1972.9037,1962.4176,1973.1824,1978.5264,1989.5033,1986.7446,2000.4027,2003.0809,2009.3628,2036.617,2024.2324,1994.4548,1980.289,1993.8573,1989.8229,1996.8694,2019.3412,2008.242,2024.1299,2028.6176,2044.5609,2076.8745,2048.8943,2026.3489,2010.7596,2017.2242,2009.0247,2021.2875,2058.6306,2029.0409,2051.8503,2068.3547,2100.4111,2125.992,2092.8835,2078.788,2048.5938,2053.6104,2032.16,2042.243,2047.5261,2060.2224,2096.2808,2123.748,2150.9355,2183.464,2107.7832,2092.583,2079.9265,2064.8508,2046.16,2052.7656,2061.491,2106.4392,2148.4497,2177.387,2201.1274,2230.9197,2122.199,2103.7354,2083.1382,2071.0537,2060.3333,2075.2478,2096.3955,2154.1497,2204.2864,2225.68,2264.758,2275.6052};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_37_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_37_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_46_height_1()
		{
			double[] value = {2122.199,2103.7354,2083.1382,2071.0537,2060.3333,2075.2478,2096.3955,2154.1497,2204.2864,2225.68,2264.758,2275.6052,2148.7534,2136.5955,2121.6438,2103.7073,2086.0283,2105.1968,2119.8738,2156.0933,2219.1794,2272.65,2321.0122,2322.633,2206.1875,2198.191,2155.5898,2120.9414,2133.4387,2140.0974,2143.1404,2191.768,2218.1814,2277.5398,2323.7722,2335.2024,2258.4663,2222.2246,2163.5798,2163.6255,2185.1719,2181.8723,2196.2847,2206.131,2273.5571,2300.9797,2325.6094,2322.8328,2281.583,2215.4563,2176.096,2222.257,2249.6665,2239.111,2265.261,2249.7346,2290.856,2352.6003,2361.787,2313.8772,2298.259,2234.4277,2215.347,2265.7659,2316.9292,2297.9688,2327.4792,2323.652,2323.7766,2357.095,2347.0427,2315.7815,2328.0022,2253.8777,2255.7017,2307.465,2346.9004,2370.8167,2387.618,2380.4607,2367.8494,2361.3535,2320.9297,2282.3623,2348.4893,2279.5803,2279.826,2318.4285,2370.458,2421.2632,2397.8086,2364.136,2340.9133,2330.272,2320.2473,2264.908,2351.611,2331.959,2332.4324,2363.488};
			return value;
		}
		private double[] getGeoElevationGrid_9_46_height_2()
		{
			double[] value = {2396.2732,2413.2515,2361.6162,2316.767,2293.5444,2276.0764,2277.3098,2255.522,2375.5188,2388.2512,2397.1824,2413.8396,2433.2961,2403.55,2348.212,2307.6785,2281.607,2267.4077,2246.7893,2192.8442,2409.3862,2426.8303,2453.8062,2470.605,2444.9954,2400.439,2357.68,2316.2156,2300.6895,2285.0762,2252.3228,2208.775,2455.1804,2473.152,2496.866,2487.9138,2447.608,2408.1626,2368.8035,2337.607,2302.9885,2265.5432,2222.2603,2195.7136,2471.1846,2512.3284,2540.1562,2503.4844,2461.7764,2421.417,2386.6272,2334.6938,2283.2776,2243.15,2209.3572,2154.9387,2456.1257,2513.3706,2552.601,2498.2844,2455.8923,2424.983,2392.0852,2345.2703,2293.5562,2255.9072,2206.3503,2152.8594,2426.5452,2485.6313,2530.8103,2478.5427,2426.486,2376.6792,2346.095,2301.1208,2251.9045,2220.5928,2204.1128,2164.1497,2409.9045,2473.2603,2505.173,2480.4548,2445.2856,2394.3657,2331.6829,2269.8806,2238.3916,2221.0718,2219.3477,2188.8708};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_47_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_47_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_56_height_1()
		{
			double[] value = {2191.4873,2211.294,2166.4824,2126.1445,2078.1746,2026.377,1996.7596,1984.0361,1972.744,1967.2771,1969.6078,1977.5806,2259.9924,2253.7822,2203.749,2164.631,2105.7969,2073.9133,2036.6664,2010.0524,1986.4948,1972.1747,1965.0,1959.987,2317.3809,2312.8508,2244.0703,2196.1218,2154.8308,2139.8672,2095.5837,2065.958,2018.2158,1981.2336,1972.5486,1965.5486,2319.5723,2329.4128,2299.0728,2244.2175,2196.7097,2201.796,2160.8948,2116.604,2056.3806,2007.9646,1985.9362,1984.8754,2282.9204,2276.7979,2327.0837,2275.4333,2225.6755,2189.3289,2160.241,2125.527,2075.709,2010.85,2019.9753,2030.525,2237.201,2211.3948,2269.9402,2283.7705,2234.8635,2187.7725,2151.1448,2102.7615,2051.9163,2068.4214,2069.4702,2072.2332,2177.2761,2170.5571,2213.4226,2275.7664,2249.5027,2201.516,2142.542,2118.9333,2125.0405,2126.0864,2126.1653,2120.528,2124.937,2146.4724,2178.8442,2245.3357,2224.108,2193.4734,2184.0588,2177.6963,2190.639,2179.5984,2185.2468,2158.2375,2097.808,2123.4192,2155.2058,2200.3662};
			return value;
		}
		private double[] getGeoElevationGrid_9_56_height_2()
		{
			double[] value = {2252.0652,2233.2483,2234.422,2238.2256,2264.3916,2238.4626,2214.8635,2167.737,2092.8313,2082.4414,2116.4143,2184.1426,2246.9094,2256.3364,2253.2517,2296.4578,2298.6907,2261.1597,2233.4575,2196.0332,2098.3916,2059.54,2098.7686,2173.3008,2219.526,2227.8967,2216.4792,2247.352,2250.8787,2218.5745,2200.4792,2193.178,2088.023,2044.8103,2084.58,2147.6296,2185.0173,2178.18,2164.6748,2180.2583,2195.8945,2165.1184,2163.4092,2164.1584,2074.8013,2021.9296,2065.1865,2119.6187,2144.39,2129.273,2098.0757,2112.9858,2121.7683,2114.1187,2126.137,2111.3103,2031.0764,1994.0187,2042.2219,2065.3865,2084.3694,2092.652,2049.7295,2063.9993,2076.7932,2072.5125,2095.725,2082.375,1984.4761,1962.2999,2005.7219,2018.1904,2032.025,2035.8129,2024.7372,2022.7612,2049.136,2044.1897,2063.6995,2053.996,1944.5244,1958.2495,1966.8876,1973.993,1981.9917,1983.993,1981.2577,1984.6127,1997.8762,2011.949,2026.0217,2021.9945};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_57_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_57_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_66_height_1()
		{
			double[] value = {1944.5244,1958.2495,1966.8876,1973.993,1981.9917,1983.993,1981.2577,1984.6127,1997.8762,2011.949,2026.0217,2021.9945,1912.1348,1921.3866,1926.3179,1924.3243,1930.0555,1933.4667,1931.164,1938.0555,1944.4181,1963.9915,1977.6669,1986.4333,1905.0,1908.6555,1907.8466,1901.0,1895.0647,1894.2034,1905.5647,1904.3112,1898.733,1906.1869,1926.3145,1938.7877,1901.0,1902.0,1901.0,1897.4818,1891.409,1885.4027,1884.9,1885.9,1886.0,1882.0,1888.0272,1903.71,1897.0767,1898.0,1896.6189,1894.4122,1890.409,1887.0,1885.0,1883.0,1883.0,1882.0,1884.0272,1887.1444,1899.6111,1899.6111,1900.6111,1899.6111,1896.0201,1890.742,1889.0,1887.0,1884.0,1883.0,1882.0,1882.0,1910.5613,1925.9694,1931.7333,1929.5818,1915.2925,1898.5797,1894.5337,1889.4875,1887.3667,1885.3955,1882.9728,1882.0,1922.7178,1936.1222,1953.5676,1962.604,1945.0626,1912.9171,1902.2444,1901.0233,1895.3481,1888.1621,1884.0,1882.0,1945.6333,1966.1283,1977.6877,1971.4185};
			return value;
		}
		private double[] getGeoElevationGrid_9_66_height_2()
		{
			double[] value = {1950.9404,1936.2649,1924.6655,1916.9464,1906.996,1890.2075,1887.0,1883.9878,1987.7893,2004.9121,2014.2357,1986.5354,1971.5258,1961.9,1950.4336,1938.6484,1922.2979,1894.091,1887.0,1884.57,2036.617,2059.1667,2033.0449,2000.2233,1989.8055,1994.9086,1984.0414,1964.1595,1934.4752,1906.851,1889.3783,1887.0,2076.8745,2090.1511,2065.3215,2033.5778,2030.8187,2034.3949,2006.8542,1978.5538,1948.3809,1922.2743,1907.1172,1890.1744,2125.992,2124.4446,2101.3728,2086.1182,2094.5,2084.509,2043.6545,2008.0009,1971.0482,1938.0319,1914.8481,1900.8,2183.464,2160.6426,2144.0315,2141.3506,2165.5889,2142.4028,2101.7153,2049.8977,2016.1798,1962.5227,1934.2566,1915.211,2230.9197,2194.962,2197.8037,2176.1626,2208.247,2185.9468,2157.49,2106.6575,2060.0605,2005.2701,1964.9897,1937.1333,2275.6052,2246.6833,2247.9424,2224.1484,2237.2576,2223.3425,2194.8606,2148.503,2087.3152,2061.7727,2001.3909,1987.8167};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_67_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_67_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_76_height_1()
		{
			double[] value = {2275.6052,2246.6833,2247.9424,2224.1484,2237.2576,2223.3425,2194.8606,2148.503,2087.3152,2061.7727,2001.3909,1987.8167,2322.633,2299.0903,2281.1091,2260.0376,2262.2542,2266.5408,2225.7363,2173.827,2142.0269,2103.0823,2040.3993,2035.896,2335.2024,2287.7864,2252.759,2245.0535,2244.8982,2267.6523,2223.643,2184.7637,2151.6353,2115.3442,2076.7512,2064.5588,2322.8328,2275.4133,2225.9612,2210.9722,2206.9722,2207.7153,2190.7563,2171.8188,2135.9587,2099.8794,2088.825,2096.4966,2313.8772,2268.7122,2220.34,2185.9565,2159.074,2158.6182,2150.558,2134.8418,2117.4053,2081.829,2072.0527,2094.0032,2315.7815,2281.3503,2245.8552,2214.119,2169.7322,2114.6826,2103.8804,2089.9978,2084.6504,2067.1775,2033.6686,2059.7305,2282.3623,2272.939,2253.9187,2222.4148,2174.5303,2126.8608,2078.434,2052.505,2040.7598,2059.946,2018.3921,2015.039,2264.908,2219.8054,2205.3625,2179.7744,2151.8708,2124.738,2094.7256,2067.52,2040.2769,2016.3433,2017.2339,2008.4106,2255.522,2208.4094,2144.6885,2129.0652};
			return value;
		}
		private double[] getGeoElevationGrid_9_76_height_2()
		{
			double[] value = {2120.4016,2105.274,2092.5273,2065.5728,2035.6881,2014.412,2007.8909,1986.0292,2192.8442,2167.9294,2130.4436,2094.0447,2074.9502,2065.569,2061.0747,2039.7047,2016.8004,2024.7771,1994.4803,2001.0681,2208.775,2160.7021,2105.4917,2081.486,2079.1814,2051.3953,2054.9653,2052.1584,2050.3862,2036.759,2020.4407,2040.0529,2195.7136,2155.2808,2102.491,2131.673,2120.8142,2086.1648,2099.7395,2099.0283,2074.5796,2042.6755,2042.667,2072.525,2154.9387,2139.786,2122.9868,2152.582,2124.5186,2121.7595,2129.032,2121.3818,2084.3545,2058.0774,2059.0593,2083.3,2152.8594,2136.2754,2153.245,2170.9028,2152.2146,2152.3542,2145.1665,2118.8333,2094.3545,2062.2336,2062.1096,2075.7485,2164.1497,2162.6606,2182.0205,2196.1611,2188.407,2181.949,2170.9102,2129.3638,2087.2188,2055.9617,2041.1327,2052.2712,2188.8708,2190.4255,2206.4714,2224.389,2224.5703,2217.2073,2192.5586,2156.863,2113.881,2064.8462,2034.2357,2027.2002};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_77_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_77_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_86_height_1()
		{
			double[] value = {1977.5806,1971.5132,1982.4066,1991.5437,2000.6062,1978.172,1960.1556,1967.1897,1979.1421,2009.2241,2050.106,2056.8416,1959.987,1956.0436,1956.148,1962.2078,1968.752,1958.1488,1947.8708,1950.8708,1960.3354,1975.1533,1994.7068,2010.3541,1965.5486,1959.5486,1965.0972,1959.4713,1951.4314,1946.3394,1938.2544,1939.4514,1940.7592,1953.792,1957.7301,1971.3541,1984.8754,1989.8777,1990.9362,1981.9362,1982.5133,1978.9362,1960.3358,1935.7374,1932.032,1941.485,1938.0583,1947.9607,2030.525,2023.9229,2008.6042,2003.0931,1997.775,2003.55,1993.9102,1964.1136,1928.0302,1935.5837,1930.292,1932.5125,2072.2332,2034.0753,2014.1229,2015.8931,2021.7314,2015.9105,2009.2706,1983.3706,1942.9546,1924.2455,1923.3324,1924.9,2120.528,2077.762,2037.2445,2016.7539,2007.4712,2008.6068,2004.1432,1976.8845,1941.1116,1923.2455,1920.8127,1922.9774,2158.2375,2095.1365,2044.9965,2021.5332,2010.5074,1998.9922,1976.0367,1945.3884,1923.3182,1920.3541,1918.0612,1917.3187,2167.737,2119.2668,2076.1956,2056.6248};
			return value;
		}
		private double[] getGeoElevationGrid_9_86_height_2()
		{
			double[] value = {2038.4396,2022.7322,2007.6594,1974.394,1932.767,1921.0653,1917.0112,1912.9413,2196.0332,2140.6743,2132.7893,2114.633,2079.0613,2049.0422,2029.412,1999.1727,1980.2694,1943.1356,1923.0837,1916.1,2193.178,2172.6355,2179.2034,2162.7275,2113.8538,2068.4688,2037.9786,2010.3325,2009.8083,1986.7179,1934.9976,1924.0042,2164.1584,2166.7056,2178.0305,2170.619,2122.4363,2078.9326,2043.5645,2021.3909,2012.3182,1992.3933,1948.6691,1957.9355,2111.3103,2133.072,2140.7708,2132.4731,2105.4417,2077.866,2049.4133,2034.1675,2016.886,1998.04,1980.2291,1982.843,2082.375,2101.6956,2111.675,2104.5193,2090.6091,2080.9368,2073.7886,2061.2058,2040.1239,2017.6104,2004.6322,1994.5088,2053.996,2055.5273,2089.6636,2092.233,2096.0364,2100.582,2097.6274,2085.9458,2068.9854,2045.7574,2027.9186,2007.3057,2021.9945,2040.3427,2060.2388,2074.9958,2059.9963,2093.3875,2113.5337,2108.3938,2085.6382,2055.4934,2048.174,2023.2015};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_87_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_87_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_96_height_1()
		{
			double[] value = {2021.9945,2040.3427,2060.2388,2074.9958,2059.9963,2093.3875,2113.5337,2108.3938,2085.6382,2055.4934,2048.174,2023.2015,1986.4333,2002.2283,2010.3809,2028.0555,2034.2776,2065.1606,2091.5566,2124.7698,2099.4126,2068.8342,2055.9343,2029.3,1938.7877,1951.4506,1963.5232,1971.3873,2000.0094,2053.2776,2093.9202,2123.8738,2120.4243,2098.4397,2074.5515,2049.9233,1903.71,1909.7173,1920.8455,1944.4364,1973.8727,2024.5009,2066.7454,2103.018,2111.6,2113.8755,2103.5454,2076.6,1887.1444,1892.4899,1902.9344,1920.296,1944.4617,1982.8912,2030.9707,2072.5212,2076.4333,2087.087,2108.9683,2097.1,1882.0,1886.0671,1888.539,1897.8308,1924.5616,1958.841,2003.5955,2034.1647,2041.7778,2043.9213,2056.3828,2071.0278,1882.0,1883.0,1884.0,1890.9575,1907.2667,1932.1212,1967.9728,1984.39,2005.6954,2012.2667,2010.094,2045.5,1882.0,1882.0,1883.0,1889.2793,1888.9523,1910.0898,1937.1697,1940.8516,1967.2025,1990.6323,1993.8778,2012.3556,1883.9878,1882.0,1882.03,1885.039};
			return value;
		}
		private double[] getGeoElevationGrid_9_96_height_2()
		{
			double[] value = {1886.0477,1892.2284,1910.6586,1917.5104,1942.6914,1967.999,1969.6111,1985.1788,1884.57,1883.0,1882.0,1881.1167,1883.0,1886.17,1893.9031,1898.59,1916.6652,1944.519,1948.3455,1950.0266,1887.0,1884.0,1882.7545,1881.3889,1881.0,1884.0,1886.8197,1887.3722,1895.904,1914.5879,1936.155,1932.6111,1890.1744,1886.0,1884.0,1882.6818,1881.0,1882.0,1882.4589,1884.0,1886.8556,1887.9646,1903.1963,1914.5667,1900.8,1889.0,1887.0,1884.9681,1882.0,1881.0,1881.0,1881.0,1881.1,1882.779,1885.0828,1887.0,1915.211,1900.7678,1896.0657,1888.3374,1887.0,1884.0,1882.304,1881.2562,1880.0,1880.0,1880.0,1881.3445,1937.1333,1928.2333,1924.3989,1915.4111,1911.8424,1889.0,1886.0,1885.0,1883.0,1882.0,1878.1727,1878.0,1987.8167,1974.8394,1957.7637,1927.4773,1920.6742,1912.0364,1889.7848,1888.0,1887.0,1884.8743,1881.0288,1878.1666};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_97_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_97_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_106_height_1()
		{
			double[] value = {1987.8167,1974.8394,1957.7637,1927.4773,1920.6742,1912.0364,1889.7848,1888.0,1887.0,1884.8743,1881.0288,1878.1666,2035.896,2006.3264,1989.1813,1957.7177,1935.4452,1931.1482,1916.1814,1898.227,1889.0,1888.5609,1886.5186,1884.4181,2064.5588,2051.3398,2023.7761,1997.0387,1968.4033,1947.3739,1937.6776,1921.576,1914.4017,1905.3899,1898.8478,1897.675,2096.4966,2069.482,2037.023,2013.4775,1987.4417,1975.3073,1972.5641,1960.6757,1947.5211,1935.8339,1926.8152,1919.9452,2094.0032,2065.365,2040.0781,2048.0054,2023.3853,2014.5555,2012.382,2005.223,1994.0237,1982.039,1967.2311,1954.4819,2059.7305,2060.5586,2033.6772,2006.6472,2020.3984,2019.757,2038.2489,2037.641,2031.3833,2022.7246,2012.556,2004.2875,2015.039,2025.769,2023.2025,1974.709,1978.5193,1979.4752,2001.5996,2040.6724,2048.8054,2053.1633,2040.1143,2030.6667,2008.4106,1970.111,1971.1462,1944.7916,1936.4785,1941.123,1983.3413,1997.8958,2004.5802,2032.9503,2030.3032,2026.2306,1986.0292,1990.2891,1984.2799,1983.4166};
			return value;
		}
		private double[] getGeoElevationGrid_9_106_height_2()
		{
			double[] value = {1975.2806,1937.9711,1938.2181,1951.0416,1980.7415,1999.9592,2015.6459,2009.6459,2001.0681,2023.6272,2023.0754,2019.8483,2010.4506,1964.6926,1932.0704,1928.8973,1940.5874,1974.6609,2001.4137,1998.5302,2040.0529,2058.579,2059.7722,2053.261,2024.2385,1988.6827,1957.194,1923.0674,1912.4274,1945.5438,1972.4615,1988.9807,2072.525,2089.3308,2088.367,2064.0454,2033.0701,2018.7614,1994.2284,1956.2496,1916.1102,1916.5477,1959.2568,1976.2875,2083.3,2108.936,2093.477,2071.0354,2046.2181,2031.0579,2006.3909,1969.8588,1928.5168,1897.7227,1932.1868,1962.6681,2075.7485,2080.927,2067.4004,2052.461,2039.1577,2006.1945,2002.3516,1951.2283,1929.4874,1911.8846,1893.8601,1943.6973,2052.2712,2046.3875,2041.1421,2037.4048,2010.3192,1985.3473,1973.7417,1969.9529,1956.378,1931.3617,1893.4548,1908.1167,2027.2002,2022.9564,2028.2455,2026.4839,2010.7225,2007.1998,2009.7362,2005.2577,1969.019,1930.8079,1907.6793,1874.0453};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_107_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_107_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_116_height_1()
		{
			double[] value = {2056.8416,2062.9976,2096.2065,2106.0125,2145.2527,2137.9768,2108.52,2074.944,2019.0728,1961.1813,1925.3875,1898.8806,2010.3541,2025.2997,2041.5742,2055.9714,2106.3086,2119.2485,2095.198,2070.8254,2013.1091,1950.5436,1900.2917,1888.0,1971.3541,1986.2997,2011.5424,2030.6877,2069.215,2102.0474,2085.3274,2041.4059,1996.614,1937.9777,1893.1182,1888.0,1947.9607,1966.0094,1990.1868,2021.5046,2064.229,2083.096,2078.0017,2027.7916,1983.1046,1931.213,1892.1301,1891.6681,1932.5125,1951.1871,1961.9285,1993.3102,2030.2534,2049.2795,2072.6545,2018.9097,1969.4602,1927.3364,1888.6273,1899.5162,1924.9,1939.7524,1942.1564,1961.0519,1990.9609,2022.6337,2061.7224,2036.227,1968.8813,1901.5576,1889.6273,1896.7,1922.9774,1947.8909,1926.5121,1935.8918,1963.7026,1992.2784,2005.3884,2025.3689,1956.51,1892.68,1888.7736,1890.6321,1917.3187,1923.6987,1919.3087,1924.4723,1951.432,1967.4166,1955.6339,1962.716,1931.9712,1905.136,1886.0,1888.4,1912.9413,1912.0,1911.9377,1913.0529};
			return value;
		}
		private double[] getGeoElevationGrid_9_116_height_2()
		{
			double[] value = {1934.3644,1936.7389,1925.1968,1914.8042,1900.4844,1894.8618,1887.0,1888.4457,1916.1,1910.0132,1907.0,1907.0,1910.1909,1912.3794,1909.179,1900.591,1896.7517,1891.7312,1887.0,1899.624,1924.0042,1917.833,1911.9956,1909.0,1905.8091,1902.0958,1902.0958,1901.591,1909.0728,1887.4987,1886.0,1921.7084,1957.9355,1952.0703,1924.2782,1913.2854,1908.0,1904.1453,1893.8109,1894.0854,1894.545,1886.0,1889.9841,1941.2,1982.843,1961.0889,1939.3951,1927.905,1911.1588,1913.743,1903.6566,1888.8949,1887.0,1885.669,1902.2545,1937.5,1994.5088,1986.3478,1973.4086,1957.6898,1912.9406,1901.8988,1897.1078,1892.9335,1884.3557,1885.5546,1897.6273,1939.7512,2007.3057,1994.6093,1982.981,1960.1093,1921.062,1907.8898,1900.6637,1888.9348,1878.0364,1882.5546,1897.8895,1945.0746,2023.2015,2005.0287,1999.9531,1977.291,1931.6196,1914.7378,1900.6641,1893.5914,1877.5566,1879.9994,1894.1355,1947.499};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_117_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_117_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_126_height_1()
		{
			double[] value = {2023.2015,2005.0287,1999.9531,1977.291,1931.6196,1914.7378,1900.6641,1893.5914,1877.5566,1879.9994,1894.1355,1947.499,2029.3,2007.0272,1984.4979,1960.4677,1933.2202,1923.798,1920.2173,1916.1146,1904.8234,1877.3715,1892.509,1947.789,2049.9233,2024.7434,2003.5823,1962.8717,1929.8969,1920.9192,1929.6555,1916.6964,1892.695,1885.3716,1910.2545,1960.2444,2076.6,2048.4546,2019.8727,1970.8336,1934.4464,1911.2373,1918.2363,1896.8682,1877.1482,1895.9636,1912.6273,1972.73,2097.1,2072.199,2022.956,1977.6284,1942.2828,1915.3282,1901.6252,1882.4116,1894.301,1916.4102,1930.194,1966.6877,2071.0278,2046.0924,2008.2526,1972.4232,1940.5126,1916.8616,1886.8995,1877.5201,1901.8691,1926.3313,1946.8656,1960.3112,2045.5,2053.705,2011.406,1960.409,1914.7639,1890.1091,1868.4203,1893.1848,1913.3303,1934.297,1946.6273,1970.1,2012.3556,2024.6879,1999.6248,1954.5272,1912.6182,1872.0869,1888.1313,1905.4813,1904.6923,1923.5001,1952.3312,1981.6078,1985.1788,1994.3667,1989.1222,1958.9098};
			return value;
		}
		private double[] getGeoElevationGrid_9_126_height_2()
		{
			double[] value = {1912.3352,1869.4406,1883.836,1887.3667,1892.6266,1923.6636,1953.8818,1989.4,1950.0266,1962.0728,1964.3667,1951.9385,1918.2363,1877.1061,1862.0,1864.3667,1891.2324,1931.0149,1963.2852,1995.7333,1932.6111,1928.8712,1930.4722,1920.7732,1903.6495,1879.6338,1865.6637,1862.0,1891.5383,1925.2748,1962.104,1991.6222,1914.5667,1911.7151,1893.4222,1884.4918,1877.8556,1873.7363,1867.6637,1863.0853,1871.4628,1908.5482,1953.4185,1990.1,1887.0,1893.0754,1886.9546,1876.0,1873.0809,1868.7627,1863.6973,1859.591,1860.4818,1899.5728,1943.1364,1989.5,1881.3445,1881.3445,1877.3445,1876.9225,1871.8749,1867.0,1861.6637,1854.7318,1857.6478,1904.1362,1957.4475,2001.5144,1878.0,1876.0161,1875.0,1873.0,1871.0,1867.0,1863.4111,1855.591,1855.9636,1902.0253,1962.3558,2013.3889,1878.1666,1876.0045,1874.0,1868.9803,1869.0,1869.0,1866.0,1858.591,1852.8773,1894.7727,1957.9697,2000.4667};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_127_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_127_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_136_height_1()
		{
			double[] value = {1878.1666,1876.0045,1874.0,1868.9803,1869.0,1869.0,1866.0,1858.591,1852.8773,1894.7727,1957.9697,2000.4667,1884.4181,1883.4181,1879.9735,1867.1323,1866.0,1868.0,1867.0,1859.8379,1851.7622,1883.959,1928.456,1973.9639,1897.675,1895.675,1887.7994,1874.7637,1863.031,1866.0,1867.5558,1862.1818,1852.9636,1896.8284,1959.7671,1988.9125,1919.9452,1908.2639,1893.2115,1881.1388,1870.066,1857.5405,1868.3363,1861.7727,1859.9594,1912.5436,1997.0436,2020.148,1954.4819,1942.7328,1923.291,1902.5074,1879.2946,1868.4127,1851.0,1851.0,1887.7255,1958.7607,2035.4293,2051.8557,2004.2875,1993.5065,1979.2925,1935.6118,1886.6182,1866.6405,1851.0,1856.9141,1929.9371,2027.4159,2083.9775,2071.7534,2030.6667,2015.0546,1986.3029,1928.3213,1886.3289,1856.4728,1853.1733,1862.2108,1906.1086,1980.1676,2078.6707,2095.9607,2026.2306,2004.0818,1964.8834,1918.7107,1878.1232,1851.6884,1853.022,1860.4476,1881.0215,1970.8794,2025.4098,2074.8762,2009.6459,2006.3558,1963.4186,1902.7771};
			return value;
		}
		private double[] getGeoElevationGrid_9_136_height_2()
		{
			double[] value = {1851.3317,1848.0,1853.0,1853.0,1866.7566,1920.4612,1995.0553,2030.477,1998.5302,1995.5345,1944.271,1890.7269,1845.8446,1845.4675,1854.0,1851.6835,1862.1901,1908.8983,1960.703,1978.8319,1988.9807,1974.3201,1920.6617,1880.4524,1840.0,1848.3146,1853.0,1850.409,1864.6385,1916.4972,1951.0883,1995.2931,1976.2875,1955.5238,1903.621,1870.9148,1840.0,1845.6511,1851.1815,1851.0,1871.5398,1921.1035,1970.1364,2015.4413,1962.6681,1957.0499,1900.8636,1871.7917,1844.8091,1842.0,1846.0,1851.0,1890.441,1943.4551,1986.6368,2021.1096,1943.6973,1939.194,1895.4122,1870.3123,1847.7043,1840.0,1845.3363,1851.0,1894.9882,1957.6748,1977.0262,1998.459,1908.1167,1919.3367,1886.0382,1865.7789,1849.8091,1840.0,1844.3363,1854.8182,1886.7617,1925.9762,1921.6902,1950.3167,1874.0453,1907.3456,1875.6188,1859.5077,1848.8091,1840.0,1844.3363,1851.0,1881.1292,1885.6895,1903.8646,1914.1292};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_137_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_137_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_146_height_1()
		{
			double[] value = {1898.8806,1889.2903,1888.4912,1908.545,1955.062,2026.9188,2104.0916,2157.3757,2170.7097,2165.718,2162.7097,2155.7097,1888.0,1888.0,1899.553,1941.8146,1997.467,2071.5967,2134.947,2174.878,2179.1292,2177.1292,2174.1292,2168.1292,1888.0,1897.7543,1928.6503,1974.2601,2031.5089,2104.4915,2158.2578,2189.184,2189.5486,2188.5486,2185.9656,2184.743,1891.6681,1905.352,1952.1522,2010.0956,2060.4248,2131.5835,2171.353,2195.7488,2200.608,2201.9087,2201.936,2201.936,1899.5162,1908.0807,1949.341,2025.4272,2096.0933,2151.0632,2184.1875,2203.1365,2214.527,2219.775,2219.0305,2216.3875,1896.7,1907.1296,1956.976,2040.5447,2108.3315,2169.1045,2201.0554,2217.5073,2231.4905,2238.6084,2239.031,2232.4197,1890.6321,1921.9213,1975.309,2047.5079,2122.8848,2181.212,2214.7278,2233.9504,2251.1733,2265.6572,2261.8699,2248.0642,1888.4,1935.4034,2001.58,2072.2573,2148.1646,2200.2244,2236.5667,2258.184,2278.658,2289.2632,2284.9192,2264.257,1888.4457,1959.6852,2023.2109,2088.4304};
			return value;
		}
		private double[] getGeoElevationGrid_9_146_height_2()
		{
			double[] value = {2158.534,2210.696,2255.4868,2283.6936,2300.4907,2310.1958,2296.8613,2269.6113,1899.624,1976.1301,2063.1797,2136.456,2185.1133,2237.329,2277.5195,2311.2031,2329.845,2331.0283,2298.466,2274.675,1921.7084,2004.4537,2081.9312,2154.051,2213.47,2257.0542,2300.5916,2327.7249,2332.0344,2327.057,2300.417,2293.8083,1941.2,2002.2412,2077.2285,2143.7336,2213.0798,2255.9343,2295.6724,2318.5066,2325.2437,2322.057,2311.4585,2310.3237,1937.5,1998.9103,2067.686,2142.3342,2212.6592,2250.3616,2282.5674,2306.7546,2319.6172,2327.4934,2324.7432,2320.95,1939.7512,2028.9956,2116.5671,2168.447,2208.0693,2240.0522,2268.4126,2295.2466,2318.36,2329.0,2331.6472,2325.8372,1945.0746,2022.5021,2099.4065,2155.7712,2211.495,2245.5784,2271.355,2300.9336,2319.36,2325.9834,2327.0,2325.0,1947.499,2006.4841,2076.1533,2147.8206,2206.6577,2241.5757,2268.411,2299.245,2316.999,2327.9714,2329.0,2325.9998};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_147_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_147_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_156_height_1()
		{
			double[] value = {1947.499,2006.4841,2076.1533,2147.8206,2206.6577,2241.5757,2268.411,2299.245,2316.999,2327.9714,2329.0,2325.9998,1947.789,2025.2507,2092.33,2148.3213,2166.3813,2186.9438,2228.1787,2273.2288,2305.1824,2312.2048,2316.5767,2317.4111,1960.2444,2034.4034,2102.4934,2105.2778,2113.4517,2137.5457,2173.2625,2226.022,2275.4824,2276.9854,2282.2761,2284.6223,1972.73,2027.0533,2045.7682,2080.737,2092.9915,2109.052,2151.5874,2188.2932,2245.4844,2256.943,2269.1077,2264.1807,1966.6877,2002.5309,2043.8126,2081.3328,2090.8418,2110.9602,2139.6816,2171.0256,2235.1,2260.823,2282.9373,2280.3225,1960.3112,1989.8845,2026.8539,2057.9102,2102.3555,2123.8157,2120.802,2167.1333,2233.2993,2277.526,2304.6147,2291.417,1970.1,1986.1614,2016.7095,2054.847,2106.6162,2116.181,2130.233,2156.88,2213.0613,2294.2427,2309.2034,2280.5605,1981.6078,1988.2346,2005.9539,2040.6658,2065.4895,2108.4563,2122.7861,2142.2466,2207.4058,2284.6504,2297.3728,2268.4893,1989.4,2001.6333,2013.5111,2042.3624};
			return value;
		}
		private double[] getGeoElevationGrid_9_156_height_2()
		{
			double[] value = {2065.8296,2084.6943,2115.925,2143.467,2204.9673,2259.3752,2267.6614,2258.782,1995.7333,2025.8243,2052.3254,2068.2515,2079.6763,2098.2117,2132.55,2170.4587,2169.3577,2199.143,2247.0676,2278.3887,1991.6222,2023.4034,2060.854,2083.8147,2082.948,2098.1895,2125.8862,2138.8333,2144.1113,2171.1086,2244.526,2273.9998,1990.1,2029.3228,2065.6682,2080.3472,2097.9148,2108.5261,2116.0,2123.245,2142.4526,2172.0024,2240.5579,2258.8274,1989.5,2026.1694,2049.2842,2080.5068,2099.7234,2106.9526,2123.1611,2136.574,2163.8613,2208.643,2241.432,2245.9058,2001.5144,2031.9783,2069.3872,2102.7725,2113.9373,2117.8367,2134.9307,2155.1533,2179.687,2212.9246,2230.7837,2241.7615,2013.3889,2049.653,2085.5903,2127.0718,2123.817,2127.7424,2144.686,2164.8176,2202.115,2218.9832,2228.0,2224.3147,2000.4667,2045.9894,2077.1528,2090.753,2094.5105,2121.8855,2150.4126,2179.3713,2208.0806,2225.1619,2225.7646,2214.9675};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_157_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_157_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGeoElevationGrid_9_166_height_1()
		{
			double[] value = {2000.4667,2045.9894,2077.1528,2090.753,2094.5105,2121.8855,2150.4126,2179.3713,2208.0806,2225.1619,2225.7646,2214.9675,1973.9639,2015.824,2044.2587,2053.7708,2077.9438,2104.216,2130.0784,2158.9924,2197.3953,2228.9314,2220.6597,2217.418,1988.9125,2008.0807,2021.95,2051.2603,2069.5183,2087.9421,2124.25,2150.3352,2183.1028,2220.7808,2232.258,2238.318,2020.148,2022.7766,2053.4119,2077.424,2096.4287,2099.7708,2125.0535,2155.2466,2197.3257,2234.2498,2247.9897,2256.2568,2051.8557,2054.7861,2072.0605,2092.9597,2116.5059,2130.5554,2130.3972,2153.4165,2193.234,2238.591,2259.2593,2268.545,2071.7534,2074.1765,2080.7217,2099.607,2123.832,2151.77,2153.9714,2174.5342,2201.912,2245.8296,2272.7747,2278.1917,2095.9607,2082.0806,2086.6433,2096.2478,2127.6484,2160.2964,2173.3057,2210.0872,2237.596,2266.4607,2289.6135,2302.061,2074.8762,2056.9897,2056.7773,2097.9102,2133.7444,2151.6877,2168.4146,2209.9402,2262.1694,2294.841,2339.719,2341.1687,2030.477,2028.0677,2052.967,2090.5562};
			return value;
		}
		private double[] getGeoElevationGrid_9_166_height_2()
		{
			double[] value = {2114.8523,2128.87,2149.872,2177.1982,2225.0242,2274.0972,2315.8928,2342.223,1978.8319,2021.0963,2057.9194,2076.756,2085.99,2111.5051,2135.275,2158.6672,2197.0276,2266.3108,2313.1658,2303.6233,1995.2931,2036.435,2060.2505,2053.6138,2075.921,2102.6663,2123.6692,2142.87,2173.7058,2229.0857,2269.864,2282.4197,2015.4413,2044.1926,2041.6989,2046.9943,2069.3022,2070.4114,2102.9775,2116.1753,2147.2117,2185.0103,2217.074,2255.9717,2021.1096,2036.8822,2022.3743,2053.6484,2067.9175,2035.9884,2069.1472,2087.1826,2123.5928,2140.8518,2194.9014,2246.7134,1998.459,1999.4203,2016.3168,2054.3218,2054.5737,2012.7327,2023.0583,2048.4514,2075.9988,2127.955,2177.172,2217.4138,1950.3167,1956.6191,1999.384,2020.5559,2017.7311,1988.3441,1990.8011,2019.189,2063.3855,2093.2776,2124.8118,2175.294,1914.1292,1947.009,1978.1115,1978.1292,1983.044,1956.0769,1963.4441,1991.868,2018.7557,2060.588,2104.619,2159.1968};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getTextureCoordinate_10_167_point_1()
		{
			double[] value = {0.00391,0.00391,0.09091,0.00391,0.18182,0.00391,0.27273,0.00391,0.36364,0.00391,0.45455,0.00391,0.54545,0.00391,0.63636,0.00391,0.72727,0.00391,0.81818,0.00391,0.90909,0.00391,0.99609,0.00391,0.00391,0.06667,0.09091,0.06667,0.18182,0.06667,0.27273,0.06667,0.36364,0.06667,0.45455,0.06667,0.54545,0.06667,0.63636,0.06667,0.72727,0.06667,0.81818,0.06667,0.90909,0.06667,0.99609,0.06667,0.00391,0.13333,0.09091,0.13333,0.18182,0.13333,0.27273,0.13333,0.36364,0.13333,0.45455,0.13333,0.54545,0.13333,0.63636,0.13333,0.72727,0.13333,0.81818,0.13333,0.90909,0.13333,0.99609,0.13333,0.00391,0.2,0.09091,0.2,0.18182,0.2,0.27273,0.2,0.36364,0.2,0.45455,0.2,0.54545,0.2,0.63636,0.2,0.72727,0.2,0.81818,0.2,0.90909,0.2,0.99609,0.2,0.00391,0.26667,0.09091,0.26667,0.18182,0.26667,0.27273,0.26667,0.36364,0.26667,0.45455,0.26667,0.54545,0.26667,0.63636,0.26667,0.72727,0.26667,0.81818,0.26667,0.90909,0.26667,0.99609,0.26667,0.00391,0.33333,0.09091,0.33333,0.18182,0.33333,0.27273,0.33333,0.36364,0.33333,0.45455,0.33333,0.54545,0.33333,0.63636,0.33333,0.72727,0.33333,0.81818,0.33333,0.90909,0.33333,0.99609,0.33333,0.00391,0.4,0.09091,0.4,0.18182,0.4,0.27273,0.4,0.36364,0.4,0.45455,0.4,0.54545,0.4,0.63636,0.4,0.72727,0.4,0.81818,0.4,0.90909,0.4,0.99609,0.4,0.00391,0.46667,0.09091,0.46667,0.18182,0.46667,0.27273,0.46667,0.36364,0.46667,0.45455,0.46667,0.54545,0.46667,0.63636,0.46667,0.72727,0.46667,0.81818,0.46667,0.90909,0.46667,0.99609,0.46667,0.00391,0.53333,0.09091,0.53333,0.18182,0.53333,0.27273,0.53333};
			return value;
		}
		private double[] getTextureCoordinate_10_167_point_2()
		{
			double[] value = {0.36364,0.53333,0.45455,0.53333,0.54545,0.53333,0.63636,0.53333,0.72727,0.53333,0.81818,0.53333,0.90909,0.53333,0.99609,0.53333,0.00391,0.6,0.09091,0.6,0.18182,0.6,0.27273,0.6,0.36364,0.6,0.45455,0.6,0.54545,0.6,0.63636,0.6,0.72727,0.6,0.81818,0.6,0.90909,0.6,0.99609,0.6,0.00391,0.66667,0.09091,0.66667,0.18182,0.66667,0.27273,0.66667,0.36364,0.66667,0.45455,0.66667,0.54545,0.66667,0.63636,0.66667,0.72727,0.66667,0.81818,0.66667,0.90909,0.66667,0.99609,0.66667,0.00391,0.73333,0.09091,0.73333,0.18182,0.73333,0.27273,0.73333,0.36364,0.73333,0.45455,0.73333,0.54545,0.73333,0.63636,0.73333,0.72727,0.73333,0.81818,0.73333,0.90909,0.73333,0.99609,0.73333,0.00391,0.8,0.09091,0.8,0.18182,0.8,0.27273,0.8,0.36364,0.8,0.45455,0.8,0.54545,0.8,0.63636,0.8,0.72727,0.8,0.81818,0.8,0.90909,0.8,0.99609,0.8,0.00391,0.86667,0.09091,0.86667,0.18182,0.86667,0.27273,0.86667,0.36364,0.86667,0.45455,0.86667,0.54545,0.86667,0.63636,0.86667,0.72727,0.86667,0.81818,0.86667,0.90909,0.86667,0.99609,0.86667,0.00391,0.93333,0.09091,0.93333,0.18182,0.93333,0.27273,0.93333,0.36364,0.93333,0.45455,0.93333,0.54545,0.93333,0.63636,0.93333,0.72727,0.93333,0.81818,0.93333,0.90909,0.93333,0.99609,0.93333,0.00391,0.99609,0.09091,0.99609,0.18182,0.99609,0.27273,0.99609,0.36364,0.99609,0.45455,0.99609,0.54545,0.99609,0.63636,0.99609,0.72727,0.99609,0.81818,0.99609,0.90909,0.99609,0.99609,0.99609};
			return value;
		}

		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #26, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_26_height()
		{
			MFDouble GeoElevationGrid_9_26_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_26_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_26_height_2()));
			return GeoElevationGrid_9_26_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #27, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_27_point()
		{
			MFVec2f TextureCoordinate_10_27_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_27_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_27_point_2()));
			return TextureCoordinate_10_27_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #36, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_36_height()
		{
			MFDouble GeoElevationGrid_9_36_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_36_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_36_height_2()));
			return GeoElevationGrid_9_36_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #37, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_37_point()
		{
			MFVec2f TextureCoordinate_10_37_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_37_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_37_point_2()));
			return TextureCoordinate_10_37_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #46, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_46_height()
		{
			MFDouble GeoElevationGrid_9_46_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_46_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_46_height_2()));
			return GeoElevationGrid_9_46_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #47, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_47_point()
		{
			MFVec2f TextureCoordinate_10_47_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_47_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_47_point_2()));
			return TextureCoordinate_10_47_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #56, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_56_height()
		{
			MFDouble GeoElevationGrid_9_56_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_56_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_56_height_2()));
			return GeoElevationGrid_9_56_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #57, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_57_point()
		{
			MFVec2f TextureCoordinate_10_57_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_57_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_57_point_2()));
			return TextureCoordinate_10_57_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #66, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_66_height()
		{
			MFDouble GeoElevationGrid_9_66_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_66_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_66_height_2()));
			return GeoElevationGrid_9_66_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #67, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_67_point()
		{
			MFVec2f TextureCoordinate_10_67_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_67_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_67_point_2()));
			return TextureCoordinate_10_67_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #76, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_76_height()
		{
			MFDouble GeoElevationGrid_9_76_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_76_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_76_height_2()));
			return GeoElevationGrid_9_76_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #77, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_77_point()
		{
			MFVec2f TextureCoordinate_10_77_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_77_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_77_point_2()));
			return TextureCoordinate_10_77_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #86, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_86_height()
		{
			MFDouble GeoElevationGrid_9_86_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_86_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_86_height_2()));
			return GeoElevationGrid_9_86_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #87, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_87_point()
		{
			MFVec2f TextureCoordinate_10_87_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_87_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_87_point_2()));
			return TextureCoordinate_10_87_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #96, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_96_height()
		{
			MFDouble GeoElevationGrid_9_96_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_96_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_96_height_2()));
			return GeoElevationGrid_9_96_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #97, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_97_point()
		{
			MFVec2f TextureCoordinate_10_97_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_97_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_97_point_2()));
			return TextureCoordinate_10_97_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #106, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_106_height()
		{
			MFDouble GeoElevationGrid_9_106_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_106_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_106_height_2()));
			return GeoElevationGrid_9_106_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #107, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_107_point()
		{
			MFVec2f TextureCoordinate_10_107_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_107_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_107_point_2()));
			return TextureCoordinate_10_107_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #116, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_116_height()
		{
			MFDouble GeoElevationGrid_9_116_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_116_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_116_height_2()));
			return GeoElevationGrid_9_116_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #117, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_117_point()
		{
			MFVec2f TextureCoordinate_10_117_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_117_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_117_point_2()));
			return TextureCoordinate_10_117_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #126, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_126_height()
		{
			MFDouble GeoElevationGrid_9_126_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_126_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_126_height_2()));
			return GeoElevationGrid_9_126_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #127, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_127_point()
		{
			MFVec2f TextureCoordinate_10_127_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_127_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_127_point_2()));
			return TextureCoordinate_10_127_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #136, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_136_height()
		{
			MFDouble GeoElevationGrid_9_136_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_136_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_136_height_2()));
			return GeoElevationGrid_9_136_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #137, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_137_point()
		{
			MFVec2f TextureCoordinate_10_137_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_137_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_137_point_2()));
			return TextureCoordinate_10_137_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #146, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_146_height()
		{
			MFDouble GeoElevationGrid_9_146_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_146_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_146_height_2()));
			return GeoElevationGrid_9_146_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #147, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_147_point()
		{
			MFVec2f TextureCoordinate_10_147_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_147_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_147_point_2()));
			return TextureCoordinate_10_147_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #156, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_156_height()
		{
			MFDouble GeoElevationGrid_9_156_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_156_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_156_height_2()));
			return GeoElevationGrid_9_156_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #157, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_157_point()
		{
			MFVec2f TextureCoordinate_10_157_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_157_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_157_point_2()));
			return TextureCoordinate_10_157_point;
		}
		/** Large attribute array: GeoElevationGrid height field, scene-graph level=9, element #166, 192 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFDouble getGeoElevationGrid_9_166_height()
		{
			MFDouble GeoElevationGrid_9_166_height = new MFDouble()/*2.finalize*/
				.append(new MFDouble(getGeoElevationGrid_9_166_height_1()))
				.append(new MFDouble(getGeoElevationGrid_9_166_height_2()));
			return GeoElevationGrid_9_166_height;
		}
		/** Large attribute array: TextureCoordinate point field, scene-graph level=10, element #167, 384 total numbers made up of 192 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getTextureCoordinate_10_167_point()
		{
			MFVec2f TextureCoordinate_10_167_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getTextureCoordinate_10_167_point_1()))
				.append(new MFVec2f(getTextureCoordinate_10_167_point_2()));
			return TextureCoordinate_10_167_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Squaw model
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
        X3D thisExampleX3dModel = new Squaw().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Squaw\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Squaw\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
