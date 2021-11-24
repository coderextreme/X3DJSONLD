package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> How a laser printer works. </p>
 <p> Related links: <a href="../../../StudentProjects/LaserPrinter.java">LaserPrinter.java</a> source, <a href="../../../StudentProjects/LaserPrinterIndex.html" target="_top">LaserPrinter catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/LaserPrinter.x3d">LaserPrinter.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Harold W. Valentine </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 22 August 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> How a laser printer works </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaserPrinter.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaserPrinter.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/BottomFuserRoller.jpg">BottomFuserRoller.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/PaperRoller.gif">PaperRoller.gif</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/PaperRoller.jpg">PaperRoller.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/ReverseText.jpg">ReverseText.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/Text.jpg">Text.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/TopFuser.jpg">TopFuser.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/TopFuserRoller.gif">TopFuserRoller.gif</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/chargeroller.jpg">chargeroller.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/chipset.jpg">chipset.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../StudentProjects/mirror.jpg">mirror.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Harold W. Valentine
 */

public class LaserPrinter
{
	/** Default constructor to create this object. */
	public LaserPrinter ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("LaserPrinter.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Harold W. Valentine"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("22 August 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("How a laser printer works"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaserPrinter.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("BottomFuserRoller.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PaperRoller.gif"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PaperRoller.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("ReverseText.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Text.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("TopFuser.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("TopFuserRoller.gif"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("chargeroller.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("chipset.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("mirror.jpg"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LaserPrinter.x3d"))
    .addChild(new Viewpoint().setDescription("LaserPrinter").setOrientation(-0.590284,0.769274,0.244504,0.987861).setPosition(10.0,10.0,10.0))
    .addChild(new Group()
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-0.85,-3.75)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new Cylinder().setHeight(6).setRadius(.03))))
      .addChild(new Transform().setTranslation(0.0,0.05,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(-3.0,0.0,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.3,0.3,0.3).setShininess(0.6).setSpecularColor(1.0,1.0,1.0)))
            .setGeometry(new Cylinder().setHeight(.1))))
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(3.0,0.0,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.3,0.3,0.3).setShininess(0.6).setSpecularColor(1.0,1.0,1.0)))
            .setGeometry(new Cylinder().setHeight(.1)))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,.1,-1.75)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.5,0.5,0.5)))
          .setGeometry(new Box().setSize(.75,6.0,.75))))
      .addChild(new Group()
        .addChild(new TimeSensor("ChargeRollerTimer").setCycleInterval(10).setLoop(true))
        .addChild(new OrientationInterpolator("ChargeRollerOr").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,6.283185307,0.0,1.0,0.0,5.497787144,0.0,1.0,0.0,4.71238898,0.0,1.0,0.0,3.926990817,0.0,1.0,0.0,3.141592654,0.0,1.0,0.0,2.35619449,0.0,1.0,0.0,1.570796327,0.0,1.0,0.0,0.7854163,0.0,1.0,0.0,0.0}))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,0.1,-1.25)
        .addChild(new Transform("ChargeRoller")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.5,0.5,1.0))
              .setTexture(new ImageTexture().setUrl(new String[] {"chargeroller.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/chargeroller.jpg"})))
            .setGeometry(new Cylinder().setHeight(6).setRadius(.25)))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-0.215,-1.25)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.6,0.25,0.25)))
          .setGeometry(new Box().setSize(.12,6.0,.25))))
      .addChild(new Group()
        .addChild(new TimeSensor("TopFuserTimer").setCycleInterval(10).setLoop(true))
        .addChild(new OrientationInterpolator("TopFuserOr").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.7854163,0.0,1.0,0.0,1.570796327,0.0,1.0,0.0,2.35619449,0.0,1.0,0.0,3.141592654,0.0,1.0,0.0,3.926990817,0.0,1.0,0.0,4.71238898,0.0,1.0,0.0,5.497787144,0.0,1.0,0.0,6.283185307}))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-.68,3.0)
        .addChild(new Transform("TopFuser")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0))
              .setTexture(new ImageTexture().setUrl(new String[] {"TopFuserRoller.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/TopFuserRoller.jpg"})))
            .setGeometry(new Cylinder().setHeight(6).setRadius(.25)))))
      .addChild(new Group()
        .addChild(new TimeSensor("BottomFuserTimer").setCycleInterval(10).setLoop(true))
        .addChild(new OrientationInterpolator("BottomFuserOr").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,6.283185307,0.0,1.0,0.0,5.497787144,0.0,1.0,0.0,4.71238898,0.0,1.0,0.0,3.926990817,0.0,1.0,0.0,3.141592654,0.0,1.0,0.0,2.35619449,0.0,1.0,0.0,1.570796327,0.0,1.0,0.0,0.7854163,0.0,1.0,0.0,0.0}))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-1.2,3.0)
        .addChild(new Transform("BottomFuser")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0))
              .setTexture(new ImageTexture().setUrl(new String[] {"BottomFuserRoller.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/BottomFuserRoller.jpg"})))
            .setGeometry(new Cylinder().setHeight(6).setRadius(.25)))))
      .addChild(new Group()
        .addChild(new TimeSensor("TopPaperTimer").setCycleInterval(10).setLoop(true))
        .addChild(new OrientationInterpolator("TopPaperOr").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.7854163,0.0,1.0,0.0,1.570796327,0.0,1.0,0.0,2.35619449,0.0,1.0,0.0,3.141592654,0.0,1.0,0.0,3.926990817,0.0,1.0,0.0,4.71238898,0.0,1.0,0.0,5.497787144,0.0,1.0,0.0,6.283185307}))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-0.68,-3.0)
        .addChild(new Transform("TopPaper")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material())
              .setTexture(new ImageTexture("paperroller").setUrl(new String[] {"PaperRoller.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PaperRoller.jpg"})))
            .setGeometry(new Cylinder().setHeight(6).setRadius(.25)))))
      .addChild(new Group()
        .addChild(new TimeSensor("BottomPaperTimer").setCycleInterval(10).setLoop(true))
        .addChild(new OrientationInterpolator("BottomPaperOr").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,6.283185307,0.0,1.0,0.0,5.497787144,0.0,1.0,0.0,4.71238898,0.0,1.0,0.0,3.926990817,0.0,1.0,0.0,3.141592654,0.0,1.0,0.0,2.35619449,0.0,1.0,0.0,1.570796327,0.0,1.0,0.0,0.7854163,0.0,1.0,0.0,0.0}))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-1.2,-3.0)
        .addChild(new Transform("BottomPaper")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))
              .setTexture(new ImageTexture().setUSE("paperroller")))
            .setGeometry(new Cylinder().setHeight(6).setRadius(.25)))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-.94,3.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0))
            .setTexture(new ImageTexture().setUrl(new String[] {"Text.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Text.jpg"})))
          .setGeometry(new Box().setSize(.02,6.0,8.0))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,-.94,-3.5)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Box().setSize(.02,6.0,2.0))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(0.0,2.0,-3.5)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new Box().setSize(.5,1.5,2.0))))
      .addChild(new Group()
        .addChild(new TimeSensor("MirrorTimer").setCycleInterval(0.1).setLoop(true))
        .addChild(new OrientationInterpolator("MirrorOr").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,6.283185307,0.0,1.0,0.0,5.497787144,0.0,1.0,0.0,4.71238898,0.0,1.0,0.0,3.926990817,0.0,1.0,0.0,3.141592654,0.0,1.0,0.0,2.35619449,0.0,1.0,0.0,1.570796327,0.0,1.0,0.0,0.7854163,0.0,1.0,0.0,0.0}))))
      .addChild(new Transform("Mirror").setTranslation(0.0,2.0,2.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(.5,.5,.5))
            .setTexture(new ImageTexture().setUrl(new String[] {"mirror.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/mirror.jpg"})))
          .setGeometry(new Cylinder().setHeight(.5).setRadius(.5))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57079).setTranslation(0.0,2.0,-1.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("Red").setDiffuseColor(1.0,0.0,0.0)))
          .setGeometry(new Cylinder().setHeight(6).setRadius(.04))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,.6).setScale(1.0,1.0,.01).setTranslation(0.0,1.352,1.0825)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("Red")))
          .setGeometry(new Cone().setBottomRadius(3).setHeight(1.48))))
      .addChild(new Transform().setTranslation(0.0,0.0,-4.5)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("Green").setDiffuseColor(.2,1.0,0.0)))
          .setGeometry(new Box().setSize(10.0,5.0,.2))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57079).setTranslation(-4.9,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.5,1.0,0.0)))
          .setGeometry(new Box().setSize(9.0,5.0,.2))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57079).setTranslation(-4.7,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("DarkGreen").setDiffuseColor(0.0,.5,0.0))
            .setTexture(new ImageTexture().setUrl(new String[] {"chipset.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/chipset.jpg"})))
          .setGeometry(new Box().setSize(7.0,3.0,.2))))
      .addChild(new Group()
        .addChild(new TimeSensor("PrinterDrumTimer").setCycleInterval(10).setLoop(true))
        .addChild(new OrientationInterpolator("PrinterDrumOr").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,6.283185307,1.0,0.0,0.0,5.497787144,1.0,0.0,0.0,4.71238898,1.0,0.0,0.0,3.926990817,1.0,0.0,0.0,3.141592654,1.0,0.0,0.0,2.35619449,1.0,0.0,0.0,1.570796327,1.0,0.0,0.0,0.7854163,1.0,0.0,0.0,0.0}))))
      .addChild(new Transform("PrinterDrum").setTranslation(0.0,0.05,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material("DrumColor").setDiffuseColor(1.0,1.0,1.0).setShininess(0.6).setSpecularColor(1.0,1.0,1.0))
              .setTexture(new ImageTexture().setUrl(new String[] {"ReverseText.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ReverseText.jpg"})))
            .setGeometry(new Cylinder().setHeight(6))))))
    .addChild(new ROUTE().setFromNode("PrinterDrumTimer").setFromField("fraction_changed").setToNode("PrinterDrumOr").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PrinterDrumOr").setFromField("value_changed").setToNode("PrinterDrum").setToField("rotation"))
    .addChild(new ROUTE().setFromNode("MirrorTimer").setFromField("fraction_changed").setToNode("MirrorOr").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("MirrorOr").setFromField("value_changed").setToNode("Mirror").setToField("rotation"))
    .addChild(new ROUTE().setFromNode("ChargeRollerTimer").setFromField("fraction_changed").setToNode("ChargeRollerOr").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("ChargeRollerOr").setFromField("value_changed").setToNode("ChargeRoller").setToField("rotation"))
    .addChild(new ROUTE().setFromNode("TopFuserTimer").setFromField("fraction_changed").setToNode("TopFuserOr").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TopFuserOr").setFromField("value_changed").setToNode("TopFuser").setToField("rotation"))
    .addChild(new ROUTE().setFromNode("BottomFuserTimer").setFromField("fraction_changed").setToNode("BottomFuserOr").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("BottomFuserOr").setFromField("value_changed").setToNode("BottomFuser").setToField("rotation"))
    .addChild(new ROUTE().setFromNode("TopPaperTimer").setFromField("fraction_changed").setToNode("TopPaperOr").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TopPaperOr").setFromField("value_changed").setToNode("TopPaper").setToField("rotation"))
    .addChild(new ROUTE().setFromNode("BottomPaperTimer").setFromField("fraction_changed").setToNode("BottomPaperOr").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("BottomPaperOr").setFromField("value_changed").setToNode("BottomPaper").setToField("rotation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return LaserPrinter model
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
        X3D thisExampleX3dModel = new LaserPrinter().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.LaserPrinter\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.LaserPrinter\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
