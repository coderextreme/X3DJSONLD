      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ObliqueStrategies.x3d"))
        .addMeta(new meta().setName("description").setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman, John Kelly, Ben Cheng"))
        .addMeta(new meta().setName("created").setContent("3 November 2013"))
        .addMeta(new meta().setName("modified").setContent("18 October 2015"))
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
        .addMeta(new meta().setName("audio").setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"))
        .addMeta(new meta().setName("audio").setContent("translate_tts_HelloX3D.mp3"))
        .addMeta(new meta().setName("audio").setContent("translate_tts_HelloX3D.wav"))
        .addMeta(new meta().setName("TODO").setContent("multiliingual translation parameter"))
        .addMeta(new meta().setName("reference").setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"))
        .addMeta(new meta().setName("reference").setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"))
        .addMeta(new meta().setName("warning").setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"))
        .addMeta(new meta().setName("warning").setContent("BSContact error: Script node TextScript: parse error: line 15 \" var strategy = [];"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setSkyColor(java.newArray("float", [0.419608,0.427451,1])))
        .addChild(new Transform().setScale(java.newArray("float", [0.4,0.4,0.4])).setTranslation(java.newArray("float", [0,1,0]))
          .addChild(new TouchSensor().setDEF("RandomTextClickedSensor").setDescription("Select to see a new strategy"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(java.newArray("java.lang.String", ["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]))
              .setFontStyle(new FontStyle().setDEF("MessageFont").setFamily(java.newArray("java.lang.String", ["SANS"])).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,1,1])))))
          .addChild(new Transform().setScale(java.newArray("float", [10,3,1]))
            .addChild(new Shape().setDEF("HeadlineClickSurface")
              .setGeometry(new IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1])).setSolid(false)
                .setCoord(new Coordinate().setPoint(java.newArray("float", [1,1,0,1,-1,0,-1,-1,0,-1,1,0]))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.245763).setDiffuseColor(java.newArray("float", [0.34773,0.090909,0.005289])).setShininess(0.07).setSpecularColor(java.newArray("float", [0.336735,0.051091,0.051091])).setTransparency(0.8))))))
        .addChild(new Script().setDEF("TextScript").setUrl(java.newArray("java.lang.String", ["../node/ObliqueStrategiesScript.js"]))
          .addComments(new CommentsBlock("initialize() method includes unit test to printAllStrategies() to console"))
          .addComments(new CommentsBlock("TODO insert field definitions here (index string_changed previous next random) and then animate!"))
          .addField(new field().setType(field.TYPE_SFINT32).setName("index").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("index for active strategy card, -1 means no selection").setValue("0"))
          .addField(new field().setType(field.TYPE_MFSTRING).setName("string_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("latest strategy card value"))
          .addField(new field().setType(field.TYPE_MFSTRING).setName("textToSpeechUrl").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("url to invoke Google Translate"))
          .addField(new field().setType(field.TYPE_SFTIME).setName("newCardTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("activate Sound node"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("selectPreviousCard").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("selectNextCard").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("selectRandomCard").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("controls console tracing").setValue("true")))
        .addChild(new Transform().setDEF("CardTransform").setScale(java.newArray("float", [0.4,0.4,0.4])).setTranslation(java.newArray("float", [0,-1.5,0]))
          .addChild(new Shape()
            .setGeometry(new Text().setDEF("CardText")
              .setFontStyle(new FontStyle().setFamily(java.newArray("java.lang.String", ["SANS"])).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,1,1])))))
          .addChild(new ROUTE().setFromField("string_changed").setFromNode("TextScript").setToField("string").setToNode("CardText"))
          .addChild(new Sound().setDEF("CardSoundSpatialization").setMaxBack(100).setMaxFront(100).setMinBack(20).setMinFront(20)
            .addComments(new CommentsBlock("Make sure the sound source AudioClip is audible at the user location"))
            .addComments(new CommentsBlock("Not all X3D players seem to use the .mp3"))
            .addComments(new CommentsBlock("&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players"))
            .addComments(new CommentsBlock("%20 is space character used in uri/url encoding"))
            .setSource(new AudioClip().setDEF("TextToSpeechAudioClip").setDescription("sends strategy text google translate").setUrl(java.newArray("java.lang.String", ["http://translate.google.com/translate_tts?tl=en&q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav"]))))
          .addChild(new ROUTE().setFromField("textToSpeechUrl").setFromNode("TextScript").setToField("url").setToNode("TextToSpeechAudioClip"))
          .addChild(new ROUTE().setFromField("newCardTime").setFromNode("TextScript").setToField("startTime").setToNode("TextToSpeechAudioClip")))
        .addChild(new Transform().setScale(java.newArray("float", [0.4,0.4,0.4])).setTranslation(java.newArray("float", [-3.2,2.5,0]))
          .addChild(new TouchSensor().setDEF("PreviousTextClickedSensor").setDescription("Select to see previous strategy"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("PreviousTextClickedSensor").setToField("selectPreviousCard").setToNode("TextScript"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(java.newArray("java.lang.String", ["previous"]))
              .setFontStyle(new FontStyle().setUSE("MessageFont")))
            .setAppearance(new Appearance().setDEF("InterfaceAppearance")
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,0,0.6])))))
          .addChild(new Transform().setScale(java.newArray("float", [2,0.6,1]))
            .addChild(new Shape().setDEF("TransparentClickSurface")
              .addComments(new CommentsBlock("support Selectable Text with a scalable IFS"))
              .setGeometry(new IndexedFaceSet().setCoordIndex(java.newArray("int", [0,1,2,3,-1])).setSolid(false)
                .setCoord(new Coordinate().setPoint(java.newArray("float", [1,1,0,1,-1,0,-1,-1,0,-1,1,0]))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1))))))
        .addChild(new Transform().setScale(java.newArray("float", [0.4,0.4,0.4])).setTranslation(java.newArray("float", [3.5,2.5,0]))
          .addChild(new TouchSensor().setDEF("NextTextClickedSensor").setDescription("Select to see next strategy"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("NextTextClickedSensor").setToField("selectNextCard").setToNode("TextScript"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(java.newArray("java.lang.String", ["next"]))
              .setFontStyle(new FontStyle().setUSE("MessageFont")))
            .setAppearance(new Appearance().setUSE("InterfaceAppearance")))
          .addChild(new Transform().setScale(java.newArray("float", [1.2,0.6,1]))
            .addChild(new Shape().setUSE("TransparentClickSurface"))))
        .addChild(new Transform().setScale(java.newArray("float", [0.4,0.4,0.4])).setTranslation(java.newArray("float", [-3.3,-0.5,0]))
          .addChild(new TouchSensor().setUSE("RandomTextClickedSensor"))
          .addChild(new ROUTE().setFromField("isActive").setFromNode("RandomTextClickedSensor").setToField("selectRandomCard").setToNode("TextScript"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(java.newArray("java.lang.String", ["random"]))
              .setFontStyle(new FontStyle().setUSE("MessageFont")))
            .setAppearance(new Appearance().setUSE("InterfaceAppearance")))
          .addChild(new Transform().setScale(java.newArray("float", [1.8,0.6,1]))
            .addChild(new Shape().setUSE("TransparentClickSurface"))))
        .addChild(new Transform().setScale(java.newArray("float", [0.4,0.4,0.4])).setTranslation(java.newArray("float", [3.3,-0.5,0]))
          .addChild(new Anchor().setDEF("TextToSpeechAnchor").setDescription("text to speech in browser").setParameter(java.newArray("java.lang.String", ["target=_blank"])).setUrl(java.newArray("java.lang.String", ["http://translate.google.com/translate_tts?tl=en&q=Overtly%20resist%20change"]))
            .addChild(new ROUTE().setFromField("textToSpeechUrl").setFromNode("TextScript").setToField("url").setToNode("TextToSpeechAnchor"))
            .addChild(new Shape()
              .setGeometry(new Text().setString(java.newArray("java.lang.String", ["speech"]))
                .setFontStyle(new FontStyle().setUSE("MessageFont")))
              .setAppearance(new Appearance().setUSE("InterfaceAppearance")))
            .addChild(new Transform().setScale(java.newArray("float", [1.8,0.6,1]))
              .addChild(new Shape().setUSE("TransparentClickSurface"))))))      ;
    X3D0.toFileX3D("../data/ObliqueStrategies.new.x3d");