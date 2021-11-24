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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Geometry2dComponentExternProtos.x3d',name='title'),
    meta(content='ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs).',name='description'),
    meta(content='Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis',name='creator'),
    meta(content='16 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Check Polypoint2D and point rendering order',name='TODO'),
    meta(content='These examples are complete but only used for developmental testing, not regular X3D authoring.',name='warning'),
    meta(content='Geometry2dComponentPrototypes.x3d',name='reference'),
    meta(content='Geometry2dComponentExamples.x3d',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html',name='reference'),
    meta(content='Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    #  Do not copy these ExternProtoDeclare statements! They are copied automatically to provide backwards compatibility for VRML97 when using X3dToVrml97.xslt stylesheet mappings. 
    #  ==================== 
    children=[
    WorldInfo(title='Geometry2dComponentExternProtos.x3d'),
    ExternProtoDeclare(name='Arc2D',url=["Geometry2dComponentPrototypes.wrl#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Arc2D","Geometry2dComponentPrototypes.x3d#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Arc2D"],
      field=[
      field(accessType='initializeOnly',name='startAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='endAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='radius',type='SFFloat'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='ArcClose2D',url=["Geometry2dComponentPrototypes.wrl#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2D","Geometry2dComponentPrototypes.x3d#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2D"],
      field=[
      field(accessType='initializeOnly',name='startAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='endAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='radius',type='SFFloat'),
      field(accessType='initializeOnly',name='closureType',type='SFString'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='Circle2D',url=["Geometry2dComponentPrototypes.wrl#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Circle2D","Geometry2dComponentPrototypes.x3d#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Circle2D"],
      field=[
      field(accessType='initializeOnly',name='radius',type='SFFloat'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='Disk2D',url=["Geometry2dComponentPrototypes.wrl#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Disk2D","Geometry2dComponentPrototypes.x3d#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Disk2D"],
      field=[
      field(accessType='initializeOnly',name='innerRadius',type='SFFloat'),
      field(accessType='initializeOnly',name='outerRadius',type='SFFloat'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='Polyline2D',url=["Geometry2dComponentPrototypes.wrl#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polyline2D","Geometry2dComponentPrototypes.x3d#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polyline2D"],
      field=[
      field(accessType='initializeOnly',name='lineSegments',type='MFVec2f'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='Polypoint2D',url=["Geometry2dComponentPrototypes.wrl#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polypoint2D","Geometry2dComponentPrototypes.x3d#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polypoint2D"],
      field=[
      field(accessType='initializeOnly',name='point',type='MFVec2f'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='Rectangle2D',url=["Geometry2dComponentPrototypes.wrl#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2D","Geometry2dComponentPrototypes.x3d#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2D"],
      field=[
      field(accessType='initializeOnly',name='size',type='SFVec2f'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='TriangleSet2D',url=["Geometry2dComponentPrototypes.wrl#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#TriangleSet2D","Geometry2dComponentPrototypes.x3d#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#TriangleSet2D"],
      field=[
      field(accessType='initializeOnly',name='vertices',type='MFVec2f'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  ==================== 
    #  Additional Unfilled versions since FillProperties node not possible in native VRML 97 
    #  ==================== 
    ExternProtoDeclare(name='ArcClose2DUnfilled',url=["Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled"],
      field=[
      field(accessType='initializeOnly',name='startAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='endAngle',type='SFFloat'),
      field(accessType='initializeOnly',name='radius',type='SFFloat'),
      field(accessType='initializeOnly',name='closureType',type='SFString'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='Rectangle2DUnfilled',url=["Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled"],
      field=[
      field(accessType='initializeOnly',name='size',type='SFVec2f'),
      field(accessType='initializeOnly',name='solid',type='SFBool'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  ==================== 
    #  ==================== 
    Background(groundColor=[(0.3,0.3,0.3)],skyColor=[(0.3,0.3,0.3)]),
    Viewpoint(description='Geometry2D Component Examples',position=(0,0,12)),
    #  ==================== 
    #  Top row 
    Transform(translation=(-5,2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='ArcClose2D',
          fieldValue=[
          fieldValue(name='closureType',value='PIE'),
          fieldValue(name='startAngle',value=0.7),
          fieldValue(name='endAngle',value=3),
          fieldValue(name='radius',value=1)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))))]),
    Transform(DEF='ArcClose2DUnfilledTransform',translation=(-2.5,2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='ArcClose2DUnfilled',
          fieldValue=[
          fieldValue(name='closureType',value='PIE'),
          fieldValue(name='startAngle',value=0.7),
          fieldValue(name='endAngle',value=3),
          fieldValue(name='radius',value=1)]),
        appearance=Appearance(
          material=Material(emissiveColor=(0.2,0.2,1))))]),
    Transform(translation=(-0.5,2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Arc2D',
          fieldValue=[
          fieldValue(name='startAngle',value=0),
          fieldValue(name='endAngle',value=1.570796),
          fieldValue(name='radius',value=1)]),
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,0))))]),
    Transform(translation=(2,2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Circle2D',
          fieldValue=[
          fieldValue(name='radius',value=1)]),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0))))]),
    Transform(translation=(5,2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Disk2D',
          fieldValue=[
          fieldValue(name='innerRadius',value=0.5),
          fieldValue(name='outerRadius',value=1)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,1,1))))]),
    #  ==================== 
    #  Bottom row 
    Transform(translation=(-5,-2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Rectangle2D',
          fieldValue=[
          fieldValue(name='size',value=(1,2))]),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))))]),
    Transform(DEF='RectangleUnfilled',translation=(-3,-2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Rectangle2DUnfilled',
          fieldValue=[
          fieldValue(name='size',value=(1,2))]),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0.2,0.2))))]),
    Transform(translation=(-0.5,-2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Polyline2D',
          fieldValue=[
          fieldValue(name='lineSegments',value=[(-1,0),(-0.5,1),(0,0),(0.5,1),(1,0)])]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0),emissiveColor=(1,0.5,1))))]),
    Transform(translation=(2.5,-2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='Polypoint2D',
          fieldValue=[
          fieldValue(name='point',value=[(-1,0),(-0.5,1),(0,0),(0.5,1),(1,0)])]),
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1)))),
      Transform(translation=(0,0.5,-0.5),
        children=[
        Shape(
          geometry=ProtoInstance(DEF='BackDrop',name='Rectangle2D',
            fieldValue=[
            fieldValue(name='size',value=(2.5,2))]),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0)))),
        Transform(translation=(0,-0.15,0.2),
          children=[
          Shape(
            geometry=Text(string=["PolyPoint2D","5 points"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.25,style_='BOLD')),
            appearance=Appearance(
              material=Material(),))])])]),
    Transform(translation=(5,-2,0),
      children=[
      Shape(
        geometry=ProtoInstance(name='TriangleSet2D',
          fieldValue=[
          fieldValue(name='vertices',value=[(0,0),(1,1),(-1,1),(0,0),(1,0.5),(1,-0.5),(0,0),(-1,-2),(-2,-1)])]),
        appearance=Appearance(
          fillProperties=FillProperties(DEF='TestFillProperties'),
          lineProperties=LineProperties(DEF='TestLineProperties',linewidthScaleFactor=1,
            metadata=MetadataString(DEF='TestLinePropertiesMetaData',name='test LineProperties metadata child')),
          material=Material(diffuseColor=(0,1,0))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Geometry2dComponentExternProtos.py")
