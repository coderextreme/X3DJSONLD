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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class ObliqueStrategies {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ObliqueStrategies().initialize().toFileJSON("../data/ObliqueStrategies.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ObliqueStrategies.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman, John Kelly, Ben Cheng"))
        .addMeta(new metaObject().setName("created").setContent("3 November 2013"))
        .addMeta(new metaObject().setName("modified").setContent("18 October 2015"))
        .addMeta(new metaObject().setName("reference").setContent("oblique.html"))
        .addMeta(new metaObject().setName("reference").setContent("ObliqueStrategies.txt"))
        .addMeta(new metaObject().setName("reference").setContent("ObliqueStrategiesScript.js"))
        .addMeta(new metaObject().setName("reference").setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.eno-web.co.uk/obliques.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://gothpunk.com/haiku-intro.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html"))
        .addMeta(new metaObject().setName("reference").setContent("https://en.wikipedia.org/wiki/Oblique_Strategies"))
        .addMeta(new metaObject().setName("subject").setContent("Brian Eno, Oblique Strategies"))
        .addMeta(new metaObject().setName("Image").setContent("images/ObliqueStrategiesEntryScreen.png"))
        .addMeta(new metaObject().setName("audio").setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"))
        .addMeta(new metaObject().setName("audio").setContent("translate_tts_HelloX3D.mp3"))
        .addMeta(new metaObject().setName("audio").setContent("translate_tts_HelloX3D.wav"))
        .addMeta(new metaObject().setName("TODO").setContent("multiliingual translation parameter"))
        .addMeta(new metaObject().setName("reference").setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"))
        .addMeta(new metaObject().setName("warning").setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"))
        .addMeta(new metaObject().setName("warning").setContent("BSContact error: Script node TextScript: parse error: line 15 \" var strategy = [];"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new TransformObject().setScale(new float[] {0.4f,0.4f,0.4f}).setTranslation(new float[] {0f,1f,0f})
          .addChild(new TouchSensorObject().setDEF("RandomTextClickedSensor").setDescription("Select to see a new strategy"))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
              .setFontStyle(new FontStyleObject().setDEF("MessageFont").setFamily(new MFStringObject(new MFString2().getArray())).setJustify(new MFStringObject(new MFString3().getArray())).setStyle("BOLD")))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))))
          .addChild(new TransformObject().setScale(new float[] {10f,3f,1f})
            .addChild(new ShapeObject().setDEF("HeadlineClickSurface")
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt324().getArray())).setSolid(false)
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f5().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0.245763f).setDiffuseColor(new float[] {0.34773f,0.090909f,0.005289f}).setShininess(0.07f).setSpecularColor(new float[] {0.336735f,0.051091f,0.051091f}).setTransparency(0.8f))))))
        .addChild(new ScriptObject().setDEF("TextScript").setUrl(new MFStringObject(new MFString6().getArray()))
          .addComments(new CommentsBlock("initialize() method includes unit test to printAllStrategies() to console"))
          .addComments(new CommentsBlock("TODO insert field definitions here (index string_changed previous next random) and then animate!"))
          .addField(new fieldObject().setType("SFInt32").setName("index").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("index for active strategy card, -1 means no selection").setValue("0"))
          .addField(new fieldObject().setType("MFString").setName("string_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("latest strategy card value"))
          .addField(new fieldObject().setType("MFString").setName("textToSpeechUrl").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("url to invoke Google Translate"))
          .addField(new fieldObject().setType("SFTime").setName("newCardTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("activate Sound node"))
          .addField(new fieldObject().setType("SFBool").setName("selectPreviousCard").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("selectNextCard").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("selectRandomCard").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("controls console tracing").setValue("true")))
        .addChild(new TransformObject().setDEF("CardTransform").setScale(new float[] {0.4f,0.4f,0.4f}).setTranslation(new float[] {0f,-1.5f,0f})
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setDEF("CardText")
              .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString7().getArray())).setJustify(new MFStringObject(new MFString8().getArray())).setStyle("BOLD")))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))))
          .addChild(new ROUTEObject().setFromField("string_changed").setFromNode("TextScript").setToField("string").setToNode("CardText"))
          .addChild(new SoundObject().setDEF("CardSoundSpatialization").setMaxBack(100f).setMaxFront(100f).setMinBack(20f).setMinFront(20f)
            .addComments(new CommentsBlock("Make sure the sound source AudioClip is audible at the user location"))
            .addComments(new CommentsBlock("Not all X3D players seem to use the .mp3"))
            .addComments(new CommentsBlock("&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players"))
            .addComments(new CommentsBlock("%20 is space character used in uri/url encoding"))
            .setSource(new AudioClipObject().setDEF("TextToSpeechAudioClip").setDescription("sends strategy text google translate").setUrl(new MFStringObject(new MFString9().getArray()))))
          .addChild(new ROUTEObject().setFromField("textToSpeechUrl").setFromNode("TextScript").setToField("url").setToNode("TextToSpeechAudioClip"))
          .addChild(new ROUTEObject().setFromField("newCardTime").setFromNode("TextScript").setToField("startTime").setToNode("TextToSpeechAudioClip")))
        .addChild(new TransformObject().setScale(new float[] {0.4f,0.4f,0.4f}).setTranslation(new float[] {-3.2f,2.5f,0f})
          .addChild(new TouchSensorObject().setDEF("PreviousTextClickedSensor").setDescription("Select to see previous strategy"))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("PreviousTextClickedSensor").setToField("selectPreviousCard").setToNode("TextScript"))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString10().getArray()))
              .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
            .setAppearance(new AppearanceObject().setDEF("InterfaceAppearance")
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0.6f}))))
          .addChild(new TransformObject().setScale(new float[] {2f,0.6f,1f})
            .addChild(new ShapeObject().setDEF("TransparentClickSurface")
              .addComments(new CommentsBlock("support Selectable Text with a scalable IFS"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3211().getArray())).setSolid(false)
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f12().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setTransparency(1f))))))
        .addChild(new TransformObject().setScale(new float[] {0.4f,0.4f,0.4f}).setTranslation(new float[] {3.5f,2.5f,0f})
          .addChild(new TouchSensorObject().setDEF("NextTextClickedSensor").setDescription("Select to see next strategy"))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("NextTextClickedSensor").setToField("selectNextCard").setToNode("TextScript"))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString13().getArray()))
              .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
            .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
          .addChild(new TransformObject().setScale(new float[] {1.2f,0.6f,1f})
            .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))
        .addChild(new TransformObject().setScale(new float[] {0.4f,0.4f,0.4f}).setTranslation(new float[] {-3.3f,-0.5f,0f})
          .addChild(new TouchSensorObject().setUSE("RandomTextClickedSensor"))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("RandomTextClickedSensor").setToField("selectRandomCard").setToNode("TextScript"))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString14().getArray()))
              .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
            .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
          .addChild(new TransformObject().setScale(new float[] {1.8f,0.6f,1f})
            .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))
        .addChild(new TransformObject().setScale(new float[] {0.4f,0.4f,0.4f}).setTranslation(new float[] {3.3f,-0.5f,0f})
          .addChild(new AnchorObject().setDEF("TextToSpeechAnchor").setDescription("text to speech in browser").setParameter(new MFStringObject(new MFString15().getArray())).setUrl(new MFStringObject(new MFString16().getArray()))
            .addChild(new ROUTEObject().setFromField("textToSpeechUrl").setFromNode("TextScript").setToField("url").setToNode("TextToSpeechAnchor"))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString17().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
              .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
            .addChild(new TransformObject().setScale(new float[] {1.8f,0.6f,1f})
              .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.419608f,0.427451f,1f});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Oblique Strategies".replaceAll("\"", "\\\""),"".replaceAll("\"", "\\\""),"(Over One Hundred Worthwhile Dilemmas)".replaceAll("\"", "\\\""),"".replaceAll("\"", "\\\""),"by Brian Eno and Peter Schmidt".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
protected class MFInt324 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFVec3f5 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,1f,0f,1f,-1f,0f,-1f,-1f,0f,-1f,1f,0f});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"./ObliqueStrategiesScript.js".replaceAll("\"", "\\\"")});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS".replaceAll("\"", "\\\"")});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://translate.google.com/translate_tts?tl=en&q=Feed%20the%20recording%20back%20out%20of%20the%20medium".replaceAll("\"", "\\\""),"translate_tts_mp3FileFormatNotSupported.wav".replaceAll("\"", "\\\"")});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"previous".replaceAll("\"", "\\\"")});
  }
}
protected class MFInt3211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFVec3f12 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,1f,0f,1f,-1f,0f,-1f,-1f,0f,-1f,1f,0f});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"next".replaceAll("\"", "\\\"")});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"random".replaceAll("\"", "\\\"")});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank".replaceAll("\"", "\\\"")});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://translate.google.com/translate_tts?tl=en&q=Overtly%20resist%20change".replaceAll("\"", "\\\"")});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"speech".replaceAll("\"", "\\\"")});
  }
}
}
