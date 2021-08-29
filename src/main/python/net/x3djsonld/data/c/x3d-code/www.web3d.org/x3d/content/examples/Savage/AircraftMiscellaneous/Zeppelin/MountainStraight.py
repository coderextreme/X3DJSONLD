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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='MountainStraight.x3d',name='title'),
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='Group of mountains that form a straight mountain range.',name='description'),
    meta(content='18 September 2002',name='created'),
    meta(content='16 February 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainStraight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Originally there was a downloaded wav file which cannot be commercially used.',name='info'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='MountainView',orientation=(1,0,0,-1.57),position=(0,40,-18)),
    Group(
      #  All these inlined file should be at the same directory. 
      children=[
      Transform(
        children=[
        Inline(DEF='MountainLake',url=["MountainLake.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainLake.x3d","MountainLake.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainLake.wrl"])]),
      Transform(translation=(3,0,0),
        children=[
        Inline(DEF='MountainX',url=["MountainX.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainX.x3d","MountainX.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainX.wrl"])]),
      Transform(translation=(0,0,-3),
        children=[
        Inline(DEF='MountainY',url=["MountainY.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainY.x3d","MountainY.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainY.wrl"])]),
      Transform(translation=(3,0,-3),
        children=[
        Inline(DEF='MountainZ',url=["MountainZ.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainZ.x3d","MountainZ.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainZ.wrl"])]),
      Transform(translation=(0,0,-10),
        children=[
        Inline(USE='MountainLake')]),
      Transform(translation=(0,0,-15),
        children=[
        Inline(USE='MountainX')]),
      Transform(translation=(0,0,-20),
        children=[
        Inline(USE='MountainY')]),
      Transform(translation=(0,0,-25),
        children=[
        Inline(USE='MountainZ')]),
      Transform(translation=(0,0,-30),
        children=[
        Inline(USE='MountainX')]),
      Transform(translation=(0,0,-35),
        children=[
        Inline(USE='MountainY')]),
      Transform(translation=(0,0,-40),
        children=[
        Inline(USE='MountainLake')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MountainStraight.py")
