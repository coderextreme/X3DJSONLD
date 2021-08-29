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
    meta(content='Switch.x3d',name='title'),
    meta(content='Example for Switch node',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='13 November 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright (c) 2005, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/Switch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Switch.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Switch among multiple children',orientation=(-0.668,-0.724,-0.174,0.7),position=(-1.93,1.78,3.28)),
    #  Authors can manually change whichChoice values (from 0 through 3) to show each child shape 
    Switch(DEF='Switcher',whichChoice=0,
      children=[
      Shape(DEF='BoxShape',
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Box(),),
      Shape(DEF='ConeShape',
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0))),
        geometry=Cone(),),
      Shape(DEF='CylinderShape',
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0))),
        geometry=Cylinder(),),
      Shape(DEF='SphereShape',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Sphere(),)]),
    Group(DEF='AnimationGroup',
      #  Total cycleInterval="8" gives 2 seconds to each of the 4 colors 
      #  Authors can set enabled='true' loop='true' for a continuous animation 
      children=[
      TimeSensor(DEF='Timer',cycleInterval=8,enabled=False,loop=True),
      IntegerSequencer(DEF='Counter',key=[0,.25,.5,.75,1],keyValue=[0,1,2,3,0]),
      ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Counter'),
      ROUTE(fromField='value_changed',fromNode='Counter',toField='whichChoice',toNode='Switcher')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Switch.py")
