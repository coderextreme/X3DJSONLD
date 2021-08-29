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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='SubmarineRadar.x3d',name='title'),
    meta(content='Submarine radar based on a radar originally designed by George Stavritis for a Greek frigate',name='description'),
    meta(content='Anthony Varelas',name='creator'),
    meta(content='7 October 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Submarines/Various/SubmarineRadar.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Submarine radar',orientation=(1,0,0,0),position=(0,0,6)),
    Group(
      children=[
      Transform(DEF='Column',rotation=(0,1,0,1),scale=(2,0.75,0.2),
        children=[
        Shape(
          geometry=Sphere(radius=0.8),
          appearance=Appearance(
            material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))))]),
      TimeSensor(DEF='Clock',cycleInterval=2,loop=True),
      OrientationInterpolator(DEF='ColumnPath',key=[0.0,0.50,1.0],keyValue=[(-1.0,0.0,1.0,3.14),(0.0,0.0,1.0,3.14),(1.0,0.0,1.0,3.14)]),
      Transform(center=(0,10,3)),
      Shape(
        geometry=Cone(bottomRadius=0.2),
        appearance=Appearance(
          material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2)))),
      Transform(translation=(0,-0.75,0),
        children=[
        Shape(
          geometry=Cylinder(height=0.3,radius=0.4),
          appearance=Appearance(
            material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))))])]),
    Transform(center=(-5,2,2),rotation=(1,0,0,0.752),translation=(1,1,1)),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ColumnPath'),
    ROUTE(fromField='value_changed',fromNode='ColumnPath',toField='set_rotation',toNode='Column')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SubmarineRadar.py")
