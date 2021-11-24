package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test Scene of LocalFog Node: Moving LocalFog having visibilityRange=40 and Linear attenuation. Attenuation should be vary depending on LocalFog center. </p>
 <p> Related links: <a href="../../../../Miscellaneous/LocalFog/LocalFogEffectsTest.java">LocalFogEffectsTest.java</a> source, <a href="../../../../Miscellaneous/LocalFog/LocalFogEffectsTestIndex.html" target="_top">LocalFogEffectsTest catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Miscellaneous/LocalFog/LocalFogEffectsTest.x3d">LocalFogEffectsTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Sungmin Kwon and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.wiley.com/legacy/compbooks/vrml2sbk/ch23/23fig02b.htm" target="_blank">http://www.wiley.com/legacy/compbooks/vrml2sbk/ch23/23fig02b.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 July 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development, LocalFog specification functionality review in progress on x3d-public@web3D.org </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Miscellaneous/LocalFog/LocalFogEffectsTestViewFarInstantReality.png">LocalFogEffectsTestViewFarInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Miscellaneous/LocalFog/LocalFogEffectsTestViewGroundInstantReality.png">LocalFogEffectsTestViewGroundInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Miscellaneous/LocalFog/LocalFogEffectsTestViewNearInstantReality.png">LocalFogEffectsTestViewNearInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Miscellaneous/LocalFog/LocalFogEffectsPresentation.pdf">LocalFogEffectsPresentation.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> LocalFogEffectsPresentation.pptx </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test Scene of LocalFog Node: Moving LocalFog having visibilityRange=40 and Linear attenuation. Attenuation should be vary depending on LocalFog center. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/tooltips/X3dTooltips.html#LocalFog" target="_blank">https://www.web3d.org/x3d/tooltips/X3dTooltips.html#LocalFog</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_2bLinearFogVisibility40.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_2bLinearFogVisibility40.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/LocalFog/LocalFogEffectsTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/LocalFog/LocalFogEffectsTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Miscellaneous/LocalFog/../../license.html">../../license.html</a> </td>
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

	* @author Sungmin Kwon and Don Brutzman
 */

