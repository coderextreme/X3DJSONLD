package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D example Model of a Play room. </p>
 <p> Related links: <a href="../../../StudentProjects/PlayRoom.java">PlayRoom.java</a> source, <a href="../../../StudentProjects/PlayRoomIndex.html" target="_top">PlayRoom catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/PlayRoom.x3d">PlayRoom.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D example Model of a Play room </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 March 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vaughn Pangelinan </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PlayRoom.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PlayRoom.x3d</a> </td>
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

	* @author Vaughn Pangelinan
 */

public class PlayRoom
{
	/** Default constructor to create this object. */
	public PlayRoom ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("PlayRoom.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D example Model of a Play room"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 March 2004"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Vaughn Pangelinan"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PlayRoom.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" Scene Generates the house and world ")
    .addChild(new WorldInfo().setTitle("PlayRoom.x3d"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {.1,.4,.1})).setSkyColor(new MFColor(new double[] {.8,.8,1.0})))
    .addChild(new Transform("World")
      .addChild(new Transform("House")
        .addChild(new Transform("Walls")
          .addChild(new Transform("LowerWallTransform")
            .addChild(new Transform().setTranslation(1.25,.3,1.4)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(1.499,.6,.201))
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture("BrickTex").setUrl(new String[] {"brick.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/brick.jpg"}))
                  .setTextureTransform(new TextureTransform().setScale(5.0,2.0))))
              .addChild(new Transform().setTranslation(-.7495,0.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.001,.6,.2))
                  .setAppearance(new Appearance()
                    .setTexture(new ImageTexture().setUSE("BrickTex"))
                    .setTextureTransform(new TextureTransform().setScale(.5,2.0))))))
            .addChild(new Transform().setTranslation(-1.25,.3,1.4)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(1.499,.6,.201))
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture().setUSE("BrickTex"))
                  .setTextureTransform(new TextureTransform().setScale(5.0,2.0))))
              .addChild(new Transform().setTranslation(.7495,0.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.001,.6,.2))
                  .setAppearance(new Appearance()
                    .setTexture(new ImageTexture().setUSE("BrickTex"))
                    .setTextureTransform(new TextureTransform().setScale(.5,2.0))))))
            .addChild(new Transform().setTranslation(-1.9,.3,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(.201,.6,3.0))
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture().setUSE("BrickTex"))
                  .setTextureTransform(new TextureTransform().setScale(10.0,2.0)))))
            .addChild(new Transform().setTranslation(1.9,.3,0.0)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(.201,.6,3.0))
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture().setUSE("BrickTex"))
                  .setTextureTransform(new TextureTransform().setScale(10.0,2.0)))))
            .addChild(new Transform().setTranslation(0.0,.3,-1.4)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(4.0,.6,.201))
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture().setUSE("BrickTex"))
                  .setTextureTransform(new TextureTransform().setScale(12.0,2.0))))))
          .addChild(new Transform("MidLowWallTransform")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {-0.5,1.5,-0.5,1.3,-1.8,1.3,-1.8,-1.3,1.8,-1.3,1.8,1.3,0.5,1.3,0.5,1.5,2.0,1.5,2.0,-1.5,-2.0,-1.5,-2.0,1.5,-0.5,1.5})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.6,0.0,0.0,.7,0.0})))))
          .addChild(new Transform("MidHighLeftWallTransform")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {-1.8,.45,-1.8,1.3,-0.5,1.3,-0.5,1.5,-2.0,1.5,-2.0,.45,-1.8,.45})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.7,0.0,0.0,1.5,0.0})))))
          .addChild(new Transform("MidHighRightWallTransform")
            .addChild(new Transform("MidHighRightFrontWallTransform")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
                .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {0.5,1.3,0.5,1.5,1.0,1.5,1.0,1.3,0.5,1.3})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.7,0.0,0.0,1.5,0.0})))))
            .addChild(new Transform("MidHighRightSideWallTransform")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
                .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.8,.45,1.8,1.3,1.5,1.3,1.5,1.5,2.0,1.5,2.0,.45,1.8,.45})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.7,0.0,0.0,1.5,0.0}))))))
          .addChild(new Transform("MidHighBackWallTransform")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {-1.8,-.45,-1.8,-1.3,1.8,-1.3,1.8,-.45,2.0,-.45,2.0,-1.5,-2.0,-1.5,-2.0,-.45,-1.8,-.45})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,.7,0.0,0.0,1.5,0.0})))))
          .addChild(new Transform("UpperWallTransform")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {-0.5,1.5,-0.5,1.3,-1.8,1.3,-1.8,-1.3,1.8,-1.3,1.8,1.3,0.5,1.3,0.5,1.5,2.0,1.5,2.0,-1.5,-2.0,-1.5,-2.0,1.5,-0.5,1.5})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,1.5,0.0,0.0,2.0,0.0}))))))
        .addChild(new Transform("Floor")
          .addChild(new Shape()
            .setAppearance(new Appearance("WoodFloor")
              .setTexture(new ImageTexture().setUrl(new String[] {"PrintShopFloorWood.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PrintShopFloorWood.jpg"})))
            .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0,0.0,-1.5,2.0,0.0,-1.5,2.0,0.0,1.5,-2.0,0.0,1.5})))
              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}))))))
        .addChild(new Transform("CeilingTransform").setTranslation(0.0,2.0,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance("Ceiling")
              .setTexture(new ImageTexture().setUrl(new String[] {"StuccoCeiling.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StuccoCeiling.jpg"})))
            .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.8,0.0,-1.3,1.8,0.0,-1.3,1.8,0.0,1.3,-1.8,0.0,1.3})))
              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,5.0,0.0,5.0,5.0,0.0,5.0})))))
          .addChild(new Transform().setScale(.3,.3,.3).setTranslation(-.4,.1,-.155)
            .addChild(new Shape()
              .setGeometry(new Text().setLength(new double[] {3.0}).setString(new String[] {"Hello In Here!"}))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.7,0.1,.1))))))
        .addChild(new Transform("Light").setScale(.05,.05,.05).setTranslation(0.0,2.0,0.0)
          .addChild(new Transform()
            .addChild(new Transform().setTranslation(0.0,-2.95,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("BULB_MATERIAL").setDiffuseColor(0.4,0.4,0.4).setEmissiveColor(0.8,0.8,0.8)))
                .setGeometry(new Sphere()))
              .addChild(new PointLight("LIGHTSOURCE").setRadius(1000))
              .addChild(new Transform().setTranslation(0.0,2.65,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.4,0.4,0.4).setEmissiveColor(0.1,0.1,0.1)))
                  .setGeometry(new Cylinder().setHeight(.6).setRadius(0.05)))))
            .addChild(new Group()
              .addChild(new Transform().setTranslation(0.0,-1.0,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance("BULB_CASING")
                    .setMaterial(new Material("SOCKET_MATERIAL").setDiffuseColor(0.4,0.4,0.16).setEmissiveColor(0.4,0.4,0.16)))
                  .setGeometry(new Sphere().setRadius(0.5))))
              .addChild(new Transform().setTranslation(0.0,-1.5,0.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("BULB_CASING"))
                  .setGeometry(new Cylinder().setHeight(1).setRadius(0.5)))))))
        .addChild(new Group("FrontDoor")
          .addChild(new CylinderSensor("CYLINDERSENSOR").setDescription("Click and drag to rotate").setMaxAngle(0).setMinAngle(-2.35))
          .addChild(new Transform("DoorRotator").setCenter(-.5,0.0,1.45)
            .addChild(new ROUTE().setFromNode("CYLINDERSENSOR").setFromField("rotation_changed").setToNode("DoorRotator").setToField("set_rotation"))
            .addChild(new Transform().setTranslation(0.0,1.0,1.425)
              .addChild(new Shape()
                .setGeometry(new Box().setSize(1.0,2.0,.05))
                .setAppearance(new Appearance("Wood")
                  .setMaterial(new Material().setDiffuseColor(.6,.5,.2))))
              .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(.45,.15,0.0)
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setHeight(.1).setRadius(.02))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material("copper").setAmbientIntensity(.26).setDiffuseColor(.3,.11,0.0).setShininess(.08).setSpecularColor(.75,.33,0.0)))))
              .addChild(new Transform().setScale(1.0,1.0,.5).setTranslation(.45,.15,.06)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.03))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("copper")))))
              .addChild(new Transform().setScale(1.0,1.0,.5).setTranslation(.45,.15,-.06)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.03))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("copper"))))))))
        .addChild(new Transform("AllRoof")
          .addChild(new Transform("FrontRoofSupport")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {-2.0,2.0,2.0,2.0,0.0,2.5,-2.0,2.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,1.5,0.0,0.0,1.3})))))
          .addChild(new Transform("RearRoofSupport")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.9,0.7)))
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {-2.0,2.0,2.0,2.0,0.0,2.5,-2.0,2.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,-1.3,0.0,0.0,-1.5})))))
          .addChild(new Transform("LeftRoof").setRotation(0.0,0.0,1.0,.245).setTranslation(0.0,2.501,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance("RoofMaterial")
                .setTexture(new ImageTexture().setUrl(new String[] {"RoofRock.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/RoofRock.jpg"})))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,-1.8,-2.3,0.0,-1.8,-2.3,0.0,1.8,0.0,0.0,1.8})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,10.0,0.0,10.0,10.0,0.0,10.0}))))))
          .addChild(new Transform("RightRoof").setRotation(0.0,0.0,1.0,-.245).setTranslation(-.001,2.501,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("RoofMaterial"))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,-1.8,2.3,0.0,-1.8,2.3,0.0,1.8,0.0,0.0,1.8})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,10.0,0.0,10.0,10.0,0.0,10.0})))))))
        .addChild(new Transform("Window")
          .addChild(new Transform("FrontWindowTransform").setTranslation(1.25,1.1,1.4)
            .addChild(new Group("FrontWindowGroup")
              .addChild(new Transform("MovingWindowTransform").setTranslation(0.0,.1,0.0)
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.499,.721,.002))
                    .setAppearance(new Appearance("Glass")
                      .setMaterial(new Material().setDiffuseColor(.03,.04,.08).setTransparency(.85)))))
                .addChild(new Transform().setTranslation(0.0,-.341,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.492,.04,.02))
                    .setAppearance(new Appearance().setUSE("Wood"))))
                .addChild(new Transform().setTranslation(0.0,.341,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.492,.04,.02))
                    .setAppearance(new Appearance().setUSE("Wood"))))
                .addChild(new Transform().setTranslation(.191,0.0,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.04,.722,.02))
                    .setAppearance(new Appearance().setUSE("Wood"))))
                .addChild(new Transform().setTranslation(-.191,0.0,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.04,.722,.02))
                    .setAppearance(new Appearance().setUSE("Wood"))))
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.472,.01,.01))
                    .setAppearance(new Appearance().setUSE("Wood"))))
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.01,.721,.01))
                    .setAppearance(new Appearance().setUSE("Wood"))))
                .addChild(new Transform().setTranslation(0.0,-.33,-.01)
                  .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,-.012)
                    .addChild(new Shape()
                      .setGeometry(new Cylinder().setHeight(.025).setRadius(.0075))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material("copper2").setAmbientIntensity(.26).setDiffuseColor(.3,.11,0.0).setShininess(.08).setSpecularColor(.75,.33,0.0)))))
                  .addChild(new Transform().setScale(1.0,1.0,.5).setTranslation(0.0,0.0,-.02)
                    .addChild(new Shape()
                      .setGeometry(new Sphere().setRadius(.020))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("copper2"))))))
                .addChild(new PlaneSensor("MyPlaneSensor").setDescription("Lift Window").setMaxPosition(0.0,.361)))
              .addChild(new Transform("FrontSill")
                .addChild(new Transform().setTranslation(0.0,-.381,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.502,.04,.201))
                    .setAppearance(new Appearance("Frame")
                      .setMaterial(new Material().setDiffuseColor(.6,.5,.2)))))
                .addChild(new Transform().setTranslation(0.0,.381,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.502,.04,.201))
                    .setAppearance(new Appearance().setUSE("Frame"))))
                .addChild(new Transform().setTranslation(.231,0.0,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.04,.802,.201))
                    .setAppearance(new Appearance().setUSE("Frame"))))
                .addChild(new Transform().setTranslation(-.231,0.0,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(.04,.802,.201))
                    .setAppearance(new Appearance().setUSE("Frame")))))
              .addChild(new Viewpoint("FrontWindowView").setDescription("Front Window Opens Up").setFieldOfView(1.2).setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-.65))
              .addChild(new ROUTE().setFromNode("MyPlaneSensor").setFromField("translation_changed").setToNode("MovingWindowTransform").setToField("set_translation"))))
          .addChild(new Transform("LeftWindowTransform").setRotation(0.0,1.0,0.0,-1.57).setTranslation(-1.9,1.1,0.0)
            .addChild(new Group("LeftWindowGroup")
              .addChild(new Transform()
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.899,.799,.002))
                  .setAppearance(new Appearance().setUSE("Glass"))))
              .addChild(new Transform()
                .addChild(new Group("SideSillGroup")
                  .addChild(new Transform().setTranslation(0.0,-.381,0.0)
                    .addChild(new Shape()
                      .setGeometry(new Box().setSize(.902,.04,.201))
                      .setAppearance(new Appearance().setUSE("Frame"))))
                  .addChild(new Transform().setTranslation(0.0,.381,0.0)
                    .addChild(new Shape()
                      .setGeometry(new Box().setSize(.902,.04,.201))
                      .setAppearance(new Appearance().setUSE("Frame"))))
                  .addChild(new Transform().setTranslation(.431,0.0,0.0)
                    .addChild(new Shape()
                      .setGeometry(new Box().setSize(.04,.802,.201))
                      .setAppearance(new Appearance().setUSE("Frame"))))
                  .addChild(new Transform().setTranslation(-.431,0.0,0.0)
                    .addChild(new Shape()
                      .setGeometry(new Box().setSize(.04,.802,.201))
                      .setAppearance(new Appearance().setUSE("Frame"))))))))
          .addChild(new Transform("RightWindowTransform").setRotation(0.0,1.0,0.0,1.57).setTranslation(1.9,1.1,0.0)
            .addChild(new Group("RightWindowGroup")
              .addChild(new Transform()
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.899,.799,.002))
                  .setAppearance(new Appearance().setUSE("Glass"))))
              .addChild(new Transform()
                .addChild(new Group().setUSE("SideSillGroup"))))))
        .addChild(new Transform("MessageBoardTransform")
          .addChild(new Transform().setScale(1.5,1.0,1.0).setTranslation(0.0,1.2,-1.299)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setRepeatS(false).setRepeatT(false).setUrl(new String[] {"MessageBoard.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/MessageBoard.jpg"})))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-.5,-.5,0.0,.5,-.5,0.0,.5,.5,0.0,-.5,.5,0.0}))))))
          .addChild(new Transform().setTranslation(0.0,1.2,-1.3)
            .addChild(new Group("MessageBoardFrameGroup")
              .addChild(new Transform().setTranslation(.005,-.461,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(1.548,.075,.04))
                  .setAppearance(new Appearance().setUSE("Frame"))))
              .addChild(new Transform().setTranslation(.005,.485,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(1.548,.075,.04))
                  .setAppearance(new Appearance().setUSE("Frame"))))
              .addChild(new Transform().setTranslation(.741,0.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.075,.9,.04))
                  .setAppearance(new Appearance().setUSE("Frame"))))
              .addChild(new Transform().setTranslation(-.730,0.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.075,.9,.04))
                  .setAppearance(new Appearance().setUSE("Frame")))))))
        .addChild(new Transform("RealStuffTransform").setScale(.6,.6,.6).setTranslation(-1.15,1.2,1.299)
          .addChild(new Transform().setRotation(0.0,1.0,0.0,3.14).setScale(1.5,1.0,1.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setRepeatS(false).setRepeatT(false).setUrl(new String[] {"RealStuff.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/RealStuff.jpg"})))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-.5,-.5,0.0,.5,-.5,0.0,.5,.5,0.0,-.5,.5,0.0}))))))
          .addChild(new Transform().setScale(1.06,1.06,1.06)
            .addChild(new Group("RealStuffFrameGroup")
              .addChild(new Transform().setTranslation(.005,-.461,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(1.548,.075,.04))
                  .setAppearance(new Appearance().setUSE("Frame"))))
              .addChild(new Transform().setTranslation(.005,.485,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(1.548,.075,.04))
                  .setAppearance(new Appearance().setUSE("Frame"))))
              .addChild(new Transform().setTranslation(.741,0.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.075,.9,.04))
                  .setAppearance(new Appearance().setUSE("Frame"))))
              .addChild(new Transform().setTranslation(-.730,0.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(.075,.9,.04))
                  .setAppearance(new Appearance().setUSE("Frame"))))))))
      .addChild(new Transform("Yard")
        .addChild(new Transform("AllGrass")
          .addChild(new Transform("LeftGrass").setTranslation(0.0,-.011,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance("GrassPattern")
                .setTexture(new ImageTexture().setUrl(new String[] {"grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"})))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-.5,0.0,1.5,-5.5,0.0,1.5,-5.5,0.0,7.5,-.5,0.0,7.5})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,10.0,0.0,10.0,10.0,0.0,10.0}))))))
          .addChild(new Transform("RightGrass").setTranslation(0.0,-.011,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("GrassPattern"))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {.5,0.0,1.5,5.5,0.0,1.5,5.5,0.0,7.5,.5,0.0,7.5})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,10.0,0.0,10.0,10.0,0.0,10.0}))))))
          .addChild(new Transform("LeftSideGrass").setTranslation(0.0,-.011,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("GrassPattern"))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0,0.0,1.5,-5.5,0.0,1.5,-5.5,0.0,-1.5,-2.0,0.0,-1.5})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,10.0,0.0,10.0,10.0,0.0,10.0}))))))
          .addChild(new Transform("RightSideGrass").setTranslation(0.0,-.011,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("GrassPattern"))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.0,0.0,1.5,5.5,0.0,1.5,5.5,0.0,-1.5,2.0,0.0,-1.5})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,10.0,0.0,10.0,10.0,0.0,10.0}))))))
          .addChild(new Transform("BackGrass").setTranslation(0.0,-.011,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("GrassPattern"))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.5,0.0,-1.5,5.5,0.0,-1.5,5.5,0.0,-7.5,-5.5,0.0,-7.5})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,30.0,0.0,30.0,15.0,0.0,15.0})))))))
        .addChild(new Transform("Walkway").setTranslation(0.0,-.011,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance("WalkwayConcrete")
              .setTexture(new ImageTexture().setUrl(new String[] {"Concrete.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Concrete.jpg"})))
            .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-.5,0.0,1.5,.5,0.0,1.5,.5,0.0,7.5,-.5,0.0,7.5})))
              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,2.0,0.0,2.0,10.0,0.0,10.0}))))))
        .addChild(new Transform("Fence")
          .addChild(new Group("FenceGroup")
            .addChild(new Transform("FenceSection")
              .addChild(new Transform().setTranslation(0.0,0.0,7.5)
                .addChild(new Group()
                  .addChild(new Shape()
                    .setAppearance(new Appearance("RightFence")
                      .setTexture(new ImageTexture("FenceImage").setUrl(new String[] {"Fence.png","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Fence.png"})))
                    .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.5,0.0,0.0,5.5,0.0,0.0,5.5,0.5,0.0,0.5,0.5,0.0})))
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,10.0,0.0,10.0,1.0,0.0,1.0})))))))))
          .addChild(new Transform().setCenter(0.0,0.0,7.5).setRotation(0.0,1.0,0.0,3.14)
            .addChild(new Group().setUSE("FenceGroup")))
          .addChild(new Transform().setTranslation(5.5,0.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setUSE("FenceImage")))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,7.5,0.0,0.0,-7.5,0.0,0.5,-7.5,0.0,0.5,7.5})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,30.0,0.0,30.0,1.0,0.0,1.0}))))))
          .addChild(new Transform().setTranslation(-5.5,0.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setUSE("FenceImage")))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,7.5,0.0,0.0,-7.5,0.0,0.5,-7.5,0.0,0.5,7.5})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,30.0,0.0,30.0,1.0,0.0,1.0}))))))
          .addChild(new Transform().setRotation(0.0,1.0,0.0,3.14).setTranslation(0.0,0.0,-7.5)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setUSE("FenceImage")))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.5,0.0,0.0,5.5,0.0,0.0,5.5,0.5,0.0,-5.5,0.5,0.0})))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,22.0,0.0,22.0,1.0,0.0,1.0})))))))
        .addChild(new Transform("Trees")
          .addChild(new Transform().setTranslation(4.0,.5,-1.0)
            .addChild(new Group("FirstTree")
              .addChild(new Shape()
                .setAppearance(new Appearance("Tree1")
                  .setTexture(new ImageTexture().setRepeatS(false).setRepeatT(false).setUrl(new String[] {"tree1.png","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/tree1.png"})))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0})))))
              .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setTranslation(.03,0.0,.02)
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("Tree1"))
                  .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}))))))))
          .addChild(new Transform().setTranslation(-4.0,.5,-1.0)
            .addChild(new Group().setUSE("FirstTree"))))
        .addChild(new Transform("AllBushes")
          .addChild(new Transform().setTranslation(0.0,0.0,-7.0)
            .addChild(new Group("Bushes")
              .addChild(new Shape("BushRow")
                .setAppearance(new Appearance("BushPattern")
                  .setTexture(new ImageTexture().setRepeatT(false).setUrl(new String[] {"BushPattern.png","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/BushPattern.png"})))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.5,0.0,0.0,5.5,0.0,0.0,5.5,0.5,0.0,-5.5,0.5,0.0})))
                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,20.0,0.0,20.0,1.0,0.0,1.0})))))
              .addChild(new Transform().setTranslation(0.0,0.0,-.3)
                .addChild(new Shape().setUSE("BushRow")))))
          .addChild(new Transform().setTranslation(0.0,.25,-13.5)
            .addChild(new Transform().setRotation(0.0,1.0,0.0,.45)
              .addChild(new Viewpoint("BushesView").setDescription("Bushes in Backyard").setFieldOfView(1.2))))))
      .addChild(new Transform("FurnishingsTransform")
        .addChild(new Group("Furnishing")
          .addChild(new Transform("ToyTransform").setRotation(0.0,1.0,0.0,-1.57).setScale(.05,.05,.05).setTranslation(.15,.7,0.0)
            .addChild(new Inline().setUrl(new String[] {"IkeaBeadToy.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBeadToy.x3d","IkeaBeadToy.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBeadToy.wrl"})))
          .addChild(new Transform("MatTransform").setScale(1.0,1.0,.67).setTranslation(0.0,.001,0.0)
            .addChild(new Group("AlphabetMat")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setTexture(new ImageTexture().setUrl(new String[] {"MatTransparent.png","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/MatTransparent.png"})))
                .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.0,0.0,-1.0,1.0,0.0,-1.0,1.0,0.0,1.0,-1.0,0.0,1.0})))))))
          .addChild(new Transform("TableTranslation").setTranslation(0.0,.61,0.0)
            .addChild(new Inline().setUrl(new String[] {"IkeaTable.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaTable.x3d","IkeaTable.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaTable.wrl"})))
          .addChild(new Transform("BlueChairTransform").setRotation(0.0,1.0,0.0,1.57).setTranslation(-.67,.31,0.0)
            .addChild(new Inline().setUrl(new String[] {"IkeaBlueChair.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBlueChair.x3d","IkeaBlueChair.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBlueChair.wrl"})))
          .addChild(new Transform("GreenChairTransform").setRotation(0.0,1.0,0.0,4.71).setTranslation(.67,.31,0.0)
            .addChild(new Inline().setUrl(new String[] {"IkeaGreenChair.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaGreenChair.x3d","IkeaGreenChair.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaGreenChair.wrl"})))
          .addChild(new Transform("BenchTransform").setRotation(0.0,1.0,0.0,3.14).setTranslation(0.0,.31,.45)
            .addChild(new Inline().setUrl(new String[] {"IkeaBench.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBench.x3d","IkeaBench.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBench.wrl"})))
          .addChild(new Transform().setRotation(0.0,1.0,0.0,.7).setScale(.015,.015,.015).setTranslation(-1.05,0.0,-.45)
            .addChild(new Inline().setUrl(new String[] {"IkeaRockingHorse.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaRockingHorse.x3d","IkeaRockingHorse.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaRockingHorse.wrl"}))))))
    .addChild(new Group("ViewpointsGroup")
      .addChild(new Viewpoint("FrontEntrance").setDescription("Front Entrance").setOrientation(1.0,0.0,0.0,-.15).setPosition(0.0,1.15,7.0))
      .addChild(new Viewpoint("AtticView").setDescription("Inside Attic").setFieldOfView(1.3).setOrientation(1.0,0.0,0.0,0.0).setPosition(0.0,2.3,.6))
      .addChild(new Transform("TreeViewTransform").setCenter(5.0,1.3,0.0).setRotation(0.0,1.0,0.0,.78)
        .addChild(new Viewpoint("TreeView").setDescription("Tree Outside").setFieldOfView(1.2).setOrientation(1.0,0.0,0.0,-.5).setPosition(5.0,1.3,0.0)))
      .addChild(new Viewpoint("LightView").setDescription("LightBulb").setFieldOfView(1.3).setOrientation(1.0,0.0,0.0,0.0).setPosition(0.0,1.9,.6))
      .addChild(new Viewpoint("AboveOutside").setDescription("Aerial View").setOrientation(1.0,0.0,0.0,-.35).setPosition(0.0,5.0,10.0))
      .addChild(new Transform("OverheadViewTransform").setTranslation(1.4,1.9,1.1)
        .addChild(new Transform().setRotation(0.0,1.0,0.0,.78)
          .addChild(new Viewpoint("OverheadView").setDescription("OverHead").setFieldOfView(1.2).setOrientation(1.0,0.0,0.0,-.45).setPosition(0.0,0.0,0.0))))
      .addChild(new Transform("FromMessageBoardTransform").setRotation(0.0,1.0,0.0,3.14)
        .addChild(new Viewpoint("FromMessageBoardView").setDescription("Back Against Board").setFieldOfView(1.3).setOrientation(1.0,0.0,0.0,-.2).setPosition(0.0,1.0,.9)))
      .addChild(new Viewpoint("InRoom").setDescription("Enter Room").setFieldOfView(1.2).setOrientation(1.0,0.0,0.0,-.15).setPosition(0.0,1.0,1.3))
      .addChild(new Viewpoint("RealStuffView").setDescription("Real Stuff Picture").setOrientation(0.0,1.0,0.0,3.14).setPosition(-1.15,1.2,.5))
      .addChild(new Transform("HorseTransform")
        .addChild(new Viewpoint("HorseSideView").setDescription("Horse Side View").setPosition(-1.0,.3,.5)))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return PlayRoom model
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
        X3D thisExampleX3dModel = new PlayRoom().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.PlayRoom\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.PlayRoom\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
