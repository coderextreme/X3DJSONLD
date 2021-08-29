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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='VisibleShapesTest.x3d',name='title'),
    meta(content='Test scene for visible field on X3DBoundedObject nodes, which is new to X3Dv4.',name='description'),
    meta(content='18 January 2020',name='created'),
    meta(content='18 January 2020',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='under development and testing for X3Dv4',name='warning'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/VisibleShapesTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='VisibleShapesTest.x3d'),
    Viewpoint(DEF='EntryView',description='Visible Shapes Test',position=(0,0,12)),
    Transform(DEF='BoxGroupingNode',translation=(-4,2,0),
      children=[
      Shape(DEF='BoxShape',
        geometry=Box(),
        appearance=Appearance(
          material=Material(DEF='Red',diffuseColor=(1,0,0)))),
      Transform(translation=(0,-4,0),
        children=[
        Shape(DEF='BoxVisibleText',
          geometry=Text(string=["Box visible"],
            fontStyle=FontStyle(DEF='TextStyle',family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
          appearance=Appearance(
            material=Material(USE='Red')))]),
      BooleanSequencer(DEF='Pulsar1',key=[0,0.25,0.5,0.75,1],keyValue=[True,False,True,True,True]),
      ROUTE(fromField='value_changed',fromNode='Pulsar1',toField='visible',toNode='BoxGroupingNode')]),
    Transform(DEF='SphereGroupingNode',translation=(-6,2,0),
      children=[
      Shape(DEF='SphereShape',
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(DEF='Green',diffuseColor=(0,1,0)))),
      Transform(translation=(0,-4,0),
        children=[
        Shape(DEF='SphereVisibleText',
          geometry=Text(string=["Sphere visible"],
            fontStyle=FontStyle(USE='TextStyle')),
          appearance=Appearance(
            material=Material(USE='Green')))]),
      BooleanSequencer(DEF='Pulsar2',key=[0,0.25,0.5,0.75,1],keyValue=[True,True,False,True,True]),
      ROUTE(fromField='value_changed',fromNode='Pulsar2',toField='visible',toNode='SphereShape')]),
    Transform(DEF='CylinderGroupingNode',translation=(-4,2,0),
      children=[
      Shape(DEF='CylinderShape',
        geometry=Cylinder(),
        appearance=Appearance(
          material=Material(DEF='Blue',diffuseColor=(0,0,1)))),
      Transform(translation=(0,-4,0),
        children=[
        Shape(DEF='CylinderVisibleText',
          geometry=Text(string=["Cylinder visible"],
            fontStyle=FontStyle(USE='TextStyle')),
          appearance=Appearance(
            material=Material(USE='Blue')))]),
      BooleanSequencer(DEF='Pulsar3',key=[0,0.25,0.5,0.75,1],keyValue=[True,True,True,False,True]),
      ROUTE(fromField='value_changed',fromNode='Pulsar3',toField='visible',toNode='CylinderVisibleText')]),
    TimeSensor(DEF='SequencerClock',cycleInterval=8,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='SequencerClock',toField='set_fraction',toNode='Pulsar1'),
    ROUTE(fromField='fraction_changed',fromNode='SequencerClock',toField='set_fraction',toNode='Pulsar2'),
    ROUTE(fromField='fraction_changed',fromNode='SequencerClock',toField='set_fraction',toNode='Pulsar3')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for VisibleShapesTest.py")
