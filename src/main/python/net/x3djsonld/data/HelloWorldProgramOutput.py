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

newModel=X3D(profile='Immersive',version='3.3',
  #  x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true 
  head=head(
    children=[
    #  comment #1 
    #  comment #2 
    #  comment #3 
    #  comment #4 
    component(name='Navigation',level=3),
    component(name='Shaders',level=1),
    component(name='CADGeometry',level=2),
    component(name='DIS',level=2),
    component(name='H-Anim',level=1),
    component(name='Grouping',level=1),
    component(name='Layering',level=1),
    unit(name='AngleUnitConversion',category='angle',conversionFactor=1.0),
    unit(name='LengthUnitConversion',category='length',conversionFactor=1.0),
    unit(name='ForceFromPoundsToNewtons',category='force',conversionFactor=4.4482),
    meta(content='HelloWorldProgramOutput.x3d',name='title'),
    meta(content='continued development and testing in progress',name='info'),
    meta(content='Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)',name='description'),
    meta(content='https://www.web3d.org/specifications/java/X3DJSAIL.html',name='reference'),
    meta(content='HelloWorldProgramOutput.java',name='generator'),
    meta(content='6 September 2016',name='created'),
    meta(content='9 June 2020',name='modified'),
    meta(content='X3D Java Scene Access Interface Library (X3DJSAIL)',name='generator'),
    meta(content='https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java',name='generator'),
    meta(content='Netbeans http://www.netbeans.org',name='generator'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d',name='reference'),
    meta(content='Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:',name='reference'),
    meta(content='HelloWorldProgramOutput.txt',name='reference'),
    meta(content='HelloWorldProgramOutput.x3dv',name='reference'),
    meta(content='HelloWorldProgramOutput.wrl',name='reference'),
    meta(content='HelloWorldProgramOutput.html',name='reference'),
    meta(content='https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d',name='reference'),
    meta(content='https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    ViewpointGroup(description='Available viewpoints',
      children=[
      Viewpoint(DEF='DefaultView',description='Hello X3DJSAIL'),
      Viewpoint(DEF='TopDownView',description='top-down view from above',orientation=(1,0,0,-1.570796),position=(0,100,0))]),
    NavigationInfo(type=["EXAMINE","FLY","ANY"]),
    WorldInfo(DEF='WorldInfoDEF',title='HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)'),
    WorldInfo(USE='WorldInfoDEF'),
    WorldInfo(USE='WorldInfoDEF'),
    MetadataString(DEF='scene.addChildMetadata',name='test',value=["Top-level root Metadata node beneath Scene needs to be one of \'-children\' in JSON encoding"]),
    LayerSet(DEF='scene.addChildLayerSetTest'),
    Transform(DEF='LogoGeometryTransform',translation=(0,1.5,0),
      children=[
      Anchor(description='select for X3D Java SAI Library (X3DJSAIL) description',url=["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"],
        children=[
        Shape(DEF='BoxShape',
          appearance=Appearance(
            material=Material(DEF='GreenMaterial',diffuseColor=(0,1,1),emissiveColor=(0.8,0,0),transparency=0.1),
            texture=ImageTexture(url=["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])),
          geometry=Box(DEF='test-NMTOKEN_regex.0123456789',class_='untextured'))])]),
    Shape(DEF='LineShape',
      appearance=Appearance(
        material=Material(emissiveColor=(0.6,0.19607843,0.8))),
      geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,0],
        #  Coordinate 3-tuple point count: 6 
        coord=Coordinate(point=[(0,1.5,0),(2,1.5,0),(2,1.5,-2),(-2,1.5,-2),(-2,1.5,0),(0,1.5,0)]))),
    PositionInterpolator(DEF='BoxPathAnimator',key=[0,0.125,0.375,0.625,0.875,1],keyValue=[(0,1.5,0),(2,1.5,0),(2,1.5,-2),(-2,1.5,-2),(-2,1.5,0),(0,1.5,0)]),
    TimeSensor(DEF='OrbitClock',cycleInterval=8.0,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='OrbitClock',toField='set_fraction',toNode='BoxPathAnimator'),
    ROUTE(fromField='value_changed',fromNode='BoxPathAnimator',toField='set_translation',toNode='LogoGeometryTransform'),
    Transform(DEF='TextTransform',translation=(0,-1.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(USE='GreenMaterial')),
        geometry=Text(string=["X3D Java","SAI Library","X3DJSAIL"],
          #  Comment example A, plain quotation marks: He said, "Immel did it!" 
          #  Comment example B, XML character entities: He said, &quot;Immel did it!&quot; 
          metadata=MetadataSet(name='EscapedQuotationMarksMetadataSet',
            value=[
            MetadataString(name='quotesTestC',value=["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]),
            MetadataString(name='extraChildTest',value=["checks MetadataSet addValue() method"])]),
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Collision(
        #  test containerField='proxy' 
        proxy=Shape(DEF='ProxyShape',
          #  alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;"' 
          #  alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \&quot;Immel did it!\&quot;" ""' 
          #  alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \"Immel did it!\""}) 
          #  reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html 
          geometry=Text(string=["One, Two, Text","","He said, \"Immel did it!\" \"\""])))]
      #  It's a beautiful world 
      #  ... for you! 
      #  https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) 
      ),
    #  repeatedly spin 180 degrees as a readable special effect 
    OrientationInterpolator(DEF='SpinInterpolator',key=[0,0.5,1],keyValue=[(0,1,0,4.712389),(0,1,0,0),(0,1,0,1.5707964)]),
    TimeSensor(DEF='SpinClock',cycleInterval=5.0,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='SpinClock',toField='set_fraction',toNode='SpinInterpolator'),
    ROUTE(fromField='value_changed',fromNode='SpinInterpolator',toField='rotation',toNode='TextTransform'),
    Group(DEF='BackgroundGroup',
      children=[
      Background(DEF='GradualBackground'),
      Script(DEF='colorTypeConversionScript',
        field=[
        field(name='colorInput',accessType='inputOnly',type='SFColor'),
        field(name='colorsOutput',accessType='outputOnly',type='MFColor')]),
      ColorInterpolator(DEF='ColorAnimator',key=[0,0.5,1],keyValue=[(0.9411765,1,1),(0.29411766,0,0.50980395),(0.9411765,1,1)],
        #  AZURE to INDIGO and back again 
        ),
      TimeSensor(DEF='ColorClock',cycleInterval=60.0,loop=True),
      ROUTE(fromField='colorsOutput',fromNode='colorTypeConversionScript',toField='skyColor',toNode='GradualBackground'),
      ROUTE(fromField='value_changed',fromNode='ColorAnimator',toField='colorInput',toNode='colorTypeConversionScript'),
      ROUTE(fromField='fraction_changed',fromNode='ColorClock',toField='set_fraction',toNode='ColorAnimator')]),
    ProtoDeclare(name='ArtDeco01Material',appinfo='tooltip: ArtDeco01Material prototype is a Material node',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='description',accessType='inputOutput',appinfo='tooltip for descriptionField',type='SFString',value='ArtDeco01Material prototype is a Material node'),
        field(name='enabled',accessType='inputOutput',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        #  Initial node of ProtoBody determines prototype node type 
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.282435,0.085159,0.134462),shininess=0.127273,specularColor=(0.276305,0.11431,0.139857)),
        #  [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" 
        #  presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types 
        TouchSensor(description='within ProtoBody',
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled')]))])),
    ExternProtoDeclare(name='ArtDeco02Material',appinfo='this is a different Material node',url=["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"],
      #  [HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." 
      field=[
      field(name='description',accessType='inputOutput',appinfo='tooltip for descriptionField',type='SFString')]),
    #  Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place 
    Shape(DEF='TestShape1',
      appearance=Appearance(DEF='TestAppearance1',
        #  ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
        material=ProtoInstance(name='ArtDeco01Material',
          #  [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material" 
          fieldValue=[
          fieldValue(name='description',value='ArtDeco01Material can substitute for a Material node')])),
      geometry=Sphere(radius=0.001)),
    Shape(DEF='TestShape2',
      appearance=Appearance(DEF='TestAppearance2',
        #  ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
        material=ProtoInstance(DEF='ArtDeco02MaterialDEF',name='ArtDeco02Material',
          #  [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file." 
          fieldValue=[
          fieldValue(name='description',value='ArtDeco02Material can substitute for another Material node')])),
      geometry=Cone(bottomRadius=0.001,height=0.001)),
    Shape(DEF='TestShape3',
      appearance=Appearance(DEF='TestAppearance3',
        #  ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE. 
        material=ProtoInstance(USE='ArtDeco02MaterialDEF')),
      geometry=Cylinder(height=0.001,radius=0.001)),
    Inline(DEF='inlineSceneDef',url=["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]),
    IMPORT(AS='WorldInfoDEF2',importedDEF='WorldInfoDEF',inlineDEF='inlineSceneDef'),
    EXPORT(AS='WorldInfoDEF3',localDEF='WorldInfoDEF'),
    ProtoDeclare(name='MaterialModulator',appinfo='mimic a Material node and modulate fields as an animation effect',documentation='http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='enabled',accessType='inputOutput',type='SFBool',value=True),
        field(name='diffuseColor',accessType='inputOutput',type='SFColor',value=(0,0,0)),
        field(name='emissiveColor',accessType='inputOutput',type='SFColor',value=(0.05,0.05,0.5)),
        field(name='specularColor',accessType='inputOutput',type='SFColor',value=(0,0,0)),
        field(name='transparency',accessType='inputOutput',type='SFFloat',value=0.0),
        field(name='shininess',accessType='inputOutput',type='SFFloat',value=0.0),
        field(name='ambientIntensity',accessType='inputOutput',type='SFFloat',value=0.0)]),
      ProtoBody=ProtoBody(
        children=[
        Material(DEF='MaterialNode',
          IS=IS(
            connect=[
            connect(nodeField='diffuseColor',protoField='diffuseColor'),
            connect(nodeField='emissiveColor',protoField='emissiveColor'),
            connect(nodeField='specularColor',protoField='specularColor'),
            connect(nodeField='transparency',protoField='transparency'),
            connect(nodeField='shininess',protoField='shininess'),
            connect(nodeField='ambientIntensity',protoField='ambientIntensity')])),
        #  Only first node (the node type) is renderable, others are along for the ride 
        Script(DEF='MaterialModulatorScript',
          field=[
          field(name='enabled',accessType='inputOutput',type='SFBool'),
          field(name='diffuseColor',accessType='inputOutput',type='SFColor'),
          field(name='newColor',accessType='outputOnly',type='SFColor'),
          field(name='clockTrigger',accessType='inputOnly',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='diffuseColor',protoField='diffuseColor')]))])),
    #  Test success: declarative statement createDeclarativeShapeTests() 
    Group(DEF='DeclarativeGroupExample',
      children=[
      Shape(
        metadata=MetadataString(DEF='FindableMetadataStringTest',name='findThisNameValue',value=["test case"]),
        appearance=Appearance(DEF='DeclarativeAppearanceExample',
          #  DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance 
          material=ProtoInstance(DEF='MyMaterialModulator',name='MaterialModulator')),
        geometry=Cone(bottom=False,bottomRadius=0.05,height=0.1))]
      #  Test success: declarativeGroup.addChild() singleton pipeline method 
      ),
    #  Test success: declarative statement addChild() 
    #  Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> 
    #  Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> 
    #  Test success: x3dModel.findElementByNameValue("ArtDeco01Material", "ProtoDeclare") found 
    #  Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found 
    #  Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found 
    Group(DEF='TestFieldObjectsGroup',
      #  testFieldObjects() results 
      #  SFBool default=true, true=true, false=false, negate()=true 
      #  MFBool default=, initial=true false true, negate()=false true false 
      #  SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 
      #  MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 
      #  ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= 
      #  SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true 
      #  regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotation.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value 
      ),
    Sound(location=(0,1.6,0),
      #  set sound-ellipsoid location height at 1.6m to match typical avatar height 
      source=AudioClip(description='chimes',url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"],
        #  Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d 
        )),
    Sound(location=(0,1.6,0),
      #  set sound-ellipsoid location height at 1.6m to match typical avatar height 
      source=MovieTexture(description='mpgsys.mpg from ConformanceNist suite',url=["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"],
        #  Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d 
        #  Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "watchList" 
        )),
    #  Test success: Anchor.isNode()=true, siteAnchor.isNode()=true 
    #  Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false 
    #  Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false 
    #  Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true 
    #  Test success: CommentsBlock.isNode()=false, testComments.isNode()=false 
    #  Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true 
    Shape(DEF='ExtrusionShape',
      #  ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' 
      #  ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' 
      appearance=Appearance(DEF='TransparentAppearance',
        material=Material(transparency=1.0)),
      geometry=Extrusion(DEF='ExampleExtrusion')),
    Group(
      #  Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes 
      children=[
      ProtoDeclare(name='NewWorldInfo',
        ProtoInterface=ProtoInterface(
          field=[
          field(name='description',accessType='initializeOnly',type='SFString')]),
        ProtoBody=ProtoBody(
          children=[
          WorldInfo(),])),
      ProtoInstance(DEF='Proto1',name='NewWorldInfo',
        fieldValue=[
        fieldValue(name='description',value='testing 1 2 3')]),
      Group(DEF='Node2',
        #  intentionally empty 
        ),
      ProtoInstance(DEF='Proto3',name='NewWorldInfo'),
      Transform(DEF='Node4',
        #  intentionally empty 
        )]
      #  Test satisfactorily creates MFNode children array as an ordered list with mixed content 
      ),
    ProtoDeclare(name='ShaderProto',
      ProtoBody=ProtoBody(
        children=[
        ProgramShader(),])),
    Shape(
      appearance=Appearance(
        #  Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes 
        #  Test satisfactorily creates MFNode shaders array as an ordered list with mixed content 
        shaders=ProgramShader(DEF='TestShader1',
          programs=ShaderProgram(DEF='TestShader2')),
        ProtoInstance(DEF='TestShader3',name='ShaderProto'),
        ComposedShader(DEF='TestShader4',
          parts=ShaderPart(DEF='TestShader5')))),
    Transform(DEF='SpecialtyNodes',
      children=[
      CADLayer(
        children=[
        CADAssembly(
          children=[
          CADPart(
            children=[
            CADFace(),])])]),
      EspduTransform(),
      ReceiverPdu(receivedPower=0.0),
      SignalPdu(),
      TransmitterPdu(relativeAntennaLocation=(0,0,0),transmitFrequencyBandwidth=0.0),
      DISEntityManager(
        mapping=[
        DISEntityTypeMapping(),])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloWorldProgramOutput.py")
