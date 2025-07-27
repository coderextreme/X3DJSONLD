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
public class ObliqueStrategies implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(false);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ObliqueStrategies().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ObliqueStrategies.new.java.x3d");
    model.toFileJSON("../data/ObliqueStrategies.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ObliqueStrategies.x3d"))
        .addMeta(new meta().setName("description").setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman, John Kelly, Ben Cheng"))
        .addMeta(new meta().setName("created").setContent("3 November 2013"))
        .addMeta(new meta().setName("modified").setContent("10 November 2019"))
        .addMeta(new meta().setName("reference").setContent("oblique.html"))
        .addMeta(new meta().setName("reference").setContent("ObliqueStrategies.txt"))
        .addMeta(new meta().setName("reference").setContent("ObliqueStrategiesScript.js"))
        .addMeta(new meta().setName("reference").setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.eno-web.co.uk/obliques.html"))
        .addMeta(new meta().setName("reference").setContent("http://gothpunk.com/haiku-intro.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Oblique_Strategies"))
        .addMeta(new meta().setName("subject").setContent("Brian Eno, Oblique Strategies"))
        .addMeta(new meta().setName("Image").setContent("images/ObliqueStrategiesEntryScreen.png"))
        .addMeta(new meta().setName("Sound").setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"))
        .addMeta(new meta().setName("Sound").setContent("translate_tts_HelloX3D.mp3"))
        .addMeta(new meta().setName("Sound").setContent("translate_tts_HelloX3D.wav"))
        .addMeta(new meta().setName("TODO").setContent("multiliingual translation parameter"))
        .addMeta(new meta().setName("reference").setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"))
        .addMeta(new meta().setName("reference").setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"))
        .addMeta(new meta().setName("warning").setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"))
        .addMeta(new meta().setName("warning").setContent("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"))
        .addMeta(new meta().setName("reference").setContent("https://gist.github.com/alotaiba/1728771"))
        .addMeta(new meta().setName("reference").setContent("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"))
        .addMeta(new meta().setName("Sound").setContent("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"))
        .addMeta(new meta().setName("Sound").setContent("translate_tts_HelloX3D4.mp3"))
        .addMeta(new meta().setName("reference").setContent("https://cloud.google.com/translate/docs/basic/translating-text"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ObliqueStrategies.x3d"))
        .addChild(new NavigationInfo().setType("\"NONE\""))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Transform().setScale(new double[] {0.4f,0.4f,0.4f}).setTranslation(new double[] {0f,1f,0f})
          .addChild(new TouchSensor().setDEF("RandomTextClickedSensor").setDescription("Select to see a new strategy"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString1().getArray())
              .setFontStyle(new FontStyle().setDEF("MessageFont").setFamily(new MFString2().getArray()).setJustify(new MFString3().getArray()).setStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {1f,1f,1f}))))
          .addChild(new Transform().setScale(new double[] {10f,3f,1f})
            .addChild(new Shape().setDEF("HeadlineClickSurface")
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt324().getArray()).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.245763f).setDiffuseColor(new double[] {0.34773f,0.090909f,0.005289f}).setShininess(0.07f).setSpecularColor(new double[] {0.336735f,0.051091f,0.051091f}).setTransparency(0.8f))))))
        .addChild(new Script().setDEF("TextScript").setUrl(new MFString6().getArray())
          .addComments(new CommentsBlock("initialize() method includes unit test to printAllStrategies() to console"))
          .addComments(new CommentsBlock("TODO insert field definitions here (index string_changed previous next random) and then animate!"))
          .addField(new field().setType("SFInt32").setName("index").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("index for active strategy card, -1 means no selection").setValue("0"))
          .addField(new field().setType("MFString").setName("string_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("latest strategy card value"))
          .addField(new field().setType("MFString").setName("textToSpeechUrl").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("\"url to invoke Google Translate\""))
          .addField(new field().setType("SFTime").setName("newCardTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("activate Sound node"))
          .addField(new field().setType("SFBool").setName("selectPreviousCard").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFBool").setName("selectNextCard").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFBool").setName("selectRandomCard").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("controls console tracing").setValue("true")))
        .addChild(new Transform().setDEF("CardTransform").setScale(new double[] {0.4f,0.4f,0.4f}).setTranslation(new double[] {0f,-1.5f,0f})
          .addChild(new Shape()
            .setGeometry(new Text().setDEF("CardText")
              .setFontStyle(new FontStyle().setFamily(new MFString7().getArray()).setJustify(new MFString8().getArray()).setStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {1f,1f,1f}))))
          .addChild(new ROUTE().setFromField("string_changed").setFromNode("TextScript").setToField("string").setToNode("CardText"))
          .addChild(new Sound().setDEF("CardSoundSpatialization").setMaxBack(100f).setMaxFront(100f).setMinBack(20f).setMinFront(20f)
            .addComments(new CommentsBlock("Make sure the sound source AudioClip is audible at the user location"))
            .addComments(new CommentsBlock("Not all X3D players seem to use the .mp3"))
            .addComments(new CommentsBlock("&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players"))
            .addComments(new CommentsBlock("%20 is space character used in uri/url encoding"))
            .setSource(new AudioClip().setDEF("TextToSpeechAudioClip").setDescription("sends strategy text google translate").setUrl(new MFString9().getArray())))
          .addChild(new ROUTE().setFromField("textToSpeechUrl").setFromNode("TextScript").setToField("url").setToNode("TextToSpeechAudioClip"))
          .addChild(new ROUTE().setFromField("newCardTime").setFromNode("TextScript").setToField("startTime").setToNode("TextToSpeechAudioClip")))
        .addChild(new Transform().setScale(new double[] {0.4f,0.4f,0.4f}).setTranslation(new double[] {-3.2f,2.5f,0f})
          .addChild(new TouchSensor().setDEF("PreviousTextClickedSensor").setDescription("Select to see previous strategy"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("PreviousTextClickedSensor").setToField("selectPreviousCard").setToNode("TextScript"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString10().getArray())
              .setFontStyle(new FontStyle().setUSE("MessageFont")))
            .setAppearance(new Appearance().setDEF("InterfaceAppearance")
              .setMaterial(new Material().setDiffuseColor(new double[] {1f,0f,0.6f}))))
          .addChild(new Transform().setScale(new double[] {2f,0.6f,1f})
            .addChild(new Shape().setDEF("TransparentClickSurface")
              .addComments(new CommentsBlock("support Selectable Text with a scalable IFS"))
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3211().getArray()).setSolid(false)
                .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1f))))))
        .addChild(new Transform().setScale(new double[] {0.4f,0.4f,0.4f}).setTranslation(new double[] {3.5f,2.5f,0f})
          .addChild(new TouchSensor().setDEF("NextTextClickedSensor").setDescription("Select to see next strategy"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("NextTextClickedSensor").setToField("selectNextCard").setToNode("TextScript"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString13().getArray())
              .setFontStyle(new FontStyle().setUSE("MessageFont")))
            .setAppearance(new Appearance().setUSE("InterfaceAppearance")))
          .addChild(new Transform().setScale(new double[] {1.2f,0.6f,1f})
            .addChild(new Shape().setUSE("TransparentClickSurface"))))
        .addChild(new Transform().setScale(new double[] {0.4f,0.4f,0.4f}).setTranslation(new double[] {-3.3f,-0.5f,0f})
          .addChild(new TouchSensor().setUSE("RandomTextClickedSensor"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("RandomTextClickedSensor").setToField("selectRandomCard").setToNode("TextScript"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString14().getArray())
              .setFontStyle(new FontStyle().setUSE("MessageFont")))
            .setAppearance(new Appearance().setUSE("InterfaceAppearance")))
          .addChild(new Transform().setScale(new double[] {1.8f,0.6f,1f})
            .addChild(new Shape().setUSE("TransparentClickSurface"))))
        .addChild(new Transform().setScale(new double[] {0.4f,0.4f,0.4f}).setTranslation(new double[] {3.3f,-0.5f,0f})
          .addChild(new Anchor().setDEF("TextToSpeechAnchor").setDescription("text to speech in browser").setParameter(new MFString15().getArray()).setUrl(new MFString16().getArray())
            .addChild(new ROUTE().setFromField("textToSpeechUrl").setFromNode("TextScript").setToField("url").setToNode("TextToSpeechAnchor"))
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString17().getArray())
                .setFontStyle(new FontStyle().setUSE("MessageFont")))
              .setAppearance(new Appearance().setUSE("InterfaceAppearance")))
            .addChild(new Transform().setScale(new double[] {1.8f,0.6f,1f})
              .addChild(new Shape().setUSE("TransparentClickSurface"))))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.419608f,0.427451f,1f});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1f,1f,0f,1f,-1f,0f,-1f,-1f,0f,-1f,1f,0f});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"previous"});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
private class MFVec3f12 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1f,1f,0f,1f,-1f,0f,-1f,-1f,0f,-1f,1f,0f});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"next"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"random"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"speech"});
  }
}
}
