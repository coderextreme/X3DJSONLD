package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Simple dirt bike model. </p>
 <p> Related links: <a href="../../../StudentProjects/DirtBike.java">DirtBike.java</a> source, <a href="../../../StudentProjects/DirtBikeIndex.html" target="_top">DirtBike catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/DirtBike.x3d">DirtBike.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple dirt bike model. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Future work: why not make wheels rotate, as well as spokes? also need to make handle bars steerable. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Matthew Molmer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 February 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DirtBike.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DirtBike.x3d</a> </td>
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

	* @author Matthew Molmer
 */

public class DirtBike
{
	/** Default constructor to create this object. */
	public DirtBike ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("DirtBike.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Simple dirt bike model."))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Future work: why not make wheels rotate, as well as spokes? also need to make handle bars steerable."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Matthew Molmer"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 February 2004"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DirtBike.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("DirtBike.x3d"))
    .addChild(new Viewpoint().setDescription("Closeup Side View").setPosition(.5,.2,1.5))
    .addChild(new Viewpoint().setDescription("sprocket view").setPosition(.30,.08,.38))
    .addChild(new Viewpoint().setDescription("far away side view").setPosition(0.0,0.0,5.0))
    .addChild(new Group("frameGroup")
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.1).setTranslation(.64,.34,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Shape("piece_1")
            .setGeometry(new Cylinder().setHeight(.64).setRadius(.02))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.50).setTranslation(.68,.20,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Shape("piece_2")
            .setGeometry(new Cylinder().setHeight(.64).setRadius(.02))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform().setTranslation(.378,.030,0.0)
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57)
          .addChild(new Shape("piece_10")
            .setGeometry(new Cylinder().setHeight(.10).setRadius(.03))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,.087).setTranslation(.19,.015,.045)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.65)
          .addChild(new Shape("piece_5")
            .setGeometry(new Cylinder().setHeight(.38).setRadius(.012))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,-.087).setTranslation(.19,.015,-.045)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.65)
          .addChild(new Shape("piece_6")
            .setGeometry(new Cylinder().setHeight(.38).setRadius(.012))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform().setTranslation(.35,.17,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,.175)
          .addChild(new Shape("piece_9")
            .setGeometry(new Cylinder().setHeight(.32).setRadius(.02))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform()
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57)
          .addChild(new Shape("backWheelPost")
            .setGeometry(new Cylinder().setHeight(.14).setRadius(.010))
            .setAppearance(new Appearance()
              .setMaterial(new Material())))))
      .addChild(new Transform().setTranslation(1.046,.005,0.0)
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57)
          .addChild(new Shape("frontWheelPost")
            .setGeometry(new Cylinder().setHeight(.14).setRadius(.010))
            .setAppearance(new Appearance()
              .setMaterial(new Material())))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,.16).setTranslation(.16,.16,.035)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,-.82)
          .addChild(new Shape("piece_7")
            .setGeometry(new Cylinder().setHeight(.45).setRadius(.010))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,-.16).setTranslation(.16,.16,-.035)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,-.82)
          .addChild(new Shape("piece_8")
            .setGeometry(new Cylinder().setHeight(.45).setRadius(.010))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.175).setTranslation(.98,.372,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,0.0,1.57)
          .addChild(new Shape("piece_12")
            .setGeometry(new Cylinder().setHeight(.058).setRadius(.025))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))))
    .addChild(new Group("rotatingSpokes")
      .addChild(new Transform("Column")
        .addChild(new Group("spokeGroup")
          .addChild(new Transform()
            .addChild(new Shape("spoke")
              .setGeometry(new Cylinder().setHeight(.48).setRadius(0.003))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(.9,.8,.7)))))
          .addChild(new Transform().setRotation(1.0,1.0,0.0,3.14)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,.78)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,2.35)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,.26)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,.52)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.30)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.04)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.83)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,2.61)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,4.71)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,4.45)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,4.18)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,3.92)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,3.66)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,3.40)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,2.87)
            .addChild(new Shape().setUSE("spoke")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,2.09)
            .addChild(new Shape().setUSE("spoke")))))
      .addChild(new TimeSensor("Clock").setCycleInterval(4.0).setLoop(true))
      .addChild(new OrientationInterpolator("ColumnPath").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,-1.0,0.0,0.0,0.0,-1.0,3.14,0.0,0.0,-1.0,6.28})))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("ColumnPath").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("ColumnPath").setFromField("value_changed").setToNode("Column").setToField("set_rotation")))
    .addChild(new Transform().setTranslation(1.044,0.0,0.0)
      .addChild(new Group().setUSE("rotatingSpokes")))
    .addChild(new Group("handleBarsAssembly")
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.175).setScale(.15,.15,.15).setTranslation(.86,.395,0.0)
        .addChild(new Shape("handleBars")
          .setGeometry(new Extrusion().setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setScale(new MFVec2f(new double[] {.08,.08,.08,.08,.10,.10,.10,.10,.10,.10,.10,.10,.12,.12,.12,.12,.12,.12,.12,.12,.10,.10,.10,.10,.10,.10,.08,.08,.08,.08})).setSpine(new MFVec3f(new double[] {.88,1.26,.96,.88,1.24,.52,.88,1.22,.50,.88,1.20,.48,1.0,.04,.42,1.0,.02,.40,1.0,0.0,.38,1.0,0.0,0.0,1.0,0.0,-.38,1.0,.02,-.40,1.0,.04,-.42,.88,1.20,-.48,.88,1.22,-.50,.88,1.24,-.52,.88,1.26,-.96})))
          .setAppearance(new Appearance()
            .setMaterial(new Material()))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.175).setTranslation(.98,.38,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,0.0,1.57)
          .addChild(new Shape("handleBarPost")
            .setGeometry(new Cylinder().setHeight(.12).setRadius(.02))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.175).setTranslation(.98,.418,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,0.0,1.57)
          .addChild(new Shape("gooseNeck")
            .setGeometry(new Box().setSize(.10,.040,.07))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.175).setScale(.175,.175,.175).setTranslation(.818,.30,0.0)
        .addChild(new Shape("frontForks")
          .setGeometry(new Extrusion().setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setScale(new MFVec2f(new double[] {.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.04,.10,.04,.10,.04})).setSpine(new MFVec3f(new double[] {1.0,-1.96,.30,1.0,-1.86,.30,1.0,-1.66,.30,1.0,-1.76,.30,1.0,-1.56,.30,1.0,-1.46,.30,1.0,-1.36,.30,1.0,-1.22,.30,1.0,-1.20,.30,1.0,-.12,.30,1.0,-.10,.28,1.0,-.08,.26,1.0,-.08,0.0,1.0,-.08,-.26,1.0,-.10,-.28,1.0,-.12,-.30,1.0,-1.20,-.30,1.0,-1.22,-.30,1.0,-1.36,-.30,1.0,-1.46,-.30,1.0,-1.56,-.30,1.0,-1.66,-.30,1.0,-1.76,-.30,1.0,-1.86,-.30,1.0,-1.96,-.30})))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.58).setTranslation(.955,.602,.12)
        .addChild(new Shape("handleGrips")
          .setGeometry(new Cylinder().setHeight(.08).setRadius(.018))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.58).setTranslation(.955,.602,-.12)
        .addChild(new Shape().setUSE("handleGrips"))))
    .addChild(new Group("seatAssembly")
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.25).setScale(.15,.15,.15).setTranslation(.16,.40,0.0)
        .addChild(new Shape("seat")
          .setGeometry(new Extrusion().setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setScale(new MFVec2f(new double[] {.10,.38,.10,.40,.11,.42,.11,.44,.10,.42,.10,.36,.10,.32,.10,.26,.08,.22,.06,.20,.04,.18,.02,.16,.02,.12})).setSpine(new MFVec3f(new double[] {.40,0.0,0.0,.42,0.0,0.0,.44,0.0,0.0,.54,0.0,0.0,.64,0.0,0.0,1.0,0.0,0.0,1.24,0.0,0.0,1.34,0.0,0.0,1.44,0.0,0.0,1.54,0.0,0.0,1.56,0.0,0.0,1.58,0.0,0.0,1.60,0.0,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
      .addChild(new Transform().setTranslation(.335,.25,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,.175)
          .addChild(new Shape("seatPost")
            .setGeometry(new Cylinder().setHeight(.34).setRadius(.015))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))))
      .addChild(new Transform().setTranslation(.305,.42,0.0)
        .addChild(new Shape("seatMount")
          .setGeometry(new Box().setSize(.035,.02,.035))
          .setAppearance(new Appearance()
            .setMaterial(new Material())))))
    .addChild(new Group("pedalAssembly")
      .addChild(new Transform("pedalArm").setScale(.15,.15,.15).setTranslation(.228,.030,0.0)
        .addChild(new Shape()
          .setGeometry(new Extrusion().setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setScale(new MFVec2f(new double[] {.08,.08,.08,.08,.08,.08,.10,.10,.10,.10,.10,.10,.10,.10,.10,.10,.08,.08,.08,.08,.08,.08})).setSpine(new MFVec3f(new double[] {1.10,-1.12,.52,1.10,-1.10,.50,1.0,-.04,.48,1.0,-.02,.46,1.0,0.0,.44,1.0,0.0,0.0,1.0,0.0,-.44,1.0,.02,-.46,1.0,.04,-.48,.88,1.10,-.50,.88,1.12,-.52})))
          .setAppearance(new Appearance()
            .setMaterial(new Material()))))
      .addChild(new Transform().setTranslation(.39,-.136,.1)
        .addChild(new Shape("pedals")
          .setGeometry(new Box().setSize(.05,.015,.06))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
      .addChild(new Transform().setTranslation(.36,.20,-.1)
        .addChild(new Shape().setUSE("pedals"))))
    .addChild(new Group("rotatingSpokets")
      .addChild(new Transform("Column1").setScale(.06,.06,.06).setTranslation(.38,.030,.04)
        .addChild(new Group("spoketAssembly")
          .addChild(new Transform("WHEEL").setRotation(1.0,0.0,0.0,1.57)
            .addChild(new Transform().setScale(1.0,.09,1.0).setTranslation(0.0,.20,0.0)
              .addChild(new Shape("center")
                .setGeometry(new Sphere().setRadius(.28))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
            .addChild(new Transform().setTranslation(0.0,.1,.3))
            .addChild(new Transform()
              .addChild(new Group("SPOKE_GROUP")
                .addChild(new Transform("SPOKE").setScale(.9,.09,.5).setTranslation(.6,.20,0.0)
                  .addChild(new Shape("inner")
                    .setGeometry(new Sphere().setRadius(.5))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
                .addChild(new Group("SURFACE")
                  .addChild(new Transform().setScale(.35,.09,.8).setTranslation(.95,.2,0.0)
                    .addChild(new Shape("outer")
                      .setGeometry(new Sphere().setRadius(.5))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
                  .addChild(new Transform().setRotation(0.0,1.0,0.0,.785).setTranslation(1.025,.2,0.0)
                    .addChild(new Shape("teeth")
                      .setGeometry(new Box().setSize(.3,.08,.3))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))))
                .addChild(new Transform().setRotation(0.0,1.0,0.0,.53)
                  .addChild(new Group().setUSE("SURFACE"))))
              .addChild(new Transform().setRotation(0.0,1.0,0.0,1.05)
                .addChild(new Group().setUSE("SPOKE_GROUP"))
                .addChild(new Transform().setRotation(0.0,1.0,0.0,1.05)
                  .addChild(new Group().setUSE("SPOKE_GROUP"))
                  .addChild(new Transform().setRotation(0.0,1.0,0.0,1.05)
                    .addChild(new Group().setUSE("SPOKE_GROUP"))
                    .addChild(new Transform().setRotation(0.0,1.0,0.0,1.05)
                      .addChild(new Group().setUSE("SPOKE_GROUP"))
                      .addChild(new Transform().setRotation(0.0,1.0,0.0,1.05)
                        .addChild(new Group().setUSE("SPOKE_GROUP")))))))))))
      .addChild(new Transform().setScale(.03,.03,.03).setTranslation(0.0,0.0,.05)
        .addChild(new Group().setUSE("spoketAssembly"))))
    .addChild(new Group("tireGroup")
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setScale(.26,.26,.26)
        .addChild(new Shape()
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setScale(new MFVec2f(new double[] {.96,.96,1.1,1.1})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.07,0.0,0.0,.07,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))
        .addChild(new Shape()
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setScale(new MFVec2f(new double[] {.9,.9,.9,.9})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.07,0.0,0.0,-.07,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material())))
        .addChild(new Shape()
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setScale(new MFVec2f(new double[] {1.1,1.1,1.1,1.1})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.07,0.0,0.0,-.07,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))
        .addChild(new Shape()
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setScale(new MFVec2f(new double[] {.96,.96,1.1,1.1})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-.07,0.0,0.0,-.07,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))
        .addChild(new Shape()
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setScale(new MFVec2f(new double[] {.96,.96,.9,.9})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.07,0.0,0.0,.07,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material())))
        .addChild(new Shape()
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setScale(new MFVec2f(new double[] {.96,.96,.9,.9})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-.07,0.0,0.0,-.07,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material())))))
    .addChild(new Transform().setTranslation(1.044,0.0,0.0)
      .addChild(new Group().setUSE("tireGroup")))
    .addChild(new Transform()
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.165).setTranslation(0.0,-.004,.046)
        .addChild(new Group("chainAssembly")
          .addChild(new Transform("chainElement").setRotation(1.0,0.0,0.0,1.57).setScale(.04,.025,.04).setTranslation(.38,.042,.005)
            .addChild(new Transform().setTranslation(0.0,-.12,0.0)
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.05).setRadius(.15))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
            .addChild(new Transform().setTranslation(0.0,.12,0.0)
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.05).setRadius(.15))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
            .addChild(new Transform().setTranslation(.4,-.12,0.0)
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.05).setRadius(.15))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
            .addChild(new Transform().setTranslation(.4,.12,0.0)
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.05).setRadius(.15))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(.3).setRadius(.1))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))
            .addChild(new Transform().setTranslation(.4,0.0,0.0)
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(.3).setRadius(.1))
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))))
            .addChild(new Transform().setTranslation(.25,.12,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(.3,.05,.18))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))))
            .addChild(new Transform().setTranslation(.25,-.12,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(.3,.05,.18))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))))
          .addChild(new Transform()
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.016,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.032,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.048,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.064,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.080,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.096,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.112,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.128,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.144,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.160,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.176,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.192,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setTranslation(-.208,0.0,0.0)
            .addChild(new Transform().setUSE("chainElement"))))
        .addChild(new Transform().setTranslation(-.192,0.0,0.0)
          .addChild(new Group().setUSE("chainAssembly"))))
      .addChild(new Transform().setTranslation(0.0,-.080,-.058)
        .addChild(new Transform().setTranslation(.006,0.0,-.0310)
          .addChild(new Transform().setTranslation(0.0,0.0,.135)
            .addChild(new Group().setUSE("chainAssembly")))
          .addChild(new Transform().setTranslation(-.192,0.0,.135)
            .addChild(new Group().setUSE("chainAssembly")))))
      .addChild(new Transform()
        .addChild(new Transform().setTranslation(.032,0.0,0.0)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,-.175).setTranslation(-.029,.127,.046)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,-.250).setTranslation(-.010,.152,.046)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,-.600).setTranslation(.045,.275,.046)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,.600).setTranslation(.0815,-.286,.046)
            .addChild(new Transform().setUSE("chainElement")))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,-.600).setTranslation(.053,.266,.046)
            .addChild(new Transform().setUSE("chainElement"))))
        .addChild(new Transform().setRotation(0.0,0.0,1.0,-1.0).setTranslation(.145,.34,0.0)
          .addChild(new Transform().setTranslation(.032,0.0,0.0)
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-.175).setTranslation(-.029,.127,.046)
              .addChild(new Transform().setUSE("chainElement")))
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-.250).setTranslation(-.010,.152,.046)
              .addChild(new Transform().setUSE("chainElement")))
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-.600).setTranslation(.045,.275,.046)
              .addChild(new Transform().setUSE("chainElement")))))
        .addChild(new Transform().setRotation(0.0,0.0,1.0,-1.5).setTranslation(.319,.392,0.0)
          .addChild(new Transform().setTranslation(.032,0.0,0.0)
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-.175).setTranslation(-.029,.127,.046)
              .addChild(new Transform().setUSE("chainElement")))
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-.600).setTranslation(.031,.279,.046)
              .addChild(new Transform().setUSE("chainElement")))
            .addChild(new Transform().setRotation(0.0,0.0,1.0,2.2).setTranslation(.65,-.21,.046)
              .addChild(new Transform().setUSE("chainElement"))))))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,.790).setTranslation(-.275,-.278,.046)
        .addChild(new Transform().setUSE("chainElement")))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57).setTranslation(.004,-.376,.046)
        .addChild(new Transform().setUSE("chainElement")))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,-.790).setTranslation(-.324,.215,.046)
        .addChild(new Transform().setUSE("chainElement")))
      .addChild(new Transform().setRotation(0.0,0.0,1.0,-1.04).setTranslation(-.267,.300,.046)
        .addChild(new Transform().setUSE("chainElement"))))
    .addChild(new Background().setGroundAngle(new double[] {1.309,1.570796}).setGroundColor(new MFColor(new double[] {.1,.2,0.0,.4,.26,.3,.6,.7,.7})).setSkyAngle(new double[] {1.309,1.571}).setSkyColor(new MFColor(new double[] {0.0,.2,.7,0.0,.5,1.0,1.0,1.0,1.0})))
    .addChild(new PointLight().setLocation(0.0,1.0,0.0).setRadius(25)));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return DirtBike model
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
        X3D thisExampleX3dModel = new DirtBike().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.DirtBike\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.DirtBike\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
