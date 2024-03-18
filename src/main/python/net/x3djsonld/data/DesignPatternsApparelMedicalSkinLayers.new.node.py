####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python DesignPatternsApparelMedicalSkinLayers.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='DesignPatternsApparelMedicalSkinLayers.x3d',name='title'),
    meta(content='Design patterns for skin and apparel using HAnim2 standard in X3D4',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Joe D. Williams',name='creator'),
    meta(content='Dick Puk',name='creator'),
    meta(content='23 December 2022',name='created'),
    meta(content='2 July 2023',name='modified'),
    meta(content='DesignPatternsApparelVariations.txt',name='reference'),
    meta(content='HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject',name='reference'),
    meta(content='HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile',name='reference'),
    meta(content='X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid',name='reference'),
    meta(content='Under development. This template example does not produce renderable HAnim models.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimHumanoid skin design patterns for apparel, medical'),
    Background(skyColor=[(0,0.6,0.6)]),
    Group(DEF='MultipleHumanoids',
      metadata=MetadataString(name='HAnimArchitecture',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile',value=["E.4 Multiple humanoids per file"]),
      #  ============================== 
      children=[
      HAnimHumanoid(DEF='a_SimpleSkeleton',name='SimpleSkeleton',version='2.0',
        skeleton=[
        HAnimJoint(DEF='a_SimpleSkeleton',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum',
            children=[
            Shape(DEF='JointVisualization'),
            Shape(DEF='SegmentVisualization'),
            HAnimSite(DEF='a_feature01_tip',name='feature01_tip',
              children=[
              Shape(DEF='SiteVisualization')])])])],),
      #  ============================== 
      HAnimHumanoid(DEF='b_SimpleSkeletonMesh',name='SimpleSkeletonMesh',version='2.0',
        skeleton=[
        HAnimJoint(DEF='b_SimpleSkeletonMesh',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum',
            children=[
            Shape(
              geometry=IndexedFaceSet(DEF='SegmentBoneMesh'))])])],),
      #  ============================== 
      HAnimHumanoid(DEF='c_SkinIndexedGeometry',name='SkinIndexedGeometry',version='2.0',
        skeleton=[
        HAnimJoint(DEF='c_SkinIndexedGeometry',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum')]),],
        geometry=IndexedFaceSet(DEF='SkinMeshIFS')),
      #  ============================== 
      HAnimHumanoid(DEF='d_SkinShapeIndexedGeometry',name='SkinShapeIndexedGeometry',version='2.0',
        skeleton=[
        HAnimJoint(DEF='d_SkinShapeIndexedGeometry',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum')]),],
        skin=[
        Shape(
          geometry=IndexedFaceSet(USE='SkinMeshIFS'))],),
      #  ============================== 
      HAnimHumanoid(DEF='e_SkinSwitchShapeIndexedGeometry',name='SkinSwitchShapeIndexedGeometry',version='2.0',
        skeleton=[
        HAnimJoint(DEF='e_SkinSwitchShapeIndexedGeometry',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum')]),],
        #  TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'> 
        skin=[
        Shape(
          geometry=IndexedFaceSet(DEF='IndexedSkinMeshIFS',
            coord=Coordinate(DEF='SkinMeshCoordinate')))],),
      #  similarly for LOD 
      #  ============================== 
      HAnimHumanoid(DEF='f_SynthesizedSkinShapeIndexedTwoPartGeometry',name='SynthesizedSkinShapeIndexedTwoPartGeometry',version='2.0',
        skeleton=[
        HAnimJoint(DEF='f_SynthesizedSkinShapeIndexedTwoPartGeometry',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum')]),],
        skin=[
        Shape(
          geometry=IndexedFaceSet(DEF='TwoPartIndexedSkinMesh',
            coord=Coordinate(DEF='TwoPartSkinMesh')))],),
      #  ============================== 
      HAnimHumanoid(DEF='g_ApparelSkinIndexedGeometryMultipleShapes',name='ApparelSkinIndexedGeometryMultipleShapes',version='2.0',
        skeleton=[
        HAnimJoint(DEF='g_ApparelSkinIndexedGeometryMultipleShapes',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum')]),],
        #  allow multiple Shape nodes with containerField='apparel', one for each layer of clothing 
        #  TODO proposed for X3D4.1 <Shape containerField='apparel'/> 
        skin=[
        Shape(),],),
      #  ============================== 
      HAnimHumanoid(DEF='h_AnatomySkinIndexedGeometryMultipleShapes',name='AnatomySkinIndexedGeometryMultipleShapes',version='2.0',
        skeleton=[
        HAnimJoint(DEF='h_AnatomySkinIndexedGeometryMultipleShapes',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(name='sacrum')]),],
        #  allow multiple Shape nodes with containerField='skin', one for each layer of skin 
        skin=[
        Shape(),],)]
      #  ============================== 
      ),
    Viewpoint(DEF='ViewHelpText',description='Select text to see website',position=(0,0,12)),
    #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
    Anchor(description='DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches',parameter=["target=blank"],url=["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"],
      children=[
      Shape(
        #  TODO adjust Text string and Box size, then set Material transparency='1' 
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9))),
        geometry=Text(string=["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.6,style_='BOLD'))),
      Shape(
        #  Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. 
        appearance=Appearance(
          material=Material(transparency=1.0)),
        geometry=Box(size=(11,2,0.001)))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for DesignPatternsApparelMedicalSkinLayers.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python DesignPatternsApparelMedicalSkinLayers.py load and self-test diagnostics complete.")
