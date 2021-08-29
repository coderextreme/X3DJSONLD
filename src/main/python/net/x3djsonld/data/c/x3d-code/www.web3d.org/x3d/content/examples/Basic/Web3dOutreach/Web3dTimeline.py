###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=3,name='Navigation'),
    meta(content='Web3dTimeline.x3d',name='title'),
    meta(content='Presenters can edit events under TimelineEventsGroup.',name='info'),
    meta(content='Time line of X3D history with a viewpoint for each milestone. Use PgDown and PgUp to look through each viewpoint. Clicking (selecting) text for any milestone binds that viewpoint, then returns to prior milestone when unclicked (deselected).',name='description'),
    meta(content='Don Brutzman, Anita Havele, Johannes Behr, Byounghyun Yoo',name='creator'),
    meta(content='BS Contact BitManagement Bug Report, problem with .x3dv encoding http://www.bitmanagement.de/en/contact',name='TODO'),
    meta(content='28 July 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Web3dTimelineEntryView.png',name='Image'),
    meta(content='Web3dTimelinePanorama.png',name='Image'),
    meta(content='Point paper by Anita Havele and Don Brutzman',name='info'),
    meta(content='Declarative3dTimelineSceneUseCaseHaveleBrutzman.pdf',name='reference'),
    meta(content='Declarative3dTimelineSceneUseCaseHaveleBrutzman.doc',name='reference'),
    meta(content='http://events.declarative3d.org/Dec3D2012',name='reference'),
    meta(content='Corresponding X3DOM translation by Nils Michaelis of Fraunhofer',name='info'),
    meta(content='http://examples.x3dom.org/x3dTimeLine',name='reference'),
    meta(content='http://examples.x3dom.org/x3dTimeLine/timeline.js',name='reference'),
    meta(content='http://examples.x3dom.org/x3dTimeLine/timeline.css',name='reference'),
    meta(content='http://examples.x3dom.org/x3dTimeLine/timestamps.txt',name='reference'),
    meta(content='side by side scene and information page, as adjacent frames in HTML parent',name='TODO'),
    meta(content='better images',name='TODO'),
    meta(content='hidden attribute',name='TODO'),
    meta(content='confirm dates and events',name='TODO'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dTimeline.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Web3D Timeline'),
    Background(groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    DirectionalLight(direction=(0,-0.5,-1)),
    Viewpoint(DEF='OverviewViewpoint',description='Web3D Timeline',orientation=(-0.33,0.94,0,0.4),position=(18,8,21)),
    #  <Fog visibilityRange='2000'/> <Viewpoint DEF='vp2' description='Starting view' position='3 10 20'/> 
    Group(DEF='InitialSetupAndPrototype',
      #  floor 
      children=[
      Transform(translation=(0,0,-50),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1)),
            texture=ImageTexture(url=["images/lines.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/lines.png"]),
            textureTransform=TextureTransform(rotation=1.57)),
          geometry=Box(size=(125,0.01,125)))]),
      ProtoDeclare(name='TimelineElement',
        ProtoInterface=ProtoInterface(
          field=[
          field(accessType='inputOutput',appinfo='Name for this timeline element',name='name',type='MFString'),
          field(accessType='inputOutput',appinfo='Displayed title',name='title',type='MFString'),
          field(accessType='inputOutput',appinfo='Viewpoint, Anchor description',name='description',type='SFString'),
          field(accessType='inputOutput',appinfo='Whether to hide this entry. TODO: is Viewpoint hidden also?',name='hidden',type='SFBool',value=False),
          field(accessType='inputOutput',appinfo='"Link to display image"',name='imageUrl',type='MFString'),
          field(accessType='inputOutput',appinfo='"Link to narrative"',name='soundUrl',type='MFString'),
          field(accessType='inputOutput',appinfo='"Link to reference, launched in separate frame"',name='referenceUrl',type='MFString'),
          field(accessType='inputOutput',appinfo='author must initialize',name='imagePixelHeight',type='SFInt32',value=0),
          field(accessType='inputOutput',appinfo='author must initialize',name='imagePixelWidth',type='SFInt32',value=0),
          field(accessType='inputOutput',appinfo='default value 0 0 0',name='translation',type='SFVec3f',value=(0,0,0))]),
        ProtoBody=ProtoBody(
          children=[
          Transform(DEF='RootTransform',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='translation')]),
            #  TODO try to omit this viewpoint from scene's active list of viewpoints if hidden='true' 
            children=[
            Switch(DEF='HideSwitch',whichChoice=0,
              children=[
              ViewpointGroup(DEF='TimelineElementViewpointGroup',
                #  test ability to hide in BSContact 
                )]),
            Viewpoint(DEF='TimelineElementViewpoint',position=(2,3,14),
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='description')])),
            ProximitySensor(DEF='proximity',center=(0,0,12),size=(40,40,13)),
            Transform(translation=(-0.2,-0.3,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='NameMaterial',diffuseColor=(0.619608,0.258824,0))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='name')]),
                  fontStyle=FontStyle(family=["SANS"],justify=["END","FIRST"],size=1.5,spacing=0.8)))]),
            Transform(translation=(0.2,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='TitleMaterial',diffuseColor=(0,0.184314,0.658824))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='title')]),
                  fontStyle=FontStyle(family=["SANS"],justify=["BEGIN","FIRST"],size=0.9)))]),
            Group(
              children=[
              TouchSensor(DEF='TouchToView',description='touch to view'),
              BooleanFilter(DEF='TouchViewpointSelectBooleanFilter'),
              ROUTE(fromField='isActive',fromNode='TouchToView',toField='set_boolean',toNode='TouchViewpointSelectBooleanFilter'),
              ROUTE(fromField='inputTrue',fromNode='TouchViewpointSelectBooleanFilter',toField='set_bind',toNode='TimelineElementViewpoint'),
              Shape(DEF='TransparentTouchForNameTitleShape',
                geometry=Box(size=(8,3,0.1)),
                appearance=Appearance(
                  material=Material(transparency=1)))]),
            Switch(DEF='TimelineElementSwitch',whichChoice=1,
              children=[
              Group(
                children=[
                Transform(DEF='HideBackgroundTextTransform',scale=(12,8,0.01),translation=(0,3.5,-0.5),
                  #  Hide other TimeLineElement entries that are behind this one 
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,1,1))),
                    #  hide next entry, but try not to chop of dates from perspective view 
                    geometry=Box(size=(0.9,1,0.01)))]),
                Transform(DEF='ImageTransform',scale=(8,8,0.01),translation=(-4,1,0),
                  children=[
                  Anchor(parameter=["target=Web3dTimelineReferenceFrame"],
                    IS=IS(
                      connect=[
                      connect(nodeField='url',protoField='referenceUrl'),
                      connect(nodeField='description',protoField='description')]),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1)),
                        texture=ImageTexture(
                          IS=IS(
                            connect=[
                            connect(nodeField='url',protoField='imageUrl')]))),
                      geometry=IndexedFaceSet(DEF='ImageIFS',coordIndex=[0,1,2,3,-1],solid=False,
                        coord=Coordinate(DEF='ImageCoordinate'),
                        texCoord=TextureCoordinate(point=[(0,0),(0,1),(1,1),(1,0)])))])])]),
              Group(DEF='EmptyNode')]),
            BooleanTrigger(DEF='bt'),
            IntegerTrigger(DEF='it0',integerKey=0),
            IntegerTrigger(DEF='it1',integerKey=1),
            ROUTE(fromField='isActive',fromNode='proximity',toField='set_boolean',toNode='it0'),
            ROUTE(fromField='triggerValue',fromNode='it0',toField='whichChoice',toNode='TimelineElementSwitch'),
            ROUTE(fromField='exitTime',fromNode='proximity',toField='set_triggerTime',toNode='bt'),
            ROUTE(fromField='triggerTrue',fromNode='bt',toField='set_boolean',toNode='it1'),
            ROUTE(fromField='triggerValue',fromNode='it1',toField='whichChoice',toNode='TimelineElementSwitch')]),
          #  This embedded Script computes and updates IFS/Coordinate geometry dimensions to match image size 
          Script(DEF='TimelineElementScript',
            field=[
            field(accessType='inputOutput',name='name',type='MFString'),
            field(accessType='inputOutput',appinfo='default value 0',name='imagePixelHeight',type='SFInt32'),
            field(accessType='inputOutput',appinfo='default value 0',name='imagePixelWidth',type='SFInt32'),
            field(accessType='inputOutput',appinfo='Whether to hide this entry. TODO: is Viewpoint hidden also?',name='hidden',type='SFBool'),
            field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool',value=False),
            field(accessType='outputOnly',appinfo='compute scale based on image pixel height, width',name='pointArray',type='MFVec3f'),
            field(accessType='outputOnly',appinfo='hide node if hidden',name='hideSwitchChoice',type='SFInt32'),
            field(accessType='outputOnly',appinfo='display Viewpoint if not hidden',name='displayViewpointGroup',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='name',protoField='name'),
              connect(nodeField='imagePixelHeight',protoField='imagePixelHeight'),
              connect(nodeField='imagePixelWidth',protoField='imagePixelWidth'),
              connect(nodeField='hidden',protoField='hidden')])),
          ROUTE(fromField='pointArray',fromNode='TimelineElementScript',toField='point',toNode='ImageCoordinate'),
          ROUTE(fromField='hideSwitchChoice',fromNode='TimelineElementScript',toField='whichChoice',toNode='TimelineElementSwitch'),
          ROUTE(fromField='displayViewpointGroup',fromNode='TimelineElementScript',toField='displayed',toNode='TimelineElementViewpointGroup')]))]),
    Transform(DEF='TimelineEventsGroup',translation=(0,5,0),
      #  Depends on the audience, but Len suggests removal of the following for most audiences: 1) 1997 Community 2) 1999 MPEG 3) 2005 April (membership & IPR) Add x3dom - year? X3D V3.3 (Volume, Units) - 2012 
      #  1994 
      children=[
      ProtoInstance(DEF='Slide1_VRML1.0',name='TimelineElement',
        fieldValue=[
        fieldValue(name='name',value=["1994"]),
        fieldValue(name='title',value=["SIGGRAPH meeting ","VRML 1.0 Specification"]),
        fieldValue(name='description',value='Community effort adapted SGI OpenInventor'),
        fieldValue(name='imageUrl',value=["images/vrml.banner.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/vrml.banner.gif"]),
        fieldValue(name='imagePixelHeight',value=130),
        fieldValue(name='imagePixelWidth',value=560),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/x3d/specifications/vrml/VRML1.0"])]
        #  ensure MFString referenceUrl value is surrounded by "quotation marks" 
        ),
      #  1997 
      ProtoInstance(DEF='Slide2_VRML2.0',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-15)),
        fieldValue(name='name',value=["1997"]),
        fieldValue(name='title',value=["VRML 2.0","Community standard"]),
        fieldValue(name='description',value='VRML 2.0 revised the VRML 1 architecture for better performance'),
        fieldValue(name='imageUrl',value=["images/vrml97.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/vrml97.gif"]),
        fieldValue(name='imagePixelHeight',value=85),
        fieldValue(name='imagePixelWidth',value=470),
        fieldValue(name='referenceUrl',value=["http://new.web3d.org/files/specifications/14772/V2.0"])]),
      #  1997 
      ProtoInstance(DEF='Slide3_VRML97',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-30)),
        fieldValue(name='name',value=["1997"]),
        fieldValue(name='title',value=["VRML 97","International Standard"]),
        fieldValue(name='description',value='VRML 2.0 became the VRML 97 ISO International Standard'),
        fieldValue(name='imageUrl',value=["images/vrml97-0.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/vrml97-0.gif"]),
        fieldValue(name='imagePixelHeight',value=85),
        fieldValue(name='imagePixelWidth',value=470),
        fieldValue(name='referenceUrl',value=["http://new.web3d.org/files/specifications/14772/V2.0"])]),
      #  1999 
      ProtoInstance(DEF='Slide4_MPEG-4',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-45)),
        fieldValue(name='name',value=["1999"]),
        fieldValue(name='title',value=["MPEG-4","Interactive Profile"]),
        fieldValue(name='description',value='MPEG-4 adopted an X3D subset for encoding 3D graphics'),
        fieldValue(name='hidden',value=True),
        fieldValue(name='imageUrl',value=["images/mpeg_logo_bw.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/mpeg_logo_bw.gif"]),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/MPEG4interactive.html","http://www.ece.cmu.edu/~ee899/project/jie_sem/index.html"]),
        fieldValue(name='imagePixelHeight',value=74),
        fieldValue(name='imagePixelWidth',value=256)]
        #  only first available choice in url array will be launched 
        ),
      #  2001 
      ProtoInstance(DEF='Slide5_X3dDesign',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-60)),
        fieldValue(name='name',value=["2001"]),
        fieldValue(name='title',value=["X3D architecture design","Extensible 3D Graphics"]),
        fieldValue(name='description',value='X3D architecture extensions to VRML defined'),
        fieldValue(name='imageUrl',value=["images/x3d2-s.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/x3d2-s.gif"]),
        fieldValue(name='imagePixelHeight',value=97),
        fieldValue(name='imagePixelWidth',value=154),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/about/faq"])]),
      #  December 2004 
      ProtoInstance(DEF='Slide6_X3dEncoding',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-75)),
        fieldValue(name='name',value=["2004","December"]),
        fieldValue(name='title',value=[".x3d Encoding","XML Validation"]),
        fieldValue(name='description',value='XML-X3D'),
        fieldValue(name='imageUrl',value=["images/X3dSpecificationLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dSpecificationLogo.png"]),
        fieldValue(name='imagePixelHeight',value=88),
        fieldValue(name='imagePixelWidth',value=176),
        fieldValue(name='referenceUrl',value=["http://www.w3.org/XML/1999/XML-in-10-points.html","https://www.web3d.org/files/specifications/19776-1/V3.2/Part01/X3D_XML.html"])]
        #  only first available choice in url array will be launched 
        ),
      #  2005 
      ProtoInstance(DEF='Slide7_Web3DConsortium',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-90)),
        fieldValue(name='name',value=["2005","April"]),
        fieldValue(name='title',value=["Web3D Consortium","Non-profit Membership","Royalty-Free IPR Policy"]),
        fieldValue(name='description',value='Web3D Intellectual Property Rights Policy keeps X3D royalty free for any use'),
        fieldValue(name='imageUrl',value=["images/web3d-Consortium-3dlogo.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/web3d-Consortium-3dlogo.jpg"]),
        fieldValue(name='imagePixelHeight',value=108),
        fieldValue(name='imagePixelWidth',value=214),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/realtime-3d/about/legal"])]
        #  1072 x 540 
        ),
      #  November 2005 
      ProtoInstance(DEF='Slide8_X3dStandard',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-105)),
        fieldValue(name='name',value=["2005","November"]),
        fieldValue(name='title',value=["X3D Graphics Standard","version 3.0","ISO approved"]),
        fieldValue(name='description',value='X3D version 3.0'),
        fieldValue(name='imageUrl',value=["images/X3dSpecificationLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dSpecificationLogo.png"]),
        fieldValue(name='imagePixelHeight',value=88),
        fieldValue(name='imagePixelWidth',value=176),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/realtime-3d/specification/current"])]),
      #  2006 
      ProtoInstance(DEF='Slide9_SceneAcessInterface',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-120)),
        fieldValue(name='name',value=["2006","April"]),
        fieldValue(name='title',value=["Scene Acess Interface:","SAI for JavaScript Java"]),
        fieldValue(name='description',value='SAI APIs provide consistent X3D code access using JavaScript or Java'),
        fieldValue(name='imageUrl',value=["images/X3dAnywhere_150_138.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dAnywhere_150_138.gif"]),
        fieldValue(name='imagePixelHeight',value=138),
        fieldValue(name='imagePixelWidth',value=150),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/files/specifications/19777-1/V3.0/Part1/X3D_ECMAScript.html"])]),
      #  December 2006 
      ProtoInstance(DEF='Slide10_X3dVersion3.1',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-135)),
        fieldValue(name='name',value=["2006","December"]),
        fieldValue(name='title',value=["X3D","version 3.1"]),
        fieldValue(name='description',value='Computer Aided Design (CAD) 3D Textures and Shaders support'),
        fieldValue(name='imageUrl',value=["images/logo_iso.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/logo_iso.gif"]),
        fieldValue(name='imagePixelHeight',value=58),
        fieldValue(name='imagePixelWidth',value=202),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/files/specifications/19775-1/V3.1/index.html"])]
        #  Web3dBanner.jpg 864 x 432, reduced 216 x 106 
        ),
      #  2007 
      ProtoInstance(DEF='Slide11_X3dForWebAuthors',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-150)),
        fieldValue(name='name',value=["2007","March"]),
        fieldValue(name='title',value=["X3D for Web Authors","Book slides examples","Don Brutzman Leonard Daly"]),
        fieldValue(name='description',value='X3D for Web Authors book slidesets example scenes and video Don Brutzman and Leonard Daly'),
        fieldValue(name='imageUrl',value=["images/X3dForWebAuthorsBookCoverScan.400x498.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dForWebAuthorsBookCoverScan.400x498.jpg"]),
        fieldValue(name='imagePixelHeight',value=125),
        fieldValue(name='imagePixelWidth',value=100),
        fieldValue(name='referenceUrl',value=["http://x3dgraphics.com"])]),
      #  December 2007 
      ProtoInstance(DEF='Slide12_X3dCompressedBinaryEncoding',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-165)),
        fieldValue(name='name',value=["2007","December"]),
        fieldValue(name='title',value=["X3D Compressed","Binary Encoding (CBE)","for geometry and data"]),
        fieldValue(name='description',value='X3D Compressed Binary Encoding provides geometric and XML compression'),
        fieldValue(name='imageUrl',value=["images/CadTeapot.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/CadTeapot.png"]),
        fieldValue(name='imagePixelHeight',value=243),
        fieldValue(name='imagePixelWidth',value=427),
        fieldValue(name='referenceUrl',value=["http://web3d.org/x3d/wiki/index.php/X3D_Binary_Compression_Capabilities_and_Plans"])]),
      #  2008 
      ProtoInstance(DEF='Slide13_X3dEarth',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-180)),
        fieldValue(name='name',value=["2008","March"]),
        fieldValue(name='title',value=["X3D Earth","Geospatial Component"]),
        fieldValue(name='description',value='X3D Earth working group has built a Geospatial component for X3D'),
        fieldValue(name='imageUrl',value=["images/x3d-earth.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/x3d-earth.jpg"]),
        fieldValue(name='imagePixelHeight',value=368),
        fieldValue(name='imagePixelWidth',value=368),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/realtime-3d/working-groups/x3d-earth"])]),
      #  June 2008 
      ProtoInstance(DEF='Slide14_X3dVersion3.2',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-195)),
        fieldValue(name='name',value=["2008","June"]),
        fieldValue(name='title',value=["X3D","version 3.2"]),
        fieldValue(name='description',value='X3D v3.2 is the current version of X3D in common use'),
        fieldValue(name='imageUrl',value=["images/logo_iso.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/logo_iso.gif"]),
        fieldValue(name='imagePixelHeight',value=58),
        fieldValue(name='imagePixelWidth',value=202),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/Architecture.html"])]),
      #  February 2009 
      ProtoInstance(DEF='Slide15_DICOM',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-210)),
        fieldValue(name='name',value=["2009","February"]),
        fieldValue(name='title',value=["X3D and DICOM","Medical standards"]),
        fieldValue(name='description',value='X3D volume visualization for DICOM'),
        fieldValue(name='imageUrl',value=["images/DicomLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/DicomLogo.png"]),
        fieldValue(name='imagePixelHeight',value=105),
        fieldValue(name='imagePixelWidth',value=377),
        fieldValue(name='referenceUrl',value=["http://medical.nema.org"])]),
      #  March 2010 
      ProtoInstance(DEF='Slide16_X3DOM',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-225)),
        fieldValue(name='name',value=["2010","March"]),
        fieldValue(name='title',value=["X3DOM","development begins"]),
        fieldValue(name='description',value='X3DOM maps X3D to HTML5'),
        fieldValue(name='imageUrl',value=["images/X3domTeaser.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3domTeaser.png","http://www.x3dom.org/wp-content/uploads/2009/10/teaser.png"]),
        fieldValue(name='imagePixelHeight',value=370),
        fieldValue(name='imagePixelWidth',value=270),
        fieldValue(name='referenceUrl',value=["http://www.x3dom.org"])]),
      #  June 2011 
      ProtoInstance(DEF='Slide17_X3dAugmentedReality',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-240)),
        fieldValue(name='name',value=["2011","June"]),
        fieldValue(name='title',value=["X3D AR","Augmented Reality"]),
        fieldValue(name='description',value='Augmented Reality working group efforts'),
        fieldValue(name='imageUrl',value=["images/X3dArImage4.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dArImage4.jpg"]),
        fieldValue(name='imagePixelHeight',value=120),
        fieldValue(name='imagePixelWidth',value=168),
        fieldValue(name='referenceUrl',value=["https://www.web3d.org/realtime-3d/working-groups/augmented-reality-ar"])]),
      #  November 2011 
      ProtoInstance(DEF='Slide18_Declarative3D',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-255)),
        fieldValue(name='name',value=["2011","November"]),
        fieldValue(name='title',value=["Declarative 3D","W3C Community Group"]),
        fieldValue(name='description',value='W3C Community Group efforts for Declarative 3D begin'),
        fieldValue(name='imageUrl',value=["images/W3cCommunityGroupLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/W3cCommunityGroupLogo.png"]),
        fieldValue(name='imagePixelHeight',value=91),
        fieldValue(name='imagePixelWidth',value=209),
        fieldValue(name='referenceUrl',value=["http://www.w3.org/community/declarative3d"])]),
      #  April 2012 
      ProtoInstance(DEF='Slide19_WWW2012',name='TimelineElement',
        fieldValue=[
        fieldValue(name='translation',value=(0,0,-270)),
        fieldValue(name='name',value=["2012","April"]),
        fieldValue(name='title',value=["WWW 2012 Workshop","on Declarative 3D"]),
        fieldValue(name='description',value='X3D v3.2 is draft international standard'),
        fieldValue(name='imageUrl',value=["images/Www2012Logo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/Www2012Logo.png"]),
        fieldValue(name='imagePixelHeight',value=170),
        fieldValue(name='imagePixelWidth',value=348),
        fieldValue(name='referenceUrl',value=["http://events.declarative3d.org/Dec3D2012"])])]),
    #  Web3D 3D logo 
    Transform(DEF='trans_web3dlogo',rotation=(0,1,0,3.14),scale=(0.7,0.7,0.7),translation=(14,9.4,12),
      children=[
      Group(
        #  TODO Animation to spin logo, user-controllable or in different place 
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(DEF='Web3dLogoTransform',scale=(0.6,0.6,0.6),
            #  TODO White box behind 
            children=[
            Anchor(parameter=["target=Web3dTimelineReferenceFrame"],url=["https://www.web3d.org"],
              children=[
              Inline(url=["Web3dLogo.x3d","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dLogo.x3d","Web3dLogo.wrl","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dLogo.wrl"])]),
            OrientationInterpolator(DEF='Web3dLogoSpinner',key=[0,0.3333,0.6667,1],keyValue=[(0,1,0,0),(0,1,0,2.094395),(0,1,0,4.18879),(0,1,0,0)]),
            TimeSensor(DEF='Web3dLogoClock',cycleInterval=30,loop=True),
            ROUTE(fromField='value_changed',fromNode='Web3dLogoSpinner',toField='set_rotation',toNode='Web3dLogoTransform'),
            ROUTE(fromField='fraction_changed',fromNode='Web3dLogoClock',toField='set_fraction',toNode='Web3dLogoSpinner')])])]),
      Transform(translation=(0,-6.2,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          TouchSensor(description='Select PageUp/PageDown to see each milestone, click on images for detail links'),
          Shape(
            geometry=Text(string=["Web3D Progress Timeline"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD')),
            appearance=Appearance(
              material=Material(ambientIntensity=0,diffuseColor=(0.337,0.392,0.556),shininess=0))),
          Shape(
            geometry=Box(size=(10,3,0.1)),
            appearance=Appearance(
              material=Material(transparency=1.0)))])])]),
    #  start and end at same Viewpoint to enable a consistent Viewpoint tour by browser 
    Viewpoint(USE='OverviewViewpoint')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Web3dTimeline.py")
