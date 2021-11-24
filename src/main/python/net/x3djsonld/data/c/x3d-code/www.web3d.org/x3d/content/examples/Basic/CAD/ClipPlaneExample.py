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
  head=head(
    children=[
    component(level=5,name='Rendering'),
    meta(content='ClipPlaneExample.x3d',name='title'),
    meta(content='Nicholas Polys, Don Brutzman',name='creator'),
    meta(content='20 February 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped.',name='description'),
    meta(content='ClipPlaneExample.x3d',name='reference'),
    meta(content='ClipPlaneExampleFront.png',name='Image'),
    meta(content='ClipPlaneExampleOblique.png',name='Image'),
    meta(content='ClipPlaneExampleOverhead.png',name='Image'),
    meta(content='ClipPlaneExampleSide.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vivaty Studio',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  TODO Schematron error for orientation='0 0 0 0' 
    children=[
    Viewpoint(description='ClipPlanes front view',position=(0,1,10)),
    Viewpoint(description='ClipPlanes oblique view',orientation=(1,0,0,-0.851966),position=(0,8,7)),
    Viewpoint(description='ClipPlanes overhead view',orientation=(1,0,0,-1.570796),position=(0,12,0)),
    Viewpoint(description='ClipPlanes side view',orientation=(-0.03326,0.99889,0.03326,1.571904),position=(15,1,0)),
    Background(DEF='WhiteBackground',groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    Group(DEF='ClipPlaneGroup',
      #  ClipPlane nodes affect peers and children 
      children=[
      ClipPlane(DEF='ClipPlaneHorizontal'),
      ClipPlane(DEF='ClipPlaneVertical',plane=(0,0,-1,0)),
      #  Non-standard scripting animation test for ClipPlane <PythonScript DEF="PS" url="OpacityMapStyle.py" /> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='PS' toField='planeEquation'/> <ROUTE fromNode='PS' fromField='planeEquation' toNode='CP' toField='plane'/> 
      #  <TimeSensor DEF='timer' cycleInterval='13.000' loop='true' startTime='0.000'/> <ROUTE fromNode='timer' fromField='fraction_changed' toNode='timer_pos0' toField='set_fraction'/> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='move' toField='set_translation'/> 
      Group(DEF='PrimitiveShapes',
        children=[
        WorldInfo(info=["This Web3D Content was created with Vivaty Studio, a Web3D authoring tool","www.mediamachines.com"],title='primitives'),
        Transform(DEF='dad_Box1',translation=(-3,0,0),
          children=[
          Shape(DEF='Box1',
            appearance=Appearance(
              material=Material(DEF='Red',ambientIntensity=.2,diffuseColor=(1,0,0),shininess=.2)),
            geometry=Box(DEF='GeoBox1',solid=False))]),
        Transform(DEF='dad_Cylinder1',translation=(-1,0,0),
          children=[
          Shape(DEF='Cylinder1',
            appearance=Appearance(
              material=Material(DEF='Green',ambientIntensity=.2,diffuseColor=(0,1,0),shininess=.2)),
            geometry=Cylinder(DEF='GeoCylinder1',solid=False))]),
        Transform(DEF='dad_Cone1',translation=(1,0,0),
          children=[
          Shape(DEF='Cone1',
            appearance=Appearance(
              material=Material(DEF='Blue',ambientIntensity=.2,diffuseColor=(0,0,1),shininess=.2)),
            geometry=Cone(DEF='GeoCone1',solid=False))]),
        Transform(DEF='dad_Sphere1',translation=(3,0,0),
          children=[
          Shape(DEF='Sphere1',
            appearance=Appearance(
              material=Material(DEF='Shiny_Yellow',ambientIntensity=.2,diffuseColor=(1,1,0),shininess=.1,specularColor=(1,1,0))),
            geometry=Sphere(DEF='GeoSphere1',solid=False))]),
        Transform(DEF='dad_Light1',translation=(0,5,0),
          children=[
          PointLight(DEF='Light1')]),
        Transform(DEF='dad_Background1',translation=(-.73213,4.14112,0),
          children=[
          Background(DEF='Background1',groundColor=[(1,1,1)],skyColor=[(1,1,1)])])]),
      Transform(translation=(0,3,0),
        children=[
        Group(USE='PrimitiveShapes')])]),
    #  Keep boundary lines outside of scope of the two clipping planes so that they can illustrate boundaries without being cut off 
    Group(DEF='BoundaryLines',
      children=[
      Transform(DEF='move',translation=(0,.00001,0),
        children=[
        Shape(DEF='PlaneOutlineHorizontal',
          appearance=Appearance(DEF='BoundaryLineAppearance',
            material=Material(ambientIntensity=.2,emissiveColor=(0.1,0.1,0.1))),
          geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1],
            coord=Coordinate(point=[(5,0,-2),(5,0,2),(-5,0,2),(-5,0,-2)])))]),
      PositionInterpolator(DEF='timer_pos0',key=[0,.5,1],keyValue=[(0,2,0),(0,-2,0),(0,2,0)]),
      Transform(rotation=(1,0,0,-1.578),
        children=[
        Transform(DEF='move2',translation=(0,.00001,0),
          children=[
          Shape(DEF='PlaneOutlineVertical',
            appearance=Appearance(USE='BoundaryLineAppearance'),
            #  also includes center line 
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,4,5,-1],
              coord=Coordinate(point=[(5,0,-2),(5,0,4),(-5,0,4),(-5,0,-2),(5,0,0),(-5,0,0)])))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ClipPlaneExample.py")
