package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> The temple example shows precise positioning of geometry using double-precision coordinates. See reference comparison page. </p>
 <p> Related links: <a href="../../../Geospatial/Temple.java">Temple.java</a> source, <a href="../../../Geospatial/TempleIndex.html" target="_top">Temple catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/Temple.x3d">Temple.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Antonis Chalakatevakis NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Reddy SRI authored the original temple scene. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> The temple example shows precise positioning of geometry using double-precision coordinates. See reference comparison page. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Temple.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Temple.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.ai.sri.com/~reddy/geovrml/examples/temple" target="_blank">http://www.ai.sri.com/~reddy/geovrml/examples/temple</a> </td>
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

	* @author Martin Reddy SRI authored the original temple scene.
 */

public class Temple
{
	/** Default constructor to create this object. */
	public Temple ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Temple.x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Antonis Chalakatevakis NPS"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Reddy SRI authored the original temple scene."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("The temple example shows precise positioning of geometry using double-precision coordinates. See reference comparison page."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Temple.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.ai.sri.com/~reddy/geovrml/examples/temple"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Temple.x3d"))
    .addChild(new NavigationInfo().setAvatarSize(new double[] {0.000001,0.000001,0.000001}).setSpeed(0.0001))
    .addChild(new GeoViewpoint().setDescription("Temple").setGeoSystem(new String[] {"UTM","Z11"}).setOrientation(1.0,0.0,0.0,-1.57).setPosition(8167782.0,258125.0,45.0)
      .setGeoOrigin(new GeoOrigin("ORIGIN").setGeoCoords(8.16778e+06,258126.0,0.0).setGeoSystem(new String[] {"UTM","Z11"})))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {1.0,1.0,1.0})).setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Transform()
        .addChild(new Shape("COLUMN")
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture("stone6").setUrl(new String[] {"images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"}))
            .setMaterial(new Material().setDiffuseColor(1.0,.9,.8)))
          .setGeometry(new Cylinder().setHeight(5).setRadius(0.6)))))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167773.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167775.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167777.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167779.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167781.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167783.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167785.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258115.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167773.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167775.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167777.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167779.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167781.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167783.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167785.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258117.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258119.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258119.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258119.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258119.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258121.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258121.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258121.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258121.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258123.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258123.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258123.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258123.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258125.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258125.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258125.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258125.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258127.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258127.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258127.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258127.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258129.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258129.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258129.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258129.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258131.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258131.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258131.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258131.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167773.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167775.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167777.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167779.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167781.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167783.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167785.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258133.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167769.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167771.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167773.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167775.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167777.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167779.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167781.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167783.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167785.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167787.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167789.0,258135.0,2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Shape().setUSE("COLUMN")))
    .addChild(new GeoLocation().setGeoCoords(8167779.0,258125.0,-0.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,0.13)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture("stone5").setUrl(new String[] {"images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"}))
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box().setSize(22.0,1.0,22.0)))))
    .addChild(new GeoLocation().setGeoCoords(8167779.0,258125.0,-1.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,0.13)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("stone5"))
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box().setSize(24.0,1.0,24.0)))))
    .addChild(new GeoLocation().setGeoCoords(8167779.0,258125.0,-2.5).setGeoSystem(new String[] {"UTM","Z11"})
      .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,0.13)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("stone5"))
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box().setSize(26.0,1.0,26.0))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Temple model
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
        X3D thisExampleX3dModel = new Temple().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Temple\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Temple\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
