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
    meta(content='Fish.x3d',name='title'),
    meta(content='One simple Fish with three levels of detail.',name='description'),
    meta(content='Stewart Liles, Sean Hynes',name='creator'),
    meta(content='25 September 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Teaching3d-KelpForestCaseStudy.pdf',name='reference'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Fish.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Viewpoints',
      children=[
      Viewpoint(description='Fish High Resolution'),
      Viewpoint(description='Fish Medium Resolution',position=(0,0,35)),
      Viewpoint(description='Fish Low Resolution',position=(0,0,65)),
      Viewpoint(description='Fish No Resolution',position=(0,0,105))]),
    #  Align fish with X axis 
    Transform(rotation=(0,1,0,-1.57),
      children=[
      LOD(DEF='FishLOD',range=[30,60,100],
        #  Three levels of visible detail, then disappears. 
        children=[
        Group(DEF='Near',
          #  High resolution fish. 
          children=[
          Transform(DEF='Fish1',scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(DEF='FishAppear',
                material=Material(diffuseColor=(0.6,0.65,0.7),shininess=0.8),
                texture=ImageTexture(DEF='FishJPG',url=["Fish2Patch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Fish2Patch.jpg"])),
              geometry=IndexedFaceSet(DEF='FishIndex',ccw=False,coordIndex=[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,1,8,-1,0,8,7,-1,0,7,6,-1,0,6,5,-1,1,2,10,9,-1,2,3,11,10,-1,3,4,12,11,-1,4,5,13,12,-1,1,9,16,8,-1,8,16,15,7,-1,7,15,14,6,-1,6,14,13,5,-1,9,10,18,17,-1,10,11,19,18,-1,11,12,20,19,-1,12,13,21,20,-1,9,17,24,16,-1,16,24,23,15,-1,15,23,22,14,-1,14,22,21,13,-1,17,18,26,25,-1,18,19,27,26,-1,19,20,28,27,-1,20,21,29,28,-1,17,25,32,24,-1,24,32,31,23,-1,23,31,30,22,-1,22,30,29,21,-1,25,26,34,33,-1,26,27,35,34,-1,27,28,36,35,-1,28,29,37,36,-1,25,33,40,32,-1,32,40,39,31,-1,31,39,38,30,-1,30,38,37,29,-1,33,34,41,-1,34,35,41,-1,35,42,41,-1,35,43,42,-1,36,43,35,-1,36,37,43,-1,33,41,40,-1,40,41,39,-1,39,41,42,-1,39,42,43,-1,39,43,37,-1,38,43,37,-1],creaseAngle=3.14,solid=False,
                coord=Coordinate(DEF='Fish',point=[(0.0,0.0,-1.5),(0.0,0.5,-1.0),(-0.12,0.25,-1.0),(-0.25,0.0,-1.0),(-0.12,-0.25,-1.0),(0.0,-0.5,-1.0),(0.12,-0.25,-1.0),(0.25,0.0,-1.0),(0.12,0.25,-1.0),(0.0,1.0,0.0),(-0.25,0.5,0.0),(-0.5,0.0,0.0),(-0.25,-0.5,0.0),(0.0,-1.0,0.0),(0.25,-0.5,0.0),(0.5,0.0,0.0),(0.25,0.5,0.0),(0.0,0.88,0.9),(-0.19,0.44,0.9),(-0.37,0.0,0.9),(-0.19,-0.44,0.9),(0.0,-0.88,0.9),(0.19,-0.44,0.9),(0.37,0.0,0.9),(0.19,0.44,0.9),(0.0,0.75,1.75),(-0.12,0.35,1.75),(-0.25,0.0,1.75),(-0.12,-0.35,1.75),(0.0,-0.75,1.75),(0.12,-0.35,1.75),(0.25,0.0,1.75),(0.12,0.35,1.75),(0.0,0.5,2.5),(-0.05,0.25,2.5),(-0.1,0.0,2.5),(-0.05,-0.25,2.5),(0.0,-0.5,2.5),(0.05,-0.25,2.5),(0.1,0.0,2.5),(0.05,0.25,2.5),(0.0,1.25,3.25),(0.0,0.0,3.0),(0.0,-1.25,3.25)])))])]),
        Group(DEF='Medium',
          #  Medium resolution fish. 
          children=[
          Transform(DEF='Fish2',scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(USE='FishAppear'),
              geometry=IndexedFaceSet(ccw=False,coordIndex=[0,2,3,-1,0,3,4,-1,0,4,1,-1,0,1,2,-1,1,4,5,-1,2,1,5,-1,3,5,4,-1,3,2,5,-1,5,7,6,-1,5,6,7,-1],
                coord=Coordinate(point=[(0.0,0.0,-2.0),(0.0,-1.25,0.0),(0.5,0.0,0.0),(0.0,1.25,0.0),(-0.5,0.0,0.0),(0.0,0.0,2.25),(0.0,1.25,3.0),(0.0,-1.25,3.0)])))])]),
        Group(DEF='Far',
          #  Low resolution fish. 
          children=[
          Transform(DEF='Fish3',scale=(0.1,0.1,0.1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.6,0.9,0.9))),
              geometry=IndexedFaceSet(ccw=False,coordIndex=[0,2,3,-1,0,3,4,-1,0,4,1,-1,0,1,2,-1,1,4,5,-1,2,1,5,-1,3,5,4,-1,3,2,5,-1,5,7,6,-1,5,6,7,-1],creaseAngle=1.57,
                coord=Coordinate(point=[(0.0,0.0,-2.0),(0.0,-1.25,0.0),(0.3,0.0,0.0),(0.0,1.25,0.0),(-0.3,0.0,0.0),(0.0,0.0,2.25),(0.0,1.25,3.0),(0.0,-1.25,3.0)])))])]),
        WorldInfo(info=["null"],
          #  Lowest resolution node is nothing. 
          )])]),
    TimeSensor(DEF='Clock',cycleInterval=2.0,loop=True),
    CoordinateInterpolator(DEF='FishWiggle',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,0.0,-1.5),(0.0,0.5,-1.0),(-0.12,0.25,-1.0),(-0.25,0.0,-1.0),(-0.12,-0.25,-1.0),(0.0,-0.5,-1.0),(0.12,-0.25,-1.0),(0.25,0.0,-1.0),(0.12,0.25,-1.0),(0.0,1.0,0.0),(-0.25,0.5,0.0),(-0.5,0.0,0.0),(-0.25,-0.5,0.0),(0.0,-1.0,0.0),(0.25,-0.5,0.0),(0.5,0.0,0.0),(0.25,0.5,0.0),(0.0,0.88,0.9),(-0.19,0.44,0.9),(-0.37,0.0,0.9),(-0.19,-0.44,0.9),(0.0,-0.88,0.9),(0.19,-0.44,0.9),(0.37,0.0,0.9),(0.19,0.44,0.9),(0.0,0.75,1.75),(-0.12,0.35,1.75),(-0.25,0.0,1.75),(-0.12,-0.35,1.75),(0.0,-0.75,1.75),(0.12,-0.35,1.75),(0.25,0.0,1.75),(0.12,0.35,1.75),(0.0,0.5,2.5),(-0.05,0.25,2.5),(-0.1,0.0,2.5),(-0.05,-0.25,2.5),(0.0,-0.5,2.5),(0.05,-0.25,2.5),(0.1,0.0,2.5),(0.05,0.25,2.5),(0.0,1.25,3.25),(0.0,0.0,3.0),(0.0,-1.25,3.25),(0.0,0.0,-1.5),(0.0,0.5,-1.0),(-0.12,0.25,-1.0),(-0.25,0.0,-1.0),(-0.12,-0.25,-1.0),(0.0,-0.5,-1.0),(0.12,-0.25,-1.0),(0.25,0.0,-1.0),(0.12,0.25,-1.0),(0.0,1.0,0.0),(-0.25,0.5,0.0),(-0.5,0.0,0.0),(-0.25,-0.5,0.0),(0.0,-1.0,0.0),(0.25,-0.5,0.0),(0.5,0.0,0.0),(0.25,0.5,0.0),(0.0,0.88,0.9),(-0.19,0.44,0.9),(-0.37,0.0,0.9),(-0.19,-0.44,0.9),(0.0,-0.88,0.9),(0.19,-0.44,0.9),(0.37,0.0,0.9),(0.19,0.44,0.9),(0.2,0.75,1.75),(0.08,0.35,1.75),(-0.05,0.0,1.75),(0.08,-0.35,1.75),(0.2,-0.75,1.75),(0.32,-0.35,1.75),(0.45,0.0,1.75),(0.32,0.35,1.75),(0.3,0.5,2.5),(0.25,0.25,2.5),(0.15,0.0,2.5),(0.25,-0.25,2.5),(0.3,-0.5,2.5),(0.35,-0.25,2.5),(0.4,0.0,2.5),(0.35,0.25,2.5),(0.5,1.25,3.25),(0.5,0.0,3.0),(0.5,-1.25,3.25),(0.0,0.0,-1.5),(0.0,0.5,-1.0),(-0.12,0.25,-1.0),(-0.25,0.0,-1.0),(-0.12,-0.25,-1.0),(0.0,-0.5,-1.0),(0.12,-0.25,-1.0),(0.25,0.0,-1.0),(0.12,0.25,-1.0),(0.0,1.0,0.0),(-0.25,0.5,0.0),(-0.5,0.0,0.0),(-0.25,-0.5,0.0),(0.0,-1.0,0.0),(0.25,-0.5,0.0),(0.5,0.0,0.0),(0.25,0.5,0.0),(0.0,0.88,0.9),(-0.19,0.44,0.9),(-0.37,0.0,0.9),(-0.19,-0.44,0.9),(0.0,-0.88,0.9),(0.19,-0.44,0.9),(0.37,0.0,0.9),(0.19,0.44,0.9),(0.0,0.75,1.75),(-0.12,0.35,1.75),(-0.25,0.0,1.75),(-0.12,-0.35,1.75),(0.0,-0.75,1.75),(0.12,-0.35,1.75),(0.25,0.0,1.75),(0.12,0.35,1.75),(0.0,0.5,2.5),(-0.05,0.25,2.5),(-0.1,0.0,2.5),(-0.05,-0.25,2.5),(0.0,-0.5,2.5),(0.05,-0.25,2.5),(0.1,0.0,2.5),(0.05,0.25,2.5),(0.0,1.25,3.25),(0.0,0.0,3.0),(0.0,-1.25,3.25),(0.0,0.0,-1.5),(0.0,0.5,-1.0),(-0.12,0.25,-1.0),(-0.25,0.0,-1.0),(-0.12,-0.25,-1.0),(0.0,-0.5,-1.0),(0.12,-0.25,-1.0),(0.25,0.0,-1.0),(0.12,0.25,-1.0),(0.0,1.0,0.0),(-0.25,0.5,0.0),(-0.5,0.0,0.0),(-0.25,-0.5,0.0),(0.0,-1.0,0.0),(0.25,-0.5,0.0),(0.5,0.0,0.0),(0.25,0.5,0.0),(0.0,0.88,0.9),(-0.19,0.44,0.9),(-0.37,0.0,0.9),(-0.19,-0.44,0.9),(0.0,-0.88,0.9),(0.19,-0.44,0.9),(0.37,0.0,0.9),(0.19,0.44,0.9),(-0.2,0.75,1.75),(-0.32,0.35,1.75),(-0.45,0.0,1.75),(-0.32,-0.35,1.75),(-0.2,-0.75,1.75),(-0.08,-0.35,1.75),(0.05,0.0,1.75),(-0.08,0.35,1.75),(-0.3,0.5,2.5),(-0.35,0.25,2.5),(-0.4,0.0,2.5),(-0.35,-0.25,2.5),(-0.3,-0.5,2.5),(-0.25,-0.25,2.5),(-0.2,0.0,2.5),(-0.25,0.25,2.5),(-0.5,1.25,3.25),(-0.5,0.0,3.0),(-0.5,-1.25,3.25),(0.0,0.0,-1.5),(0.0,0.5,-1.0),(-0.12,0.25,-1.0),(-0.25,0.0,-1.0),(-0.12,-0.25,-1.0),(0.0,-0.5,-1.0),(0.12,-0.25,-1.0),(0.25,0.0,-1.0),(0.12,0.25,-1.0),(0.0,1.0,0.0),(-0.25,0.5,0.0),(-0.5,0.0,0.0),(-0.25,-0.5,0.0),(0.0,-1.0,0.0),(0.25,-0.5,0.0),(0.5,0.0,0.0),(0.25,0.5,0.0),(0.0,0.88,0.9),(-0.19,0.44,0.9),(-0.37,0.0,0.9),(-0.19,-0.44,0.9),(0.0,-0.88,0.9),(0.19,-0.44,0.9),(0.37,0.0,0.9),(0.19,0.44,0.9),(0.0,0.75,1.75),(-0.12,0.35,1.75),(-0.25,0.0,1.75),(-0.12,-0.35,1.75),(0.0,-0.75,1.75),(0.12,-0.35,1.75),(0.25,0.0,1.75),(0.12,0.35,1.75),(0.0,0.5,2.5),(-0.05,0.25,2.5),(-0.1,0.0,2.5),(-0.05,-0.25,2.5),(0.0,-0.5,2.5),(0.05,-0.25,2.5),(0.1,0.0,2.5),(0.05,0.25,2.5),(0.0,1.25,3.25),(0.0,0.0,3.0),(0.0,-1.25,3.25)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='FishWiggle'),
    ROUTE(fromField='value_changed',fromNode='FishWiggle',toField='set_point',toNode='Fish')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Fish.py")
