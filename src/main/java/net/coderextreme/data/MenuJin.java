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
public class MenuJin implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new MenuJin().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/MenuJin.new.java.x3d");
    model.toFileJSON("../data/MenuJin.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("Menu.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("X3D scene with a Switch of Inlines controlled by a menu"))))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint and any other scene setup"))
        .addChild(new Viewpoint().setPosition(new float[] {0f ,20f ,110f }))
        .addChild(new Group()
          .addChild(new Switch().setDEF(new SFString("SceneSwitcher")).setWhichChoice(0)
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice0"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinBlink")).setUrl(new MFString0().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice1"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinBrowLowerer")).setUrl(new MFString1().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice2"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinCheekPuffer")).setUrl(new MFString2().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice3"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinCheekRaiser")).setUrl(new MFString3().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice4"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinChinRaiser")).setUrl(new MFString4().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice5"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinDimpler")).setUrl(new MFString5().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice6"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinEyesClosed")).setUrl(new MFString6().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice7"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinInnerBrowRaiser")).setUrl(new MFString7().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice8"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinJawDrop")).setUrl(new MFString8().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice9"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLidDroop")).setUrl(new MFString9().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice10"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLidTightener")).setUrl(new MFString10().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice11"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipCornerDepressor")).setUrl(new MFString11().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice12"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipCornerPuller")).setUrl(new MFString12().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice13"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipFunneler")).setUrl(new MFString13().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice14"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipPressor")).setUrl(new MFString14().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice15"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipPuckerer")).setUrl(new MFString15().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice16"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipsPart")).setUrl(new MFString16().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice17"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipStretcher")).setUrl(new MFString17().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice18"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipSuck")).setUrl(new MFString18().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice19"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLipTightener")).setUrl(new MFString19().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice20"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinLowerLipDepressor")).setUrl(new MFString20().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice21"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinMouthStretch")).setUrl(new MFString21().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice22"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinNasolabialDeepener")).setUrl(new MFString22().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice23"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinNoseWrinkler")).setUrl(new MFString23().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice24"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinOuterBrowRaiser")).setUrl(new MFString24().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice25"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinSlit")).setUrl(new MFString25().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice26"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinSquint")).setUrl(new MFString26().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice27"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinUpperLidRaiser")).setUrl(new MFString27().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice28"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinUpperLipRaiser")).setUrl(new MFString28().getArray())))
            .addChild(new Group()
              .addChild(new Script().setDEF(new SFString("Choice29"))
                .addField(new field().setType("SFTime").setName(new SFString("touchTime")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFInt32").setName(new SFString("choice")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }"))
              .addChild(new Inline().setDEF(new SFString("JinWink")).setUrl(new MFString29().getArray()))))
          .addChild(new Transform().setTranslation(new float[] {48f ,63.4f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinBlink")).setDEF(new SFString("JinBlink_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString30().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString31().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3232().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinBlink_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice0")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice0")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,60.4f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinBrowLowerer")).setDEF(new SFString("JinBrowLowerer_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString34().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString35().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3236().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f37().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinBrowLowerer_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice1")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice1")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,57.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinCheekPuffer")).setDEF(new SFString("JinCheekPuffer_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString38().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString39().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3240().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinCheekPuffer_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice2")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice2")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,54.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinCheekRaiser")).setDEF(new SFString("JinCheekRaiser_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString42().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString43().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3244().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f45().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinCheekRaiser_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice3")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice3")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,51.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinChinRaiser")).setDEF(new SFString("JinChinRaiser_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString46().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString47().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3248().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinChinRaiser_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice4")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice4")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,48.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinDimpler")).setDEF(new SFString("JinDimpler_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString50().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString51().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3252().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinDimpler_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice5")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice5")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,45.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinEyesClosed")).setDEF(new SFString("JinEyesClosed_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString54().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString55().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3256().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinEyesClosed_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice6")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice6")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,42.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinInnerBrowRaiser")).setDEF(new SFString("JinInnerBrowRaiser_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString58().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString59().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3260().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinInnerBrowRaiser_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice7")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice7")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,39.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinJawDrop")).setDEF(new SFString("JinJawDrop_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString62().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString63().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3264().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f65().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinJawDrop_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice8")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice8")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,36.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLidDroop")).setDEF(new SFString("JinLidDroop_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString66().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString67().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3268().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f69().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLidDroop_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice9")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice9")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,33.39999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLidTightener")).setDEF(new SFString("JinLidTightener_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString70().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString71().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3272().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f73().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLidTightener_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice10")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice10")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,30.399999999999995f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipCornerDepressor")).setDEF(new SFString("JinLipCornerDepressor_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString74().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString75().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3276().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipCornerDepressor_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice11")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice11")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,27.399999999999995f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipCornerPuller")).setDEF(new SFString("JinLipCornerPuller_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString78().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString79().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3280().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f81().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipCornerPuller_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice12")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice12")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,24.399999999999995f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipFunneler")).setDEF(new SFString("JinLipFunneler_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString82().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString83().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3284().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f85().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipFunneler_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice13")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice13")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,21.399999999999995f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipPressor")).setDEF(new SFString("JinLipPressor_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString86().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString87().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3288().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f89().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipPressor_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice14")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice14")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,18.4f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipPuckerer")).setDEF(new SFString("JinLipPuckerer_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString90().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString91().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3292().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f93().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipPuckerer_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice15")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice15")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,15.399999999999997f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipsPart")).setDEF(new SFString("JinLipsPart_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString94().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString95().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3296().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f97().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipsPart_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice16")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice16")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,12.399999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipStretcher")).setDEF(new SFString("JinLipStretcher_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString98().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString99().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32100().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f101().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipStretcher_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice17")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice17")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,9.399999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipSuck")).setDEF(new SFString("JinLipSuck_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString102().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString103().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32104().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f105().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipSuck_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice18")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice18")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,6.399999999999999f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLipTightener")).setDEF(new SFString("JinLipTightener_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString106().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString107().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32108().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f109().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLipTightener_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice19")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice19")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,3.399999999999995f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinLowerLipDepressor")).setDEF(new SFString("JinLowerLipDepressor_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString110().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString111().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32112().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinLowerLipDepressor_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice20")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice20")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,0.399999999999995f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinMouthStretch")).setDEF(new SFString("JinMouthStretch_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString114().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString115().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32116().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f117().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinMouthStretch_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice21")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice21")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-2.6000000000000085f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinNasolabialDeepener")).setDEF(new SFString("JinNasolabialDeepener_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString118().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString119().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32120().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f121().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinNasolabialDeepener_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice22")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice22")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-5.6000000000000085f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinNoseWrinkler")).setDEF(new SFString("JinNoseWrinkler_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString122().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString123().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32124().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f125().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinNoseWrinkler_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice23")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice23")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-8.600000000000009f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinOuterBrowRaiser")).setDEF(new SFString("JinOuterBrowRaiser_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString126().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString127().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32128().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f129().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinOuterBrowRaiser_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice24")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice24")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-11.600000000000009f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinSlit")).setDEF(new SFString("JinSlit_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString130().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString131().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32132().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f133().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinSlit_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice25")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice25")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-14.600000000000001f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinSquint")).setDEF(new SFString("JinSquint_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString134().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString135().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32136().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f137().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinSquint_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice26")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice26")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-17.6f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinUpperLidRaiser")).setDEF(new SFString("JinUpperLidRaiser_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString138().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString139().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32140().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f141().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinUpperLidRaiser_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice27")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice27")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-20.6f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinUpperLipRaiser")).setDEF(new SFString("JinUpperLipRaiser_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString142().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString143().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32144().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f145().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinUpperLipRaiser_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice28")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice28")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))
          .addChild(new Transform().setTranslation(new float[] {48f ,-23.599999999999994f ,0f })
            .addChild(new TouchSensor().setDescription(new SFString("TSJinWink")).setDEF(new SFString("JinWink_Sensor")))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f })))
              .setGeometry(new Text().setString(new MFString146().getArray())
                .setFontStyle(new FontStyle().setSize(2.4f ).setSpacing(1.2f ).setJustify(new MFString147().getArray()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32148().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray())))))
          .addChild(new ROUTE().setFromNode(new SFString("JinWink_Sensor")).setFromField(new SFString("touchTime")).setToNode(new SFString("Choice29")).setToField(new SFString("touchTime")))
          .addChild(new ROUTE().setFromNode(new SFString("Choice29")).setFromField(new SFString("choice")).setToNode(new SFString("SceneSwitcher")).setToField(new SFString("whichChoice")))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinBlink.x3d","JinBlink.x3d"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinDimpler.x3d","JinDimpler.x3d"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinJawDrop.x3d","JinJawDrop.x3d"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLidDroop.x3d","JinLidDroop.x3d"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLidTightener.x3d","JinLidTightener.x3d"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipPressor.x3d","JinLipPressor.x3d"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipsPart.x3d","JinLipsPart.x3d"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipSuck.x3d","JinLipSuck.x3d"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLipTightener.x3d","JinLipTightener.x3d"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"});
  }
}
private class MFString24 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"});
  }
}
private class MFString25 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinSlit.x3d","JinSlit.x3d"});
  }
}
private class MFString26 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinSquint.x3d","JinSquint.x3d"});
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"});
  }
}
private class MFString28 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"});
  }
}
private class MFString29 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/JinWink.x3d","JinWink.x3d"});
  }
}
private class MFString30 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinBlink"});
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f33 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString34 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinBrowLowerer"});
  }
}
private class MFString35 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f37 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString38 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinCheekPuffer"});
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString42 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinCheekRaiser"});
  }
}
private class MFString43 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f45 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString46 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinChinRaiser"});
  }
}
private class MFString47 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString50 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinDimpler"});
  }
}
private class MFString51 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString54 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinEyesClosed"});
  }
}
private class MFString55 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f57 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString58 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinInnerBrowRaiser"});
  }
}
private class MFString59 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f61 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString62 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinJawDrop"});
  }
}
private class MFString63 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f65 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString66 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLidDroop"});
  }
}
private class MFString67 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f69 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString70 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLidTightener"});
  }
}
private class MFString71 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f73 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString74 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipCornerDepressor"});
  }
}
private class MFString75 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f77 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString78 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipCornerPuller"});
  }
}
private class MFString79 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f81 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString82 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipFunneler"});
  }
}
private class MFString83 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f85 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString86 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipPressor"});
  }
}
private class MFString87 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f89 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString90 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipPuckerer"});
  }
}
private class MFString91 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f93 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString94 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipsPart"});
  }
}
private class MFString95 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f97 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString98 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipStretcher"});
  }
}
private class MFString99 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f101 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString102 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipSuck"});
  }
}
private class MFString103 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f105 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString106 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLipTightener"});
  }
}
private class MFString107 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f109 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString110 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinLowerLipDepressor"});
  }
}
private class MFString111 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f113 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString114 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinMouthStretch"});
  }
}
private class MFString115 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f117 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString118 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinNasolabialDeepener"});
  }
}
private class MFString119 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f121 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString122 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinNoseWrinkler"});
  }
}
private class MFString123 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f125 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString126 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinOuterBrowRaiser"});
  }
}
private class MFString127 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f129 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString130 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinSlit"});
  }
}
private class MFString131 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f133 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString134 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinSquint"});
  }
}
private class MFString135 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f137 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString138 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinUpperLidRaiser"});
  }
}
private class MFString139 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f141 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString142 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinUpperLipRaiser"});
  }
}
private class MFString143 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f145 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
private class MFString146 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinWink"});
  }
}
private class MFString147 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f149 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {20f ,1.3833333333333333f ,-0.1f ,-20f ,1.3833333333333333f ,-0.1f ,-20f ,-1.616666666666667f ,-0.1f ,20f ,-1.616666666666667f ,-0.1f });
  }
}
}
