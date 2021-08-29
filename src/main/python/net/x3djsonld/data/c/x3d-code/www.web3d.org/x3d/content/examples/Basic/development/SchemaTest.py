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
    component(level=1,name='Core'),
    meta(content='SchemaTest.x3d',name='title'),
    meta(content='1 October 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test scene for obscure schema validation cases.',name='description'),
    meta(content='Test scene that does not render or validate.',name='error'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/SchemaTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SchemaTest.x3d'),
    TimeSensor(DEF='badCycleIntervalValue',cycleInterval=-1.8e-1),
    Transform(rotation=(0,0,1,-0.444E+1),translation=(+10000.e-1,50,0.5),
      children=[
      Anchor(
        children=[
        Shape(
          geometry=IndexedLineSet(
            color=Color(),
            coord=Coordinate(),),
          appearance=Appearance(
            texture=MovieTexture(),
            material=Material(),
            textureTransform=TextureTransform(),)),
        Collision(
          children=[
          Background(groundAngle=[0.5],groundColor=[(1,0,0)]),
          proxy=Shape(
            geometry=Extrusion(),),
          Shape(
            appearance=Appearance(
              material=Material(),
              texture=PixelTexture(),),
            geometry=Cylinder(),)])])]),
    Shape(
      geometry=ElevationGrid(
        normal=Normal(),
        color=Color(color=[(0.5e+0,0.05e+1,0.e-1),(0,1,1)]),
        texCoord=TextureCoordinate(),
        #  partial loophole via xsd:all forcontained ProtoInstance, USE 
        ),
      appearance=Appearance(
        textureTransform=TextureTransform(),
        texture=MovieTexture(),
        material=Material(),)),
    NavigationInfo(),
    Shape(
      appearance=Appearance(
        IS=IS(
          connect=[
          connect(nodeField='sfdg',protoField='df')]),
        metadata=MetadataSet(
          value=[
          MetadataInteger(),
          MetadataSet(),
          ProtoInstance(name='SomeKindOfMetadataPrototype')]),
        material=Material(),
        texture=MultiTexture(),),
      geometry=IndexedFaceSet(
        normal=Normal(),
        coord=Coordinate(),)),
    ProtoDeclare(name='blah',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='something',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Anchor(),
        ROUTE(fromField='x',fromNode='blah',toField='x',toNode='blah'),
        Sound(
          source=AudioClip(),)])),
    ProtoInstance(DEF='blah',name='blah'),
    ROUTE(fromField='x',fromNode='blah',toField='x',toNode='blah')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SchemaTest.py")
