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

print('*** TestSchematronDiagnostics.x3d is an experimental X3D model and not intended to run. Exiting.')
import sys
sys.exit()
###############################################

newModel=X3D(profile='Core',version='3.0',
  head=head(
    children=[
    component(level=3),
    component(name='Geometry2D'),
    component(level=3,name='Geometry2D'),
    component(level=3,name='Geometry2D'),
    unit(category='angle',conversionFactor=-1,name='nonPositiveConversionFactor'),
    unit(category='angle',conversionFactor=-1,name='nonPositiveConversionFactor'),
    meta(content='TestSchematronDiagnostics.x3d',name='title'),
    meta(content='Test Schematron diagnostics capabilities for detecting various content errors and style warnings.',name='description'),
    meta(content='Second meta tag to test warning that two description meta tags are present.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='19 October 2008',name='created'),
    meta(content='25 October 2020',name='modified'),
    meta(content='The regex is not finding IllegalMinusSignsTest.',name='warning'),
    meta(content='Test scene with many errors, primarily intended to exercise most of the rules in the X3D Schematron diagnostic set.',name='error'),
    meta(content='Test scene with many warnings embedded in comments.',name='warning'),
    meta(content='Test scene with many hints embedded in comments.',name='hint'),
    meta(content='Perhaps the most erroneous X3D scene in the world!',name='info'),
    meta(content='Perhaps the most erroneous X3D scene in the world!',name='info'),
    meta(content='https://www.web3d.org/x3d/tools/schematron/X3dSchematronValidityChecks.sch',name='reference'),
    meta(content='https://www.web3d.org/x3d/tools/schematron/X3dSchematron.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html#QualityAssurance',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(DEF='improperDEF',USE='improperUSE',
    #  - illegal comment starts with extra hyphen - character 
    #  - illegal comment has intermediate paired-hyphen - - characters 
    children=[
    TouchSensor(DEF='IllegalCombinationDEFUSE',USE='IllegalCombinationDEFUSE'),
    CylinderSensor(DEF='DoubleDEF',enabled=False),
    TimeSensor(DEF='DoubleDEF'),
    WorldInfo(DEF='FirstTitle',title='title #1'),
    WorldInfo(DEF='SecondTitle',title='title #2'),
    WorldInfo(DEF='DEFPrependedSpace'),
    WorldInfo(DEF='DEFEmbedded Space'),
    WorldInfo(DEF='DEFAppendedSpace'),
    WorldInfo(DEF='IllegalInfoQuotes',info=["WorldInfo info strings need to be quoted"]),
    WorldInfo(DEF='IllegalChild',
      children=[
      WorldInfo(),]),
    WorldInfo(DEF='LegalChild',
      metadata=MetadataString(),),
    Anchor(DEF='NoChildrenNoUrl'),
    Anchor(DEF='AnchorBookmark',parameter=["target=unquoted"],url=["#missingBookmark"],
      children=[
      Group(),]),
    Inline(DEF='HelloWorld',url=["../HelloWorld.x3d","https://www.web3d.org/x3d/content/examples/Basic/HelloWorld.x3d","../HelloWorld.wrl"]),
    Inline(DEF='UrlDotWrlPrecedesDotX3d',url=["test.wrl","test.x3d","adjacent""quote marks"]),
    Inline(DEF='NoUrlIllegalChild',
      children=[
      WorldInfo(),]),
    Inline(DEF='NodeUrlVRML.wrl.PrecedingX3D.x3d',url=["HelloWorld.wrl","HelloWorld.x3d"]),
    ExternProtoDeclare(name='ExternProtoDeclareUrlVRML.wrl.PrecedingX3D.x3d',url=["HelloWorld.wrl","HelloWorld.x3d"]),
    ExternProtoDeclare(name='ExternProtoDeclareUrlVRML.wrl.MissingX3D.x3d',url=["HelloWorld.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.x3d","HelloWorld.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.wrl"]),
    Shape(DEF='NoChildAppearance',
      geometry=Box(),),
    Shape(DEF='NoChildGeometry',
      appearance=Appearance(DEF='NoMaterialNoTexture')),
    #  test no other fields if USE present 
    Shape(USE='NoChildAppearance'),
    Shape(USE='NoChildAppearance'),
    Shape(USE='NoChildAppearance'),
    Shape(DEF='USEwithChildElement',
      geometry=Box(),
      appearance=Appearance(DEF='AppearanceWithProtoInstanceChild',
        children=[
        ProtoInstance(name='NodeSubstituteNoDeclaration')])),
    Appearance(DEF='MissingParentShape'),
    Shape(USE='USEwithChildElement',
      appearance=Appearance(USE='NoMaterialNoTexture')),
    Shape(DEF='SingleProtoInstanceChild',
      children=[
      ProtoInstance(name='NodeSubstituteNoDeclaration')]),
    #  no DEF name 
    TimeSensor(DEF='NoOutputROUTE'),
    TimeSensor(DEF='Clock',cycleInterval=100,loop=True),
    ColorInterpolator(),
    ColorInterpolator(DEF='InterpolatorWithSingleKey',key=[0]),
    ColorInterpolator(DEF='ColorInterpolatorColorProblems',key=[0],keyValue=[(-1,1.2,0.3)0.4)]),
    #  no DEF name 
    PositionInterpolator(DEF='NoROUTEsNoKeyValueArray',key=[0,0]),
    ScalarInterpolator(DEF='MismatchedKeyArrays',key=[0],keyValue=[0,0]),
    NormalInterpolator(DEF='MismatchedKeyArraysSFVec3f',key=[0,1],keyValue=[(0,0,0),(1,1)]),
    #  bogus ROUTEs to allow trapping deeper error 
    ROUTE(fromField='value_changed',fromNode='MismatchedKeyArrays',toField='set_fraction',toNode='MismatchedKeyArrays'),
    ROUTE(fromField='value_changed',fromNode='MismatchedKeyArraysSFVec3f',toField='set_fraction',toNode='MismatchedKeyArraysSFVec3f'),
    BooleanSequencer(),
    BooleanSequencer(DEF='NoROUTEs',key=[0,0.5,1],keyValue=[True,False,True]),
    IntegerTrigger(),
    IntegerTrigger(DEF='NoROUTE'),
    OrientationInterpolator(DEF='OI'),
    LoadSensor(DEF='ChildrenIncorrectContainerField',
      children=[
      ImageTexture(DEF='textureContainerField',url=["http:/bogus","https://www.web3d.org/x3d/content/examples/Basic/development/http:/bogus"])]),
    LoadSensor(DEF='ChildrenCorrectContainerField',
      children=[
      ImageTexture(DEF='watchListContainerField')]),
    LoadSensor(DEF='IncorrectChildNodes',
      children=[
      Group(),
      children=[
      Anchor(DEF='IllegalChildForLoadSensor')]),
    Script(DEF='HasLegalCDATA',
      field=[
      field(accessType='inputOnly',name='duplicatedFieldName',type='SFBool'),
      field(accessType='inputOnly',name='duplicatedFieldName',type='SFBool')]),
    Script(DEF='HasCDATAwithoutEcmascriptHeader',
      field=[
      field(name='noAccessType',type='SFBool'),
      field(accessType='inputOnly',name='noType'),
      field(accessType='inputOnly',type='noName'),
      field(accessType='outputOnly',name='neverSet',type='SFBool')]),
    Script(DEF='HasUrlNoCDATA',url=["TestSchematronDiagnostics.js","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.js"]),
    Script(DEF='NoUrlNoCDATA'),
    Script(DEF='BothUrlAndCDATA',url=["TestSchematronDiagnostics.js","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.js"],
      field=[
      field(accessType='inputOnly',name='inputFunctionDefinedTwice',type='SFBool'),
      field(accessType='outputOnly',name='noInputFunctionAllowed',type='SFBool')]),
    Script(DEF='RouteButNoFields',url=["TestSchematronDiagnostics.js","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.js"]),
    ROUTE(fromField='blah',fromNode='NoFields',toField='blah',toNode='NoFields'),
    ProtoInstance(name='NoDeclaration'),
    ProtoDeclare(name='MissingProtoBody'),
    WorldInfo(DEF='DEFoutsideProtoDeclareScope'),
    ProtoDeclare(DEF='DuplicatedDeclaration',name='DoubleMixedDeclaration',
      ProtoBody=ProtoBody(
        children=[
        Group(),
        Viewpoint(DEF='ISconnectDescription',
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description')])),
        #  TODO not yet working... 
        WorldInfo(USE='DEFoutsideProtoDeclareScope'),
        WorldInfo(DEF='USEoutsideProtoDeclareScope'),
        WorldInfo(DEF='DEF_USEinsideProtoDeclareScope'),
        WorldInfo(USE='DEF_USEinsideProtoDeclareScope')])),
    WorldInfo(USE='USEoutsideProtoDeclareScope'),
    ExternProtoDeclare(name='DoubleMixedDeclaration',url=['http://bogus#DifferentRemotePrototypeName']),
    ProtoInstance(DEF='DoubleDeclaration2',name='DoubleMixedDeclaration',
      fieldValue=[
      fieldValue(name='duplicatedFieldValueName',value=blah),
      fieldValue(name='duplicatedFieldValueName'),
      fieldValue(value=noName)]),
    ProtoDeclare(name='DoubleProtoDeclaration',url=["http:/bogus","https://www.web3d.org/x3d/content/examples/Basic/development/http:/bogus"]),
    ProtoDeclare(name='DoubleProtoDeclaration',url=['http:///bogus']),
    ExternProtoDeclare(name='DoubleDeclarationUrlMissingPoundProtoName',url=['http:///bogus']),
    ExternProtoDeclare(name='DoubleDeclarationUrlMissingPoundProtoName',url=["http:/bogus","https://www.web3d.org/x3d/content/examples/Basic/development/http:/bogus"]),
    ProtoDeclare(name='EmptyProtoInterfaceEmptyProtoBody',
      ProtoInterface=ProtoInterface(),
      ProtoBody=ProtoBody(),),
    ProtoDeclare(name='IllegalProtoInterface',
      ProtoInterface=ProtoInterface(
        children=[
        Group(DEF='OnlyFieldDeclarationsAllowedInProtoInterface')]),
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    ExternProtoDeclare(name='ExternProtoDeclareBeforeInstance',url=["httpsMissing","https://www.web3d.org/x3d/content/examples/Basic/development/httpsMissing"]),
    ProtoInstance(name='ExternProtoDeclareBeforeInstance'),
    ProtoInstance(name='ExternProtoDeclareAfterInstance'),
    ExternProtoDeclare(name='ExternProtoDeclareAfterInstance',url=["httpMissing","https://www.web3d.org/x3d/content/examples/Basic/development/httpMissing"]),
    ProtoDeclare(name='ProtoDeclareBeforeInstance',
      ProtoBody=ProtoBody(
        children=[
        Group(),])),
    ProtoInstance(name='ProtoDeclareBeforeInstance'),
    ProtoInstance(name='ProtoDeclareAfterInstance'),
    ProtoDeclare(name='ProtoDeclareAfterInstance',
      ProtoBody=ProtoBody(
        children=[
        Group(
          IS=IS(
            connect=[
            connect(nodeField='danglingConnectNodeField',protoField='danglingConnectProtoField')]))])),
    Group(DEF='ContainsISchildButNoParentProtoDeclare',
      IS=IS(
        connect=[
        connect(nodeField='isolatedConnectNodeField',protoField='isolatedConnectProtoField')])),
    #  test isolated (invalid) connect element <connect nodeField="isolatedConnectNodeField" protoField="isolatedConnectProtoField"/> 
    Shape(DEF='BadBoundingBoxValues',bboxCenter=(1a,2b,3c),bboxSize=(-1,-2,-3),
      geometry=Extrusion(DEF='ExtrusionCrossSectionMiscountSpineMismatchCrossSectionMiscount',crossSection=[(1,2)3)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1,1),(1,1),(1,1),(1,1),(1,1)],spine=[(0,0,0),(0,2,0)]),
      #  check for reserved word in DEF 
      appearance=Appearance(DEF='DEF',
        material=TwoSidedMaterial(DEF='separateBackColorWrong',backShininess=0.123))),
    ROUTE(fromField='set_blah',fromNode='blah',toField='bleah_changed',toNode='bleah'),
    Viewpoint(DEF='OKviewpoint',description='this viewpoint is OK'),
    Viewpoint(DEF='DEFdescriptionMatch',description='DEFdescriptionMatch'),
    OrthoViewpoint(DEF='NoSpacesInDescription',description='NeedToPutSpacesInDescription'),
    GeoViewpoint(DEF='IllegalFields',navType=["OTHER"]),
    GeoMetadata(DEF='BadChild',
      children=[
      GeoViewpoint(DEF='BadContainerField')]),
    #  check for reserved word in name definitions 
    ProtoDeclare(name='X3D',
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='PrototypeRootNode')])),
    ExternProtoDeclare(name='X3D',
      field=[
      field(accessType='inputOnly',name='X3D',type='SFBool')]),
    ProtoInstance(DEF='BadNameBadFieldValueNameMissingInitialization',name='X3D',
      fieldValue=[
      fieldValue(name='X3D')]),
    ProtoInstance(name='X3D',
      fieldValue=[
      fieldValue(name='X3D',value=doubleInitialization,
        children=[
        Shape(),])]),
    LOD(
      children=[
      Background(DEF='BackgroundWithParentLOD'),
      Fog(DEF='FogWithParentLOD'),
      NavigationInfo(DEF='NavigationInfoWithParentLOD'),
      Viewpoint(DEF='ViewpointWithParentLOD')]),
    ViewpointGroup(DEF='IllegalViewpointGroupChild',
      children=[
      Transform(),]),
    Shape(
      geometry=Box(),
      appearance=Appearance(
        texture=PixelTexture(DEF='NoImageData'))),
    Shape(
      geometry=Box(),
      appearance=Appearance(
        texture=PixelTexture(DEF='IllegalImageData',image=[1,a,b,c,d]))),
    Shape(
      geometry=Box(),
      appearance=Appearance(
        texture=PixelTexture(DEF='DefaultImageData'))),
    Shape(
      geometry=Box(),
      appearance=Appearance(
        texture=PixelTexture(DEF='DuplicateImageData'))),
    Shape(
      geometry=Box(),
      appearance=Appearance(
        texture=PixelTexture(DEF='ImageDataTest',image=[1,1,1,0xAA]))),
    WorldInfo(DEF='USEandDEFtogether',USE='USEandDEFtogether'),
    WorldInfo(USE='USEprecedesDEF'),
    WorldInfo(DEF='USEprecedesDEF'),
    WorldInfo(USE='noDEFforUSE'),
    WorldInfo(DEF='noChildNodeforUSE'),
    WorldInfo(USE='noChildNodeforUSE',
      metadata=MetadataSet(
        metadata=MetadataString(name='someStringArray',value=["unquoted string values"]))),
    Group(DEF='DEFcontainsUSEcopyOfSelf',
      children=[
      Group(USE='DEFcontainsUSEcopyOfSelf')]),
    WorldInfo(DEF='USEmismatchDEFnodeType'),
    Group(USE='USEmismatchDEFnodeType'),
    LocalFog(DEF='NoLocalFogV3.0'),
    PointLight(),
    Shape(
      geometry=IndexedFaceSet(DEF='CountTests',coordIndex=[0,1,2,-1],creaseAngle=-1.234,
        coord=Coordinate(point=[(0,0,0),(0,1,0),(1,0,0)5)]),
        color=Color(DEF='IllegalValuesColor',color=[(-1,2,3)]),
        ColorRGBA(DEF='IllegalValuesColorRGBA',color=[(-1,1.2,0.3,0.4)])
        texCoord=TextureCoordinate(),
        TextureCoordinateGenerator(),),
      appearance=Appearance(USE='NoMaterialNoTexture')),
    Shape(
      geometry=Text(DEF='CharacterBeforeQuotes',string=[x ","''],
        fontStyle=FontStyle(family=["unquotedFontFamilyName"],justify=["unquotedIllegalJustification"])),
      appearance=Appearance(USE='NoMaterialNoTexture')),
    Shape(
      geometry=Text(DEF='ThreeUnescapedQuoteMarksMissingSpaceEndsApostrophe',string=["" x" \'],
        fontStyle=FontStyle(DEF='familyValuesMissingIntermediateQuotes',family=["SANS SERIF"],justify=["BEGIN","BEGIN"])),
      appearance=Appearance(USE='NoMaterialNoTexture')),
    Shape(
      geometry=Text(DEF='EscapedQuoteMarkWarning',string=["here is a single escaped \" quote mark character"],
        fontStyle=FontStyle(justify=["IllegalValue"])),
      appearance=Appearance(USE='NoMaterialNoTexture')),
    Shape(
      geometry=Text(DEF='NeedQuoteMarks',string=["quote marks are required for single string"],
        fontStyle=FontStyle(),),
      appearance=Appearance(USE='NoMaterialNoTexture')),
    Shape(
      geometry=Text(DEF='EmbeddedQuoteMarksOK',string=["plain text with \"quote marks\" embedded"],
        fontStyle=FontStyle(DEF='FontStyleFieldsContainIllegalQuotes',language='"noquo"',style_='"PLAIN"')),
      appearance=Appearance(USE='NoMaterialNoTexture')),
    Shape(
      children=[
      IndexedQuadSet(DEF='MissingIndex',ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
        coord=Coordinate(DEF='DuplicatedCoordinatePointArray',point=[(0,0,0),(0,1,0),(1,0,0)5)]))],
      appearance=Appearance(USE='NoMaterialNoTexture')),
    NormalInterpolator(DEF='NormalPath',key=[0,0.5,1],keyValue=[(0,0,1),(0,0,1),(0,0,1),(0,0,1),(0,0,1),(1,0,0),(1,0,0),(0,0,1),(0,0,1),(0,0,1),(0,0,1),(0,0,1)5)]),
    GeoLocation(DEF='LegalGeoSystem',geoCoords=(36.607,-121.885,0.0)),
    ProtoDeclare(name='ReferenceTest',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='defaultTest',type='SInt32',value=78),
        field(accessType='initializeOnly',name='incorrectInitializationSFColorRGBA',type='SFColorRGBA',value=(1,1,1))]),
      ProtoBody=ProtoBody(
        children=[
        Script(url=["http:///bogus"],
          field=[
          field(accessType='initializeOnly',name='missingInitializationValue1',type='SFBool'),
          field(accessType='initializeOnly',name='missingInitializationValue2',type='SFInt32'),
          field(accessType='initializeOnly',name='incorrectInitializationSFVec3f',type='SFVec3f',value=(0.0)),
          field(accessType='initializeOnly',name='incorrectInitializationMFColor',type='MFColor',value=[(1,2,3),(4,5,6)7)]),
          field(accessType='initializeOnly',name='missingInitializationValueHasIS',type='SFBool',value=True)],
          fieldValue=[
          fieldValue(name='shouldBeField')],
          IS=IS(
            connect=[
            connect(nodeField='missingInitializationValue2',protoField='defaultTest'),
            connect(nodeField='missingInitializationValueHasIS',protoField='test')]))]
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        )),
    ProtoInstance(name='ReferenceTest',
      fieldValue=[
      fieldValue(name='defaultTest',value=78),
      fieldValue(name='incorrectInitializationSFColorRGBA',value=(1,1,1,1)1))],
      field=[
      field(name='shouldBeFieldValue')]),
    Transform(DEF='ZeroMagnitudeRotationAxes',scaleOrientation=(0,0,0,0)),
    Box(DEF='GeometryNodeNeedsShapeParent'),
    Collision(DEF='IllegalGeometryProxyNode',
      proxy=Box(DEF='GeometryNodeCollisionParentNeedsParentShapeWithProxyContainerField')),
    NavigationInfo(DEF='UnquotedTypeAndTransitionTypeErrors',transitionType=["ALTERNATE"],type=['OTHER']),
    NavigationInfo(DEF='NavigationInfoWithTypeALL',type=["ALL"]),
    Group(DEF='IllegalParentChild-DEF-USE',
      children=[
      Group(USE='IllegalParentChild-DEF-USE')]),
    CADLayer(name='contains whitespace and incorrect boolean value',visible=true,false,wrong),
    Shape(
      texture=ImageTexture(DEF='IllegalParent1'),
      MovieTexture(DEF='IllegalParent2'),
      PixelTexture(DEF='IllegalParent3')),
    Shape(
      textureTransform=TextureTransform(DEF='TextureTransformWithNoSiblingTextureNode')),
    Shape(
      appearance=Appearance(
        textureTransform=TextureTransform(USE='TextureTransformWithNoSiblingTextureNode'),
        texCoord=TextureCoordinateGenerator(DEF='TextureCoordinateGeneratorIllegalMode',mode='Bogus'),
        TextureCoordinateGenerator(DEF='TextureCoordinateGeneratorIllegalParameterCount',mode='NOISE',parameter=[1,2,3,4]))),
    Shape(
      appearance=Appearance(
        texture=MultiTexture(DEF='NoTextureChildren',function=["BogusFunction1Value","BogusFunction2Value","''],mode=["BogusMode1Value" BogusMode2Value"],source=["BogusSourceValue"]))),
    Background(DEF='NoBackgroundChildrenAllowed',
      texture=ImageTexture(DEF='IllegalBackgroundChild')),
    TextureBackground(
      texture=ImageTexture(DEF='LegalChild1'),
      MovieTexture(DEF='LegalChild2'),
      PixelTexture(DEF='LegalChild3')
      children=[
      Group(DEF='IllegalTextureBackgroundChild')],
      frontUrl=ImageTexture(DEF='IllegalTextureBackgroundChildContainerField')),
    Group(DEF='Embedded Blanks DEF'),
    Group(USE='Embedded Blanks USE'),
    Group(DEF='"QuotedDEF"'),
    Group(USE='"QuotedUSE"'),
    MetadataSet(
      children=[
      MetadataBoolean(),],
      value=[
      MetadataFloat(),],
      illegalName=[
      MetadataDouble(),]),
    MetadataString(DEF='IllegalMetadataContainerField'),
    ScalarInterpolator(DEF='IllegalDecimalPointsTest',key=[0.00.5,1.0],keyValue=[1,2,3]),
    ScalarInterpolator(DEF='IllegalMinusSignsTest',key=[0.0,0.5,1.0],keyValue=[-1-2,3]),
    #  test of NeedsChildNode 
    Group(DEF='EmptyGroup'),
    Switch(whichChoice=-1,
      #  test of NeedsChildNode 
      children=[
      Group(DEF='EmptyGroupInsideSwitch')]),
    Group(DEF='EmptyGroupContainsComment',
      #  test of NeedsChildNode 
      ),
    Switch(DEF='EmptySwitchContainsROUTE',whichChoice=-1,
      #  test of NeedsChildNode 
      children=[
      ROUTE(fromField='blah',fromNode='NoFields',toField='blah',toNode='NoFields')]),
    CADLayer(visible=False,
      children=[
      CADAssembly(
        children=[
        CADPart(
          children=[
          CADFace(DEF='CADFaceOneShapeChild',
            shape=Transform(
              children=[
              Shape(),])),
          CADFace(DEF='CADFaceMultipleShapeChildren',
            children=[
            Transform(DEF='containerFieldNot_shape',
              children=[
              Shape(),
              Shape(),])])])])]),
    GeoOrigin(DEF='DeprecatedNodeUnquotedGeoSystem',geoSystem=["GD WE"]),
    Viewpoint(DEF='ViewHumanoidMissingCenterOfRotation'),
    Shape(DEF='EmptyShapeWithCommentSilencesWarning',
      #  silence warning 
      ),
    Shape(
      appearance=Appearance(
        material=Material(DEF='IllegalColorValuesMaterial',diffuseColor=(-1,1.2,0.3)0.4),emissiveColor=(-1,1.2,0.3)0.4),specularColor=(-1,1.2,0.3)0.4)))),
    Background(DEF='BackgroundColorProblems',groundColor=[(-1,1.2,0.3)0.4)],skyColor=[(-1,1.2,0.3)0.4)]),
    Fog(DEF='FogColorProblems',color=(-1,1.2,0.3)0.4)),
    DirectionalLight(DEF='DirectionalLightColorProblems',color=(-1,1.2,0.3)0.4)),
    PointLight(DEF='PointLightColorProblems',color=(-1,1.2,0.3)0.4)),
    SpotLight(DEF='SpotLightColorProblems',color=(-1,1.2,0.3)0.4)),
    ClipPlane(DEF='IllegalPlaneEquationValues',plane=(1,2,3,4)5)),
    HAnimHumanoid(DEF='notUniqueName1',name='JimDandy',version='1.1'),
    HAnimHumanoid(DEF='notUniqueName2',name='JimDandy',version='2.0',
      skeleton=[
      HAnimJoint(name='HumanoidRoot',stiffness=[0,0,0],
        children=[
        HAnimJoint(DEF='MissingComponentH-AnimLevel1',stiffness=[0,0,0],
          children=[
          HAnimHumanoid(DEF='incorrectlyNestedHumanoidMissingNameAttribute',version='2.0')]),
        HAnimJoint(DEF='MissingNameAttributeCheckContainerField',stiffness=[0,0,0]),
        HAnimJoint(USE='MissingNameAttributeCheckContainerField',stiffness=[0,0,0]),
        HanimJoint(DEF='ImproperCapitalizationOfNodeName'),
        HAnimJoint(DEF='duplicateName1',name='sacroiliac',stiffness=[0,0,0]),
        HAnimJoint(DEF='duplicateName2',name='sacroiliac',stiffness=[0,0,0]),
        joints=[
        HAnimJoint(USE='duplicateName1',stiffness=[0,0,0]),],
        PositionInterpolator(DEF='JointInterpolator',key=[0,0],keyValue=[(0,0,0),(1,0,0)]),
        ROUTE(fromField='value_changed',fromNode='JointInterpolator',toField='translation',toNode='MissingNameAttribute'),
        HAnimJoint(DEF='ImproperDEFname',name='l_acromioclavicular',stiffness=[0,0,0]),
        HAnimJoint(DEF='hanim_HumanoidRoot',name='HumanoidRoot',stiffness=[0,0,0],
          children=[
          HAnimSegment(DEF='JointNameSegmentNameHierarchyTest',name='notSacrum',
            #  the following construct is OK and should not throw errors 
            viewpoints=[
            HAnimSite(DEF='hanim_Top_view',name='Top_view',rotation=(1,0,0,-1.57),translation=(0,3.5,0),
              children=[
              Viewpoint(DEF='hanim_Top_viewpoint',centerOfRotation=(0,0.9,0),description='Top',position=(0,0,0))])]),
          HAnimJoint(DEF='negativeCenterHeight',center=(0,-1,0),name='negativeCenterHeight',stiffness=[0,0,0],
            children=[
            HAnimSegment(DEF='IllegalChildrenContainerFields',name='IllegalChildrenContainerFields',
              children=[
              HAnimSite(DEF='negativeTranslationHeight',name='negativeTranslationHeight',translation=(0,-1,0),
                displacers=HAnimDisplacer(DEF='IllegalHAnimDisplacerInHAnimSiteNode'))],
              coord=Coordinate(),
              CoordinateDouble(),)]),
          HAnimJoint(DEF='MismatchedJointCenter_l_knee',center=(1,2,3),name='l_knee',stiffness=[0,0,0]),
          HAnimJoint(DEF='MismatchedJointCenter_r_knee',center=(4,5,6),name='r_knee',stiffness=[0,0,0]),
          HAnimJoint(USE='IllegalEmbeddedHAnimUse',stiffness=[0,0,0]),
          HAnimSite(DEF='IllegalNameIllegalParent',name='IllegalNameIllegalParent')]
          #  TODO test IllegalEmbeddedHAnimUse in another HAnimHumanoid 
          )]),],
      sites=[
      HAnimSite(USE='hanim_Top_view'),
      HAnimSite(USE='negativeTranslationHeight'),
      HAnimSite(USE='IllegalNameIllegalParent')],
      viewpoints=[
      HAnimSite(USE='hanim_Top_view'),
      HAnimSite(USE='hanim_Top_view')],
      #  keep the following Group node as first child so that it is reported by diagnostic test 
      children=[
      Group(DEF='HumanoidCannotContainChildrenNodes',name='IllegalGroupChildrenNode')],
      segments=[
      HAnimSegment(USE='JointNameSegmentNameHierarchyTest'),
      HAnimSegment(USE='IllegalChildrenContainerFields'),
      #  test for duplicated USE node 
      HAnimSegment(USE='IllegalChildrenContainerFields')],
      skinCoord=Coordinate(DEF='HAnimCoordinateCorrectContainerField',point=[(0,0,0)]),
      coord=Coordinate(DEF='HAnimCoordinateIncorrectContainerField'),
      CoordinateDouble(DEF='HAnimCoordinateDoubleCorrectContainerField',point=[(0,0,0)])
      CoordinateDouble(DEF='HAnimCoordinateDoubleIncorrectContainerField')
      normal=Normal(DEF='HAnimNormalIncorrectContainerField'),
      joints=[
      HAnimJoint(USE='MissingComponentH-AnimLevel1',stiffness=[0,0,0]),
      HAnimJoint(USE='MissingNameAttributeCheckContainerField',stiffness=[0,0,0]),
      HAnimJoint(USE='duplicateName1',stiffness=[0,0,0]),
      HAnimJoint(USE='duplicateName2',stiffness=[0,0,0]),
      HAnimJoint(USE='ImproperDEFname',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_HumanoidRoot',stiffness=[0,0,0]),
      HAnimJoint(USE='negativeCenterHeight',stiffness=[0,0,0]),
      HAnimJoint(USE='MismatchedJointCenter_l_knee',stiffness=[0,0,0]),
      HAnimJoint(USE='MismatchedJointCenter_r_knee',stiffness=[0,0,0])],),
    Sound(DEF='NoChildren'),
    AudioClip(DEF='NoParentSoundNode',description='bad clip reference',url=["blah","https://www.web3d.org/x3d/content/examples/Basic/development/blah"]),
    Sound(class_='must separate classes with;space characters',location=(0,2,0),
      source=AudioClip(description='bad clip reference',url=["blah","https://www.web3d.org/x3d/content/examples/Basic/development/blah"])),
    Sound(DEF='SoundDefaults',location=(0,2,0),
      source=AudioClip(DEF='ReusableAudioClip',description='reusable',url=["../Vrml97Specification/click.wav","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/click.wav"])),
    Sound(DEF='SoundMinNegative',location=(0,2,0),minBack=-1,minFront=-1,
      source=AudioClip(USE='ReusableAudioClip')),
    Sound(DEF='SoundMaxNegative',location=(0,2,0),maxBack=-10,maxFront=-10,
      source=AudioClip(USE='ReusableAudioClip')),
    Sound(DEF='SoundMinGreaterThanMax',location=(0,2,0),maxBack=11,maxFront=11,minBack=12,minFront=12,
      source=AudioClip(USE='ReusableAudioClip')),
    Sound(DEF='SoundMinGreaterThanDefaultMax',location=(0,2,0),minBack=13,minFront=13,
      source=AudioClip(USE='ReusableAudioClip')),
    Sound(DEF='SoundMaxLessThanDefaultMin',location=(0,2,0),maxBack=0.5,maxFront=0.5,
      source=AudioClip(USE='ReusableAudioClip')),
    ROUTE(fromField='test1',fromNode='DuplicateROUTE',toField='test3',toNode='test2'),
    ROUTE(fromField='test1',fromNode='DuplicateROUTE',toField='test3',toNode='test2'),
    ROUTE(fromField='test1',fromNode='DuplicateROUTE',toField='test3',toNode='test2'),
    ROUTE(fromField='children',fromNode='NodeFollowsRoute1',toField='children',toNode='NodeFollowsRoute2'),
    Group(DEF='NodeFollowsRoute1',
      children=[
      Group(DEF='NodeFollowsRoute2',
        #  silence warning 
        )]),
    Shape(DEF='ElevationGridInsufficientHeights',
      geometry=ElevationGrid(height=[1,2,3,4,5],solid=False,xSpacing=0,zDimension=3,zSpacing=0)),
    Shape(DEF='ElevationGridTooManyHeights',
      geometry=ElevationGrid(height=[1,2,3,4,5,6,7],solid=False,xSpacing=-1,zDimension=3,zSpacing=-1)),
    Shape(DEF='ElevationGridBadDimensions',
      geometry=ElevationGrid(height=[1,2,3,4,5,6],solid=False,xDimension=-2,zDimension=-3)),
    StaticGroup(DEF='StaticGroupChildTests',
      children=[
      Group(
        children=[
        TimeSensor(DEF='StaticGroupDescendantsCannotProduceEvents'),
        PositionInterpolator(DEF='StaticGroupDescendantsCannotConsumeEvents'),
        PositionInterpolator(USE='StaticGroupDescendantsCannotBeUsed')]),
      #  note mistake capitalization, correct form is ROUTE 
      Route(fromField=fraction_changed,fromNode=StaticGroupDescendantsCannotProduceEvents,toField=set_fraction,toNode=StaticGroupDescendantsCannotConsumeEvents)]),
    Group(DEF='CaseSensitive',
      #  test case sensitivity of DEF/USE 
      ),
    Group(USE='CASESENSITIVE'),
    Group(
      children=[
      TouchSensor(DEF='PeerTouchSensor'),
      CylinderSensor(DEF='PeerCylinderSensor'),
      Billboard(DEF='PeerBillboard')]),
    Inline(DEF='RecursiveInlineInvocation',url=["TestSchematronDiagnostics.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.x3d","TestSchematronDiagnostics.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/TestSchematronDiagnostics.wrl"]),
    Shape(
      geometry=IndexedFaceSet(DEF='IfsEmptyChildren',
        coord=Coordinate(DEF='EmptyCoordinate'),
        color=Color(DEF='EmptyColor'),
        normal=Normal(DEF='EmptyNormal'),
        texCoord=TextureCoordinate(DEF='EmptyTextureCoordinate'))),
    Shape(
      geometry=IndexedFaceSet(DEF='IfsSingletonChildren',
        coord=Coordinate(DEF='SingleCoordinate',point=[(1,2,3)]),
        color=Color(DEF='SingleColor',color=[(0.1,0.2,0.3)]),
        normal=Normal(DEF='SingleNormal',vector=[(0,1,0)]),
        texCoord=TextureCoordinate(DEF='SingleTextureCoordinate',point=[(0.4,0.8)]))),
    GeoLOD(
      children=[
      Shape(DEF='rootNodeContainerFieldIsCorrect')]),
    TextureProjector(),
    TextureProjectorParallel(DEF='DistanceMismatchIllegalFieldOfView',farDistance=.1,fieldOfView=(1,2,3,4)5),nearDistance=20)])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestSchematronDiagnostics.py")
