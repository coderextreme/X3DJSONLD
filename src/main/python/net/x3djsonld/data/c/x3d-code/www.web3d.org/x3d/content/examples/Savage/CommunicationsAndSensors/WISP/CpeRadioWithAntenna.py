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
    meta(content='CpeRadioWithAntenna.x3d',name='title'),
    meta(content='A smartbridges radio inline with sector panel antenna inline with cable extrusion, produced as a MV4204 class project.',name='description'),
    meta(content='Mark P. Sullivan',name='creator'),
    meta(content='21 July 2003',name='created'),
    meta(content='3 October 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/CpeRadioWithAntenna.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/CpeRadioWithAntenna.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(centerOfRotation=(0,-0.4,0),description='CpeRadioWithAntenna',position=(0,-0.4,2)),
    Transform(translation=(-.067,-.4,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.3,.3,.3))),
        geometry=Box(size=(.3,.3,.05)))]),
    Transform(DEF='Cable',rotation=(1,0,0,1.57),translation=(-.065,-.69,.01),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.02,.02,.02))),
        geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.00892,0.00961),(0.00714,0.00961),(0.00714,0.01153),(0.00535,0.01153),(0.00357,0.01346),(0.00357,0.01346),(0.00178,0.01346),(0.0,0.01346),(-0.00178,0.01346),(-0.00178,0.01346),(-0.00357,0.01346),(-0.00535,0.01346),(-0.00535,0.01346),(-0.00714,0.01153),(-0.00892,0.01153),(-0.00892,0.00961),(-0.01071,0.00961),(-0.01071,0.00769),(-0.01071,0.00576),(-0.01071,0.00576),(-0.01071,0.00384),(-0.01071,0.00192),(-0.01071,-0.0),(-0.01071,-0.0),(-0.01071,-0.00192),(-0.01071,-0.00384),(-0.00892,-0.00384),(-0.00892,-0.00576),(-0.00714,-0.00576),(-0.00535,-0.00769),(-0.00535,-0.00769),(-0.00357,-0.00769),(-0.00178,-0.00769),(0.0,-0.00769),(0.0,-0.00769),(0.00178,-0.00769),(0.00357,-0.00769),(0.00357,-0.00769),(0.00535,-0.00576),(0.00714,-0.00576),(0.00714,-0.00384),(0.00892,-0.00384),(0.00892,-0.00192),(0.00892,-0.0),(0.00892,-0.0),(0.00892,0.00192),(0.00892,0.00384),(0.00892,0.00576),(0.00892,0.00576),(0.00892,0.00769),(0.00892,0.00961)],spine=[(0.0,0,-0.19999),(0.0,0,-0.14499),(0.0,0,-0.13749),(0.00714,0,-0.12499),(0.04285,0,-0.10499),(0.08571,0,-0.07749),(0.11428,0,-0.04749),(0.13928,0,-0.00499),(0.14642,0,0.03249),(0.14642,0,0.06749),(0.13571,0,0.08749),(0.10714,0,0.11499),(0.08571,0,0.12249),(0.06428,0,0.12749),(0.047,0,0.12),(0.042,0,0.12),(0.03071,0,0.10499),(0.02714,0,0.09)]))]),
    Transform(DEF='UBolts',translation=(-.05,-.4,0),
      children=[
      Shape(DEF='UBolt',
        appearance=Appearance(
          material=Material(diffuseColor=(.6,.6,.6))),
        geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.00892,0.00961),(0.00714,0.00961),(0.00714,0.01153),(0.00535,0.01153),(0.00357,0.01346),(0.00357,0.01346),(0.00178,0.01346),(0.0,0.01346),(-0.00178,0.01346),(-0.00178,0.01346),(-0.00357,0.01346),(-0.00535,0.01346),(-0.00535,0.01346),(-0.00714,0.01153),(-0.00892,0.01153),(-0.00892,0.00961),(-0.01071,0.00961),(-0.01071,0.00769),(-0.01071,0.00576),(-0.01071,0.00576),(-0.01071,0.00384),(-0.01071,0.00192),(-0.01071,-0.0),(-0.01071,-0.0),(-0.01071,-0.00192),(-0.01071,-0.00384),(-0.00892,-0.00384),(-0.00892,-0.00576),(-0.00714,-0.00576),(-0.00535,-0.00769),(-0.00535,-0.00769),(-0.00357,-0.00769),(-0.00178,-0.00769),(0.0,-0.00769),(0.0,-0.00769),(0.00178,-0.00769),(0.00357,-0.00769),(0.00357,-0.00769),(0.00535,-0.00576),(0.00714,-0.00576),(0.00714,-0.00384),(0.00892,-0.00384),(0.00892,-0.00192),(0.00892,-0.0),(0.00892,-0.0),(0.00892,0.00192),(0.00892,0.00384),(0.00892,0.00576),(0.00892,0.00576),(0.00892,0.00769),(0.00892,0.00961)],spine=[(-0.07714,0,-0.00461),(-0.07714,0,-0.11076),(-0.07714,0,-0.12692),(-0.075,0,-0.14076),(-0.06857,0,-0.15461),(-0.06428,0,-0.15692),(-0.05571,0,-0.17076),(-0.04714,0,-0.17769),(-0.03428,0,-0.1823),(-0.01071,0,-0.18461),(0.00428,0,-0.18),(0.01928,0,-0.17076),(0.03,0,-0.15461),(0.04071,0,-0.14076),(0.04285,0,-0.1223),(0.045,0,-0.10384),(0.04285,0,-0.00461)]))]),
    Transform(translation=(-.05,-.65,0),
      children=[
      Shape(USE='UBolt')]),
    Transform(DEF='FirstMast',translation=(-.067,-1,-.1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.8,.8,.8))),
        geometry=Cylinder(radius=.05))]),
    Transform(DEF='CAT5',translation=(-.08,-1.3,.01),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.02,.02,.02))),
        geometry=Cylinder(height=1.2,radius=.007))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CpeRadioWithAntenna.py")
