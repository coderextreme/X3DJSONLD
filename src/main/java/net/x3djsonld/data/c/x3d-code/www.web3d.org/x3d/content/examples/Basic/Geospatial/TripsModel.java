package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Individual trip locations and links, integrated as Inline into TripsAroundWorld. </p>
 <p> Related links: <a href="../../../Geospatial/TripsModel.java">TripsModel.java</a> source, <a href="../../../Geospatial/TripsModelIndex.html" target="_top">TripsModel catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/TripsModel.x3d">TripsModel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Individual trip locations and links, integrated as Inline into TripsAroundWorld. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Reddy, SRI </td>
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
			<td> 20 October 2019 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsModel.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsModel.x3d</a> </td>
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

	* @author Martin Reddy, SRI
 */

public class TripsModel
{
	/** Default constructor to create this object. */
	public TripsModel ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TripsModel.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Individual trip locations and links, integrated as Inline into TripsAroundWorld."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Reddy, SRI"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("22 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/examples"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D geospatial example"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsModel.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("TripsModel.x3d"))
    .addChild(new Group()
      .addChild(new GeoViewpoint().setDescription("Model 1").setOrientation(1.0,0.0,0.0,-1.57).setPosition(-22.9062,-43.1748,+5000100.0))
      .addChild(new GeoMetadata()
        .addComments(" original GeoMetadata summary='\"title\" \"Martin&apos;s Trips\" \"software\" \"text2geovrml (C) 2000 SRI International\" \"models\" \"46\"' ")
        .setMetadata(new MetadataSet().setName("GeoMetadata.summary").setReference("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-CD/Part01/components/geospatial.html#GeoMetadata")
          .setMetadata(new MetadataString().setName("title").setValue(new String[] {"Martin's Trips"}))
          .setMetadata(new MetadataString().setName("software").setValue(new String[] {"text2geovrml (C) 2000 SRI International"}))
          .setMetadata(new MetadataString().setName("models").setValue(new String[] {"46"}))))
      .addChild(new GeoLocation().setGeoCoords(-22.9062,-43.1748,+50100.0)
        .addChild(new Anchor().setDescription("Rio De Janeiro").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/rio1.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 2").setOrientation(1.0,0.0,0.0,-1.57).setPosition(20.9458,-86.8608,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(20.9458,-86.8608,+50100.0)
        .addChild(new Anchor().setDescription("Cancun").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico1.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 3").setOrientation(1.0,0.0,0.0,-1.57).setPosition(20.9817,-89.6103,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(20.9817,-89.6103,+50100.0)
        .addChild(new Anchor().setDescription("Merida").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 4").setOrientation(1.0,0.0,0.0,-1.57).setPosition(20.405,-89.53,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(20.405,-89.53,+50100.0)
        .addChild(new Anchor().setDescription("Uxmal").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico4.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 5").setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.5758,77.1958,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(28.5758,77.1958,+50100.0)
        .addChild(new Anchor().setDescription("New Delhi").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/hauz.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 6").setOrientation(1.0,0.0,0.0,-1.57).setPosition(27.1892,78.0128,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(27.1892,78.0128,+50100.0)
        .addChild(new Anchor().setDescription("Agra").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/taj1.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 7").setOrientation(1.0,0.0,0.0,-1.57).setPosition(25.3111,83.012,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(25.3111,83.012,+50100.0)
        .addChild(new Anchor().setDescription("Varanasi").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/ganga.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 8").setOrientation(1.0,0.0,0.0,-1.57).setPosition(25.4438,78.5688,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(25.4438,78.5688,+50100.0)
        .addChild(new Anchor().setDescription("Khajuraho").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 9").setOrientation(1.0,0.0,0.0,-1.57).setPosition(13.7342,100.5292,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(13.7342,100.5292,+50100.0)
        .addChild(new Anchor().setDescription("Bangkok").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 10").setOrientation(1.0,0.0,0.0,-1.57).setPosition(22.2766,114.1525,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(22.2766,114.1525,+50100.0)
        .addChild(new Anchor().setDescription("Hong Kong").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/night3.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 11").setOrientation(1.0,0.0,0.0,-1.57).setPosition(22.19532,113.54744,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(22.19532,113.54744,+50100.0)
        .addChild(new Anchor().setDescription("Macau").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/saopaulo.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 12").setOrientation(1.0,0.0,0.0,-1.57).setPosition(-31.9397,115.7619,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(-31.9397,115.7619,+50100.0)
        .addChild(new Anchor().setDescription("Perth").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/perthdad.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 13").setOrientation(1.0,0.0,0.0,-1.57).setPosition(-23.7,133.8717,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(-23.7,133.8717,+50100.0)
        .addChild(new Anchor().setDescription("Alice Springs").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/ayers1.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 14").setOrientation(1.0,0.0,0.0,-1.57).setPosition(-34.9333,138.6,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(-34.9333,138.6,+50100.0)
        .addChild(new Anchor().setDescription("Adelaide").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/adelaide.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 15").setOrientation(1.0,0.0,0.0,-1.57).setPosition(-33.9689,151.1283,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(-33.9689,151.1283,+50100.0)
        .addChild(new Anchor().setDescription("Sydney").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/opera2.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 16").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.97,23.72,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(37.97,23.72,+50100.0)
        .addChild(new Anchor().setDescription("Athens").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/athens.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 17").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.2667,25.7167,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(35.2667,25.7167,+50100.0)
        .addChild(new Anchor().setDescription("Elounda").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/Spin.gif"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 18").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.129,-5.352,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(36.129,-5.352,+50100.0)
        .addChild(new Anchor().setDescription("Gibraltar").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 19").setOrientation(1.0,0.0,0.0,-1.57).setPosition(48.85424,2.34486,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(48.85424,2.34486,+50100.0)
        .addChild(new Anchor().setDescription("Paris").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 20").setOrientation(1.0,0.0,0.0,-1.57).setPosition(44.84138,1.75535,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(44.84138,1.75535,+50100.0)
        .addChild(new Anchor().setDescription("Padirac").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 21").setOrientation(1.0,0.0,0.0,-1.57).setPosition(57.71622,-3.28994,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(57.71622,-3.28994,+50100.0)
        .addChild(new Anchor().setDescription("Lossiemouth").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Lossie/snowman1.gif"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 22").setOrientation(1.0,0.0,0.0,-1.57).setPosition(55.85767,-4.24283,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(55.85767,-4.24283,+50100.0)
        .addChild(new Anchor().setDescription("Glasgow").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Strath/Nonsense.gif"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 23").setOrientation(1.0,0.0,0.0,-1.57).setPosition(55.95381,-3.20087,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(55.95381,-3.20087,+50100.0)
        .addChild(new Anchor().setDescription("Edinburgh").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 24").setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.50595,-0.12689,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(51.50595,-0.12689,+50100.0)
        .addChild(new Anchor().setDescription("London").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 25").setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.88481,0.90342,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(51.88481,0.90342,+50100.0)
        .addChild(new Anchor().setDescription("Colchester").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 26").setOrientation(1.0,0.0,0.0,-1.57).setPosition(54.77742,-1.573719,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(54.77742,-1.573719,+50100.0)
        .addChild(new Anchor().setDescription("Durham").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 27").setOrientation(1.0,0.0,0.0,-1.57).setPosition(54.9921,-7.3116,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(54.9921,-7.3116,+50100.0)
        .addChild(new Anchor().setDescription("Derry").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/NI/Gang.gif"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 28").setOrientation(1.0,0.0,0.0,-1.57).setPosition(54.5938,-5.9231,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(54.5938,-5.9231,+50100.0)
        .addChild(new Anchor().setDescription("Belfast").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 29").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.78572,-122.42142,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(37.78572,-122.42142,+50100.0)
        .addChild(new Anchor().setDescription("San Francisco CA").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/sfbay.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 30").setOrientation(1.0,0.0,0.0,-1.57).setPosition(34.052207,-118.24344,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(34.052207,-118.24344,+50100.0)
        .addChild(new Anchor().setDescription("Los Angeles CA").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/cement.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 31").setOrientation(1.0,0.0,0.0,-1.57).setPosition(37.893026,-119.581559,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(37.893026,-119.581559,+50100.0)
        .addChild(new Anchor().setDescription("Yosemite").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum4.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 32").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.522546,-116.917641,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(36.522546,-116.917641,+50100.0)
        .addChild(new Anchor().setDescription("Death Valley").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=death/badwater.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 33").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.755486,-73.986148,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(40.755486,-73.986148,+50100.0)
        .addChild(new Anchor().setDescription("New York NY").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 34").setOrientation(1.0,0.0,0.0,-1.57).setPosition(38.892076,-77.031942,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(38.892076,-77.031942,+50100.0)
        .addChild(new Anchor().setDescription("Washington DC").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 35").setOrientation(1.0,0.0,0.0,-1.57).setPosition(28.564086,-81.364457,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(28.564086,-81.364457,+50100.0)
        .addChild(new Anchor().setDescription("Orlando FL").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/disney1.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 36").setOrientation(1.0,0.0,0.0,-1.57).setPosition(29.955863,-90.072585,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(29.955863,-90.072585,+50100.0)
        .addChild(new Anchor().setDescription("New Orleans LA").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 37").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.026881,-105.251025,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(40.026881,-105.251025,+50100.0)
        .addChild(new Anchor().setDescription("Boulder CO").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 38").setOrientation(1.0,0.0,0.0,-1.57).setPosition(39.118556,-94.627072,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(39.118556,-94.627072,+50100.0)
        .addChild(new Anchor().setDescription("Kansas City KS").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 39").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.828402,-108.004633,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(36.828402,-108.004633,+50100.0)
        .addChild(new Anchor().setDescription("Aztec NM").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 40").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.678502,-105.954149,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(35.678502,-105.954149,+50100.0)
        .addChild(new Anchor().setDescription("Santa Fe NM").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 41").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.158861,-115.147437,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(36.158861,-115.147437,+50100.0)
        .addChild(new Anchor().setDescription("Las Vegas NV").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum15.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 42").setOrientation(1.0,0.0,0.0,-1.57).setPosition(47.612224,-122.338469,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(47.612224,-122.338469,+50100.0)
        .addChild(new Anchor().setDescription("Seattle WA").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 43").setOrientation(1.0,0.0,0.0,-1.57).setPosition(41.39,-70.65,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(41.39,-70.65,+50100.0)
        .addChild(new Anchor().setDescription("Martha's Vineyard MA").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 44").setOrientation(1.0,0.0,0.0,-1.57).setPosition(36.046441,-112.153457,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(36.046441,-112.153457,+50100.0)
        .addChild(new Anchor().setDescription("Grand Canyon AZ").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum8.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 45").setOrientation(1.0,0.0,0.0,-1.57).setPosition(40.440219,-121.527441,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(40.440219,-121.527441,+50100.0)
        .addChild(new Anchor().setDescription("Lassen Park CA").setParameter(new String[] {"target=_martinstrips"}).setUrl(new String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=lassen/Lassen4.jpg"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))
      .addChild(new GeoViewpoint().setDescription("Model 46").setOrientation(1.0,0.0,0.0,-1.57).setPosition(51.17,-115.57,+5000100.0))
      .addChild(new GeoLocation().setGeoCoords(51.17,-115.57,+50100.0)
        .addChild(new Anchor().setDescription("Banff").setParameter(new String[] {"target=_martinstrips"})
          .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14159)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cone().setBottomRadius(50000.0).setHeight(100000.0))))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TripsModel model
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
        X3D thisExampleX3dModel = new TripsModel().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.TripsModel\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TripsModel\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
