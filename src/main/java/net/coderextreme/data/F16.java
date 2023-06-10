package net.coderextreme.data;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
public class F16 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new F16().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/F16.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("F16.x3d"))
        .addMeta(new meta().setName("description").setContent("F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey"))
        .addMeta(new meta().setName("creator").setContent("Murat ONDER, LTJG, Turkish Navy"))
        .addMeta(new meta().setName("creator").setContent("The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission."))
        .addMeta(new meta().setName("created").setContent("13 July 2003"))
        .addMeta(new meta().setName("modified").setContent("27 November 2015"))
        .addMeta(new meta().setName("reference").setContent("http://www.fas.org/man/dod-101/sys/ac/f-16.htm"))
        .addMeta(new meta().setName("permission").setContent("Here is a copy of the permission for the usage of the main hull; -----Original Message----- From: Soji Yamakawa [mailto:soji@andrew.cmu.edu] Sent: Tuesday, September 16, 2003 8:00 PM To: Onder, Murat TUR Subject: Re: VRML model points usage permission Sure. No problem. Soji ----- Original Message ----- From: \"Murat Onder\" <monder@nps.navy.mil> To: <Soji_Yamakawa@cmu.edu>; <PEB01130@nifty.ne.jp> Sent: Monday, September 15, 2003 3:50 PM Subject: VRML model points usage permission Hi Sir, I&apos;m a MS student in Naval Postgraduate School. I'm making a model of Turkish F-16 for my project in a VRML course. For the main hull of the F-16, I want to use the coordinate points of your VRML model since I think that model represents well enough F-16. This is going to be only a student project and will not be used for any commercial purposes. Of course I'll make the citation and put the reference links to your page in the meta files of x3d file. I'd like to know if you can give permission to use those points in my model. V/R, Murat Onder LTJG, TU NAVY"))
        .addMeta(new meta().setName("reference").setContent("The landing gears are taken from the Savage Archive, from F18 Blue Angel, then modified and re-animated."))
        .addMeta(new meta().setName("drawing").setContent("\"Drawing.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\""))
        .addMeta(new meta().setName("Image").setContent("\"FrontView.jpg\" \"FrontView2.jpg\" \"Missiles.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\""))
        .addMeta(new meta().setName("identifier").setContent("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d"))
        .addMeta(new meta().setName("subject").setContent("F16, F-16, Fighting Falcon"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new Transform().setDEF("F16Transform")
          .addChild(new Transform().setDEF("MainFrameTransform").setScale(new float[] {3f,3f,3f})
            .addChild(new Shape().setDEF("Nose")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.25f,0.25f,0.25f})))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt320().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt321().getArray()).setSolid(false)
                .setCoord(new Coordinate().setDEF("coordinates").setPoint(new MFVec3f2().getArray()))
                .setNormal(new Normal().setDEF("normalVector").setVector(new MFVec3f3().getArray()))))
            .addChild(new Shape().setDEF("Canopy")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.25f,0.25f,0.25f}).setTransparency(0.8000f)))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt324().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt325().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector"))))
            .addChild(new Shape().setDEF("MainBodyAndWingEdges")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.1796f,0.1914f,0.2382f})))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt326().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt327().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector"))))
            .addChild(new Shape().setDEF("ExhaustExitFlatPanel")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.5f,0.5f,0.5f})))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt328().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt329().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector"))))
            .addChild(new Shape().setDEF("ExhaustEntranceFrontBottomPart")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2304f,0.2304f,0.2304f})))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3210().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt3211().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector"))))
            .addChild(new Shape().setDEF("ThirdPartFromNoseUnderCanopy")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.6f,0.6f,0.6f})))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3212().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt3213().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector"))))
            .addChild(new Shape().setDEF("RearExhaustExitPartLastPartOfMainBody")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.37f,0.37f,0.37f}).setShininess(0.5000f)))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3214().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt3215().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector"))))
            .addChild(new Shape().setDEF("WingsAndTail")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(new float[] {0.1796f,0.1914f,0.2382f})))
              .setGeometry(new IndexedFaceSet().setColorPerVertex(false).setCoordIndex(new MFInt3216().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt3217().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector"))))
            .addChild(new Shape().setDEF("SecondPartAfterNose")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.6f,0.6f,0.6f})))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3218().getArray()).setCreaseAngle(0.5000f).setNormalIndex(new MFInt3219().getArray()).setSolid(false)
                .setCoord(new Coordinate().setUSE("coordinates"))
                .setNormal(new Normal().setUSE("normalVector")))))
          .addChild(new Transform().setDEF("CockpitTransform").setRotation(new float[] {1f,0f,0f,-0.1f}).setScale(new float[] {0.045f,0.045f,0.045f}).setTranslation(new float[] {0f,1f,-10f})
            .addChild(new Inline().setUrl(new MFString20().getArray())))
          .addChild(new Transform().setDEF("SeatTransform").setRotation(new float[] {-1f,0f,0f,-0.1f}).setScale(new float[] {0.9f,0.9f,0.9f}).setTranslation(new float[] {0f,0f,-8.3f})
            .addChild(new Inline().setUrl(new MFString21().getArray())))
          .addChild(new Transform().setDEF("FrontWheelTransform").setCenter(new float[] {0f,2.5f,0f}).setRotation(new float[] {-1f,0f,0f,1.92f}).setTranslation(new float[] {0.7f,-5.2f,-6.5f})
            .addComments("Front wheel is taken from the Savage Library, modified and re-animated.(from F18 Blue Angel)")
            .addChild(new Inline().setUrl(new MFString22().getArray())))
          .addChild(new Transform().setDEF("RearLeftWheelTransform").setCenter(new float[] {0f,2.5f,0f}).setRotation(new float[] {1f,0f,1f,1.92f}).setTranslation(new float[] {-2.95f,-5f,7f})
            .addComments("Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)")
            .addChild(new Inline().setUrl(new MFString23().getArray())))
          .addChild(new Transform().setDEF("RearRightWheelTransform").setCenter(new float[] {0f,2.5f,0f}).setRotation(new float[] {-1f,0f,-1f,1.92f}).setTranslation(new float[] {2.95f,-5f,7f})
            .addComments("Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)")
            .addChild(new Inline().setUrl(new MFString24().getArray())))
          .addChild(new Transform().setDEF("CockpitButtonsTransform")
            .addChild(new Transform().setDEF("UpButtonTransform").setRotation(new float[] {1f,0f,0f,1.57f}).setScale(new float[] {0.008f,0.008f,0.008f}).setTranslation(new float[] {-0.95f,1.05f,-10f})
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(1.0000f).setRadius(4.0000f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setShininess(0.8000f))))
              .addChild(new TouchSensor().setDEF("TouchSensorUp").setDescription("click for gears up")))
            .addChild(new Transform().setDEF("DownButtonTransform").setRotation(new float[] {1f,0f,0f,1.57f}).setScale(new float[] {0.008f,0.008f,0.008f}).setTranslation(new float[] {-0.83f,1.05f,-10f})
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(1.0000f).setRadius(4.0000f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}).setShininess(0.8000f))))
              .addChild(new TouchSensor().setDEF("TouchSensorDown").setDescription("click for gears down")))
            .addChild(new Transform().setDEF("GearUpTextTransform").setScale(new float[] {0.06f,0.06f,0.06f}).setTranslation(new float[] {-0.65f,1.55f,-10f})
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString25().getArray()))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
            .addChild(new Transform().setDEF("GearDownTextTransform").setScale(new float[] {0.06f,0.06f,0.06f}).setTranslation(new float[] {-0.65f,1.35f,-10f})
              .addChild(new Shape()
                .setGeometry(new Text().setLength(new MFFloat26().getArray()).setString(new MFString27().getArray()))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f})))))
            .addChild(new Transform().setDEF("FireButtonTransform").setRotation(new float[] {1f,0f,0f,1.57f}).setScale(new float[] {0.008f,0.008f,0.008f}).setTranslation(new float[] {0.52f,1.6f,-10f})
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(1.0000f).setRadius(4.0000f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f,0.75f,0.18f}).setShininess(0.8000f))))
              .addChild(new TouchSensor().setDEF("FireSensor").setDescription("click to fire")))
            .addChild(new Transform().setDEF("FireTextTransform").setScale(new float[] {0.06f,0.06f,0.06f}).setTranslation(new float[] {0.36f,1.5f,-10f})
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString28().getArray()))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f,0.75f,0.18f}))))))
          .addChild(new Viewpoint().setDescription("F16 Close Look-up").setOrientation(new float[] {-0.559f,-0.827f,-0.057f,1.3534f}).setPosition(new float[] {-28.7f,19.9f,17.4f}))
          .addChild(new Viewpoint().setDescription("Cockpit").setOrientation(new float[] {-1f,0f,0f,0.1249f}).setPosition(new float[] {0f,1.5f,-7.9f}))
          .addChild(new Viewpoint().setDEF("LandingGearAnimationView").setDescription("Landing Gear Animation View").setOrientation(new float[] {-0.003f,1f,-0.012f,2.5741f}).setPosition(new float[] {16.1f,-5.8f,-24.6f}))
          .addChild(new Viewpoint().setDescription("Cockpit Left View").setOrientation(new float[] {-0.276f,-0.922f,-0.271f,1.2338f}).setPosition(new float[] {-6.7f,6.1f,-3.9f}))
          .addChild(new Viewpoint().setDescription("F-16 Front View").setOrientation(new float[] {-0.007f,0.995f,0.102f,3.1152f}).setPosition(new float[] {-0.1f,13.4f,-65f}))
          .addChild(new Viewpoint().setDescription("Cockpit Target View").setOrientation(new float[] {-0.834f,-0.523f,-0.176f,0.0875f}).setPosition(new float[] {0f,2.4f,-7.9f}))
          .addChild(new Transform().setDEF("NoseAntennaTransform").setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,-0.275f,-21f})
            .addChild(new Shape()
              .setGeometry(new Cylinder().setRadius(0.0500f))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.5f,0.5f,0.5f}).setShininess(0.5000f))))))
        .addChild(new TimeSensor().setDEF("WheelUp").setCycleInterval(8d))
        .addChild(new OrientationInterpolator().setDEF("GearUpInterpolator").setKey(new MFFloat29().getArray()).setKeyValue(new MFRotation30().getArray()))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("TouchSensorUp").setToField("set_startTime").setToNode("WheelUp"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WheelUp").setToField("set_fraction").setToNode("GearUpInterpolator"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("GearUpInterpolator").setToField("set_rotation").setToNode("FrontWheelTransform"))
        .addChild(new TimeSensor().setDEF("WheelDown").setCycleInterval(8d))
        .addChild(new OrientationInterpolator().setDEF("GearDownInterpolator").setKey(new MFFloat31().getArray()).setKeyValue(new MFRotation32().getArray()))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("TouchSensorDown").setToField("set_startTime").setToNode("WheelDown"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("WheelDown").setToField("set_fraction").setToNode("GearDownInterpolator"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("GearDownInterpolator").setToField("set_rotation").setToNode("FrontWheelTransform"))
        .addComments("Animation commands for Rear Right Wheel Starts")
        .addChild(new TimeSensor().setDEF("RRearUp1").setCycleInterval(8d))
        .addChild(new TimeSensor().setDEF("RRearDown1").setCycleInterval(8d))
        .addChild(new OrientationInterpolator().setDEF("RRearInterUp1").setKey(new MFFloat33().getArray()).setKeyValue(new MFRotation34().getArray()))
        .addChild(new OrientationInterpolator().setDEF("RRearInterDown1").setKey(new MFFloat35().getArray()).setKeyValue(new MFRotation36().getArray()))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("TouchSensorDown").setToField("set_startTime").setToNode("RRearDown1"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("TouchSensorUp").setToField("set_startTime").setToNode("RRearUp1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RRearDown1").setToField("set_fraction").setToNode("RRearInterDown1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("RRearUp1").setToField("set_fraction").setToNode("RRearInterUp1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("RRearInterDown1").setToField("set_rotation").setToNode("RearRightWheelTransform"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("RRearInterUp1").setToField("set_rotation").setToNode("RearRightWheelTransform"))
        .addComments("Animation commands for Rear Left Wheel")
        .addChild(new TimeSensor().setDEF("LRearUp1").setCycleInterval(8d))
        .addChild(new TimeSensor().setDEF("LRearDown1").setCycleInterval(8d))
        .addChild(new OrientationInterpolator().setDEF("LRearInterUp1").setKey(new MFFloat37().getArray()).setKeyValue(new MFRotation38().getArray()))
        .addChild(new OrientationInterpolator().setDEF("LRearInterDown1").setKey(new MFFloat39().getArray()).setKeyValue(new MFRotation40().getArray()))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("TouchSensorDown").setToField("set_startTime").setToNode("LRearDown1"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("TouchSensorUp").setToField("set_startTime").setToNode("LRearUp1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("LRearDown1").setToField("set_fraction").setToNode("LRearInterDown1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("LRearUp1").setToField("set_fraction").setToNode("LRearInterUp1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("LRearInterDown1").setToField("set_rotation").setToNode("RearLeftWheelTransform"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("LRearInterUp1").setToField("set_rotation").setToNode("RearLeftWheelTransform"))
        .addChild(new Background().setGroundAngle(new MFFloat41().getArray()).setGroundColor(new MFColor42().getArray()).setSkyAngle(new MFFloat43().getArray()).setSkyColor(new MFColor44().getArray()))
        .addChild(new Transform().setDEF("RightmostAmraamTransform").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.4f,1.4f,1.4f}).setTranslation(new float[] {15.65f,0f,4.5f})
          .addChild(new Inline().setDEF("Amraam").setUrl(new MFString45().getArray())))
        .addChild(new Transform().setDEF("LeftmostAmraamTransform").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.4f,1.4f,1.4f}).setTranslation(new float[] {-15.65f,0f,4.5f})
          .addChild(new Inline().setUSE("Amraam")))
        .addChild(new Transform().setDEF("SidewinderHolderTransformRight").setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {6f,3f,3f}).setTranslation(new float[] {9f,-1.125f,8f})
          .addChild(new Inline().setDEF("SidewinderHolder").setUrl(new MFString46().getArray())))
        .addChild(new Transform().setDEF("SidewinderHolderTransformLeft").setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {6f,3f,3f}).setTranslation(new float[] {-8.45f,-1.125f,8f})
          .addChild(new Inline().setUSE("SidewinderHolder")))
        .addChild(new Transform().setDEF("TurkishFlagTransformLeft").setRotation(new float[] {0f,-1f,0f,1.57f}).setScale(new float[] {0.3f,0.25f,0.3f}).setTranslation(new float[] {-0.01f,8f,19.5f})
          .addChild(new Inline().setUrl(new MFString47().getArray())))
        .addChild(new Transform().setDEF("TurkishFlagTransformRight").setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {0.3f,0.25f,0.3f}).setTranslation(new float[] {0.01f,8f,20.5f})
          .addChild(new Inline().setUrl(new MFString48().getArray())))
        .addChild(new Transform().setDEF("AmraamHolderTransformLeft").setTranslation(new float[] {-12f,-0.176f,10.7f})
          .addChild(new Inline().setDEF("AmraamHolder").setUrl(new MFString49().getArray())))
        .addChild(new Transform().setDEF("AmraamHolderTransformRight").setTranslation(new float[] {12f,-0.176f,10.7f})
          .addChild(new Inline().setUSE("AmraamHolder")))
        .addChild(new Transform().setDEF("AmraamInnerTransformRight").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.4f,1.4f,1.4f}).setTranslation(new float[] {12f,-1.6f,4.5f})
          .addChild(new Inline().setUSE("Amraam")))
        .addChild(new Transform().setDEF("AmraamInnerTransformLeft").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.4f,1.4f,1.4f}).setTranslation(new float[] {-12f,-1.6f,4.5f})
          .addChild(new Inline().setUSE("Amraam")))
        .addChild(new Transform().setDEF("SidewinderTransformLeft").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.6f,1.6f,1.6f}).setTranslation(new float[] {-8.7f,-2f,3.5f})
          .addChild(new Inline().setDEF("Sidewinder").setUrl(new MFString50().getArray())))
        .addChild(new Transform().setDEF("SidewinderTransformRight").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.6f,1.6f,1.6f}).setTranslation(new float[] {8.7f,-2f,3.5f})
          .addChild(new Inline().setUSE("Sidewinder")))
        .addChild(new Transform().setDEF("FuelTankHolderTransformLeft").setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {1.5f,1.5f,1.5f}).setTranslation(new float[] {-4.8f,-1.125f,6f})
          .addChild(new Inline().setDEF("FuelTankHolder").setUrl(new MFString51().getArray())))
        .addChild(new Transform().setDEF("FuelTankHolderTransformRight").setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {1.5f,1.5f,1.5f}).setTranslation(new float[] {5.3f,-1.125f,6f})
          .addChild(new Inline().setUSE("FuelTankHolder")))
        .addChild(new Transform().setDEF("FuelTankTransformRight").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.5f,1.5f,1.5f}).setTranslation(new float[] {5f,-2.85f,5.5f})
          .addChild(new Inline().setDEF("FuelTank").setUrl(new MFString52().getArray())))
        .addChild(new Transform().setDEF("FuelTankTransformLeft").setRotation(new float[] {-1f,0f,0f,1.57f}).setScale(new float[] {1.5f,1.5f,1.5f}).setTranslation(new float[] {-5f,-2.85f,5.5f})
          .addChild(new Inline().setUSE("FuelTank")))
        .addChild(new Transform().setDEF("InlineCoverOfPlaneTansform")
          .addChild(new Shape()
            .setGeometry(new Box().setSize(new float[] {4.15f,0.1f,20f}))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.25f,0.25f,0.25f})))))
        .addChild(new Transform().setDEF("TargetHelicopterTransform").setTranslation(new float[] {16f,-50f,-500f})
          .addChild(new Inline().setUrl(new MFString53().getArray())))
        .addChild(new TimeSensor().setDEF("FireClock").setCycleInterval(8d))
        .addChild(new PositionInterpolator().setDEF("MissilePath").setKey(new MFFloat54().getArray()).setKeyValue(new MFVec3f55().getArray()))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("FireSensor").setToField("set_startTime").setToNode("FireClock"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("FireClock").setToField("set_fraction").setToNode("MissilePath"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("MissilePath").setToField("set_translation").setToNode("LeftmostAmraamTransform"))
        .addChild(new Viewpoint().setDEF("MissileLaunchView").setDescription("Missile Fire View").setOrientation(new float[] {0.094f,-0.994f,0.057f,1.1716f}).setPosition(new float[] {-344.3f,-142.8f,-27.7f}))
        .addChild(new ROUTE().setFromField("isActive").setFromNode("FireSensor").setToField("set_bind").setToNode("MissileLaunchView"))
        .addComments("TODO fix type, add filter"))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {24,0,3,-1,4,0,24,-1,25,26,27,-1,28,25,27,-1,27,29,28,-1,27,30,29,-1,27,31,30,-1,3,18,24,-1});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,0,3,-1,4,0,16,-1,17,17,17,-1,18,18,18,-1,19,19,19,-1,20,20,20,-1,21,21,21,-1,3,14,16,-1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3200f,0.3600f,-4.9100f,-0.3800f,0.4300f,-4.2100f,0.0000f,0.6000f,-4.2000f,0.0000f,0.5000f,-4.9000f,-0.5000f,0.0000f,-4.9000f,-0.6000f,0.0000f,-4.2000f,1.0000f,0.0000f,5.8000f,1.0000f,0.0000f,5.3000f,2.8000f,-0.4000f,6.3000f,2.8000f,-0.4000f,6.6100f,0.3100f,-0.3600f,-4.9000f,0.4000f,-0.3500f,-4.2000f,0.0000f,-0.4000f,-4.2000f,0.0000f,-0.4000f,-4.9000f,-0.3100f,-0.3600f,-4.9000f,-0.4000f,-0.3500f,-4.2000f,0.5000f,0.0000f,-4.9000f,0.6000f,0.0000f,-4.2000f,0.3200f,0.3600f,-4.9100f,0.3800f,0.4300f,-4.2100f,-1.0000f,0.0000f,5.8000f,-1.0000f,0.0000f,5.3000f,-2.8000f,-0.4000f,6.3000f,-2.8000f,-0.4000f,6.6100f,0.0000f,-0.1000f,-7.0000f,-0.3100f,-0.3600f,-4.9000f,-0.5000f,0.0000f,-4.9000f,0.0000f,-0.1000f,-7.0000f,0.0000f,-0.4000f,-4.9000f,0.3100f,-0.3600f,-4.9000f,0.5000f,0.0000f,-4.9000f,0.3200f,0.3600f,-4.9100f,-0.2700f,0.9300f,-3.5100f,0.0000f,1.1000f,-3.6000f,-0.3300f,0.5000f,-3.4100f,-0.3400f,0.9000f,-1.7300f,0.0000f,0.9000f,-1.0000f,0.0000f,1.1000f,-1.8000f,-0.3800f,0.6400f,-1.6800f,0.3400f,0.9000f,-1.7300f,0.0000f,0.9000f,-1.0000f,0.3800f,0.6400f,-1.6800f,0.3400f,0.9000f,-1.7300f,0.2700f,0.9300f,-3.5100f,0.3300f,0.5000f,-3.4100f,0.0000f,1.3000f,-2.8000f,0.4500f,1.0200f,-2.6800f,0.3800f,0.6400f,-1.6800f,0.5300f,0.5000f,-2.5600f,-0.5300f,0.5000f,-2.5600f,-0.4500f,1.0200f,-2.6800f,-0.5300f,0.7500f,0.0000f,-0.5600f,0.6600f,2.8000f,0.0000f,0.7000f,2.8000f,0.0000f,0.8000f,0.0000f,-1.1000f,0.3000f,0.0000f,-1.0000f,0.3000f,2.8000f,-0.3700f,0.5700f,4.9000f,0.0000f,0.5900f,4.9000f,-0.7000f,0.3000f,4.9000f,-0.7000f,0.3000f,4.9000f,-0.7000f,0.0000f,7.0000f,-0.5000f,0.4900f,7.0000f,-0.5000f,0.4900f,7.0000f,0.0000f,0.7000f,7.0000f,-1.4000f,0.0000f,0.0000f,-1.4000f,0.0000f,3.9000f,-1.4000f,0.0000f,3.9000f,-1.0000f,0.0000f,3.9000f,-1.0000f,0.3000f,2.8000f,-1.0000f,0.3000f,4.9000f,-0.5900f,0.6500f,-0.7700f,-0.8000f,0.3000f,-0.6000f,-1.4000f,0.0000f,-0.7000f,-1.0000f,-0.1000f,2.8000f,-0.7000f,-0.7000f,-2.5000f,-0.5000f,-0.9000f,-2.5000f,-0.5000f,-0.9000f,-0.6000f,-0.7000f,-0.7000f,-0.6000f,0.0000f,-1.0000f,-2.5000f,0.0000f,-1.0000f,-0.6000f,-0.7200f,-0.1200f,-2.5000f,-0.8000f,-0.3000f,-2.5000f,-0.8000f,-0.3000f,-0.6000f,-0.8000f,-0.3000f,-2.5000f,-0.8000f,-0.3000f,-0.6000f,-1.4000f,0.0000f,0.0000f,-1.4000f,0.0000f,-0.7000f,-0.7000f,-0.1000f,4.9000f,-1.0000f,-0.1000f,4.9000f,-0.5000f,-0.9000f,4.9000f,-0.7000f,-0.7000f,4.9000f,0.0000f,-1.0000f,4.9000f,-0.7000f,-0.1000f,4.9000f,-0.5000f,-0.5000f,7.0000f,-0.7000f,0.0000f,7.0000f,0.0000f,-0.7000f,7.0000f,-1.0000f,0.0000f,7.4000f,-2.8000f,-0.4000f,7.1000f,-2.5700f,-0.3200f,7.4200f,-4.9000f,0.1000f,4.0000f,-5.1000f,0.1000f,4.0000f,-5.1000f,-0.1000f,4.0000f,-4.9000f,-0.1000f,4.0000f,-5.1000f,0.1000f,1.6000f,-5.1000f,-0.1000f,1.6000f,-4.9000f,0.1000f,2.8000f,-4.9000f,-0.1000f,2.8000f,-0.5800f,-0.8300f,3.6000f,-0.7200f,-1.4000f,3.9000f,-0.6900f,-1.3200f,4.9000f,-0.5800f,-0.8300f,4.9000f,0.5800f,-0.8300f,3.6000f,0.7200f,-1.4000f,3.9000f,0.6900f,-1.3200f,4.9000f,0.5800f,-0.8300f,4.9000f,4.9000f,-0.1000f,2.8000f,5.1000f,-0.1000f,1.6000f,5.1000f,-0.1000f,4.0000f,4.9000f,-0.1000f,4.0000f,-0.8000f,0.0000f,-2.5000f,4.9000f,0.1000f,4.0000f,5.1000f,0.1000f,4.0000f,5.1000f,0.1000f,1.6000f,4.9000f,0.1000f,2.8000f,0.5900f,0.6500f,-0.7700f,0.8000f,0.3000f,-0.6000f,0.8000f,0.0000f,-2.5000f,-0.8000f,0.0000f,-2.5000f,0.8000f,-0.3000f,-0.6000f,0.7200f,-0.1200f,-2.5000f,0.8000f,0.0000f,-2.5000f,1.0000f,0.0000f,7.4000f,2.8000f,-0.4000f,7.1000f,2.5700f,-0.3200f,7.4200f,-0.7000f,0.0000f,7.4000f,0.5000f,-0.9000f,4.9000f,0.7000f,-0.7000f,4.9000f,0.5000f,-0.5000f,7.0000f,-4.9000f,0.0000f,2.8000f,-4.9000f,0.0000f,3.9000f,0.7000f,-0.1000f,4.9000f,0.7000f,0.0000f,7.0000f,1.4000f,0.0000f,0.0000f,4.9000f,0.0000f,2.8000f,4.9000f,0.0000f,3.9000f,1.4000f,0.0000f,3.9000f,1.4000f,0.0000f,-0.7000f,1.4000f,0.0000f,-0.7000f,0.7000f,-0.7000f,-0.6000f,0.8000f,-0.3000f,-0.6000f,0.5000f,-0.9000f,-0.6000f,1.0000f,-0.1000f,4.9000f,1.0000f,0.3000f,4.9000f,0.7000f,0.0000f,7.4000f,0.7000f,0.3000f,4.9000f,0.7000f,-0.1000f,4.9000f,0.5600f,0.6600f,2.8000f,0.5300f,0.7500f,0.0000f,1.0000f,0.3000f,2.8000f,1.1000f,0.3000f,0.0000f,0.3700f,0.5700f,4.9000f,0.7000f,0.3000f,4.9000f,0.5000f,0.4900f,7.0000f,0.7000f,0.0000f,7.0000f,0.5000f,0.4900f,7.0000f,1.4000f,0.0000f,3.9000f,1.4000f,0.0000f,0.0000f,1.0000f,0.3000f,2.8000f,1.0000f,0.0000f,3.9000f,1.0000f,-0.1000f,2.8000f,0.5000f,-0.9000f,-2.5000f,0.7000f,-0.7000f,-2.5000f,0.8000f,-0.3000f,-2.5000f,0.8000f,-0.3000f,-2.5000f,1.0000f,0.3000f,3.9000f,0.5900f,0.6500f,-0.7700f,0.0000f,0.7000f,2.8000f,0.0000f,1.4000f,4.5000f,0.0000f,0.5900f,4.9000f,0.0000f,3.5000f,6.8000f,0.0000f,3.5000f,8.1000f,0.0000f,1.4000f,7.3000f,0.0000f,0.7000f,7.0000f,0.0000f,0.7000f,7.3000f,-1.0000f,0.3000f,3.9000f,0.0000f,0.3500f,7.7000f,-0.2500f,0.2400f,7.7000f,-0.3500f,0.0000f,7.7000f,-0.2500f,-0.2500f,7.7000f,0.0000f,-0.3500f,7.7000f,0.2500f,-0.2500f,7.7000f,0.3500f,0.0000f,7.7000f,0.2500f,0.2400f,7.7000f,0.0000f,-0.2000f,-2.5000f,0.7000f,-0.7000f,-2.5000f,0.5000f,-0.9000f,-2.5000f,0.0000f,-1.0000f,-2.5000f,-0.5000f,-0.9000f,-2.5000f,-0.7000f,-0.7000f,-2.5000f,0.0000f,-0.2000f,-2.5000f,-0.7200f,-0.1200f,-2.5000f,0.7200f,-0.1200f,-2.5000f,0.2500f,0.2400f,7.7000f,0.3500f,0.0000f,7.7000f,-0.3500f,0.0000f,7.7000f,-0.2500f,0.2400f,7.7000f});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.6800f,0.7140f,-0.1660f,-0.6890f,0.7210f,-0.0720f,0.0000f,0.9650f,-0.2600f,0.0000f,0.9850f,-0.1750f,-0.9900f,-0.0160f,-0.1380f,-0.9990f,-0.0220f,-0.0370f,0.5670f,-0.8190f,-0.0930f,0.5610f,-0.8280f,0.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,-0.9970f,-0.0710f,-0.5670f,-0.8190f,-0.0930f,-0.5610f,-0.8280f,0.0000f,0.9900f,-0.0160f,-0.1380f,0.9990f,-0.0220f,-0.0370f,0.6800f,0.7140f,-0.1660f,0.6890f,0.7210f,-0.0720f,-0.3510f,0.8890f,-0.2940f,-0.8680f,-0.4590f,-0.1900f,-0.1300f,-0.9820f,-0.1400f,0.1300f,-0.9820f,-0.1400f,0.8680f,-0.4590f,-0.1900f,0.8720f,0.4310f,-0.2310f,-0.8340f,0.4450f,-0.3270f,0.0000f,0.9290f,-0.3690f,-0.8800f,0.4010f,-0.2560f,-0.7990f,0.5770f,0.1690f,-0.5800f,0.7980f,0.1640f,0.0000f,0.9980f,0.0650f,-0.8620f,0.4860f,0.1460f,0.8860f,0.2190f,0.4080f,0.7990f,0.5770f,0.1690f,0.8340f,0.4450f,-0.3270f,0.8800f,0.4010f,-0.2560f,0.0000f,0.9950f,-0.0960f,0.8420f,0.5340f,-0.0800f,0.8620f,0.4860f,0.1460f,0.8330f,0.5490f,-0.0730f,-0.8330f,0.5490f,-0.0730f,-0.8420f,0.5340f,-0.0800f,-0.4850f,0.8700f,-0.0890f,-0.3700f,0.9290f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,1.0000f,-0.0100f,-0.5920f,0.7960f,-0.1250f,-0.5730f,0.8180f,0.0500f,-0.3700f,0.9290f,-0.0100f,0.0000f,1.0000f,-0.0250f,-0.4870f,0.8730f,0.0360f,-0.9230f,0.3810f,0.0500f,-0.6830f,0.7040f,0.1950f,0.0000f,0.9900f,0.1400f,-0.7070f,0.7070f,0.0000f,-0.3850f,0.9120f,0.1410f,0.0000f,0.9660f,0.2590f,-0.5630f,0.8260f,-0.0370f,-0.6610f,0.7380f,-0.1380f,-0.5210f,0.8460f,-0.1150f,0.0000f,-0.9960f,0.0900f,-0.7730f,-0.4360f,-0.4610f,-0.4200f,-0.7810f,-0.4630f,-0.4740f,-0.8810f,0.0000f,-0.8710f,-0.4920f,0.0000f,0.0000f,-0.8910f,-0.4550f,-0.9170f,0.3990f,0.0000f,-0.8810f,0.0740f,-0.4670f,-0.9020f,-0.4290f,-0.0390f,-0.0900f,-0.9950f,0.0500f,-0.4510f,-0.8920f,0.0000f,-0.2800f,-0.9590f,0.0400f,-0.4680f,-0.8780f,0.0970f,-0.8770f,-0.4740f,0.0850f,0.0000f,-0.9970f,0.0720f,-0.6930f,-0.7200f,0.0450f,-0.7900f,-0.5620f,0.2440f,-0.9680f,0.0030f,0.2500f,0.0000f,-0.9660f,0.2570f,0.0000f,0.0000f,1.0000f,-1.0000f,0.0000f,0.0000f,0.9870f,0.0000f,-0.1600f,1.0000f,0.0000f,0.0000f,-0.8310f,-0.5510f,-0.0800f,0.5630f,0.8260f,-0.0370f,0.6610f,0.7380f,-0.1380f,0.9980f,-0.0370f,-0.0490f,-0.9870f,0.0000f,-0.1600f,-0.9980f,-0.0370f,-0.0490f,0.8310f,-0.5510f,-0.0800f,0.0000f,-0.9990f,0.0400f,0.0000f,0.9930f,0.1200f,0.4680f,-0.8780f,0.0970f,0.8770f,-0.4740f,0.0850f,0.7900f,-0.5620f,0.2440f,-0.4190f,-0.8970f,-0.1400f,0.6930f,-0.7200f,0.0450f,0.9680f,0.0030f,0.2500f,0.5210f,0.8460f,-0.1150f,0.4190f,-0.8970f,-0.1400f,0.8710f,-0.4920f,0.0000f,0.9020f,-0.4290f,-0.0390f,0.4740f,-0.8810f,0.0000f,0.3700f,0.9290f,0.0000f,0.4850f,0.8700f,-0.0890f,0.5730f,0.8180f,0.0500f,0.5920f,0.7960f,-0.1250f,0.3700f,0.9290f,-0.0100f,0.4870f,0.8730f,0.0360f,0.9230f,0.3810f,0.0500f,0.6830f,0.7040f,0.1950f,0.3850f,0.9120f,0.1410f,0.7070f,0.7070f,0.0000f,0.4200f,-0.7810f,-0.4630f,0.7730f,-0.4360f,-0.4610f,0.9170f,0.3990f,0.0000f,0.8810f,0.0740f,-0.4670f,0.0900f,-0.9950f,0.0500f,0.4510f,-0.8920f,0.0000f,0.2800f,-0.9590f,0.0400f,0.4200f,0.9010f,-0.1100f,0.0000f,0.6660f,0.7460f,-0.4810f,0.4680f,0.7410f,-0.6740f,0.0000f,0.7380f,-0.4750f,-0.4750f,0.7410f,0.0000f,-0.6740f,0.7380f,0.4750f,-0.4750f,0.7410f,0.6740f,0.0000f,0.7380f,0.4810f,0.4680f,0.7410f,0.0000f,0.0000f,-1.0000f,0.0000f,-0.8930f,-0.4500f,-0.9010f,-0.2240f,-0.3720f,0.9010f,-0.2240f,-0.3720f,0.8410f,0.3400f,0.4210f,-0.8410f,0.3400f,0.4210f});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,32,33,-1,34,32,2,-1,35,36,37,-1,38,36,35,-1,39,40,41,-1,37,36,42,-1,2,43,44,-1,33,43,2,-1,45,37,42,46,-1,46,42,47,48,-1,33,45,46,43,-1,43,46,48,44,-1,34,49,50,32,-1,32,50,45,33,-1,49,38,35,50,-1,50,35,37,45,-1});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,22,23,-1,24,22,2,-1,25,26,27,-1,28,26,25,-1,29,29,29,-1,27,26,30,-1,2,31,32,-1,23,31,2,-1,33,27,30,34,-1,34,30,35,36,-1,23,33,34,31,-1,31,34,36,32,-1,24,37,38,22,-1,22,38,33,23,-1,37,28,25,38,-1,38,25,27,33,-1});
  }
}
protected class MFInt326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {51,52,53,54,-1,55,56,52,51,-1,52,57,58,53,-1,56,59,57,52,-1,60,61,62,-1,57,59,63,-1,57,63,64,-1,58,57,64,-1,56,55,65,66,-1,67,68,69,-1,69,70,60,-1,71,54,36,-1,51,54,71,-1,72,51,71,-1,55,51,72,-1,72,73,55,-1,65,55,73,-1,68,67,74,-1,75,76,77,78,-1,76,79,80,77,-1,81,82,83,-1,84,75,78,85,-1,83,74,67,-1,67,86,87,83,-1,74,88,89,-1,88,74,83,-1,78,77,90,91,-1,77,80,92,90,-1,85,91,93,-1,85,78,91,-1,94,95,93,-1,94,93,91,-1,91,96,94,-1,96,91,90,-1,90,92,96,-1,100,101,102,103,-1,101,104,105,102,-1,104,106,107,105,-1,106,100,103,107,-1,106,104,101,100,-1,103,102,105,107,-1,116,117,118,119,-1,120,81,83,-1,121,122,123,124,-1,116,119,121,124,-1,48,125,126,127,-1,117,116,124,123,-1,128,72,71,49,-1,118,117,123,122,-1,119,118,122,121,-1,129,130,131,-1,89,88,135,97,-1,60,70,97,135,-1,70,89,97,-1,96,92,136,-1,136,137,96,-1,138,96,137,-1,120,83,87,-1,128,73,72,-1,137,141,138,-1,141,142,138,-1,126,147,127,-1,148,129,131,-1,137,149,150,-1,141,137,150,-1,136,92,80,151,-1,137,136,151,149,-1,132,152,153,-1,154,132,153,155,-1,132,154,156,152,-1,54,53,157,158,-1,158,157,159,160,-1,53,58,161,157,-1,157,161,162,159,-1,163,164,155,-1,165,162,161,-1,64,165,161,-1,64,161,58,-1,166,167,160,159,-1,168,169,146,-1,155,153,168,-1,36,54,125,-1,125,54,158,-1,125,158,126,-1,126,158,160,-1,160,147,126,-1,147,160,167,-1,170,146,169,-1,149,151,171,172,-1,151,80,79,171,-1,129,173,130,-1,150,149,172,174,-1,146,170,129,-1,129,148,143,146,-1,152,156,170,-1,129,170,156,-1,156,154,164,-1,154,155,164,-1,168,175,169,-1,175,153,152,169,-1,152,170,169,-1,48,47,125,-1,41,40,176,-1,71,38,49,-1,71,36,38,-1,61,135,88,-1,61,60,135,-1,68,185,69,-1,68,74,89,-1,68,89,70,185,-1});
  }
}
protected class MFInt327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {39,40,41,42,-1,43,44,40,39,-1,40,45,46,41,-1,44,47,45,40,-1,48,48,48,-1,45,47,49,-1,45,49,50,-1,46,45,50,-1,44,43,51,52,-1,53,53,53,-1,41,41,41,-1,54,42,26,-1,39,42,54,-1,55,39,54,-1,43,39,55,-1,55,56,43,-1,51,43,56,-1,57,57,57,-1,58,59,60,61,-1,59,62,8,60,-1,63,63,63,-1,64,58,61,65,-1,66,66,66,-1,67,67,67,67,-1,8,8,8,-1,68,68,68,-1,61,60,69,70,-1,60,8,71,69,-1,65,70,72,-1,65,61,70,-1,73,74,72,-1,73,72,70,-1,70,75,73,-1,75,70,69,-1,69,71,75,-1,76,76,76,76,-1,77,77,77,77,-1,78,78,78,78,-1,79,79,79,79,-1,41,41,41,41,-1,8,8,8,8,-1,8,8,8,8,-1,80,80,80,-1,41,41,41,41,-1,77,77,77,77,-1,36,81,82,83,-1,84,84,84,84,-1,85,55,54,37,-1,79,79,79,79,-1,76,76,76,76,-1,86,86,86,-1,87,87,87,87,-1,88,88,88,88,-1,77,77,77,-1,75,71,89,-1,89,90,75,-1,91,75,90,-1,92,92,92,-1,85,56,55,-1,90,93,91,-1,93,94,91,-1,82,95,83,-1,96,96,96,-1,90,97,98,-1,93,90,98,-1,89,71,8,99,-1,90,89,99,97,-1,79,79,79,-1,88,88,88,88,-1,87,87,87,87,-1,42,41,100,101,-1,101,100,102,103,-1,41,46,104,100,-1,100,104,105,102,-1,106,106,106,-1,107,105,104,-1,50,107,104,-1,50,104,46,-1,108,109,103,102,-1,53,53,53,-1,41,41,41,-1,26,42,81,-1,81,42,101,-1,81,101,82,-1,82,101,103,-1,103,95,82,-1,95,103,109,-1,57,57,57,-1,97,99,110,111,-1,99,8,62,110,-1,112,112,112,-1,98,97,111,113,-1,114,114,114,-1,115,115,115,115,-1,8,8,8,-1,116,116,116,-1,77,77,77,-1,77,77,77,-1,79,79,79,-1,79,79,79,79,-1,79,79,79,-1,36,35,81,-1,117,117,117,-1,54,28,37,-1,54,26,28,-1,79,79,79,-1,79,79,79,-1,77,77,77,-1,77,77,77,-1,77,77,77,77,-1});
  }
}
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {186,187,188,189,190,-1,190,191,192,193,186,-1});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {118,119,120,121,122,-1,122,123,124,125,118,-1});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {194,130,173,195,196,197,-1,197,198,199,82,81,194,-1});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {126,126,126,126,126,126,-1,126,126,126,126,126,126,-1});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,200,201,15,-1,19,48,127,17,-1,15,201,128,5,-1,17,127,202,11,-1,11,202,200,12,-1,5,128,49,1,-1,48,19,44,-1,19,2,44,-1,34,1,49,-1,34,2,1,-1});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,127,128,11,-1,15,36,83,13,-1,11,128,85,5,-1,13,83,129,7,-1,7,129,127,8,-1,5,85,37,1,-1,36,15,32,-1,15,2,32,-1,24,1,37,-1,24,2,1,-1});
  }
}
protected class MFInt3214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {64,186,193,165,-1,203,204,164,163,-1,192,191,138,142,-1,191,190,96,138,-1,94,96,190,189,-1,95,94,189,188,-1,63,187,186,64,-1,62,61,205,206,-1});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,7,8,9,-1,9,8,7,6,-1,20,21,22,23,-1,23,22,21,20,-1,97,20,23,98,99,-1,99,98,23,20,97,-1,108,109,110,111,-1,111,110,109,108,-1,112,113,114,115,-1,115,114,113,112,-1,132,6,9,133,134,-1,134,133,9,6,132,-1,86,139,140,67,-1,67,140,139,86,-1,143,144,145,146,-1,146,145,144,143,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1});
  }
}
protected class MFInt3217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1,4,5,1,0,-1,10,11,12,13,-1,14,15,5,4,-1,13,12,15,14,-1,16,17,11,10,-1,18,19,17,16,-1,3,2,19,18,-1});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1,4,5,1,0,-1,6,7,8,9,-1,10,11,5,4,-1,9,8,11,10,-1,12,13,7,6,-1,14,15,13,12,-1,3,2,15,14,-1});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Cockpit.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.x3d","Cockpit.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.wrl"});
  }
}
protected class MFString21 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Seat.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.x3d","Seat.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.wrl"});
  }
}
protected class MFString22 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"FrontWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.x3d","FrontWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.wrl"});
  }
}
protected class MFString23 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RearLeftWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.x3d","RearLeftWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.wrl"});
  }
}
protected class MFString24 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RearRightWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.x3d","RearRightWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.wrl"});
  }
}
protected class MFString25 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RED Button","Gear Up"});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {5.5000f});
  }
}
protected class MFString27 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"YELLOW Button","Gear Down"});
  }
}
protected class MFString28 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Target Locked"," FIRE!..","(Green Button)"});
  }
}
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation30 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,-0.7900f,1.0000f,0.0000f,0.0000f,-1.9200f});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation32 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,-1.9200f,1.0000f,0.0000f,0.0000f,-0.7900f,1.0000f,0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat33 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation34 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1.0000f,0.0000f,-1.0000f,0.0000f,-1.0000f,0.0000f,-1.0000f,0.4400f,-1.0000f,0.0000f,-1.0000f,1.9200f});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation36 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1.0000f,0.0000f,-1.0000f,1.9200f,-1.0000f,0.0000f,-1.0000f,0.4400f,-1.0000f,0.0000f,-1.0000f,0.0000f});
  }
}
protected class MFFloat37 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation38 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.0000f,1.0000f,0.4400f,1.0000f,0.0000f,1.0000f,1.9200f});
  }
}
protected class MFFloat39 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation40 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,1.0000f,1.9200f,1.0000f,0.0000f,1.0000f,0.4400f,1.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat41 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.3090f,1.5708f});
  }
}
protected class MFColor42 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.0000f,0.3000f,0.7000f,0.0000f,0.3500f,0.7500f,0.0000f,0.4000f,0.8000f});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.3090f,1.5710f});
  }
}
protected class MFColor44 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.0000f,0.3000f,0.8000f,0.0000f,0.5000f,1.0000f,1.0000f,1.0000f,1.0000f});
  }
}
protected class MFString45 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Weapons/Missiles/Amraam.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.x3d","../../Weapons/Missiles/Amraam.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.wrl"});
  }
}
protected class MFString46 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SidewinderHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.x3d","SidewinderHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.wrl"});
  }
}
protected class MFString47 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"TurkishFlagLeft.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.x3d","TurkishFlagLeft.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.wrl"});
  }
}
protected class MFString48 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"TurkishFlagRight.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.x3d","TurkishFlagRight.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.wrl"});
  }
}
protected class MFString49 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"AmraamHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.x3d","AmraamHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.wrl"});
  }
}
protected class MFString50 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Weapons/Missiles/Sidewinder.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.x3d","../../Weapons/Missiles/Sidewinder.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.wrl"});
  }
}
protected class MFString51 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"FuelTankHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.x3d","FuelTankHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.wrl"});
  }
}
protected class MFString52 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"FuelTank.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.x3d","FuelTank.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.wrl"});
  }
}
protected class MFString53 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Target.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.x3d","Target.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.wrl"});
  }
}
protected class MFFloat54 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1000f,1.0000f});
  }
}
protected class MFVec3f55 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-15.6500f,0.0000f,4.5000f,-15.6500f,-2.0000f,4.5000f,16.0000f,-50.0000f,-500.0000f});
  }
}
}
