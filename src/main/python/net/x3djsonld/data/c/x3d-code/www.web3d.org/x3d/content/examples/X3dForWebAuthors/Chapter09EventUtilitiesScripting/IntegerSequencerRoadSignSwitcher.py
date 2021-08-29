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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='IntegerSequencerRoadSignSwitcher.x3d',name='title'),
    meta(content='Switch among different road signs using IntegerSequencer',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 January 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/IntegerSequencerRoadSignSwitcher.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IntegerSequencerRoadSignSwitcher.x3d'),
    Background(groundColor=[(0.2,0.2,0.2)],skyColor=[(0.2,0.2,0.2)]),
    Viewpoint(description='Road sign switcher, 6m away',position=(0,0,6)),
    Shape(DEF='Frame',
      #  Box framee scaled to be wider, taller and thinner than Box holding image 
      geometry=Box(size=(3.5,2.7,0.05)),
      appearance=Appearance(
        material=Material(ambientIntensity=0,diffuseColor=(0,0,0),emissiveColor=(1,0.442751,0),shininess=0.05102,specularColor=(0.475676,0.475676,0.475676),
          #  Universal Media Library: Neon 13 
          ))),
    #  Modify the whichChoice value in this Switch to 0, 1, 2 or 3 to see the various versions of the model. Select whichChoice= -1 to show nothing. 
    Switch(DEF='Switch',whichChoice=0,
      #  whichChoice values are 0, 1, 2, 3 for these four children 
      children=[
      Shape(
        #  Box size scaled to match aspect ratio of original images 
        geometry=Box(DEF='SignHolder',size=(3.072,2.304,0.1)),
        appearance=Appearance(
          #  each image size reduced from 1-1.5M down to 150-200KB using GIMP for faster downloading, quality still looks good 
          texture=ImageTexture(url=["RoadSignRoadWorkAhead.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/RoadSignRoadWorkAhead.jpg"]))),
      Shape(
        geometry=Box(USE='SignHolder'),
        appearance=Appearance(
          texture=ImageTexture(url=["RoadSignExpectDelays.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/RoadSignExpectDelays.jpg"]))),
      Shape(
        geometry=Box(USE='SignHolder'),
        appearance=Appearance(
          texture=ImageTexture(url=["RoadSignMondayThruFriday.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/RoadSignMondayThruFriday.jpg"]))),
      Shape(
        geometry=Box(USE='SignHolder'),
        appearance=Appearance(
          texture=ImageTexture(url=["RoadSign7amTo5pm.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/RoadSign7amTo5pm.jpg"])))]),
    IntegerSequencer(DEF='Sequencer',key=[0,0.25,0.5,0.75,1],keyValue=[0,1,2,3,0]),
    TimeSensor(DEF='Time',cycleInterval=8,loop=True),
    ROUTE(fromField='value_changed',fromNode='Sequencer',toField='whichChoice',toNode='Switch'),
    ROUTE(fromField='fraction_changed',fromNode='Time',toField='set_fraction',toNode='Sequencer')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IntegerSequencerRoadSignSwitcher.py")