public class LocalFogEffectsTest
{
	/** Default constructor to create this object. */
	public LocalFogEffectsTest ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("LocalFogEffectsTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Sungmin Kwon and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch23/23fig02b.htm"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("8 July 2018"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development, LocalFog specification functionality review in progress on x3d-public@web3D.org"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("LocalFogEffectsTestViewFarInstantReality.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("LocalFogEffectsTestViewGroundInstantReality.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("LocalFogEffectsTestViewNearInstantReality.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("LocalFogEffectsPresentation.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("LocalFogEffectsPresentation.pptx"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test Scene of LocalFog Node: Moving LocalFog having visibilityRange=40 and Linear attenuation. Attenuation should be vary depending on LocalFog center."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/tooltips/X3dTooltips.html#LocalFog"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_2bLinearFogVisibility40.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/LocalFog/LocalFogEffectsTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LocalFogEffectsTest.x3d"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.5,0.5,0.0})).setSkyColor(new MFColor(new double[] {0.8,0.8,1.0})))
    .addChild(new Group("StationaryObjects")
      .addChild(new Viewpoint().setDescription("Far View of LocalFog").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,115.0,0.0))
      .addChild(new Viewpoint().setDescription("Top View of LocalFog").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,35.0,0.0))
      .addChild(new Viewpoint().setDescription("Front View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,60.0))
      .addChild(new Viewpoint().setDescription("Close1 View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,35.0))
      .addChild(new Viewpoint().setDescription("Close2 View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,27.0))
      .addChild(new Viewpoint().setDescription("Close3 View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,19.0))
      .addChild(new Viewpoint().setDescription("Close4 View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,11.0))
      .addChild(new Viewpoint().setDescription("Close5 View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,3.0))
      .addChild(new Viewpoint().setDescription("Close6 View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,-5.0))
      .addChild(new Viewpoint().setDescription("Close7 View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setPosition(0.0,3.0,-13.0))
      .addChild(new Viewpoint().setDescription("Left View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setOrientation(0.0,1.0,0.0,-1.57).setPosition(-40.0,3.0,0.0))
      .addChild(new Viewpoint().setDescription("Right View of LocalFog").setCenterOfRotation(0.0,3.0,0.0).setOrientation(0.0,1.0,0.0,1.57).setPosition(40.0,3.0,0.0))
      .addChild(new Transform("TextForNoLocalFogArea").setTranslation(8.0,8.0,30.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Shape()
            .addComments(" TODO adjust Text string and Box size, then set Material transparency='1' ")
            .setGeometry(new Text().setString(new String[] {"Columns","Outside","LocalFog"})
              .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2).setCssStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.9,0.9,0.9))))
          .addChild(new Shape()
            .addComments(" Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. ")
            .setGeometry(new Box().setSize(9.0,6.0,.001))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.8))))
          .addComments(" Author TODO: for interactive scenes, the TouchSensor output is easily applied as an animation trigger by adding a DEF name and a connecting ROUTE. ")
          .addChild(new TouchSensor().setDescription("These columns are normal, because they are outside LocalFog."))))
      .addChild(new Transform("TextofLocalFog").setTranslation(-8.0,8.0,30.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Shape()
            .addComments(" TODO adjust Text string and Box size, then set Material transparency='1' ")
            .setGeometry(new Text().setString(new String[] {"Columns","Inside","LocalFog"})
              .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(2).setCssStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.9,0.9,0.9))))
          .addChild(new Shape()
            .addComments(" Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. ")
            .setGeometry(new Box().setSize(9.0,6.0,.001))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.8))))
          .addComments(" Author TODO: for interactive scenes, the TouchSensor output is easily applied as an animation trigger by adding a DEF name and a connecting ROUTE. ")
          .addChild(new TouchSensor().setDescription("LocalFog of these columns should vary depending on center of LocalFog."))))
      .addChild(new Transform("ColumnsOfLocalFogArea").setTranslation(8.0,-0.1,0.0)
        .addComments(" Columns outside LocalFog subtree ")
        .addChild(new Inline("Columns").setUrl(new String[] {"Figure23_1FogTestWorld.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_1FogTestWorld.x3d","Figure23_1FogTestWorld.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter23Fog/Figure23_1FogTestWorld.wrl"})))
      .addChild(new Transform("GreenBaseGroundOutLine").setTranslation(0.0,-0.4,0.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(100.0,0.3,100.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.5).setEmissiveColor(0.2,0.8,0.2))))))
    .addChild(new Group("MovingObjectsWithLocalFog")
      .addComments(" Transform of Local Fog: Moving back and forth along z axis ")
      .addChild(new Transform("BackandForthTransform")
        .addComments(" Moving Local Fog ")
        .addChild(new LocalFog().setVisibilityRange(40))
        .addComments(" Columns inside Local Fog ")
        .addChild(new Transform("ColumnsGroundAndTextInLocalFog").setTranslation(-8.0,-0.1,0.0)
          .addChild(new Transform("ForthandBackTransform")
            .addChild(new Inline().setUSE("Columns"))
            .addChild(new Transform("GreenBaseGround").setTranslation(8.0,-0.1,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(90.0,0.3,90.0))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.5).setEmissiveColor(0.2,0.8,0.2))))))))
      .addChild(new TimeSensor("BackandForthTimeInterval").setCycleInterval(8).setLoop(true))
      .addComments(" Moving z axis ")
      .addChild(new PositionInterpolator("BackandForthPosition").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,30.0,0.0,0.0,0.0,0.0,0.0,-30.0,0.0,0.0,0.0,0.0,0.0,30.0})))
      .addChild(new PositionInterpolator("ForthandBackPosition").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,-30.0,0.0,0.0,0.0,0.0,0.0,30.0,0.0,0.0,0.0,0.0,0.0,-30.0})))
      .addChild(new ROUTE().setFromNode("BackandForthTimeInterval").setFromField("fraction_changed").setToNode("BackandForthPosition").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("BackandForthTimeInterval").setFromField("fraction_changed").setToNode("ForthandBackPosition").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("BackandForthPosition").setFromField("value_changed").setToNode("BackandForthTransform").setToField("translation"))
      .addChild(new ROUTE().setFromNode("ForthandBackPosition").setFromField("value_changed").setToNode("ForthandBackTransform").setToField("translation")))
    .addChild(new Group("MovingObjectsNoFog")
      .addComments(" Transform of Local Fog: Moving back and forth along z axis ")
      .addChild(new Transform("BackandForthTransform2")
        .addComments(" Center of Local Fog ")
        .addChild(new Transform("TextofLocalFogCenter").setRotation(1.0,0.0,0.0,0.0).setTranslation(0.0,2.0,2.0)
          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.8,0.8,0.0)))
              .setGeometry(new Text().setString(new String[] {"LocalFog","Center"})
                .setFontStyle(new FontStyle("CenterFontStyle").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setCssStyle("BOLD"))))))
        .addChild(new Shape("LocalFogCenter")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
          .setGeometry(new Sphere().setRadius(0.5)))
        .addComments(" 3D Boundary of Local Fog ")
        .addChild(new Transform("LocalFog3dBoundary").setScale(40.0,40.0,40.0).setTranslation(0.0,0.1,0.0)
          .addChild(new Group("SphereMeshHorizontal")
            .addChild(new Shape()
              .setAppearance(new Appearance("BoundaryAppearance")
                .setMaterial(new Material("BoundaryLineMaterial").setEmissiveColor(0.1,0.1,0.5)))
              .setGeometry(new Circle2D()))
            .addChild(new Transform().setTranslation(0.0,0.0,0.25)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("BoundaryAppearance"))
                .setGeometry(new Circle2D().setRadius(0.97))))
            .addChild(new Transform().setTranslation(0.0,0.0,0.5)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("BoundaryAppearance"))
                .setGeometry(new Circle2D().setRadius(0.87))))
            .addChild(new Transform().setTranslation(0.0,0.0,0.75)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("BoundaryAppearance"))
                .setGeometry(new Circle2D().setRadius(0.66))))
            .addChild(new Transform().setTranslation(0.0,0.0,-0.25)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("BoundaryAppearance"))
                .setGeometry(new Circle2D().setRadius(0.97))))
            .addChild(new Transform().setTranslation(0.0,0.0,-0.5)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("BoundaryAppearance"))
                .setGeometry(new Circle2D().setRadius(0.87))))
            .addChild(new Transform().setTranslation(0.0,0.0,-0.75)
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("BoundaryAppearance"))
                .setGeometry(new Circle2D().setRadius(0.66)))))
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57)
            .addChild(new Group().setUSE("SphereMeshHorizontal")))
          .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57)
            .addChild(new Group().setUSE("SphereMeshHorizontal"))))
        .addComments(" 2D Boundary of Local Fog ")
        .addChild(new Transform("LocalFogBoundary").setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.1,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("BoundaryLineMaterial"))
              .setLineProperties(new LineProperties().setLinewidthScaleFactor(3)))
            .setGeometry(new Circle2D().setRadius(40)))
          .addChild(new Transform("CrossHatchRotation").setRotation(0.0,0.0,1.0,0.785)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("BoundaryLineMaterial")))
              .setGeometry(new LineSet().setVertexCount(new int[] {2,2,2,2,2,2})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {40.0,0.0,0.0,-40.0,0.0,0.0,0.0,40.0,0.0,0.0,-40.0,0.0,20.0,34.599998,0.0,20.0,-34.599998,0.0,-20.0,34.599998,0.0,-20.0,-34.599998,0.0,34.599998,20.0,0.0,-34.599998,20.0,0.0,34.599998,-20.0,0.0,-34.599998,-20.0,0.0})))))))
        .addChild(new Transform("TextofLocalFogBoundary").setRotation(1.0,0.0,0.0,0.0).setTranslation(0.0,0.5,40.0)
          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.2,0.2,1.0)))
              .setGeometry(new Text().setString(new String[] {"Visibility Range of LocalFog"})
                .setFontStyle(new FontStyle().setUSE("CenterFontStyle")))))))
      .addChild(new ROUTE().setFromNode("BackandForthPosition").setFromField("value_changed").setToNode("BackandForthTransform2").setToField("translation")))
    .addChild(new Group("ControlButtons")
      .addComments(" HUD : Colormap Part ")
      .addComments(" Simple Heads-Up Display (HUD) Prototype Manages the display of a HUD and maintains its position on the screen. Changes to fieldOfView (in Viewpoint node) will change screen position Fields: hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\" hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\" screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\" hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = [] position_changed Current viewer location (outputOnly - SFVec3f) orientation_changed Current viewer orientation (outputOnly - SFRotation) ")
      .addChild(new ExternProtoDeclare("HeadsUpDisplay").setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new String[] {"HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"})
        .addField(new field().setName("screenOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
        .addField(new field().setName("position_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
        .addField(new field().setName("orientation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
      .addChild(new ProtoInstance("HeadsUpDisplay", "HeadsUpDisplayInstance").setContainerField("children")
        .addComments(" example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view ")
        .addFieldValue(new fieldValue().setName("screenOffset").setValue(new SFVec3f(0.0,0.0,-5.0)))
        .addFieldValue(new fieldValue().setName("children")
          .addChild(new Transform("PauseButton").setTranslation(1.13,1.7,0.0)
            .addChild(new Shape()
              .addComments(" Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. ")
              .setGeometry(new Box().setSize(0.4,0.25,.001))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.5,0.5))))
            .addChild(new Transform().setTranslation(-0.06,-0.06,0.2)
              .addChild(new Shape()
                .setGeometry(new Text().setString(new String[] {"Pause"})
                  .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.12).setCssStyle("BOLD")))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(0.894118,0.819608,1.0)))))
            .addChild(new TouchSensor("PauseButtonSensor").setDescription("Pause"))
            .addChild(new ROUTE().setFromNode("PauseButtonSensor").setFromField("touchTime").setToNode("BackandForthTimeInterval").setToField("pauseTime")))
          .addChild(new Transform("ResumeButton").setTranslation(1.6,1.7,0.0)
            .addChild(new Shape()
              .setGeometry(new Box().setSize(0.45,0.25,.001))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.5,1.0,0.5))))
            .addChild(new Transform().setTranslation(-0.06,-0.06,0.2)
              .addChild(new Shape()
                .setGeometry(new Text().setString(new String[] {"Resume"})
                  .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.12).setCssStyle("BOLD")))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(0.894118,0.819608,1.0)))))
            .addChild(new TouchSensor("ResumeButtonSensor").setDescription("Resume"))
            .addChild(new ROUTE().setFromNode("ResumeButtonSensor").setFromField("touchTime").setToNode("BackandForthTimeInterval").setToField("resumeTime")))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return LocalFogEffectsTest model
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
        X3D thisExampleX3dModel = new LocalFogEffectsTest().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.LocalFogEffectsTest\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.LocalFogEffectsTest\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
