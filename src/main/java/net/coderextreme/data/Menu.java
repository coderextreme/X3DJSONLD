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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class Menu implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Menu().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Menu.new.java.x3d");
    model.toFileJSON("../data/Menu.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Menu.x3d"))
        .addMeta(new meta().setName("description").setContent("X3D scene with a Switch of Inlines controlled by a menu")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint and any other scene setup"))
        .addChild(new Viewpoint().setPosition(new float[] {0f ,20f ,110f }))
        .addComments(new CommentsBlock("Menu prototype declaration"))
        .addChild(new ProtoDeclare().setName("Menu")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFString").setName("menuItems").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("TextMenuTransform").setTranslation(new float[] {48f ,27f ,0f })
                .addChild(new TouchSensor().setDEF("MenuTouchSensor"))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new Text().setDEF("MenuText")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("string").setProtoField("menuItems")))
                    .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString0().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
                  .setGeometry(new IndexedFaceSet().setDEF("Backing").setCoordIndex(new MFInt321().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray())))))
              .addChild(new Switch().setDEF("SceneSwitcher").setWhichChoice(0)
                .addChild(new Inline().setDEF("OPTION1").setUrl(new MFString3().getArray()))
                .addChild(new Inline().setDEF("OPTION2").setUrl(new MFString4().getArray()))
                .addChild(new Inline().setDEF("OPTION3").setUrl(new MFString5().getArray()))
                .addChild(new Inline().setDEF("OPTION4").setUrl(new MFString6().getArray()))
                .addChild(new Inline().setDEF("OPTION5").setUrl(new MFString7().getArray()))
                .addChild(new Inline().setDEF("OPTION6").setUrl(new MFString8().getArray()))
                .addChild(new Inline().setDEF("OPTION7").setUrl(new MFString9().getArray()))
                .addChild(new Inline().setDEF("OPTION8").setUrl(new MFString10().getArray()))
                .addChild(new Inline().setDEF("OPTION9").setUrl(new MFString11().getArray()))
                .addChild(new Inline().setDEF("OPTION10").setUrl(new MFString12().getArray()))
                .addChild(new Inline().setDEF("OPTION11").setUrl(new MFString13().getArray()))
                .addChild(new Inline().setDEF("OPTION12").setUrl(new MFString14().getArray()))
                .addChild(new Inline().setDEF("OPTION13").setUrl(new MFString15().getArray()))
                .addChild(new Inline().setDEF("OPTION14").setUrl(new MFString16().getArray()))
                .addChild(new Inline().setDEF("OPTION15").setUrl(new MFString17().getArray()))
                .addChild(new Inline().setDEF("OPTION16").setUrl(new MFString18().getArray()))
                .addChild(new Inline().setDEF("OPTION17").setUrl(new MFString19().getArray()))
                .addChild(new Inline().setDEF("OPTION18").setUrl(new MFString20().getArray()))
                .addChild(new Inline().setDEF("OPTION19").setUrl(new MFString21().getArray()))
                .addChild(new Inline().setDEF("OPTION20").setUrl(new MFString22().getArray()))
                .addChild(new Inline().setDEF("OPTION21").setUrl(new MFString23().getArray()))
                .addChild(new Inline().setDEF("OPTION22").setUrl(new MFString24().getArray()))
                .addChild(new Inline().setDEF("OPTION23").setUrl(new MFString25().getArray()))
                .addChild(new Inline().setDEF("OPTION24").setUrl(new MFString26().getArray()))
                .addChild(new Inline().setDEF("OPTION25").setUrl(new MFString27().getArray()))
                .addChild(new Inline().setDEF("OPTION26").setUrl(new MFString28().getArray()))
                .addChild(new Inline().setDEF("OPTION27").setUrl(new MFString29().getArray()))
                .addChild(new Inline().setDEF("OPTION28").setUrl(new MFString30().getArray()))
                .addChild(new Inline().setDEF("OPTION29").setUrl(new MFString31().getArray()))
                .addChild(new Inline().setDEF("OPTION30").setUrl(new MFString32().getArray())))
              .addComments(new CommentsBlock("Script to handle selection logic"))
              .addChild(new Script().setDEF("MenuScript")
                .addField(new field().setType("MFString").setName("menuItems").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new field().setType("SFInt32").setName("selection").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .addField(new field().setType("SFVec3f").setName("touchPoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFFloat").setName("spacing").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("1.2"))
                .addField(new field().setType("SFFloat").setName("size").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("2.4"))
                .addField(new field().setType("SFFloat").setName("menuCenterY").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .addField(new field().setType("SFFloat").setName("itemHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("menuItems").setProtoField("menuItems")))
                .setSourceCode("ecmascript:\n"+
"        function initialize() {\n"+
"          selection = 0;\n"+
"          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation\n"+
"          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;\n"+
"          menuCenterY = menuHeight / 2;\n"+
"          itemHeight = menuHeight / menuItems.length;\n"+
"        }\n"+
"\n"+
"        function touchPoint(value) {\n"+
"          Browser.print(\"Hit \"+value+\" \"+selection+\"\n"+
"\");\n"+
"          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);\n"+
"\n"+
"          selection = index - 2;\n"+
"          if (selection >= 0 && selection < menuItems.length) {\n"+
"            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"\n"+
"\");\n"+
"          }\n"+
"        }"))
              .addComments(new CommentsBlock("ROUTEs to connect everything"))
              .addChild(new ROUTE().setFromNode("MenuTouchSensor").setFromField("hitPoint_changed").setToNode("MenuScript").setToField("touchPoint"))
              .addChild(new ROUTE().setFromNode("MenuScript").setFromField("selection").setToNode("SceneSwitcher").setToField("whichChoice")))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("Menu").setDEF("MainMenu")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("menuItems").setValue("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {25f ,36f ,-0.01f ,-25f ,36f ,-0.01f ,-25f ,-51f ,-0.01f ,25f ,-51f ,-0.01f });
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLidTightener.x3d","JinLidTightener.x3d"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinDimpler.x3d","JinDimpler.x3d"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipTightener.x3d","JinLipTightener.x3d"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipPressor.x3d","JinLipPressor.x3d"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipsPart.x3d","JinLipsPart.x3d"});
  }
}
private class MFString24 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinJawDrop.x3d","JinJawDrop.x3d"});
  }
}
private class MFString25 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"});
  }
}
private class MFString26 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipSuck.x3d","JinLipSuck.x3d"});
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLidDroop.x3d","JinLidDroop.x3d"});
  }
}
private class MFString28 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinSlit.x3d","JinSlit.x3d"});
  }
}
private class MFString29 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"});
  }
}
private class MFString30 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinSquint.x3d","JinSquint.x3d"});
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinBlink.x3d","JinBlink.x3d"});
  }
}
private class MFString32 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinWink.x3d","JinWink.x3d"});
  }
}
}
