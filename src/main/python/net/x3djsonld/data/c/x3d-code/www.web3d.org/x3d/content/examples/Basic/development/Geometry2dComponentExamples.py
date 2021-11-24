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
    component(level=2,name='Geometry2D'),
    meta(content='Geometry2dComponentExamples.x3d',name='title'),
    meta(content='Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs).',name='description'),
    meta(content='Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis',name='creator'),
    meta(content='16 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Geometry2dComponentExamplesBsContact.png',name='Image'),
    meta(content='Geometry2dComponentExamplesCobweb.png',name='Image'),
    meta(content='Geometry2dComponentExamplesFreeWRL.png',name='Image'),
    meta(content='Geometry2dComponentExamplesH3dViewer.png',name='Image'),
    meta(content='Geometry2dComponentExamplesInstantReality.png',name='Image'),
    meta(content='Geometry2dComponentExamplesOctagaVS.png',name='Image'),
    meta(content='Geometry2dComponentExamplesView3dScene.png',name='Image'),
    meta(content='Geometry2dComponentExamplesX3DOM.png',name='Image'),
    meta(content='Geometry2dComponentExternProtos.x3d',name='reference'),
    meta(content='Geometry2dComponentPrototypes.x3d',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html',name='reference'),
    meta(content='Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    children=[
    WorldInfo(title='Geometry2dComponentExamples.x3d'),
    Background(groundColor=[(0.3,0.3,0.3)],skyColor=[(0.3,0.3,0.3)]),
    Viewpoint(description='Geometry2D Component Examples',position=(0,0,12)),
    #  ==================== 
    #  Top row 
    Transform(translation=(-6,2,0),
      children=[
      TouchSensor(description='ArcClose2D'),
      Shape(
        geometry=ArcClose2D(closureType='PIE',endAngle=3.0,startAngle=0.7),
        #  default radius='1' 
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),emissiveColor=(0,0,1))))]),
    Transform(translation=(-2,2,0),
      children=[
      TouchSensor(description='Arc2D'),
      Shape(
        geometry=Arc2D(),
        #  default radius='1' startAngle='0' 
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,0)))),
      Transform(DEF='TransparentBackdropForTouchSensor',translation=(0,0,-0.5),
        children=[
        Shape(
          geometry=Rectangle2D(),
          #  default 
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0),transparency=1)))])]),
    Transform(translation=(2,2,0),
      children=[
      TouchSensor(description='Circle2D'),
      Shape(
        geometry=Circle2D(),
        #  default radius='1' 
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0)))),
      Transform(USE='TransparentBackdropForTouchSensor')]),
    Transform(translation=(6,2,0),
      children=[
      TouchSensor(description='Disk2D'),
      Shape(
        geometry=Disk2D(innerRadius=0.5),
        #  default outerRadius='1' 
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,1,1))))]),
    #  ==================== 
    #  Bottom row 
    Transform(translation=(-6,-2,0),
      children=[
      TouchSensor(description='Rectangle2D'),
      Shape(
        geometry=Rectangle2D(size=(1,2)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))))]),
    Transform(translation=(-2,-2,0),
      children=[
      TouchSensor(description='Polyline2D'),
      Shape(
        geometry=Polyline2D(lineSegments=[(-1,0),(-0.5,1),(0,0),(0.5,1),(1,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0),emissiveColor=(1,0.5,1)))),
      Transform(USE='TransparentBackdropForTouchSensor')]),
    Transform(translation=(2,-2,0),
      children=[
      TouchSensor(description='Polypoint2D'),
      Shape(
        geometry=Polypoint2D(point=[(-1,0),(-0.5,1),(0,0),(0.5,1),(1,0)]),
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1)))),
      Transform(translation=(0.1,0.4,-0.5),
        children=[
        Shape(
          geometry=Rectangle2D(DEF='BackDrop',size=(2.8,2)),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0)))),
        Transform(translation=(0,-0.15,0.2),
          children=[
          Shape(
            geometry=Text(string=["PolyPoint2D","5 points"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.25,style_='BOLD')),
            appearance=Appearance(
              material=Material(),))])])]),
    Transform(translation=(6,-2,0),
      children=[
      TouchSensor(description='TriangleSet2D'),
      Shape(
        geometry=TriangleSet2D(vertices=[(0,0),(1,1),(-1,1),(0,0),(1,-0.5),(1,0.5),(0,0),(-2,-1),(-1,-2)]),
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

print ("python x3d.py load successful for Geometry2dComponentExamples.py")
